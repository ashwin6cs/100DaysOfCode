#include <iostream>
using namespace std;

class Stack{
private:
int top;
int arr[6];
public:
Stack()
{
    top=-1;
    for(int j=0;j<6;j++){
        arr[j]=0;
    }
}
int isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
    return false;
}
int isFull(){
    if(top==5){
        return true;
    }
    else{
        return false;
    }
    return false;
}

int push(int val){
    if(isFull()){
        return true;
    }
    else{
        top++;
        arr[top]=val;
    }
    return false;
}

int pop(){
    int temp;
    if(isEmpty()){
        return true;
    }
    else{
        temp = arr[top];
        arr[top]=0;
        return temp;
    }
    return false;
}

int peek(int pos){
    if(isEmpty()){
        return true;
    }
    else{
        return arr[pos];
    }
    return false;
}

int count(){
    return top+1;
}

int change(int pos, int val){
    if(isEmpty()){
        return true;
    }
    else{
        arr[pos] = val;
    }
    return false;
}

int display(){
    for(int m=0; m<6; m++){
        cout<<arr[m]<<"";
    }
    cout<<endl;
    return false;
}
};


int main()
{
    Stack s1;
    s1.push(4);
    s1.push(6);
    cout << s1.count() << endl;
    s1.display();
    return 0;
}