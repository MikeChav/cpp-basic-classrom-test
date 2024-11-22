#include "List.hpp"
#include <iostream>

List::List() : data(0), next(nullptr) {}

List::List(int data) : data(data), next(nullptr) {}

List::List(const List &list) {
    List newList;
    List curr = list;
    while (true) {
        newList.insert(curr.data);
        if (curr.next == nullptr) {
            break;
        }
        else {
            curr = *(curr.next);
        }
    }
}

List& List::operator=(List list) {
    std::swap(list.data, data);
    std::swap(list.next, next);
    return *this;
}

List::~List() {
    if (this->next != nullptr) {
        delete this->next;
        this->next = nullptr;
    }
}

void List::insert(int data) {
    List* curr = this;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = new List(data);
}

List* List::find(int data) {
    for (List* curr = this; curr != nullptr; curr = curr->next) {
        if (curr->data == data) {
            return curr;
        }
    }
    return nullptr;
}

void List::print() {
    for (List *curr = this; curr != nullptr; curr = curr->next) {
        std::cout << curr->data << " ";
    }
    std::cout << std::endl;
}