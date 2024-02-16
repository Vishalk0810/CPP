#include<iostream>
using namespace std;

class Msg
{
	string msg;
	public : 
		Msg(string msg)
		{
			this->msg=msg;
		}
		void print()
		{
			cout << msg << endl;
		}
		void print(string newMsg)
		{
			cout << msg << " " << newMsg << endl;
		}
};

int main()
{
	Msg m1("Hello");
	
	m1.print();
	m1.print("World");
	
	return 0;
}