// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "File.h"

class Product
{
public:
    Product() 
    { 
        //cout << "ctor" << endl; 
        _name = "";
        _price = 0.0;
    }

    Product(string name, float price)
    {
        //cout << "ctor" << endl;
        _name = name;
        _price = price;
    }

    ~Product() 
    { 
        //cout << "dtor" << endl; 
    }

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

class SuperMkt
{
public:
    SuperMkt() {}
    ~SuperMkt() {}

public:
    void GetPromotions()
    {
        for (shared_ptr<Product> product 
            : _products)
        {
            if (product->_price < 2)
            {
                product->_price = 
                    product->_price * 0.80;

                _promotions.push_back(product);
            }
        }
    }

public:
    vector<shared_ptr<Product>> _products;
    vector<shared_ptr<Product>> _promotions;
};

void OnEach(string str)
{
    cout << str << endl;
}

int main()
{
    Product p10;
    p10._name = "10 lego";
    p10._price = 7.5;

    Product* pObj = new Product();
    pObj->_name = "camembert";
    pObj->_price = 2.10;
    pObj->DisplayInfo();
    delete pObj;

    unique_ptr<Product> pObj2(new Product());
    pObj2->_name = "bonbon";
    pObj2->_price = 0.10;
    pObj2->DisplayInfo();

    //unique_ptr<Product> pObj3 = nullptr;
    //pObj3 = pObj2;

    shared_ptr<Product> pS1 = nullptr;
    pS1 = make_shared<Product>("saucisson", 3.15);
    pS1->DisplayInfo();

    shared_ptr<Product> pS2 = pS1;
    pS2->_price = 2.70;
    pS2->DisplayInfo();

    SuperMkt carrouf;

    for (int i = 0; i < 1000000; ++i)
    {
        shared_ptr<Product> pr1 = make_shared<Product>(
            "salade", 1);
        shared_ptr<Product> pr2 = make_shared<Product>(
            "steak", 2.60);
        shared_ptr<Product> pr3 = make_shared<Product>(
            "evian", 0.50);

        carrouf._products.push_back(pr1);
        carrouf._products.push_back(pr2);
        carrouf._products.push_back(pr3);
    }
    cout << "done alloc ok";
    getchar();

    return 0;

    carrouf.GetPromotions();
    for (shared_ptr<Product> promo : carrouf._promotions)
    {
        promo->DisplayInfo();
    }

    /*
    salade, 0.8
evian, 0.4


saucisson, 3.15
saucisson, 2.7
    */

    /*
ctor
ctor
camembert, 2.1
dtor
ctor
bonbon, 0.1
dtor
dtor
    */

    /*
ctor
ctor
camembert, 2.1
dtor
dtor
    */
    return 0;

    File file2;
    file2.SetFileName("toto.txt");
    if (file2.Open(Mode::Write) == false)
    {
        cout << "Error !" << endl;
        return -1;
    }

    file2.Write("Hello AL2-T1");
    file2.Close();


    File file3;
    file3.SetFileName("toto.txt");
    file3.Open(Mode::Read);
    string text = "";
    file3.Read(text);
    file3.Close();

    cout << text << endl;

    for (char c : text)
    {
        cout << c << endl;
    }

    vector<int> v1 { 1,2,3,4,5 };
    for (int i : v1)
    {
        cout << i << endl;
    }

    vector<string> v2 { "Edith", "Lisa", "Audrey" };
    // Modern C++
    for (string s : v2)
    {
        cout << s << endl;
    }

    for (auto element : v2)
    {
        cout << element << endl;
    }

    // C++98
    for (vector<string>::const_iterator it = v2.begin();
        it != v2.end(); ++it)
    {
        string str = *it;
        cout << str << endl;
    }

    for (auto it = v2.begin() ; it != v2.end() ; ++it)
    {
        string str = *it;
        cout << str << endl;
    }

    for_each(v2.begin(), v2.end(), OnEach);

    for_each(begin(v2), end(v2), [](string str) {
        cout << str << endl;
        });

    auto fn = []() { cout << "Helo Marc" << endl; };
    fn(); // Helo Marc

    return 0;

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
