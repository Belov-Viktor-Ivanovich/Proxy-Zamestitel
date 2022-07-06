#pragma once
template<typename T>
struct Node {
    T* data;
    Node<T>* next = nullptr;
    Node<T>* prev = nullptr;
};

template<typename T>
class LinkedList {
    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
    int size = 0;
public:
    LinkedList() {}
    LinkedList(T* data) {
        Node<T>* node = new Node<T>{ data };
        head = node;
        tail = node;
        size++;
    }
    void addToHead(T* data) {
        if (size != 0) {
            Node<T>* node = new Node<T>{ data, head };
            head->prev = node;
            head = node;
            size++;
        }
        else {
           // LinkedList(data);

            Node<T>* node = new Node<T>{ data };
            head = node;
            tail = node;
            size++;
        }
    }
    void addToTail(T* data) {
        if (size != 0) {
            Node<T>* node = new Node<T>{ data, nullptr, tail };
            tail->next = node;
            tail = node;
            size++;
        }
        else {
            LinkedList(data);
            
        }
    }

    T* getHead()
    {
        return head->data;
    }

    T* search(int id)
    {
        Node<T>* iter = head;
        for (int i = 0; i < size; i++)
        {
            if (iter->data->id == id)return iter->data;
            iter = iter->next;
        }
        return nullptr;
    }
    void print() {
        Node<T>* iter = head;
        for (int i = 0; i < size; i++) {
            cout << iter->data << " ";
            iter = iter->next;
        }
    }



};