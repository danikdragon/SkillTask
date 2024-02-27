#include <iostream>
#include <memory>
using namespace std;

class Toy {
public:
    Toy(const string& name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    ~Toy() {
        cout << "Toy " << name << " was dropped " << std::endl;
    }
private:
    string name = "";
};

class Dog
{
public:
    Dog(string name) : name(name) {}

    void takeToy(shared_ptr<Toy>& toy)
    {
        if(currentToy == toy)
            cout << "I already have this toy.\n";
        else if (toy.use_count() != 1)
            cout << "Another dog is playing with this toy.\n";
        else
        {
            currentToy.reset();
            currentToy = toy;
            cout << name << " take toy.\n";
        }
    }
    void dropToy()
    {
        if (currentToy != nullptr)
            currentToy.reset();
        else
            cout << "Nothing to drop.\n";
    }
    void getNameAndToy()
    {
        cout << name << " ";
        if (currentToy != nullptr)
            cout << currentToy.get()->getName() << "\n";
        else
            cout << "Nothing.\n";
    }
    ~Dog() {
        cout << "Dog " << name << " was dead " << std::endl;
        currentToy.reset();
    }
private:
    string name;
    shared_ptr<Toy> currentToy;
};

int main()
{
    shared_ptr<Toy> toys[2];
    toys[0] = make_shared<Toy>("Ball");
    toys[1] = make_shared<Toy>("Bone");
    unique_ptr<Dog> dogs[2];
    dogs[0] = make_unique<Dog>("bobick");
    dogs[1] = make_unique<Dog>("tuzik");

    dogs[0]->takeToy(toys[0]);
    dogs[0].get()->getNameAndToy();
    cout << "\n";

    cout << "Step 1\n";
    cout << "Ball count " << toys[0].use_count() << "\n";
    cout << "Bone count " << toys[1].use_count() << "\n";

    dogs[0]->takeToy(toys[0]);
    dogs[0].get()->getNameAndToy();
    cout << "\n";

    cout << "Step 2\n";
    cout << "Ball count " << toys[0].use_count() << "\n";
    cout << "Bone count " << toys[1].use_count() << "\n";

    dogs[0]->takeToy(toys[1]);
    dogs[0].get()->getNameAndToy();
    cout << "\n";

    cout << "Step 3\n";
    cout << "Ball count " << toys[0].use_count() << "\n";
    cout << "Bone count " << toys[1].use_count() << "\n";

    dogs[1]->takeToy(toys[1]);
    dogs[1].get()->getNameAndToy();
    cout << "\n";
    
    cout << "Step 4\n";
    cout << "Ball count " << toys[0].use_count() << "\n";
    cout << "Bone count " << toys[1].use_count() << "\n";

    dogs[0]->dropToy();
    dogs[0].get()->getNameAndToy();
    cout << "\n";
    
    cout << "Step 5\n";
    cout << "Ball count " << toys[0].use_count() << "\n";
    cout << "Bone count " << toys[1].use_count() << "\n";

    dogs[1]->takeToy(toys[1]);
    dogs[1].get()->getNameAndToy();
    cout << "\n";

    cout << "Step 6\n";
    cout << "Ball count " << toys[0].use_count() << "\n";
    cout << "Bone count " << toys[1].use_count() << "\n";
}