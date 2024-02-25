#include<iostream>
#include<list>
using namespace std;

int main()
{
    int nonsorter[15];
    // O(n)
    for (int i = 0; i < size(nonsorter); i++)
    {
        cout << "Enter number - " << 1+i << ": ";
        cin >> nonsorter[i];
    }
    int sorter[size(nonsorter)];
    int max(nonsorter[0]), number(0);
    // O(n * n)
    for (int j = 0; j < size(nonsorter); j++) {
        for (int i = 0; i < size(nonsorter); i++) {
            if (max < nonsorter[i]) {
                max = nonsorter[i];
                number = i;
            }
        }
        sorter[j] = max;
        max = nonsorter[0];
        nonsorter[number] = 0;
        cout << sorter[j] << ' ';
    }
}