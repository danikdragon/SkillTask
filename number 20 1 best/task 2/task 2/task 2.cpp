#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int length, width;
    cout << "Enter length and width: ";
    cin >> length >> width;

    string buffer;
    vector<string> art;
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
        {
            buffer += to_string(rand() % 2);
        }
        art.push_back(buffer);
        buffer = "";
    }
    ofstream file("..\\my_art.txt");

    for (int i = 0; i < width; i++)
    {
        file << art[i] << "\n";
    }
    file.close();
    cout << endl;

    ifstream i_file("..\\my_art.txt");
    while (getline(i_file, buffer))
    {  
        cout << buffer << endl;
    }
    i_file.close();
}