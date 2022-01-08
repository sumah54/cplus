#include<iostream>

using namespace std;

int main(){
/*	int amount,investment,interest, years;
	cout<<"Enter your final amount: ";
	cin >>investment;
	cout<<"Enter the interest rate:";
	cin >>interest;
	for (int y=1,x=investment;x>1;x--,y++){ //starting loop to increase the saved value
	
	
		amount=investment-(investment*interest); //process of saving the investment
	
		cout<<amount<<endl;
		
		investment=amount;
	//	years +=y; //assigning the value to continue to loop
	}
	cout<<years<<endl;
	return 0;*/
	

	float final_amount, amount, interest, temp;
	int year=0;
	cout << "Enter the final amount you want to get in particular year: ";
	cin >> final_amount;
	cout << "Enter the principal amount: ";
	cin >> amount;
	cout << "Enter the rate of interest: ";
	cin >> interest;

	temp = amount;

	while(temp<final_amount){
		temp *= (1+(interest/100));
		year++;
	}
	cout << "It will take " << year << " years at " << interest << " of interest to reach the final amount " << final_amount << endl;
	return 0;
}
