#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList() {
    Head = nullptr;
    Last = nullptr;
}

Node* LinkedList::getNode(int num) {
    //Modify code here
    Node* temp = nullptr;
    return temp;
}

void LinkedList::add(int num) {
    if (nullptr == Head) {
        //Modify code here
        Head = nullptr; // get a new Node rather nullptr
        Last = Head;
    } else {
        //Modify code here
        Last->next = nullptr; //get a new Node rather nullptr
        //Modify code here
        Last = nullptr; //last should point to next
    }
}

void LinkedList::reverse() {
    //Write your code here
}

void LinkedList::show() {
    for (Node* p = Head; p != nullptr; p = p->next) {
        //what should be call to see node value
        //p->;
    }

    cout << "NULL" << endl;
}

