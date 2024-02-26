#include <iostream>
using namespace std;
void reverSort(int* pa, int len) {
    int temp;
    for (int i = 0; i < len / 2; i++) {
        temp = *(pa + i);
        *(pa + i) = *(pa + len - i - 1);
        *(pa + len - i - 1) = temp;
    }

}
int main()
{
    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int len = sizeof(a) / sizeof(a[0]);
    reverSort(a, len);
    for (int i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
}