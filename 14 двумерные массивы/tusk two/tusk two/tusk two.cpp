#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return { i,j };
            }
        }
    }
    return {};
}

int main()
{
    vector<int> a = { 2, 7, 11, 15 };
    int needed;
    cout << "Enter needed number: ";
    cin >> needed;
    vector<int> b = twoSum(a, needed);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
}