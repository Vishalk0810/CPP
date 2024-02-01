#include<iostream>
#include<string.h>
using namespace std;
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity
class Hotel
{
	int hotel_id,hotel_staff_quantity,hotel_room_quantity;
	float hotel_rating;
	string hotel_type,hotel_location;
	static string hotel_name,hotel_establish_year;

	public :

	void input()
	{
		cout << "Hotel ID : ";
		cin >> hotel_id;
		
		cout << "Hotel Rating : ";
		cin >> hotel_rating;
		
		cout << "Hotel Staff Quantity : ";
		cin >> hotel_staff_quantity;
		
		cout << "Hotel Room Quantity : ";
		cin >> hotel_room_quantity;
		
		cin.ignore();
		
		cout << "Hotel Type : ";
		getline(cin,hotel_type);
		
		cout << "Hotel Location : ";
		getline(cin,hotel_location);
		
		cout << endl;
	}
	
	void output()
	{
		cout << "Hotel Name : " << hotel_name << endl;
		cout << "Hotel Establish Year : " << hotel_establish_year << endl;
		cout << "-----------------------------------------" << endl;
		cout << "Hotel ID : " << hotel_id << endl;
		cout << "Hotel Rating : " << hotel_rating << endl;
		cout << "Hotel Staff Quantity : " << hotel_staff_quantity << endl;
		cout << "Hotel Room Quantity : " << hotel_room_quantity << endl;
		cout << "Hotel Type : " << hotel_type << endl;
		cout << "Hotel Location : " << hotel_location << endl;
		cout << endl;
	}
};
	string Hotel::hotel_name="Real Dine";
	string Hotel::hotel_establish_year="2010";

int main()
{
	int n,i;
	cout << "Entries : ";
	cin >> n;
	
	Hotel s[n];
	
	for(i=0; i<n; i++)
	{
		s[i].input();
	}
	for(i=0; i<n; i++)
	{
		s[i].output();
	}

	return 0;
}
 