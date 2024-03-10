#include <iostream>
using std::endl, std::cout;
#define _USE_MATH_DEFINES
#include <math.h>

class Shape
{
public:
	Shape() {}
	virtual double area() const = 0;
};

class PlanarShape : public Shape
{
protected:
	double x, y;
public:
	PlanarShape(double x, double y) : Shape(), x(x), y(y) {}
	virtual double circumference() const = 0;
	virtual double area() const = 0;
};

class VolumetricShape : public Shape
{
protected:
	double x, y ,z;
public:
	VolumetricShape(double x, double y, double z) : Shape(), x(x), y(y), z(z) {}
	virtual double area() const = 0;
	virtual double volume() const = 0;
};

class Square : public PlanarShape
{
private:
	double edge;
public:
	Square() : PlanarShape(0, 0), edge(1) {}
	Square(double x, double y) : PlanarShape(x, y), edge(1) {}
	Square(double x, double y, double edge) : PlanarShape(x, y), edge(edge) {}
	double circumference() const {return this->edge * 4.0;}
	double area() const {return this->edge * this->edge;}
};

class Cube : public VolumetricShape
{
private:
	double edge;
public:
	Cube() : VolumetricShape(0, 0, 0), edge(1) {}
	Cube(double x, double y, double z) : VolumetricShape(x, y, z), edge(1) {}
	Cube(double x, double y, double z, double edge) : VolumetricShape(x, y, z), edge(edge) {}
	double volume() const {return this->edge * this->edge * this->edge;}
	double area() const {return 6 * this->edge * this->edge;}
};

class Circle : public PlanarShape
{
private:
	double radius;
public:
	Circle() : PlanarShape(0, 0), radius(1) {}
	Circle(double x, double y) : PlanarShape(x, y), radius(1) {}
	Circle(double x, double y, double radius) : PlanarShape(x, y), radius(radius) {}
	double circumference() const {return this->radius * 2.0 * M_PI;}
	double area() const {return M_PI * this->radius * this->radius;}
};

class Sphere : public VolumetricShape
{
private:
	double radius;
public:
	Sphere() : VolumetricShape(0, 0, 0), radius(1) {}
	Sphere(double x, double y, double z) : VolumetricShape(x, y, z), radius(1) {}
	Sphere(double x, double y, double z, double radius) : VolumetricShape(x, y, z), radius(radius) {}
	double volume() const {return (4.0/3.0) * M_PI * this->radius * this->radius * this->radius;}
	double area() const {return 4 * M_PI * this->radius * this->radius;}
};

int main(){
	PlanarShape *planar[]=
	{
		new Circle() , //unit circle at (0,0)
		new Square(), // unit square, top-left corner at (0,0)
		new Circle(4,8), // unit circle at (4,8)
		new Square(15,16), // unit square, top-left corner at (15,16)
		new Circle(23,42,108), // circle at (23,42), radius is 108
		new Square(4,8,15) // top-left corner at (4,8), edge length is 1
	};

	int lengthOfPlanar= sizeof(planar)/sizeof(PlanarShape*);
	for (int i=0;i<lengthOfPlanar;++i)
	cout << "Circumference of " << i << "th planar shape is "
	<< planar[i]->circumference() << endl;

	VolumetricShape *volumetric[]=
	{
		new Sphere() , //unit sphere at the origin
		new Cube(), // unit cube, top-left-rear corner is at the origin
		new Sphere(4,8,15), // unit sphere at (4,8,15)
		new Cube(16,23,42), // unit cube, top-left-rear corner at (16,23,42)
		new Sphere(16,23,42,108), // sphere at (16,23,42), radius is 108
		new Cube(4,8,15,16) // top-left-rear corner at (4,8,15), edge length is 16
	};

	int lengthOfVolumetric= sizeof(volumetric)/sizeof(VolumetricShape*);
	for (int i=0;i<lengthOfVolumetric;++i)
	cout << "Volume of " << i << "th volumetric shape is "
	<< volumetric[i]->volume() << endl;

	Shape **shapes;
	int lengthOfShapes=lengthOfPlanar+lengthOfVolumetric;
	shapes= new Shape*[lengthOfShapes];

	for (int i=0;i<lengthOfPlanar;++i)
	shapes[i]=planar[i];

	for (int i=0,j=lengthOfPlanar;i<lengthOfVolumetric;++i,++j)
	shapes[j]=volumetric[i];

	for (int i=0;i<lengthOfShapes;++i)
	cout << "Area of " << i << "th shape is " << shapes[i]->area() << endl;

	for (int i=0;i<lengthOfPlanar;++i)
	delete planar[i];
	for (int i=0;i<lengthOfVolumetric;++i)
	delete volumetric[i];
	delete []shapes;
	return 0;
}