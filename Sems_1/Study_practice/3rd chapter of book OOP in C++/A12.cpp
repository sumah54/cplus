#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char symbol,slash,ask;
	float num1,num2,num3,num4;
	do{	
		cout<<"Enter first fraction: ";
		cin>>num1>>slash>>num2;
		cout<<"Enter Operator: ";
		cin>>symbol;
		cout<<"Enter second fraction: ";
		cin>>num3>>slash>>num4;
		//cout<<num1<<endl<<num2<<endl<<num3<<endl<<num4<<endl;
		if(symbol =='+'){
			int sum1 = (num1*num4+num2*num3);
			int sum2= (num2*num4);
			cout<<"Addition: "<<sum1<<"/"<<sum2;
		}
		if(symbol =='-'){
			int sub1 = (num1*num4-num2*num3);
			int sub2= (num2*num4);
			cout<<"Subtraction: "<<sub1<<"/"<<sub2;
		}
		if(symbol =='*'){
			int mul1 = (num1*num3);
			int mul2= (num2*num4);
			cout<<"Multiplication: "<<mul1<<"/"<<mul2;
		}
		if(symbol =='/'){
			int div1 = (num1*num4);
			int div2= (num2*num3);
			cout<<"Division: "<<div1/div2;
		}
		cout<<"\nDo you wish to continue? (y/n):\n";
	}while((ask=getche())!='n'&&(ask=getche())!='\r');
	return 0;
}	
