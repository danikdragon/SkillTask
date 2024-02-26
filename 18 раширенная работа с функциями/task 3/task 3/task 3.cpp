#include <iostream>
using namespace std;

void evenDigits(int64_t number, int& ans)
{   
    if (number % 2 == 0) 
    {
        ans++;
    }
    number /= 10;
    if (number > 0)
        evenDigits(number, ans);
}

int main()
{
    int ans = 0;
    evenDigits(9223372036854775806, ans);
    cout << ans;
    //ans == 10
}