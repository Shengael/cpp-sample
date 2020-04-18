// Project1_Jour2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "DrawingContext.h"
#include "Factory.h"

int main()
{
    DrawingContext dc;
    
    /*
    Rect rect1(10, 10, 200, 500);
    Rectangle r1(rect1);
    r1.Draw(dc);

    Rect rect2(100, 40, 300, 600);
    Ellipse e1(rect2);
    e1.Draw(dc);
    */
    
    Rect r1(10, 10, 200, 500);
    shared_ptr<Shape> pObj1 = nullptr;
    pObj1 = Factory::CreateShape(ShapeType::rectangle, r1);
    pObj1->DisplayInfo();
    pObj1->Draw(dc);
 

    /*
Shape rect ctor
Rectangle rect ctor
Type:1,Name:Element_num_1,Id:1
**** Rectangle ***** 10, 10
Rectangle dtor
Shape dtor
Press any key to continue . . .

*/

    /*
Shape rect ctor
Rectangle rect ctor
**** Rectangle ***** 10, 10
Shape rect ctor
**** Ellipse ***** 100, 40
Shape dtor
Rectangle dtor
Shape dtor
Press any key to continue . . .

    */
    return 0;
}