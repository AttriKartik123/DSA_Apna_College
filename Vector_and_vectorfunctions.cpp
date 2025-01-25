#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec = {'a', 'b', 'c', 'd', 'e'};

    cout << "Size=" << vec.size() << endl;

    vec.push_back('f');
    vec.push_back('g');
    vec.push_back('h');

    cout << "After pushing the elements=" << vec.size() << endl;

    vec.pop_back();
    vec.pop_back();

    cout << "After poping the elements=" << vec.size() << endl;

    cout << "Front element=" << vec.front() << endl;  // RETURNS ASCII VALUE 
    cout << "Back element=" << vec.back() << endl;

    return 0;
}