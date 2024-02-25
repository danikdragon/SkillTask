#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    float speedDelta = 0.0;
    float speed = 0.0;
    char speed_str[6];

    while (true) {
        cout << "Speed delta: ";
        cin >> speedDelta;

        speed += speedDelta;
        if (speed > 150)
            speed = 150;
        if (speed < 0) {
            cout << "Car is stop \n";
            speed = 0;
        }
        sprintf_s(speed_str, "%.1f", speed);
        cout << "Speed: " << speed_str << "\n";
    }
}