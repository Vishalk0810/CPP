#include<iostream>
using namespace std;

class time
{
	public :
		
	void input()
	{
		int a,h,m,s;
		cout << "Enter the second : ";
		cin >> a;
		h = a/3600;
		a=a%3600;
		m=a/60;
		s=a%60;
		
		cout <<h<<": "<<m<<" : "<<s;
	}
		
};
main()
{
	time t1;
	t1.input();
}
