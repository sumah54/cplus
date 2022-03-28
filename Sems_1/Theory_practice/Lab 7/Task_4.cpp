#include <iostream>
#include<conio.h>
using namespace std;
int count=0;
int display(string);
int main(){
	string roll_no = "21sw038";
	/*cout<<"Enter your roll No. ";
	cin>>roll_no;*/
	display(roll_no);
	return 0;
}
int display(string a){
	
	if(count <=5){
		++count;
		
		getch();
		cout<<a<<endl;
		display(a);
	}
	else{
		return 1;
	}
}
