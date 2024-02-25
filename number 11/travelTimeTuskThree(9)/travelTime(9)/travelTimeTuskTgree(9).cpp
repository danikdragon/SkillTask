#include <iostream>
#include <cassert>
using namespace std;
float travelTime(float distance, float speed) {
	float position(0);
	int hour(0);
	for (hour; position < distance; hour++) {
		position += speed;
	}
	return hour;
}
int main() {
	float dist, speed;
	cout << "Enter distance and speed: ";
	cin >> dist >> speed;	
	assert(dist > 0 || speed > 0);
	cout << travelTime(dist, speed) << " hour in road";
}