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

public:
    List();

    List(const List &rhs);

    ~List();

    List &operator=(const List &rhs);

    List(List &&rhs);

    int size() const;

    void clear();

    bool empty() const;

    void push_back(const E &x);

private:
    int theSize;
    Node *head;
    Node *tail;

    void init();

};

#endif //DATA_STRUCTURE_LIST_H
