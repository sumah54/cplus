#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	string name,second_name,city,house_number,apartment_number,state,street_name,space;
	int postal_code;
	cout<<"Your First & Last Name:";cin>>name>>second_name;
	cout<<"Your House Number: ";cin>>house_number;
	cout<<"Street Number: ";cin>>street_name;
	//cout<<"Apartment Number (optional): ";cin>>apartment_number;
	cout<<"City Name:"; cin>>city;
	cout<<"State Name:"; cin>>state;
	cout<<"Postal Code: "; cin>>postal_code;
	cout<<"So, "<<name<<" "<<second_name<<" your address is "<<endl;
//	if(apartment_number!="\r")
//		cout<<apartment_number;
	cout<<"House no: "<<house_number;
	cout<<", "<<"Street no: "<<street_name<<endl;
	cout<<city<<", "<<state<<", "<<postal_code;
	return 0;
}
