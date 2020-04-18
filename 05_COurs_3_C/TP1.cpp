#include "pch.h"
#include "TP1.h"

void UseMap()
{
    map<int, string> m1;
    m1[10] = "platini";
    m1[9] = "jpp";

    for (pair<int, string> kv : m1)
    {
        cout << kv.first << ", " << kv.second << endl;
    }

    auto it = m1.find(10);
    if (it != m1.end())
    {
        string s10 = m1[10];
        cout << "cle 100 existe" << endl;
    }
}

void UseList()
{
    list<int> l1{ 1,2,3,4,5 };
    l1.push_back(10);

    for (int i : l1)
    {
        cout << i << endl;
    }

    list<int>::const_iterator it = l1.begin();
    ++it;
}

void UseArray()
{
    array<string, 200> mas;
    string totor[200];

    mas[100] = "string 100";

    mas.rbegin();
}
