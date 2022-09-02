#include<iostream>
#include<queue>
#include<deque>
using namespace std;

/*
    Queue
    - First-In-First-Out (FIFO)

    Deque (Double-ended Queue)
    - can insert and remove from both front and back
*/

int main(){
    queue<int> q;

    /**** ---- Queue ---- ****/
    // push() - inserts an element from back
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // size() - total no. of elements
    cout << "Size of the Queue: " << q.size() << endl;

    // front() - first element in the queue
    cout << "Front of Queue: " << q.front() << endl;

    // back() - last element in the queue
    cout << "Back of Queue: " << q.back() << endl;

    // empty() - checks the queue if it's empty or not
    if(q.empty()){
        cout << "Queue is empty!" << endl;
    } else{
        cout << "Queue is not empty!" << endl;
    }

    // display the queue
    cout << "Queue: ";
    while(!q.empty()){
        cout << q.front() << " ";

        // pop() - removes element from start position
        q.pop();
    }
    cout << endl;

    /**** ---- Dequeue ---- ****/
    deque<int> dq;

    // push_back() - inserts at back
    dq.push_back(10);
    dq.push_back(30);
    dq.push_back(40);

    // push_front() - inserts at front
    dq.push_front(20);

    // displaying deque
    cout << "Deque: ";
    deque<int>::iterator it;
    for (it = dq.begin(); it != dq.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // pop_back() - removes element from back
    dq.pop_back();
    cout << "Deque after removing from back: ";
    for (it = dq.begin(); it != dq.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    // pop_front() - removes element from front
    dq.pop_front();
    cout << "Deque after remvoing from front: ";
    for (it = dq.begin(); it != dq.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    return 0;
}