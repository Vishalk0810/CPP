#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	int cust_id,cust_age,cust_simcard_validity;
	string cust_name,cust_mobile_number,cust_city,cust_telecom_brand_name;

	public :

	void input()
	{
		cout << "Enter the customber ID : ";
		cin >> cust_id;
		
		cout << "Enter the customber Age : ";
		cin >> cust_age;
		
		cout << "Enter the sim card validity of customber : ";
		cin >> cust_simcard_validity;
		
		cin.ignore();
		
		cout << "Enter the customber Name : ";
		getline(cin,cust_name);
		
		cout << "Enter the mobile number of customber : ";
		getline(cin,cust_mobile_number);
		
		cout << "Enter the city : ";
		getline(cin,cust_city);
		
		cout << "Enter the telecom brand name of the customber : ";
		getline(cin,cust_telecom_brand_name);
		cout << endl;
	}
	
	void output()
	{
		cout << "ID : " << cust_id << endl;
		cout << "Age : " << cust_age << endl;
		cout << "sim card : " << cust_simcard_validity << endl;
		cout << "Name : " << cust_name << endl;
		cout << "Mobile number : " << cust_mobile_number << endl;
		cout << "City : " << cust_city << endl;
		cout << "telecom brand name : " << cust_telecom_brand_name << endl;
		cout << endl;
	}
};

int main()
{
	int n,i;
	cout << "Enter the size of the Array : ";
	cin >> n;
	
	Student s[n];
	
	for(i=0; i<n; i++)
	{
		s[i].input();
		s[i].output();
	}

	return 0;
}
 