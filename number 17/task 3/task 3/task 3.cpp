#include <iostream>
using namespace std;
bool substr(const char* pa, const char* pb) {
	for (int i = 0; *(pa + i) != '\0'; i++)
	{
		for (int j = 0; *((pa + i) + j) != '\0'; j++)
		{
			if (*(pb + j) == *((pa + i) + j)) {
				if (*(pb + j + 1) == '\0')
				{
					return true;
				}
			}
			else {
				break;
			}
		}
	}
	return false;
}
int main()
{
	const char* a = "Hello world";
	const char* b = "wor";
	const char* c = "banana";
	cout << substr(a, b) << " " << substr(a, c);
}