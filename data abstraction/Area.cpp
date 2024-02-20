//Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
//- the area of a circle
//- the area of a triangle
//- the area of a rectangle
//- use one single pure virtual function named calculate() to perform all the above operations

#include<iostream>
using namespace std;

class Area
{
	protected:
		float Height,Width,Radius,area;
		float Pi=3.14;
		virtual void calc() = 0;
};
class Circle : public Area
{
	public:
		void set()
		{
			cout << "Enter the Radius of the Circle : ";
			cin >> Radius;
		} 
		void calc()
		{
			area = Pi *(Radius * Radius);
		}
		void get()
		{
			cout << "Area of the Circle is : " << area << endl << endl;
		}
};
class Triangle : Area
{
	public:
	void set()
	{
		cout << "Enter the Height of the Triangle : ";
		cin >> Height;
		
		cout << "Entet the Width of the Triangle :";
		cin >> Width;
	}
	void calc()
	{
		area = (Height * Width) * 1/2;
	}
	void get()
		{
			cout << "Area of the Triangle is : " << area << endl << endl;
		}
};
class Rectangle : Area
{
	public:
	void set()
	{
		cout << "Enter the Height of the Rectangle : ";
		cin >> Height;
		
		cout << "Entet the Width of the Rectangle :";
		cin >> Width;
	}
	void calc()
	{
		area = Height * Width;
	}
	void get()
		{
			cout << "Area of the Rectangle is : " << area << endl << endl;
		}
};

int main()
{
	Circle c1;
	Triangle t1;
	Rectangle r1;
	
	c1.set();
	c1.calc();
	c1.get();
	
	t1.set();
	t1.calc();
	t1.get();
	
	r1.set();
	r1.calc();
	r1.get();
	return 0;
}