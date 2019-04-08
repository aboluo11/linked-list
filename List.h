//
// Created by zzz on 4/5/2019.
//

#ifndef LISTS_LIST_H
#define LISTS_LIST_H

#include <optional>
#include <memory>
#include <iostream>

struct Node {
    int elem;
    std::unique_ptr<Node> next;
};

class List {
public:
    List();
    ~List();
    void push(int elem);
    std::optional<int> pop();
private:
    std::unique_ptr<Node> head;
};

#endif //LISTS_LIST_H
