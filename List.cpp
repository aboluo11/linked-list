//
// Created by zzz on 4/5/2019.
//

#include "List.h"
#include <optional>

List::List() {
    this->head = {};
}

List::~List() {
    while(this->head != nullptr) {
        this->head = std::move(this->head->next);
    }
}

void List::push(int elem) {
    std::unique_ptr<Node> new_node = std::make_unique<Node>();
    new_node->elem = elem;
    new_node->next = std::move(this->head);
    this->head = std::move(new_node);
}

std::optional<int> List::pop() {
    if (this->head == nullptr)
        return {};
    int res = this->head->elem;
    this->head = std::move(this->head->next);
    return res;
}

std::optional<int> List::peek() {
    if (this->head == nullptr)
        return {};
    return this->head->elem;
}