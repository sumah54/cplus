//old_currency_calculator(except_for_dividing)
#include<iostream>

using namespace std;
int main(){
	char c,d,e; //two points
	int pound1,pence1,shelling1; //first number
	int pound2,pence2,shelling2; //second number
	int pound,shelling,pence;
	cout<<"Enter first amount: ";
	cin >>pound1>>c>>shelling1>>d>>pence1;
	cout<<"Enter second amount: ";
	cin>>pound2>>c>>shelling2>>d>>pence2;
	cout<<"Enter the Operator";
	cin>>e;
	if(e=='+'){
	pence = pence1+pence2; //adding pence
	shelling = shelling1+shelling2; //adding shellings
	pound = pound1+pound2; //adding pounds
	if(pence>11){ //increment problem solved for pence
		shelling += 1;
		pence -= 12;
	}
	if(shelling>19){ //increment problem solved for shelling
		pound += 1;
		shelling -= 20;
	}
	cout<<"Total is: \x9c"<<pound<<'.'<<shelling<<'.'<<pence; //answer of the sum of currency
	}
	if(e=='-'){
		if(pence1>pence2)
		pence = pence1-pence2; //adding pence
		else
		pence = pence2-pence1;
		if(shelling1>shelling2)
		shelling = shelling1-shelling2; //adding pence
		else
		shelling = shelling2-shelling1;
		if(pound1>pound2)
		pound = pound1-pound2; //adding pence
		else
		pound = pound2-pound1;
		//int shelling = shelling; //adding shellings
		//int pound = pound1-pound2; //adding pounds
		
		if(pence>11){ //increment problem solved for pence
		shelling += 1;
		pence -= 12;
		}
		if(shelling>19){ //increment problem solved for shelling
		pound += 1;
		shelling -= 20;
		}
		cout<<"Total is: \x9c"<<pound<<'.'<<shelling<<'.'<<pence; //answer of the sum of currency
	}
	if(e=='*'){
	pence = pence1*pence2; //adding pence
	shelling = shelling1*shelling2; //adding shellings
	pound = pound1*pound2; //adding pounds
	if(pence>11){ //increment problem solved for pence
		shelling += 1;
		pence -= 12;
	}
	if(shelling>19){ //increment problem solved for shelling
		pound += 1;
		shelling -= 20;
	}
	cout<<"Total is: \x9c"<<pound<<'.'<<shelling<<'.'<<pence; //answer of the sum of currency
	}
	return 0;			
}
