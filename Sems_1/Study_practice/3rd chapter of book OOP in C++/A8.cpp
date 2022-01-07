//continuing_to_loop_the_sum_of_old_british_currency
#include<iostream>

using namespace std;

int main(){
	char c,d,e; //two points and one loop rescursive answer
	int pound1,pence1,shelling1; //first number
	int pound2,pence2,shelling2; //second number
	do{
		cout<<"Enter first amount: ";
		cin >>pound1>>c>>shelling1>>d>>pence1;
		cout<<"Enter second amount: ";
		cin>>pound2>>c>>shelling2>>d>>pence2;
		int pence = pence1+pence2; //adding pence
		int shelling = shelling1+shelling2; //adding shellings
		int pound = pound1+pound2; //adding pounds
		if(pence>11){ //increment problem solved for pence
			shelling += 1;
			pence -= 12;
		}
		if(shelling>19){ //increment problem solved for shelling
			pound += 1;
			shelling -= 20;
		}
		cout<<"Total is: \x9c"<<pound<<'.'<<shelling<<'.'<<pence; //answer of the sum of currency
		cout<<"\nDo you wish to do it again? (y/n): "; //asking to loop again for answer
		cin>>e;
	}while(e!='n');
	return 0;
} //end of main_function
