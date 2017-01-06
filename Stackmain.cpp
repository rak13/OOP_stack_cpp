//Stackmain.cpp
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "stack.h"
int main()
{
    //freopen("Stackout.txt", "w", stdout);
    mystack lst;
    lst.push(10);
    lst.push(20);
    lst.push(30);
    lst.push(40);
    lst.print();
    lst.pop();
    lst.pop();
    lst.pop();
    lst.pop();
    lst.print();

    return 0;
}
/*
//Output:

Stack size: 3
Pushed in 10
Pushed in 20
Pushed in 30
Stack is Full!!
Your Stack:
30-->20-->10
Popped 30
Popped 20
Popped 10
Stack is Empty!!
Stack is Empty!!

*/
