#include <iostream>
using namespace std;

template < typename T >
void input(T array[8])
{
    cout << "Fill the array (8):";
    for (int i = 0; i < 8; i++)
    {
        T inp;
        cin >> inp;
        array[i] = inp;
    }
}

template < typename T >
void print(T array[8])
{
    for (int i = 0; i < 8; i++)
        cout << array[i] << " ";
    cout << endl;
}

template < typename T >
void midele(T array[8])
{
    T sum = array[0];
    for (int i = 1; i < 8; i++)
        sum += array[i];
    cout << "Midele: " << sum / 8 << endl;
}

int main()
{
	int array1[8];
	double array2[8];
	float array3[8];

    input(array1);
    input(array3);
    input(array2);

    print(array1);
    print(array3);
    print(array2);

    midele(array1);
    midele(array3);
    midele(array2);
}