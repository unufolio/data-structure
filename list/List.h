//
// Created by Unufolio on 9/4/20.
//

#ifndef DATA_STRUCTURE_LIST_H
#define DATA_STRUCTURE_LIST_H


#include <utility>

template<typename E>
class List {
private:
    struct Node {
        E data;
        Node *prev;
        Node *next;

        Node(const E &d = E{}, Node *p = nullptr, Node *n = nullptr)
                : data{d}, prev{p}, next{n} {}

        Node(E &&d, Node *p = nullptr, Node *n = nullptr)
                : data{std::move(d)}, prev{p}, next{n} {}
    };

public:
    List();

    int size() const;

    void clear();

    bool empty() const;

};

#endif //DATA_STRUCTURE_LIST_H
