//final_investment_to_first_investment_time_period_detector
#include<iostream>

using namespace std;

int main(){
	float amount,investment,interest;
	int year=0;
	cout<<"Enter your final amount: ";cin >>investment;
	cout<<"Enter the interest rate: ";cin >>interest;
	cout<<"Enter first amount: ";cin>>amount;
	float a=amount;
	while(a<investment){ //starting loop to increase the saved value	
		a*=(1+(interest/100)); //process of saving the investment	
		year++;
	}
	cout<<"It takes "<<year<<" years after you invest "<<amount<<" to get the final amount of "<<investment<<endl;
	return 0;
	
}
