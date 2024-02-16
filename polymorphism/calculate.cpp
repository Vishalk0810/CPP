#include<iostream>
using namespace std;

class A
{
	protected:
		int a,b,c,d,e;	
};
class B : public A
{
	public:
		void calculated(int a,int b)
		{
			cout << "Division is : " << a / b << endl;
		}
		void calculated(int a,int b,int c)
		{
			cout << "Substraction is : " << a - b - c << endl;
		}
		void calculated(int a,int b,int c,int d)
		{
			cout << "Multiplication is : " << a * b * c * d << endl;
		}
		void calculated(int a,int b,int c,int d,int e)
		{
			cout << "Addition is : " << a + b + c + d + e << endl;
		}
};
int main()
{
	B b1;
	b1.calculated(20,10);
	b1.calculated(30,20,10);
	b1.calculated(40,30,20,10);
	b1.calculated(50,40,30,20,10);
	return 0;
}