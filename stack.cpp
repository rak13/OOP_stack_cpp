//stack.cpp
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "stack.h"
using namespace std;

mystack::mystack() //default constructor
{
    nodelimit=3; //sets default node limit as 3
    nofnodes=0; //the are no nodes yet, so number of nodes=0
    head=0;    //nothing in stack yet, head=NULL
    printf("Stack size: %d\n", nodelimit);
    //prints the size of the stack that has been created
}

mystack::mystack(int limit)
{
    nodelimit=limit; //sets node limit as per user
    nofnodes=0;     //the are no nodes yet, so number of nodes=0
    head=0;        //nothing in stack yet, head=NULL
    cout<<"Stack size: "<<nodelimit<<endl;
}

bool mystack::isEmpty() //checks if the stack is empty
{
    if(nofnodes<=0) return true;
    else return false;
}

bool mystack::isFull() //checks if the stack is full
{
    if(nofnodes>=nodelimit) return true;
    else return false;
}

void mystack::push(int num)
{
    //inserts an element at  top of the stack
    if(!isFull()) //if queue is NOT full
    {
        if(!head) //if head is empty or first element in stack
        {
            head=new Node; //memory allocation to head
            head->val=num; //stores the value to head
            head->next=0; //end of queue
            nofnodes++;   //increments the number of nodes
            cout<<"Pushed in "<<num<<endl;
            //prints the value pushed into the stack
        }
        else
        {
            Node *tmp; //temporary pointer to Node
            tmp=new Node; //memory allocation to tmp, to store new value
            tmp->val=head->val; //tmp take value stored in head
            tmp->next=head->next;//tmp takes the next element of head

            head->val=num; //gives head the new value
            //new element becomes head and previous elements are linked to it.
            head->next=tmp;//links the tmp to head
            nofnodes++; //increments the number of nodes
            cout<<"Pushed in "<< num<<endl;
            //prints the value pushed into the stack
        }
    }
    //if queue is full
    else cout<<"Stack is Full!!"<<endl;
}

void mystack::pop() //removes front/first element in the queue
{
    if(!isEmpty()) //if stack is not empty
    {
        Node *tmp; //temporary node pointer
        tmp=head->next;//stores the next element of head
        cout<<"Popped "<< head->val <<endl;
        //prints the number to be removed;
        delete head; //frees the memory allocated to head
        head=tmp; //the next element of head, becomes head
        nofnodes--; //decrements number of nodes

    }
    //if stack is empty
    else cout<<"Stack is Empty!!"<<endl;
}
void mystack::print()
{
    Node *current;
    if(isEmpty()) //if stack is not empty
    {
        cout<<"Stack is Empty!!"<<endl;
        //prints that queue is empty
        return; //end of function
    }
    //else
    cout<<"Your Stack:"<<endl;
    for(current=head; current; current=current->next)
    {
        cout << current->val;
        if(current->next) cout <<"-->";
    }
    cout<<"\n";
    //prints the queue
}
