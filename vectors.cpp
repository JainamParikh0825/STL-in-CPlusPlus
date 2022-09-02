#include<iostream>
#include<vector>
using namespace std;

/*
    Vectors
    - Dynamic Arrays
    - Initial size of an vector is 0
*/

int main(){
    vector<int> vec;

    // size()
    cout << "Initial size of Vector: " << vec.size() << endl;

    // push_back() - inserts element at the end
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Size after push_back: " << vec.size() << endl;

    // pop_back() - removes element from the end
    vec.pop_back();
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Size after pop_back: " << vec.size() << endl;

    // resize() - resizes the current vector with 0 being default value
    vec.resize(5);
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Size after resize: " << vec.size() << endl;

    // begin() - has the address of first element of the vector
    cout << "Value of the first element: " << *(vec.begin()) << endl;
    cout << "Value of the second element: " << *(vec.begin() + 1) << endl;

    // end() - has the address of element next to last element of the vector
    cout << "Value of element next to last element: " << *(vec.end()) << endl;

    // clear() - deletes all the element in the vector
    vec.clear();
    cout << "Size after clearing: " << vec.size() << endl;

    // empty() - checks if the vector is empty of not
    cout << "Is vector empty?: " << boolalpha << vec.empty() << endl;
    vec.push_back(2);
    cout << "Is vector empty?: " << boolalpha << vec.empty() << endl;

    // erase() - removes element at any given position
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.erase(vec.begin() + 2);
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Size after erasing: " << vec.size() << endl;

    // insert() - inserts element at any given position
    vec.insert(vec.begin() + 2, 4);
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << " ";
    }
    cout << endl;
    cout << "Size after inserting: " << vec.size() << endl;

    // reverse() - reverses the whole vector in-place
    reverse(vec.begin(), vec.end());
    cout << "After reversing: ";
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << " ";
    }
    cout << endl;

    // sort() - sorts vector element in ascending order
    sort(vec.begin(), vec.end());
    cout << "After sorting: ";
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}