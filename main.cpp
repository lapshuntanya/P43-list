#include "MyList.h"

int main() {
    //7 3 9 2
    MyList::Node<int> first(7); //info = 7, next = null

    MyList::Node<int> second(3);// info = 3, next = null
    first.next = &second;

    MyList::Node<int> third(9); //info = 9, next = null
    second.next = &third;

    MyList::Node<int> fourth(2);//info = 2, next = null
    third.next = &fourth;


    //Обхід списку
    MyList::Node<int>* p = &first;
    while (p != nullptr) {
        p->showNode();
        p= p->next;
    }



    return 0;
}
