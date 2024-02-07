#include<iostream>
using namespace std;

class p
{
	protected:
		float celsius;
		public:
			void set()
			{
				cout << "Enter the Celsius : ";
				cin >> celsius;
			}
};
class q : public p
{
	protected:
		float fahrenheit;
		public:
			void F()
			{
				fahrenheit = (celsius * 9/5) + 32;
			}
};
class r : public q
{
	protected:
		float kelvin;
		public:
			void K()
			{
				set();
				F();
				kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
			}
			void get()
			{
				cout << "Celsius into Fahrenheit : " << fahrenheit << endl;
				cout << "Fahrenheit into Kelvin : " << kelvin;
			}
};
int main()
{
	
	
	
	r r1;
	r1.K();
	r1.get();
	
	
	return 0;
}