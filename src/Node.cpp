#include <iostream>
#include "Node.h"

using namespace std;

Node :: Node(int val) {
    this->val = val;
    next = nullptr;
}

void Node :: show() {
    cout << val << " --> ";
}
