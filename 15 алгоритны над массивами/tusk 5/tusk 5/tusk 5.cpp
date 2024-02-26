#include <iostream>
#include <sstream>
#include <string>
using namespace std;

enum switches
{
    LIGHTS_INSIDE = 1,
    LIGHTS_OUTSIDE = 2,
    HEATERS = 4,
    WATER_PIPE_HEATING = 8,
    CONDITIONER = 16
};

int main()
{
    int inside, outside;
    string movement, lights, buffer;

    int switches_state = 0;
    int lightTemp = 5000;

    for (int i = 0; i < 48; i++)
    {
        cout << "Temperature inside, temperature outside, movement, lights: \n";
        getline(cin, buffer);
        stringstream ss(buffer);
        ss >> inside >> outside >> movement >> lights;

        //отопление
        if (inside > 25 && (switches_state & HEATERS) != 0)
        {
            switches_state &= ~HEATERS;
            cout << "Heaters OFF!\n";
        }
        else if(inside < 22 && (switches_state & HEATERS) == 0)
        {
            switches_state |= HEATERS;
            cout << "Heaters ON!\n";
        }

        // кондёр
        if (inside >= 30 && (switches_state & CONDITIONER) == 0)
        {
            switches_state |= CONDITIONER;
            cout << "Conditioner ON!\n";
        }
        else if (inside == 25 && (switches_state & CONDITIONER) != 0)
        {
            switches_state &= ~CONDITIONER;
            cout << "Conditioner OFF!\n";
        }

        //отопление труб
        if (outside < 0 && (switches_state & WATER_PIPE_HEATING) == 0)
        {
            switches_state |= WATER_PIPE_HEATING;
            cout << "Water pipe heating ON!\n";
        }
        else if(outside > 5 && (switches_state & WATER_PIPE_HEATING) != 0)
        {
            switches_state &= ~WATER_PIPE_HEATING;
            cout << "Water pipe heating OFF!\n";
        }

        //датчик света на улице
        if (movement == "yes" && ( (i < 5) || (i > 16 && i < 29) || (i > 40) ) && (switches_state & LIGHTS_OUTSIDE) == 0)
        {
            switches_state |= LIGHTS_OUTSIDE;
            cout << "Lights outside ON!\n";
        }
        else if(movement == "no" && (switches_state & LIGHTS_OUTSIDE) != 0 )
        {
            switches_state &= ~LIGHTS_OUTSIDE;
            cout << "Lights outside OFF!\n";
        }

        //свет в доме
        if (lights == "on" && (switches_state & LIGHTS_INSIDE) == 0)
        {
            switches_state |= LIGHTS_INSIDE;
            //по 600к каждый час
            if (i > 16 && i < 20 || i > 40 && i < 44) 
            {
                for (int j = i; (j > 16) && (j < 20) || (j > 40) && (j < 44); j--)
                {
                    lightTemp -= 600;
                }
            }
            else
            {
                lightTemp = 5000;
            }
            cout << "Color temperature: " << lightTemp << "K\n";
            lightTemp = 5000;
        }
        else if( lights == "off" && (switches_state & LIGHTS_INSIDE) != 0 )
        {
            switches_state &= ~LIGHTS_INSIDE;
            cout << "Lights inside OFF!\n";
        }
    }
}