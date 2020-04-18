#include "pch.h"
#include "Factory.h"
#include "Rectangle.h"
#include "Ellipse.h"

shared_ptr<Shape> Factory::CreateShape(ShapeType type, Rect rect)
{
	static int guid = 0;
	guid++;

	if (type == ShapeType::none)
		return nullptr;

	shared_ptr<Shape> pObj = nullptr;

	switch (type)
	{
		case ShapeType::rectangle:			
			pObj = make_shared<Rectangle>(rect);
			break;
		
		case ShapeType::ellipse:
			pObj = make_shared<Ellipse>(rect);
			break;
	
		default:
			// FIXME 
			break;
	}

	pObj->_type = type;
	pObj->_id = guid;

	stringstream buffer;
	buffer << "Element_num_" << guid;
	pObj->_name = buffer.str();

	return pObj;
}
