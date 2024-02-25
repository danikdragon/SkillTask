#include <iostream>
using namespace std;

#define CALL_FOO(nameFoo, max) { nameFoo(max); }
#define CABIN(size) ( size > 20 ? "Overloaded" : (size < 20 ? "Underutilized" : "All ok") )

int create_carriage(int size, int i = 0, int sum = 0)
{
    if (i == size)
    {
        cout << "Sum = " << sum;
        return 0;
    }

    int buffer;
    cout << "Enter quantity :";
    cin >> buffer;
    sum += buffer;
    cout << CABIN(buffer) << "\n";

    i++;
    create_carriage(size, i, sum);
}
int main()
{
    CALL_FOO(create_carriage, 10);
}