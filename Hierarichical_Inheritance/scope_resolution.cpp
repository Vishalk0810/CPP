#include<iostream>
using namespace std;

class A
{
	protected:
		int a;
};
class B
{
	protected:
		int a;
};
class C : public A,B
{
		public:
			void get()
			{
			cout << "Enter two values : ";
			cin >> A::a >> B::a;
			cout << endl;
			cout << A::a << endl;
			cout << B::a << endl;
			}
};
int main()
{
	C c1;
	c1.get();
	return 0;
}