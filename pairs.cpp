#include<iostream>
#include<vector>
using namespace std;

/*
    Pairs
*/

int main(){
    pair<int, int> p;

    // first and second - first element of the pair and second element of the pair
    p.first = 10;
    p.second = 20;
    cout << "{" << p.first << ", " << p.second << "}" << endl;

    // chaining of pairs
    pair<int, pair<int, int>> pt;
    pt.first = 1;
    pt.second.first = 5;
    pt.second.second = 6;
    cout << "{" << pt.first << ", {" << pt.second.first << ", " << pt.second.second << "}}" << endl;

    // vector of pairs
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    cout << "{";
    for (int i = 0; i < n; ++i){
        cout << "{" << v[i].first << ", " << v[i].second << "}, ";
    }
    cout << "}" << endl;
    return 0;
}