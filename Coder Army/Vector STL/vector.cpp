#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v1(5, 2);
    // size and capacity
    cout << "Size of v:" << v.size() << endl;         // 0
    cout << "Capacity of v:" << v.capacity() << endl; // 0
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);

    cout << "Size of v:" << v.size() << endl;         // 3
    cout << "Capacity of v:" << v.capacity() << endl; // 4

    // update value
    v1[1] = 5;
    cout << v1[1] << endl;

    cout << "Size of v1:" << v1.size() << endl;         // 5
    cout << "Capacity of v1:" << v1.capacity() << endl; // 5

    v1.push_back(8);

    cout << "Size of v1:" << v1.size() << endl;         // 6
    cout << "Capacity of v1:" << v1.capacity() << endl; // 10

    // Delete value from vector
    vector<int> vnew;

    vnew.push_back(4);
    vnew.push_back(40);
    vnew.push_back(400);
    vnew.push_back(4000);
    vnew.pop_back();

    cout << "Size of vnew:" << vnew.size() << endl;         // 3
    cout << "Capacity of vnew:" << vnew.capacity() << endl; // 4

    // Remove an element from specific index in vector

    vnew.erase(vnew.begin() + 2);

    cout << "Size of vnew:" << vnew.size() << endl;         // 2
    cout << "Capacity of vnew:" << vnew.capacity() << endl; // 4

    for (int i = 0; i < vnew.size(); i++)
    {
        cout << vnew[i] << endl;
    }

    //  To insert a value at specific index in vector

    vnew.insert(vnew.begin() + 1, 50);

    for (int i = 0; i < vnew.size(); i++)
    {
        cout << vnew[i] << " ";
    }

    // Remove all the element from vector
    vnew.clear();

    cout << "Size of vnew:" << vnew.size() << endl;         // 0
    cout << "Capacity of vnew:" << vnew.capacity() << endl; // 4

    // accessing the element of vector v.
    // Method- 1:
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // alternate Method- 2: 
    for (int it = 0; it < v.size(); it++)
    {
        cout << v[it] << " ";
    }
    cout << endl;
    // alternate Method- 3:
    for (auto it : v)
    {
        cout << it << " ";
    }
}