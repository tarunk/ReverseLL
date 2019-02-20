#ifndef __NODE_H__
#define __NODE_H__

class LinkedList;

class Node {
private:
    int val;
    Node* next;
public:
    Node(int val);
    void show();
    friend class LinkedList;
};

#endif

