#include <iostream>
using namespace std;

const int MAX = 5;
int top = -1;
int arr[MAX];

void push(int x) {
    if (top == MAX - 1) {
        cout << "Stack is Full" << endl;
    } else {
        top = top + 1;
        arr[top] = x;
        cout << x << " has been added" << endl;
    }
}


int pop() {
    if (top == -1) {
        cout << "Stack is Empty" << endl;
        return -1;
    } else {
        int x = arr[top];
        top = top - 1;
        cout << x << " has been removed" << endl;
        return x;
    }
}


void display() {
    if (top == -1) {
        cout << "Stack is Empty" << endl;
        return;
    }
    for (int i = 0; i <= top; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {

    
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);   

    cout << endl;
    display();

    cout << endl;

    pop();
    pop();

    cout << endl;

    
    display();

    return 0;
}

