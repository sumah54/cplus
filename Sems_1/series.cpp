#include<iostream>

using namespace std;

int main(){
	const long limit=4294967295;
	unsigned long next = 0;
	unsigned long last = 1;
	while(next<limit/2){
		cout<<last<<" ";
		unsigned long sum=next+last;
		next=last;
		last=sum;
	}
	cout<<endl;
	return 0;
}

		
	

