#include <iostream>
using namespace std;

#define SPRING ("Spring")
#define SUMMER ("Summer")
#define AUTUMN ("Autumn")
#define WINTER ("Winter")

#define SELECT (12)

// не понял немного условия, по этому вот 2 решения
// 1 для программиста это решение которое работает в данный момент
// 2 это для пользователя нужно закоментировать define SELECT (12) и раскоментировать то что в main
int main()
{
	//int SELECT;
	//cout << "Enter number (1-12) : ";
	//cin >> SELECT;

#if SELECT >= 1 && SELECT <= 3
	cout << SPRING << "\n";
#endif 

#if SELECT >= 4 && SELECT <= 6
	cout << SUMMER << "\n";
#endif 
   
#if SELECT >= 7 && SELECT <= 9
	cout << AUTUMN << "\n";
#endif 

#if SELECT >= 10 && SELECT <= 12
	cout << WINTER << "\n";
#endif 
}