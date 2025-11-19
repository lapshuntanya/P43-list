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

    template <typename  U>
    class List {
        DNode<U>* head;
        DNode<U>* tail;
    public:
        List() {
            head = tail = nullptr;
        }
        ~List() {

        }

        void push_back(U value) {
            //1 - Створюємо вузол
            DNode<U>* el = new DNode<U>(value);
            //2 Чи створили перший вузол
            if (head == nullptr) {
                head = el;
                tail = el;
            }else {// 2, 3, ... інші вузли
                //Звʼязуємо вузли
                tail->next = el;
                el->prev = tail;
                //Оновлюємо хвіст
                tail = el;
            }
        }

        void shoInfo()const {
            DNode<U>* p = head;

            if (p == nullptr) cout << "List is empty!\n";
            else {
                while (p != nullptr) {
                    p->showNode();
                    p = p->next;
                }
            }
        }

        void reverseShow()const {

        }

    };
}



#endif //P43_LIST_MYLIST_H