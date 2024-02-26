#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream river("..\\river.txt");
    ofstream basket("..\\basket.txt", ios::app);

    string needed, buffer;
    vector<string> current_session;

    cout << "Enter name fish\n";
    cin >> needed;

    bool waitCheck = true;
    while (!river.eof() && waitCheck)
    {
        getline(river, buffer);
        if(buffer == needed)
        {
            current_session.push_back(needed);
            basket << needed << "\n";
            cout << "Got caught!\n";
            cout << "Are you need more fish? (1-0)\n";
            cin >> waitCheck;
            if (!waitCheck) 
            {
                break;
            }
            else 
            {
                river.seekg(0);
                cout << "Enter name fish\n";
                cin >> needed;
            }
        }
        else
        {
            cout << "Wait again? (1-0)\n";
            cin >> waitCheck;
        }
    }

    cout << "\nYour basket\n";
    for (int i = 0; i < current_session.size(); i++)
    {
        cout << current_session[i] << "\n";
    }
    river.close();
    basket.close();
}