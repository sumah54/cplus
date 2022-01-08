#include<iostream>

using namespace std;
int main(){
	int x=2,y=5,z=0;
	if(x==2)
		cout<<"x == 2 is True"<<endl;
	if(x!=5)
		cout<<"x!= 5 is True"<<endl;
	if(x!=5&&y<=5)
		cout<<"x!=5 && y<=5 is True"<<endl;
	if(z!=0 || x==2)
		cout<<"z!=0 || x==2 is Ture"<<endl;
	if(!(y<10))
		cout<<"!(y<10) is True"<<endl;
	return 0;
	
}
