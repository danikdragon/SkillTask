#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Number
{
public:
    bool setSngNumber(string buffer)
    {
        if (buffer.size() == 11 && buffer.substr(0, 2) == "+7")
        {
            number = buffer;
            return true;
        }
        else
            return false;
    }
    void setName(string person)
    {
        name = person;
    }
    string getName()
    {
        return name;
    }
    string getNumber()
    {
        return number;
    }
private:
    string name;
    string number;
};

class Phone
{
public:
    bool find(string number, int* iter = nullptr)
    {
        for (int i = 0; i < book.size(); i++)
        {
            if (book[i].getName() == number || book[i].getNumber() == number)
            {
                if (iter != nullptr)
                    *iter = i;
                return true;
            }
        }
        return false;
    }
    void call()
    {
        string number;
        cout << "Enter number or name: ";
        cin >> number;

        int i = 0;
        if(find(number, &i))
        {
            cout << "Call :" << book[i].getName() << ": " << book[i].getNumber() << '\n';
        }
        else
            cout << "Error\n";
    }
    void sms()
    {
        string number;
        cout << "Enter number or name: ";
        cin >> number;

        if (find(number))
        {
            string sms;
            cout << "Enter sms: ";
            cin >> sms;
            cout << "Send : " << number << ": " << sms << '\n';
        }
        else
            cout << "Error\n";
    }
    void addPerson()
    {
        Number buffer;
        string number_person, name_person;

        cout << "Enter number: ";
        cin >> number_person;

        if (buffer.setSngNumber(number_person))
        {
            cout << "Enter name: ";
            cin >> name_person;
            buffer.setName(name_person);
            book.push_back(buffer);
        }
        else
            cout << "Error\n";
    }
private:
    vector<Number> book;
};

int main()
{
    string command;
    Phone my_phone;
    while (command != "exit")
    {
        cout << "Enter command; add, call, sms, exit : ";
        cin >> command;
        if (command == "add")
            my_phone.addPerson();

        if (command == "sms")
            my_phone.sms();

        if (command == "call")
            my_phone.call();
    }
}