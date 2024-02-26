#include <iostream>
using namespace std;

class Iterator_shared_ptr
{
public:
    void setPlusOne() { iter++; }
    void setMinusOne() { iter--; }
    int getIter() { return iter; }
    void operator=(const int other) { iter = other; }
private:
    int iter = 0;
};

class Toy
{
public:
    Toy(string name) : name(name){}
    string getName() { return name; }
    void setName(string name) { this->name = name; }
    ~Toy()
    {
        cout << "Toy " << name << " was droped\n";
    }
private:
    string name = "";
};

class shared_ptr_toy
{
public:
    shared_ptr_toy(string name)
    {
        toy = new Toy(name);
        it = new Iterator_shared_ptr();
        itPlus();
    }
    shared_ptr_toy(Toy toy) : toy(&toy) { itPlus();}

    Toy* get() 
    { 
        if (toy != nullptr)
            return toy;
        return nullptr;
    }
    int use_count()
    {
        if (it != nullptr)
            return it->getIter();
        return 0;
    }

    void itPlus() { it->setPlusOne(); }
    void itMinus()
    {
        if (this->use_count() != 0)
        {
            it->setMinusOne();
            if (this->use_count() == 0 && toy != nullptr)
            {
                delete toy;
                delete it;
            }
        }
        else
        {
            delete toy;
            delete it;
        }
    }

    void operator=(shared_ptr_toy other)
    {
        other.itPlus();
        it->setMinusOne();

        it = other.it;
        toy = other.toy;
    }
    string getToyName()
    {
        if (toy != nullptr)
            return toy->getName();
        else
            return "Nothing";
    }

    shared_ptr_toy(const shared_ptr_toy& other)
    {
        toy = other.toy;
        it = other.it;
        it->setPlusOne();
    }
    void reset()
    {
        if (toy != nullptr && it != nullptr)
        {
            itMinus();
            it = nullptr;
            toy = nullptr;
        }
    }
    ~shared_ptr_toy()
    {
        reset();
    }
private:
    Toy* toy = nullptr;
    Iterator_shared_ptr* it = nullptr;
};

shared_ptr_toy make_shared_toy(Toy toy)
{
    return shared_ptr_toy(toy);
}
shared_ptr_toy make_shared_toy(string toy)
{
    return shared_ptr_toy(toy);
}

int main()
{
    shared_ptr_toy toy_01 = make_shared_toy("ball");
    shared_ptr_toy toy_02(toy_01);
    shared_ptr_toy toy_03("duck");

    std::cout << "=================================================" << std::endl;
    std::cout << toy_01.getToyName() << " links:" << toy_01.use_count() << "  "
              << toy_02.getToyName() << " links:" << toy_02.use_count() << "  "
              << toy_03.getToyName() << " links:" << toy_03.use_count() << std::endl;
    std::cout << "=================================================" << std::endl;
    toy_02 = toy_03;
    std::cout << toy_01.getToyName() << " links:" << toy_01.use_count() << "  "
              << toy_02.getToyName() << " links:" << toy_02.use_count() << "  "
              << toy_03.getToyName() << " links:" << toy_03.use_count() << std::endl;
    std::cout << "=================================================" << std::endl;
    toy_01.reset();
    std::cout << toy_01.getToyName() << " links:" << toy_01.use_count() << "  "
              << toy_02.getToyName() << " links:" << toy_02.use_count() << "  "
              << toy_03.getToyName() << " links:" << toy_03.use_count() << std::endl;
    std::cout << "=================================================" << std::endl;
    return 0;
}