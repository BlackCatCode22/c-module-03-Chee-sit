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
    pNew -> data = myStr(1);
    pNew -> next = nullptr;

    // output our linked list
    cout << "\n output of the node that pNew is pointing to\n";




    cout << "\n value of my string object is: " << myStr << endl;
    cout << "length of myStr is: " << myStr.length() << endl;
    int lengthOFmyStr = 0;
    lengthOFmyStr = myStr.length();
    cout << "\n The length of myStr is: " << lengthOFmyStr << endl;

    char myTempchar;
    for (int i=0; i<lengthOFmyStr/2; i++) {
        myTempchar = myStr[i];
        myStr[i] = myStr[lengthOFmyStr-i-1];
        myStr[lengthOFmyStr-i-1] = myTempchar;




    }

cout << "\n reverse string is: " << myStr << endl;
    cout << "\n myStr is: " << myStr << endl;

system ("pause>0");
    return 0;

}
