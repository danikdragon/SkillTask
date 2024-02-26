#include<iostream>
#include<list>
using namespace std;

int main()
{
    //минимальная 2 повторная 10
    int arr[15]{ 18,10,3,4,5,6,7,8,9,10,11,12,13,14,2 };
    int min(arr[0]);
    int repeat(0);
    for (int i = 0; i < size(arr); i++) {
        if (arr[i] < min) min = arr[i];
        for (int j = i + 1; j < size(arr); j++) {
            if (arr[i] == arr[j]) repeat = arr[j];
        }
    }
    cout << min << "\n" << repeat;
}