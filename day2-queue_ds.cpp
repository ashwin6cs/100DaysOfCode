#include<iostream>
using namespace std;

class Queue{
    private:
    int front, rear;
    int arr[6];
    public:
    Queue(){
        front, rear=-1;
        for(int i=0; i<6; i++){
            arr[i]=0;
        }
    }

    bool isEmpty(){
        if((front==-1) & (rear==-1)){
        return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if(rear==5){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int val){
        if(isFull()){
            return;
        }
        else if(isEmpty()){
            front=rear=0;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }

    int dequeue(){
        int temp;
        if(isEmpty()){
        return true;
        }
        else if(front==rear){
            temp = arr[front];
            front=rear==-1;
        }
        else{
        temp=arr[front];
        front++;
        }
        return temp;
    }

    int count(){
    return rear+1;
    }
};



int main(){
    Queue q1;
    q1.enqueue(2);
    q1.enqueue(5);
    cout << q1.count() << endl;
    return 0;
}