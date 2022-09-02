#include<iostream>
#include<stack>
using namespace std;

/*
    Stacks
    - Last-In-First-Out (LIFO)
*/

int main(){
    stack<int> stck;

    // push() - inserts the element into stack
    stck.push(12);
    stck.push(13);
    stck.push(14);
    stck.push(15);

    // top() - displays the top element of the stack
    cout << "Top of the stack after pushing: " << stck.top() << endl;

    // pop() - removes the element from the top position
    stck.pop();
    cout << "Top of the stack after popping: " << stck.top() << endl;

    // size() - gives the total element in the stack
    cout << "Size of the stack: " << stck.size() << endl;

    // empty() - returns boolean if the stack is empty or not
    if(stck.empty()){
        cout << "Stack is empty!" << endl;
    } else{
        cout << "Stack is not empty!" << endl;
    }

    // display the stack
    cout << "Stack: " << endl;
    while(!stck.empty()){
        int val = stck.top();
        cout << val << endl;
        stck.pop();
    }

    return 0;
}