#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

struct User
{
    string name = "unknow";
    string last_name = "unknow";
    int salary = 0;
    string date = "1.1.1900";
};

void list(vector<User>& users)
{
    int tempMax = 0;
    for (int i = 0; i < users.size(); i++)
    {
        if (tempMax < users[i].salary)
            tempMax = i;
        cout << users[i].name + " " + users[i].last_name + " " + to_string(users[i].salary) + " " + users[i].date + "\n";
    }
    cout << "\nMax salary : ";
    cout << users[tempMax].name + " " + users[tempMax].last_name + " " + to_string(users[tempMax].salary) + " " + users[tempMax].date + "\n";
}

void startProgram(vector<User>& users, string path)
{
    ifstream file(path);
    User temp;
    string buffer;
    if (file.is_open())
    {
        while (!file.eof())
        {
            getline(file, temp.name);
            getline(file, temp.last_name);
            getline(file, buffer);
            temp.salary = stoi(buffer);
            getline(file, temp.date);

            users.push_back(temp);
        }
        users.pop_back();
        list(users);
        file.close();
    }
}

bool checkDate(string date)
{
    //создаю и получаю индексы начала и конца чисел в дате
    int l_data = static_cast<int>(date.length());
    int pos_start1{ 0 }, pos_start2{ -1 }, pos_start3{ -1 };
    int pos_finish1{ 0 }, pos_finish2{ -1 }, pos_finish3{ l_data };
    for (int i = 0; i < date.length(); i++)
    {
        if (date[i] == '.')
        {
            if (pos_start2 == -1)
            {
                pos_start2 = i + 1;
                pos_finish1 = i + 1;
            }
            else if (pos_start3 == -1)
            {
                pos_start3 = i + 1;
                pos_finish2 = i + 1;
            }
        }
    }
    //записываю данные в инт
    int dd = stoi(date.substr(pos_start1, pos_finish1 - pos_start1));
    int mm = stoi(date.substr(pos_start2, pos_finish2 - pos_start2));
    int yyyy = stoi(date.substr(pos_start3, pos_finish3 - pos_start3));

    //проверка даты
    if ((dd <= 31 && dd > 0) &&
        (mm <= 12 && mm > 0) &&
        (yyyy >= 1900 && yyyy <= 2024))
        return true;
    else
        return false;
}

void add(vector<User>& users)
{
    string buffer = "";
    User temp;
    cout << "Enter name: ";
    cin >> temp.name;

    cout << "Enter last name: ";
    cin >> temp.last_name;

    cout << "Enter salary: ";
    cin >> temp.salary;
    do
    {
        cout << "Enter date: ";
        cin >> buffer;
    } while (!checkDate(buffer));
    temp.date = buffer;

    users.push_back(temp);
}

void endTheProgram(vector<User>& user, string path)
{
    ofstream file(path, ios::trunc);
    for (int i = 0; i < user.size(); i++)
    {
        file << user[i].name + "\n";
        file << user[i].last_name + "\n";
        file << to_string(user[i].salary) + "\n";
        file << user[i].date + "\n";
    }
    file.close();
}

int main()
{
    string command;
    vector<User> users;
    startProgram(users, "..\\user.txt");
    while (command != "exit")
    {
        cout << "Enter command (list - add - exit): ";
        cin >> command;

        if (command == "list" && !users.empty())
            list(users);

        else if(command == "list")
            cout << "Error\n";

        if (command == "add")
            add(users);
    }
    list(users);
    endTheProgram(users,"..\\user.txt");
}