#include<iostream>
#include<list>
using namespace std;

/*
   Lists
   - Linked List
*/

int main(){
    list<int> l;

    // push_back() - inserts at the end of the list
    l.push_back(10);
    l.push_back(20);

    // push_front() - inserts at the beginning of the list
    l.push_front(5);

    // iterator - pointer to the list
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // front() - gives the start value of the list
    cout << "Front of the list: " << l.front() << endl;

    // back() - gives the end value of the list
    cout << "Back of the list: " << l.back() << endl;

    // reverse
    l.reverse();
    cout << "After reversing: ";
    for (it = l.begin(); it != l.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // sort
    l.sort();
    cout << "After sorting: ";
    for (it = l.begin(); it != l.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // pop_front - removes element from front position
    l.pop_front();
    cout << "After popping from front: ";
    for (it = l.begin(); it != l.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // pop_back - removes element from end position
    l.pop_back();
    cout << "After popping from back: ";
    for (it = l.begin(); it != l.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    return 0;
}