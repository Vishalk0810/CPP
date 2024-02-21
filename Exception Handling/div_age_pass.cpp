#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout << "Enter the value of A : ";
	cin >> a;
	
	cout << "Enter the value of b : ";
	cin >> b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout << "Division : " << a/b << endl;
		}
	}
	catch(int y)
	{
		cout << "Can't Divisible by 0..." << endl;
	}
	
	int age;
	cout << "Enter your Age : ";
	cin >> age;
	
	try
	{
		if(age<18)
		{
			throw age;
		}
		else
		{
			cout << "You are eligeble to Vote..." << endl;
		}
	}
	catch(...)
	{
		cout << "Can't eligeble to vote..." << endl;
	}
	
	char pass[50],check=0;
	cout << "Enter the Password : ";
	cin >> pass;
	int length = strlen(pass);
	
	for(int i=0; i<length; i++)
	{
		if(pass[i]>=65 && pass[i]<=90)
		{
			check = 1;
		}
	}
	
	try
	{
		if(check!=1)
		{
			throw pass;
		}
		else
		{
			cout << "Your Password is valid..." << endl;
		}
	}
	catch(...)
	{
		cout << "Your Password is not valid..." << endl;
	}
	return 0;
}