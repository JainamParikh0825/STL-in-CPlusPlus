#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

/*
    Sets and Unordered Sets
    1. Sets
    - Sorted Order
    - No Duplicates
    - BST
    - O(logn) - Average Case
    - O(N) - Worst Case

    2. Unordered Sets
    - Can be in Unsorted Order
    - Hashing
    - O(1) - Average Case
    - O(N) - Worst Case

    3. Unordered Multiset
    - Can store duplicate values
*/

int main(){
    set<int> s;

    // insert() - inserts element in sorted form
    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(7);

    // find() - returns the iterator if the element exists
    auto x = s.find(2);
    cout << *x << endl;

    // count() - returns 1 if the element exists and 0 if it does not
    if(s.count(2)){
        cout << "The element exists!" << endl;
    } else{
        cout << "The element does not exists!" << endl;
    }

    // displays set
    cout << "Set: ";
    for(auto y : s){
        cout << y << " ";
    }
    cout << endl;

    // erase() - removes the element from the set
    s.erase(2);
    for(auto y : s){
        cout << y << " ";
    }
    cout << endl;

    unordered_set<int> us;
    us.insert(5);
    us.insert(4);
    us.insert(1);
    us.insert(3);
    us.insert(4);

    cout << "Unordered Set: ";
    for(auto y : us){
        cout << y << " ";
    }
    cout << endl;

    unordered_multiset<int> ums;
    ums.insert(4);
    ums.insert(2);
    ums.insert(3);
    ums.insert(1);
    ums.insert(4);

    cout << "Unordered Multiset: ";
    for(auto y : ums){
        cout << y << " ";
    }
    cout << endl;

    return 0;
}