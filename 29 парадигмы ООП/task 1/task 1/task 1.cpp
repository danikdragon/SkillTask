#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Talents
{
public:
    virtual void talent() = 0;
};
class Dance: public Talents
{
public:
    virtual void talent()
    {
        cout << "\tIt can \"Dance\"\n";
    }
};
class Swimming : public Talents
{
public:
    virtual void talent()
    {
        cout << "\tIt can \"Swimming\"\n";
    }
};
class Counting : public Talents
{
public:
    virtual void talent()
    {
        cout << "\tIt can \"Counting\"\n";
    }
};

class Animal
{
public:
    virtual void voice() 
    {
        cout << name << " say: " << "Nothing!\n";
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }

    void setTalents(bool dance = 0, bool swimming = 0, bool counting = 0)
    {
        if (dance == true)
            talents.push_back(new Dance);
        if (swimming == true)
            talents.push_back(new Swimming);
        if (counting == true)
            talents.push_back(new Counting);
    }
    void showTalents()
    {
        cout << "This is " << name << " and it has some talents: \n";
        for (int i = 0; i < talents.size(); i++)
        {
            talents[i]->talent();
        }
        if (talents.empty())
            cout << "\tNothing!\n";
    }
protected:
    vector<Talents*> talents;
    string name = "Unknow";
};


class Dog: public Animal
{
public:
    Dog(string name, bool dance = 0, bool swimming = 0, bool counting = 0)
    {
        this->name = name;
        setTalents(dance, swimming, counting);
    }
    ~Dog()
    {
        for (int i = 0; i < talents.size(); i++)
        {
            delete talents[i];
        }
    }
    virtual void voice()
    {
        cout << name << " say: " << "Bark!\n";
    }
};
class Cat : public Animal
{
public:
    Cat(string name, bool dance = 0, bool swimming = 0, bool counting = 0)
    {
        this->name = name;
        setTalents(dance, swimming, counting);
    }
    ~Cat()
    {
        for (int i = 0; i < talents.size(); i++)
        {
            delete talents[i];
        }
    }
    virtual void voice()
    {
        cout << name << " say: " << "Meow!\n";
    }
};
int main()
{
    Animal* arr[2];
    arr[0] = new Cat("Cate",1,1,1);
    arr[1] = new Dog("Bobby",1,1,1);

    arr[0]->voice();
    arr[1]->voice();
    cout << "\n";
    arr[0]->showTalents();
    arr[1]->showTalents();
    delete arr[0], arr[1];
}