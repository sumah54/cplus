/*Create a three-function calculator for old-style English currency, where money amounts
are specified in pounds, shillings, and pence. (See Exercises 10 and 12 in Chapter 2.)
The calculator should allow the user to add or subtract two money amounts, or to multiply
a money amount by a floating-point number. (It doesn’t make sense to multiply two
money amounts; there is no such thing as square money. We’ll ignore division. Use the
general style of the ordinary four-function calculator in Exercise 4 in this chapter.)*/

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
