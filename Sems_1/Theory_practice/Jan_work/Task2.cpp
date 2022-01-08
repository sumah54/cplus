#include<iostream>

using namespace std;

int main(){
	float held,attended;
	cout<<"Enter number of classes held: ";
	cin >>held;
	cout<<"Enter the number of classes attended: ";
	cin >> attended;
	float per = (attended/held) *100;
	cout<<"Percentage of class attended is: "<<per<<endl;
	if(per>=75)
		cout<<"Student is allowed to sit in exams.";
	else
		cout<<"Student is not allowed to sit in exams.";
	return 0;

}

