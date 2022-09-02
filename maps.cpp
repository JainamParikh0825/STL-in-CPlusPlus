#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

/*
    Maps
    - sorted order (by keys)
    - key-value pair
    - BST
    - O(logn) - Average case
    - O(N) - Worst case

    Unordered Maps
    - unsorted order
    - hashing
    - O(1) - Average case
    - O(N) - Worst Case
*/

int main(){
    map<int, int> m;

    // insert() - inserts an element as key value pair
    m.insert({1, 1});
    m[2] = 4;
    m[3] = 6;
    m[4] = 8;
    m[7] = 14;
    m[6] = 12;

    cout << "Map: " << endl;
    for(auto x : m){
        cout << x.first << ", " << x.second << endl;
    }
    cout << endl;

    // find() - finds the pair using the key and returns the iterator
    auto val = m.find(4);
    cout << val->first << ", " << val->second << endl;

    if(m.find(10) != m.end()){
        cout << "Key-value exists!" << endl;
    } else{
        cout << "Key-value doesn't exists!" << endl;
    }

    unordered_map<int, int> um;

    um.insert({1, 1});
    um.insert({10, 20});
    um.insert({8, 16});
    um.insert({3, 6});
    um.insert({9, 18});

    cout << "Unordered Map: " << endl;
    for(auto x : um){
        cout << x.first << ", " << x.second << endl;
    }
    cout << endl;
    return 0;
}