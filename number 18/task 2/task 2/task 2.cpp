#include <iostream>
using namespace std;

int rabbit(int steps, int maxJump = 3) 
{
    int allTry = 0;

    if (steps == 0)
        return 1;

    if (steps < 0)
        return 0;


    for (int i = 1; i <= maxJump; i++)
        allTry += rabbit(steps - i, maxJump);

    return allTry;
}

int main()
{
    cout << rabbit(3,2);
    
    //Пояснение: (1,2), (2,1), (1,1,1) = 3
}