#include<iostream>

using namespace std;
int count = 1;
int increment();

int main(){
	increment();
	return 0;
}
int increment(){
	count++;
	if(count<5)
		increment();
	else{
		cout<<"Final value after Recursive function is: "<<count;
	}
}
