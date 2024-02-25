#include <iostream>
#include <string>
#include <map>
#include <exception>
using namespace std;

struct Data
{
    string name = "";
    map<string, int> space;
    void add_remove(Data& remove_data_from)
    {
        string name;
        int count;
        cout << "Enter name: ";
        cin >> name;

        if (remove_data_from.space.find(name) == remove_data_from.space.end())
            throw invalid_argument("Article not found in data");

        cout << "Enter count: ";
        cin >> count;

        if(count < 0)
            throw invalid_argument("count < 0");

        while (true)
        {
            if(remove_data_from.space.find(name)->second - count < 0)
                count--;
            else
            {
                remove_data_from.space[name] -= count;
                space[name] += count;
                break;
            }
        }
    }
    void printData()
    {
        cout << "\n";
        cout << name << ":\n";
        for (map<string, int>::iterator i = space.begin(); i != space.end(); i++)
        {
            cout << i->first << " : " << i->second << '\n';
        }
        cout << "\n";
    }
};

int main()
{
    Data shop;
    Data backet;

    shop.name = "shop";
    shop.space.insert(make_pair<string,int>("cola", 10));
    shop.space.insert(make_pair<string,int>("soda", 5));
    shop.space.insert(make_pair<string,int>("vodka", 1));

    backet.name = "backet";
    backet.space.insert(make_pair<string, int>("cola", 0));
    backet.space.insert(make_pair<string, int>("soda", 0));
    backet.space.insert(make_pair<string, int>("vodka", 0));
    
    string command;
    while (command != "exit")
    {
        shop.printData();
        backet.printData();
        cout << "Enter comman (exit-add-remove): ";
        cin >> command;
        try
        {
            if (command == "add")
            {
                backet.add_remove(shop);
            }
            else if (command == "remove")
            {
                shop.add_remove(backet);
            }
        }
        catch(invalid_argument e)
        {
            cout << "Error : " << e.what() << "\n";
        }
        catch (exception e)
        {
            cout << "Error : " << e.what() << "\n";
        }
    }
}