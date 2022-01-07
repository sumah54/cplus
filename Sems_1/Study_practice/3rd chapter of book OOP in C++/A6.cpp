//factorial_program_in_a_loop
#include<iostream>

using namespace std;

int main(){
	unsigned long x;
	do{
		cout<<"Enter number to get Factorial: ";
		cin >> x;
		unsigned long z=1;
		for (int y=x;y>0;y--){
			z*= y;
		}
		if(x ==0){
			cout<<"Answer is zero so that's why it is going to end :)";
			break;
		}
		cout <<"Factorial is: "<<z<<endl;
		
	}while(x!= 0);
	return 0;
	
	
}
