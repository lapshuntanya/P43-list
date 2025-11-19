//
// Created by Tetiana Perederii on 19.11.2025.
//

#ifndef P43_LIST_MYLIST_H
#define P43_LIST_MYLIST_H
#include <iostream>
using std::cout;
using std::endl;


namespace MyList {
    template  <typename T>
    class Node {
    public:
        T info;
        Node* next;

        Node(T value) {
            info = value;
            next = nullptr;
        }
        void showNode()const {
            cout << "INFO: " << info << " NEXT: " << next << endl;
        }
    };
}



#endif //P43_LIST_MYLIST_H