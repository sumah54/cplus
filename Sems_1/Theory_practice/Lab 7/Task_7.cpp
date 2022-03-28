#include<iostream>
#include<conio.h>
using namespace std;
char c;
int count=0;

int username(string&);
int main(){
	string name;
	cin>>name;
	username(name);
	return 0;
}
int username(string& a){
	if(count<a.length()){
		cout<<a[count]<<endl;
		++count;
		username(a);
	}
	else{
		return 1;
	}
}
