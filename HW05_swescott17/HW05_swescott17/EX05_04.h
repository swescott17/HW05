#ifndef _H_EX04_
#define _H_EX04_
using namespace std;

//EX05_04
class Rectangle2D
{
private:
	double  x; //Center of the Rectangle, the x-coordinate
	double  y; //Center of the Rectangle, the y-coordinate
	double  width; //width of the rectangle
	double  height; //height of the rectangle
public:
	Rectangle2D(); //no arg constructor
	Rectangle2D(double z, double w, double wid, double hei); //arg constructor that creates a rectangle with specified qualities
	double const getx(); //returns x-coordinate
	double const gety(); //returns y-coordinate
	double const setx(double z); //sets the x-coordinate
	double const sety(double w); //sets the y-coordinate
	double const getwidth(); //returns the width
	double const getheight(); //returns the height
	double const setheight(double hei); //sets the height
	double const setwidth(double wid); //sets the width
	double const getArea(); //returns the area of a rectangle
	double const getPerimeter(); //returns the perimeter of a rectangle
	bool const contains(double z, double w); //checks to see if a point lies inside a rectangle
	bool const contains(const Rectangle2D &r); //checks if a rectangle is inside a rectangle
	bool const overlaps(const Rectangle2D &r); //checks if a rectangle overlaps with another rectangle
};

#endif
