#include<iostream>

using namespace std;

int main(){
	
	int odd,even;
	cout<<"Odd	Even"<<endl;
	for(int x=0;x<20;x++){
	if(x%2==0){

	even=x;

		cout<<even;
		}
	if(x%2==1){
		odd=x;
		cout<<'\t'<<odd<<endl;
	}
	}
	return 0;
	
}

