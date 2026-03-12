#include<bits/stdc++.h>
using namespace std;

class Queue{
    int arr[100];
    int front, rear;

public:
    Queue(){
        front = -1;
        rear = -1;
    }

    void enqueue(int x){
        if(rear == 99){
            cout << "Queue Overflow\n";
            return;
        }

        if(front == -1) front = 0;

        rear++;
        arr[rear] = x;
    }

    void dequeue(){
        if(front == -1 || front > rear){
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Removed: " << arr[front] << endl;
        front++;
    }

    void peek(){
        if(front == -1 || front > rear){
            cout << "Queue is empty\n";
            return;
        }

        cout << "Front element: " << arr[front] << endl;
    }

    void display(){
        if(front == -1 || front > rear){
            cout << "Queue is empty\n";
            return;
        }

        for(int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    q.peek();

    return 0;
}