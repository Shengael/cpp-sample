// Project1_Jour3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

int i = 10;
mutex m;

void Routine1()
{
    while (true)
    {
        unique_lock<mutex> ul(m, defer_lock);
        i+=5;
        cout << i << " ";
        Sleep(1);
    }
}

void Routine2()
{
    while (true)
    {
        unique_lock<mutex> ul(m, defer_lock);
        i-=5;
        cout << i << " ";
        Sleep(2);
    }
}

void Routine3(int value)
{
    while (true)
    {
        unique_lock<mutex> ul(m, defer_lock);
        i = value;
        cout << i << " ";
        Sleep(1000);
    }
}

int main()
{
    thread t1(Routine1);
    thread t2(Routine2);
    thread t3(Routine3, 200);
    t1.join();
    t2.join();
    t3.join();
    
    //exec R1 || R2; join();

    //UseMap();
    //UseList();
    //UseArray();

}
