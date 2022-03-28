#include <iostream>

using namespace std;

class Cal{
private:
	float num1;
	float num2;
public:
	int Addnum(float num1,float num2){
		return (num1+num2);
	}
		int Subnum(float num1,float num2){
		return (num1-num2);
	}
		int Mulnum(float num1,float num2){
		return (num1*num2);
	}
		float Divnum(float num1,float num2){
		return (num1/num2);
	}
};
int main(){
	int a=2,b=3;
	Cal one;
	cout<<one.Addnum(a,b)<<endl;
	cout<<one.Subnum(a,b)<<endl;	
	cout<<one.Mulnum(a,b)<<endl;
	cout<<one.Divnum(a,b)<<endl;
}	
