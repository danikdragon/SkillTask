#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> db(20);
    int num = 0;
    while (true) {
        cout << "input number: ";
        cin >> num;
        if (num == -1) {
            cout << "output: ";
            for (int i = 0; i < db.size(); i++)
                cout << db[i] << " ";
            cout << '\n';
        }
        else {
            db.erase(db.begin());
            db.push_back(num);
        }
    }
}