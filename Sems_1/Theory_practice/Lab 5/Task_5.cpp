#include<iostream>

using namespace std;

int main(){
	char c;
	int count;
	for (int x =97; x<=122;x++){
		c=x;
		cout<<c<<' ';
		++count;
		if(count==10){
			cout<<endl;
			count=0;
		}
	}
	return 0;
}
