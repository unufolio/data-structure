//
// Created by Unufolio on 9/4/20.
//

#include "List.h"

template<typename E>
List<E>::List() {

}

template<typename E>
List<E>::List(const List &rhs) {

}

template<typename E>
List<E>::~List() {

}

template<typename E>
List &List<E>::operator=(const List &rhs) {
    std::swap(theSize, rhs.theSize);
    std::swap(head, rhs.head);
    std::swap(tail, rhs.tail);

    return *this;
}

template<typename E>
List<E>::List(List &&rhs) {
    init();
    for (auto &x: rhs) {
        push_back(x);
    }
}

template<typename E>
int List<E>::size() const {
    return 0;
}

template<typename E>
void List<E>::clear() {

}

template<typename E>
bool List<E>::empty() const {
    return false;
}

template<typename E>
void List<E>::init() {

}

template<typename E>
void List<E>::push_back(const E &x) {

}
