#include<iostream>
using namespace std;

class RBI
{
	protected:
		float rate_of_interest,rate_of_interest_1,rate_of_interest_2;
		public:
			void sbi()
			{
				cout << "Enter the rate of interest of the SBI bank : ";
				cin >> rate_of_interest;
			}
			void bob()
			{
				cout << "Enter the rate of interest of the BOB bank : ";
				cin >> rate_of_interest_1;
			}
			void icici()
			{
				cout << "Enter the rate of interest of the ICICI bank : ";
				cin >> rate_of_interest_2;
				
			}
			
};
class SBI : public RBI
{
	public:
		void get()
		{
			sbi();
			cout << "Interest of SBI : " << rate_of_interest << endl << endl ;
		}
};
class BOB : public RBI
{
		public:
		void get()
		{
			bob();
			cout << "Interest of BOB : " << rate_of_interest_1 << endl << endl;
		}
};

class ICICI : public RBI
{
		public:
		void get()
		{
			icici();
			cout << "Interest of ICICI : " << rate_of_interest_2 << endl << endl;
		}
};

int main()
{
	SBI s1;
	s1.get();
	
	BOB b1;
	b1.get();
	
	ICICI i1;
	i1.get();
	
	return 0;
}