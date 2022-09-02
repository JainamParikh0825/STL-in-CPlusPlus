#include<iostream>
using namespace std;

/*
    Functions in STL
*/

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int maximum = 0;

    // max_element() - returns the maximum element from an array or vector
    maximum = *max_element(a, a + n);
    cout << "Maximum: " << maximum << endl;

    // next_permutation() - returns all the permutation of the string, array or vectors
    // it will only print next permutation from the current one
    string s = "BCA"; // try changing string as "ABC"
    do{
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // __builtin_popcount() - count the no. of set bits
    // takes in integer value
    int k;
    cin.ignore();
    cin >> k;
    int ans = __builtin_popcount(k);
    cout << "No. of set bits(1): " << ans << endl;

    // binary_search() - searches the element in a sorted array and returns true or false
    int arr[5] = {4, 5, 6, 10, 15};
    if(binary_search(arr, arr+n, 6)){
        cout << "Element is present in the array" << endl;
    } else{
        cout << "Element is not present in the array" << endl;
    }

    // lower_bound() - returns iterator of the element searched using binary search
    // value of that iterator will return the value
    // if the element does not exist then will return the next iterator
    auto it = lower_bound(arr, arr + 5, 6);
    cout << "Element is: " << *it << endl;

    // upper_bound() - returns iterator of the next element to the searched one
    // value of that iterator will return the next value of the searched value
    // if the element does not exist then will return the next iterator
    it = upper_bound(arr, arr + 5, 6);
    cout << "Element after the searched value: " << *it << endl;

    // to get the index of that element searched
    auto index = lower_bound(arr, arr + 5, 6) - arr;
    cout << index << endl;

    return 0;
}