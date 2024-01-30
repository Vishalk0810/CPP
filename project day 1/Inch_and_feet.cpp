#include<iostream>
using namespace std;

class inch
{
	public :
		int feet,inch,i,sum=0,sum1=0;
		void ipt()
		{
			cout << "Enter the Feet : ";
	cin >> feet;
	
	cout << "Enter the inches : ";
	cin >> inch;
	
	cout << "Enter the Feet : ";
	cin >> feet;
	
	cout << "Enter the inches : ";
	cin >> inch;
	
	sum = feet + feet;
	sum1 = inch + inch;
	
	for(i=0; i<=inch; i++)
	{
		if(sum1>=12)
		{
			sum1 -=12;
			sum++;
		}
	}
	cout << "Feet " << "-> "<< sum <<endl;
	cout << "Inches " << "-> "<< sum1;
	
		}
	
};
int main()
{
	inch i1;
	i1.ipt();
	return 0;
}
