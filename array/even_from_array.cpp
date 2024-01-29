#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the size of the Array : ";
	cin >> n;
	
	int a[n],i;
	for(i=0; i<=n; i++)
	{
		cout << "a[" << i << "] -> " ;
		cin >> a[i];
		
	}
	cout << endl;
	
	for(i=0; i<=n; i++)
	{
		if(a[i]%2==0)
		{
			cout << "Even elements are -> " << a[i] << " ";
		}
	}
	return 0;
	
}