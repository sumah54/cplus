#include<iostream>

using namespace std;
class MyClass{
private:
	int num;
public:
	void Initnum(){
		num=0;
	}	
	void Init2num(){
		num=2;

	}
	void Disnum(){
		cout<<num;
	}
};
int main(){
	MyClass we;
	we.Initnum();
	we.Init2num();
	we.Disnum();

}