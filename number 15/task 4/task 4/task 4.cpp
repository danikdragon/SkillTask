#include <iostream>
using namespace std;

enum note
{
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};

int main()
{
    int notes[12];
    for (int i = 0; i < 12; i++)
    {
        cout << "Enter note (1-7): ";
        cin >> notes[i];
        notes[i] = 1 << (notes[i] - 1);
    }

    for (int i = 0; i < 12; i++)
    {
        switch (notes[i])
        {
            case DO:
                cout << "DO\n";
                break;
            case RE:
                cout << "RE\n";
                break;
            case MI:
                cout << "MI\n";
                break;
            case FA:
                cout << "FA\n";
                break;
            case SOL:
                cout << "SOL\n";
                break;
            case LA:
                cout << "LA\n";
                break;
            case SI:
                cout << "SI\n";
                break;
        default:
            break;
        }
    }
}