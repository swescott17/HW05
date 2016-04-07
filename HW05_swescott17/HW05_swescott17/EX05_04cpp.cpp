#include "EX05_04.h"
using namespace std;

Rectangle2D::Rectangle2D() //no arg constructor
{

	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

Rectangle2D::Rectangle2D(double z, double w, double wid, double hei) //arg constructor
{
	x = z;
	y = w;
	width = wid;
	height = hei;
}

double const Rectangle2D::getx()
{
	return x;
}

double const Rectangle2D::gety()
{
	return y;
}

double const Rectangle2D::getheight()
{
	return height;
}

double const Rectangle2D::getwidth()
{
	return width;
}

double const Rectangle2D::setx(double z)
{
	x = z;
	return x;
}

double const Rectangle2D::sety(double w)
{
	y = w;
	return y;
}

double const Rectangle2D::setheight(double hei)
{
	height = hei;
	return height;
}

double const Rectangle2D::setwidth(double wid)
{
	width = wid;
	return width;
}

double const Rectangle2D::getArea()
{
	return (height)* (width); //area formula
}

double const Rectangle2D::getPerimeter()
{
	return 2 * (height + width); //perimeter formula
}

bool const Rectangle2D::contains(double z, double w)
{
	if (z <= (x + width) && z >= (x - width)) //if the x-coordinate, z, is in between the rectangles x boundaries, then the x-coordinate is contained in the rectangle
	{
		if (w <= (y + height) && w >= (y - height)) //if the y-coordinate, w, is in between the rectangles y boundaries, then the y-coordinate is contained in the rectangle
		{
			return true; //both x and y  coordinates are within the boundaries of the rectangle
		}
		else
		{
			return false; //if both coordinates are not with in the boundaries, then it is not true
		}
	}
	else
	{
		return false; //not within the boundaries
	}
}

bool const Rectangle2D::contains(const Rectangle2D &r)
{
	if ((x + width) >= (r.x + r.width) && (x - width) >= (r.x - r.width)) //checks if the x-coordinates of the rectangle being examined are within the boundaries
	{
		if ((y + height) >= (r.y + r.height) && (y - height) >= (r.y - r.height)) //checks if the y-coordinates are within as well
		{
			return true; //if both are in their respective boundaries, then the function returns true
		}
		else
		{
			return false; //one or more points are not within the boundaries
		}
	}
	else
	{
		return false; //one or more points are not within the boundaries
	}
}

bool const Rectangle2D::overlaps(const Rectangle2D &r)
{

	double j2 = r.x + r.width; //x-coordinate on the left
	double h2 = r.y + r.height; //y-coordinate on the top
	double i2 = r.x - r.width; //x-coordinate on the right
	double k2 = r.y - r.height; //y-coordinate on the bottom


	if (j2 <= (x + width) && j2 >= (x - width)) //checks if the (x,y)'s on the left overlap
	{
		if (h2 <= (y + height) && h2 >= (y - height))
		{
			return true;
		}
		if (k2 <= (y + height) && k2 >= (y - height))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (i2 <= (x + width) && i2 >= (x - width)) //checks if the (x,y)'s on the right overlap
	{
		if (h2 <= (y + height) && h2 >= (y - height))
		{
			return true;
		}
		if (k2 <= (y + height) && k2 >= (y - height))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	else
	{
		return false;
	}
}