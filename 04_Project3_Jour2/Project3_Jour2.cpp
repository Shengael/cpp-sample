// Project3_Jour2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

template <typename T>
class Vector
{
    typedef T* T_Ptr;
public:
    Vector(int size)
    {
        _data = new T[size];
    }

    ~Vector()
    {
        delete[] _data;
    }

    void SetData(int index, T value)
    {
        _data[index] = value;
    }

    T& operator[](int index)
    {
        return _data[index];
    }
    
    T GetData(int index)
    {
        return _data[index];
    }

private:
    //T* _data;
    T_Ptr _data;
};

class Product
{
public:
    Product(string name, float price)
    {
        _name = name;
        _price = price;
    }

    void DisplayInfo()
    {
        cout << _name << ", " << _price << endl;
    }

public:
    string _name;
    float _price;
};

int main()
{
    Product p1("steak", 3);
    Product p2("camembert", 2);

    shared_ptr<Product> pObj1 = make_shared<Product>("steak", 3);
    pObj1->DisplayInfo();
    shared_ptr<Product> pObj2 = make_shared<Product>("camos", 2);
    pObj2->DisplayInfo();
    shared_ptr<Product> pObj3 = make_shared<Product>("bud", 1);
    pObj3->DisplayInfo();
    shared_ptr<Product> pObj4 = make_shared<Product>("pif", 3);
    pObj4->DisplayInfo();
    shared_ptr<Product> pObj5 = make_shared<Product>("sauce", 2);
    pObj5->DisplayInfo();
    return 0;
    /*
steak, 3
camos, 2
bud, 1
pif, 3
sauce, 2
Press any key to continue . . .
    */

    Vector<string> v1(20);
    v1.SetData(1, "string 1");
    v1.SetData(10, "string 100");
    string str = v1.GetData(10);
    cout << str << endl; //string 100
    v1.SetData(5, "string 5");
    string s5 = v1[5];
    cout << s5 << endl; //string 5
    v1[5] = string("string 5 cast");
    cout << v1[5] << endl; //string 5 cast
}

