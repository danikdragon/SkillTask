#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
#include <cstdlib>

using namespace std;

class Track
{
public:
    void setSong(tm b_dateCreate, string b_name, int b_time)
    {
        dateCreate = b_dateCreate;
        name = b_name;
        time = b_time;
    }
    void getSong()
    {
        cout << put_time(&dateCreate, "%Y/%m/%d") << " " << name << " " << time << "\n";
    }
    string getName()
    {
        return name;
    }
private:
    tm dateCreate;
    string name = "Unknown";
    int time = 0;
};
class MpPlayer
{
public:
    vector<Track> tracks;

    void play(int i)
    {
        if (!c_play)
        {
            c_play = true;
            c_pause = false;
            tracks[i].getSong();
        }
    }
    void pause()
    {
        if (!c_pause)
        {
            c_play = false;
            c_pause = true;
            cout << "Pause\n";
        }
    }
    void next()
    {
        c_play = false;
        c_pause = false;
        srand(time(0));
        play(rand() % tracks.size());
    }
    void stop()
    {
        if (c_play || c_pause)
        {
            c_play = false;
            c_pause = false;
            cout << "Stop\n";
        }
    }
private:
    bool c_play = false;
    bool c_pause = false;
};

int main()
{
    MpPlayer my_player;
    string command;
    while (command != "exit")
    {
        cout << "Enter command; add play pause stop next exit\n";
        cin >> command;
        if (command == "add")
        {
            Track T_buffer;
            tm tm_buffer;
            time_t null_t = time(nullptr);
            gmtime_s(&tm_buffer, &null_t);
            string s_buffer;
            int i_buffer;

            cout << "Enter name: ";
            cin >> s_buffer;
            cout << "Enter time: ";
            cin >> i_buffer;
            cout << "Enter date create (Y/m/d): ";
            cin >> get_time(&tm_buffer, "%Y/%m/%d");

            T_buffer.setSong(tm_buffer, s_buffer, i_buffer);
            my_player.tracks.push_back(T_buffer);
        }
        if (command == "play")
        {
            string s_buffer;
            cout << "Enter name: ";
            cin >> s_buffer;
            for (int i = 0; i < my_player.tracks.size(); i++)
            {
                if(my_player.tracks[i].getName() == s_buffer)
                {
                    my_player.play(i);
                    break;
                }
            }
        }
        if (command == "pause")
            my_player.pause();
        if (command == "stop")
            my_player.stop();
        if (command == "next")
            my_player.next();
    }
}