//stack.h
using namespace std;
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
class Node //a queue element.
{
public:
    int val; //stores a value
    Node *next; //pointer to the next element
};

class mystack
{
    private:
        int nofnodes; //number of elements in the stack
        int nodelimit;//node limit
        Node *head;   //the top element of the stack

    public:
        mystack(); //default contructor
        mystack(int limit); //constructor
        ~mystack(){}; //distructor
        bool isEmpty(); //checks if the stack is empty
        bool isFull(); //checks if the stack is full
        void push(int num);
        //inserts an element to the top of staack

        void pop(); //removes top element from the stack
        void print(); //prints the stack of elements
};

#endif // STACK_H_INCLUDED
