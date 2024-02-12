#include<iostream>
using namespace std;

class Shape
{
	protected:
		int Height,Width;
		void get()
		{
			cout << "Enter the Height : ";
			cin >> Height;
			cout << "Enter the Width : ";
			cin >> Width;
		}
};
class Rectangle : public Shape
{
	public:
		void rectangle()
		{
			get();
			int rec;
			rec = Height * Width;
			cout << "Area of Rectangle is : " << rec << endl << endl;
		}
};
class Triangle : public Shape
{
		public:
		void triangle()
		{
			get();
			int tri;
			tri =(Height * Width) * 1/2;
			cout << "Area of Triangle is : " << tri << endl << endl;
		}
};
int main()
{
	Rectangle r1;
	Triangle t1;
	
	r1.rectangle();
	t1.triangle();
	return 0;
}