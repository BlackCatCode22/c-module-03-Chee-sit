// This is a Linked List pop quiz
// Linked List with reversed string
// created by Chijenda Vang on 9/17/2025


#include <iostream>
#include <string>
using namespace std;


 struct node {
     char data;
     node* next;
 };


int main() {

    string myStr = "abcDefg";

    cout << "\n Welcome to my Linked List quiz \n";
    node* pHead = nullptr;

        node* pNew = new node();
        pNew -> data = myStr(0);
        pNew -> next = nullptr;


    cout << "\n output of data and next: \n";
    cout << pNew->data << endl;
    cout << pNew->next << endl;

    pHead = pNew;
    // verify this output
    cout << "\n output of the node that pHead is pointing to\n";
    cout << pHead->data << endl;
    cout << pHead->next << endl;

    // Add a node to our linked list using our four steps
    // Create a new node
    pNew = new node();
    // Fill the data field
    pNew -> data = myStr(1);
    pNew -> next = nullptr;
    // Attach new node to head of list
    pNew -> next = pHead;
    // Reposition 

    // output our linked list
    cout << "\n output of the node that pNew is pointing to\n";

    // create a pointer that goes through the list
    node* pCurrent;


    pCurrent = pHead
     cout << "\n The current linked list: \n"; 
     cout << pHead -> data << endl;
     cout << pHead -> next -> date << endl;
     
    



system ("pause>0");
    return 0;

}
