#include<iostream>
#include<queue>
using namespace std;

/*
    Priority Queue
    - more priority element will be added in front
    - Two types of Priority Queue:
        1. Min Heap
        - in increasing order
        Ex: 1 2 3 4

        2. Max Heap (By Default)
        - in decreasing order
        Ex: 4 3 2 1
*/

int main(){
    priority_queue<int> pq;

    // push() - inserts element according to Max Heap's condition
    pq.push(1);
    pq.push(2);
    pq.push(13);
    pq.push(10);

    // size() - prints the size of the priority queue
    cout << "Size: " << pq.size() << endl;

    // displays the priority queue
    cout << "Max Heap Priority Queue: ";
    while(!pq.empty()){
        int val = pq.top();
        cout << val << " ";
        pq.pop();
    }
    cout << endl;

    // Min-Heap Priority Queue
    priority_queue<int, vector<int>, greater<int>> minHeapPq;

    // push() - inserts element according to Min Heap's condition
    minHeapPq.push(1);
    minHeapPq.push(2);
    minHeapPq.push(13);
    minHeapPq.push(10);

    // size() - prints the size of the priority queue
    cout << "Size: " << minHeapPq.size() << endl;

    // displays the priority queue
    cout << "Min Heap Priority Queue: ";
    while(!minHeapPq.empty()){
        int val = minHeapPq.top();
        cout << val << " ";
        minHeapPq.pop();
    }
    cout << endl;
    return 0;
}