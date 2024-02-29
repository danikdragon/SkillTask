#include <iostream>
#include <vector>
#include <memory>
#include <unordered_set>
using namespace std;

int main()
{
    cout << "task 1: ";
    for(auto a : initializer_list<int>{1,2,3,4,5})
        cout << a << " ";
    cout << endl;

    cout << "task 2 : ";
    //2,4,6,8 не повторяются
    vector<int> my_vec{1,1,1, 2 ,3,3, 4 ,5,5, 6 ,7,7, 8 };

    auto sorter_vec = [](vector<int> temp_vec)
    {
        unordered_set<int> temp_set;

        for(auto a: temp_vec)
            temp_set.insert(a);

        temp_vec.clear();

        for(auto a: temp_set)
            if(temp_set.count(a))
                temp_vec.push_back(a);

        return make_unique<vector<int>>(temp_vec);
    };

    unique_ptr<vector<int>> ptr = sorter_vec(my_vec);

    for (auto it = ptr.get()->begin(); it != ptr.get()->end(); ++it)
        std::cout << *it << " ";
    cout << endl;

    return 0;
}
