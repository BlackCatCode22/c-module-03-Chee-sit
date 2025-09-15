    // Linked List
    // Created by Chijenda Vang on 9/15/2025




#include <iostream>
using namespace std;




struct Node {
    char data;
    Node* pNext;


};

void printList(Node*n) {
    while (n!=nullptr) {
        cout << n->data << endl;
        n=n->pNext;


    }
}
int main() {
    Node* phead = new Node();
    Node* second = new Node();
    Node* third = new Node();

    phead -> data = 'a';
    phead -> pNext = second;
    second -> data = 'b';
    second -> pNext = third;
    third -> data = 'c';
    third -> pNext = nullptr;

    printList(phead);



system ("pause>0");
    return 0;
}
