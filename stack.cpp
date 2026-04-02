#include<bits/stdc++.h>
using namespace std;

class Stack{
    int arr[100];
    int top;

public:
    Stack(){
        top = -1;
    }

    void push(int x){
        if(top == 99) return;
        arr[++top] = x;
    }

    void pop(){
        if(top == -1) return;
        top--;
    }

    int peek(){
        if(top == -1) return -1;
        return arr[top];
    }

    bool isEmpty(){
        return (top == -1);
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.peek() << endl;

    s.pop();
    cout << s.peek() << endl;
}
