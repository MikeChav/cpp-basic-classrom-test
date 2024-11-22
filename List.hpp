#pragma once

class List {
    private:
    int data;
    List* next;

    public:
    List();

    List(int data);

    List(const List &list);

    List& operator=(List list);

    ~List();

    void insert(int data);

    List* find(int data);

    void print();
};