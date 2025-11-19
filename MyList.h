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
    class DNode {
    public:
        T info;
        DNode* next;
        DNode* prev;

        DNode(T value) {
            info = value;
            next = prev =  nullptr;
        }
        void showNode()const {
            cout << "INFO: " << info
            << "\t PREV: " << prev
            << "\t NEXT: " << next << endl;
        }
    };
}



#endif //P43_LIST_MYLIST_H