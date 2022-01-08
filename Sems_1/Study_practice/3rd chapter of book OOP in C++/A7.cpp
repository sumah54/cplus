//investment_calculator
#include<iostream>

using namespace std;

int main(){
	float am,num,interst;
	int years;
	cout <<"Enter the initial amount: ";
	cin >>am;
	cout <<"Enter number of years: ";
	cin >>years;
	cout<<"Enter interest rate(percent per year): ";
	cin >> interst;
	interst /= 100; //converting it into percent
	for (int y=years;y>0;y--){ //starting loop to increase the saved value
	
	
		num=am+(am*interst); //process of saving the investment
	
		//cout<<num<<endl;
	
		am=num; //assigning the value to continue to loop
		
	}
	//cout <<interst<<endl<<am;
	cout<<"At the end of "<<years<<" year(s), you will have "<<am<<" dollars.";
	return 0;
}
