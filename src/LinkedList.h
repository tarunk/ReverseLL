#ifndef __LINKED__LIST_H__
#define __LINKED__LIST_H__

class Node;

class LinkedList {
private:
    Node* Head;
    Node* Last;
private:
    Node* getNode(int num);
public:
    LinkedList();
    void add(int num);
    void reverse();
    void show();
    //~LinkedList();
};

#endif
