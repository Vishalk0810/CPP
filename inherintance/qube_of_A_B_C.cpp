#include<iostream>
using namespace std;

class x
{
	protected:
		int a,b,c;	
};
class y : public x
{
	protected:
		int sum=0,cube;
	public:
		void set()
		{
			cout << "Enter the value of A : ";
			cin >> a;
			cout << endl;
			
			cout << "Enter the value of B : ";
			cin >> b;
			cout << endl;
			
			cout << "Enter the value of C : ";
			cin >> c;
			cout << endl;
		}
		void get()
		{
			sum = a + b + c;
			qube = sum * sum * sum;
			
			cout << "Sum of the cube of A,B and C is : " << qube;
		}
		
};
int main()
{
	x x1;
	y y1;
	
	y1.set();
	y1.get();
	return 0;
}