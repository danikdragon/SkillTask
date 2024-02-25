#include <iostream>
using namespace std;

#define SUNDAY(a) ((a == 7) ? ("SUNDAY") : ("incorrect"))
#define SATURDAY(a) ((a == 6) ? ("SATURDAY") : SUNDAY(a))
#define FRIDAY(a) ((a == 5) ? ("FRIDAY") : SATURDAY(a))
#define THURSDAY(a) ((a == 4) ? ("THURSDAY") : FRIDAY(a))
#define WEDNESDAY(a) ((a == 3) ? ("WEDNESDAY") : THURSDAY(a))
#define TUESDAY(a) ((a == 2) ? ("TUESDAY") : WEDNESDAY(a))
#define MONDAY(a) ((a == 1) ? ("MONDAY") : TUESDAY(a))

int main()
{
    int buffer = 0;
    cout << "Enter day (1-7) : ";
    cin >> buffer;
    cout << MONDAY(buffer);
}