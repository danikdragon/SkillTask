#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>

using namespace std;

struct birthday
{
    string name;
    tm birthday;
};

int check_nearest_date(vector<birthday>& birthdays)
{
    int nearest = 0;
    time_t local_buffer = time(nullptr);
    tm local_time;
    gmtime_s(&local_time, &local_buffer);

    for (int i = 0; i < birthdays.size(); i++)
    {
        if (birthdays[nearest].birthday.tm_mday >= birthdays[i].birthday.tm_mday && birthdays[i].birthday.tm_mday >= local_time.tm_mday)
        {
            if (birthdays[nearest].birthday.tm_mon >= birthdays[i].birthday.tm_mon && birthdays[i].birthday.tm_mon >= local_time.tm_mon)
            {
                nearest = i;
            }
        }
    }
    return nearest;
}

int main()
{
    vector<birthday> birthdays;
    while (true)
    {
        birthday buffer;
        cout << "Enter name: ";
        cin >> buffer.name;
        if (buffer.name != "exit")
        {
            cout << "Enter date (dd/mm/yy): ";
            cin >> get_time(&buffer.birthday, "%d/%m/%Y");
            birthdays.push_back(buffer);
        }
        else
            break;
    }
    if(!birthdays.empty())
    {
        int i = check_nearest_date(birthdays);
        cout << "Nearest birthday : " << birthdays[i].name << ", " << put_time(&birthdays[i].birthday, "%d/%m/%Y");
    }
}