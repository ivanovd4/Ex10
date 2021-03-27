// Copyright 2021 ivanovd4
#pragma once
#ifndef MYSTACK_H
#define MYSTACK_H
#define CRT_SECURE_NO_WARNINGS
#include <iostream>


template<typename T>
class MyStack {
 private:
    size_t size;
    size_t max_size;
    T* stack;

 public:
    explicit MyStack(size_t i) {
        this->size = 0;
        this->max_size = i;
        this->stack = new T[i];
    }
    MyStack(const MyStack& MyStack) {
        this->max_size = MyStack.max_size;
        this->size = MyStack.size;
        this->stack = MyStack.stack;
    }
    ~MyStack() {
        delete[] this->stack;
    }
    T get() const {
        if (!isEmpty())
            return this->stack[size - 1];
        else
            return -1;
    }
    T pop() {
        if (!isEmpty()) {
            this->size--;
            return this->stack[size];
        } else {
            return -1;
        }
    }
    T push(T element) {
        if (!isFull()) {
            this->stack[size] = element;
            this->size++;
            return element;
        } else {
            return -1;
        }
    }
    bool isFull() const {
        if (this->size == this->max_size) return true;
        else
            return false;
    }
    bool isEmpty() const {
        if (this->size == 0) return true;
        else
            return false;
    }
};
#endif  // !MYSTACK_H
