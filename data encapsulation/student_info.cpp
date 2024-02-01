#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	int stu_id,stu_age;
	string stu_name,stu_course,stu_email,stu_city,stu_college;

	public :

	void input()
	{
		cout << "Enter the student ID : ";
		cin >> stu_id;
		
		cout << "Enter the student Age : ";
		cin >> stu_age;
		
		cin.ignore();
		
		cout << "Enter the student Name : ";
		getline(cin,stu_name);
		
		cout << "Enter the Course of student : ";
		getline(cin,stu_course);
		
		cout << "Enter the Email of student : ";
		getline(cin,stu_email);
		
		cout << "Enter the city : ";
		getline(cin,stu_city);
		
		cout << "Enter the College of the student : ";
		getline(cin,stu_college);
		cout << endl;
	}
	
	void output()
	{
		cout << "ID : " << stu_id << endl;
		cout << "Age : " << stu_age << endl;
		cout << "Name : " << stu_name << endl;
		cout << "Course : " << stu_course << endl;
		cout << "City : " << stu_city << endl;
		cout << "Email : " << stu_email << endl;
		cout << "College : " << stu_college << endl;
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
