#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

typedef Node node;
node *head = NULL, *tail = NULL;

node* getNode(int data) {
    node * temp = new node;
    temp -> data = data;
    temp->next = NULL;

    return temp;
}

void createList(int a[], int size) {
    for(int i = 0; i < size; i++) {
        if(head == NULL) {
            head = getNode(a[i]);
            tail = head;
        }
        else {
            tail->next = getNode(a[i]);
            tail = tail->next;
        }
    }
}

void traverse() {
    node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main() {
    int a[5] = {2, 5, 6, 9, 8};
    createList(a, 5);

    traverse();

    return 0;
}