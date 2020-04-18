// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "File.h"

class Product
{
public:
    Product() 
    { 
        cout << "ctor" << endl; 
        _name = "";
        _price = 0.0;
    }

    ~Product() { cout << "dtor" << endl; }

public:
    void DisplayInfo()
    {
        cout << _name << ", " << _price << endl;
    }

public:
    string _name;
    float _price;

private:
    string _barCode;
};

int main()
{

    File file2;
    file2.SetFileName("toto.txt");
    if (file2.Open(Mode::Write) == false)
    {
        cout << "Error !" << endl;
        return -1;
    }

    file2.Write("Hello AL2-T1");
    file2.Close();


    return 0;

    /*
    Hello AL2-T1



    ctor
Close
dtor


ctor
ctor
Close
ctor
Close
Close
dtor
dtor
dtor*/

    Product p1;
    p1._name = "coca-cola";
    p1._price = 1.25;
    p1.DisplayInfo();

    /*
ctor
coca-cola, 1.25
Hello World!
30
0x010FF67C
dtor

    */

    cout << "Hello World!" << endl;

    int i;
    float f;
    double d;
    char c;
    long l;
    long long ll;

    int i2 = 10;
    int* ptr = &i2; // 0x00012BC4
    *ptr = 20;

    int* ptr2 = ptr;
    *ptr2; // 20
    *ptr2 = 30;

    cout << i2 << endl;
    cout << "0x" << ptr << endl;


    
    /*
Hello World!
30
0x00D3FE10
*/
}
