#include<iostream>

using namespace std;

int main(){
	float marks1,marks2,marks3;
	float total = 300;
	cout<<"Enter obtained marks in C++: ";
	cin >>marks1;
	cout<<"Enter obtained marks in Functional English: ";
	cin >>marks2;
	cout<<"Enter obtained marks in EE: ";
	cin >>marks3;
	int marks = marks1+marks2+marks3;
	float per= (marks/total)*100;
	if(per>=90)
	cout<<"Grade: A";
	if(per<90&&per>=80)
	cout<<"Grade: B";
	if(per>=70&&per<80)
	cout<<"Grade: C";
	if(per<70&&per>=60)
	cout<<"Grade: D";
	if(per<60)
	cout<<"Grade: Fail";
	return 0;
	
}
