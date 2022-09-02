#include<iostream>
#include<vector>
using namespace std;

/*
    Comparator
*/

bool customComp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    vector<int> v;
    for (int i = 0; i < 5; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }

    // greater<>() - comparator
    sort(v.begin(), v.end(), greater<int>()); // sorts in descending order

    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;

    /*---- Custom Comparator ----*/
    vector<pair<int, int>> vp;
    for (int i = 0; i < 5; ++i){
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }

    // sorts the pair using the first element
    sort(vp.begin(), vp.end());

    for(auto ptr : vp){
        cout << ptr.first << ", " << ptr.second << endl;
    }
    cout << endl;

    // sorts the pair using the second element
    sort(vp.begin(), vp.end(), customComp);
    for(auto ptr : vp){
        cout << ptr.first << ", " << ptr.second << endl;
    }
    cout << endl;
    return 0;
}