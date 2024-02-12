#include<iostream>
using namespace std;

class Ans
{
	protected:
		int n;
		void get()
		{
			cout << "Enter the value : ";
			cin >> n;
		}
};
class Square : public Ans
{
	public:
		void square()
		{
			get();
			int s;
			s = n * n;
			cout << "square is : " << s << endl << endl;
		}
};
class Qube : public Ans
{
	public:
		void qube()
		{
			get();
			int q;
			q = n * n * n;
			cout << "qube is : " << q << endl << endl;
		}
};
int main()
{
	Square s1;
	Qube q1;
	
	s1.square();
	q1.qube();
	return 0;
}