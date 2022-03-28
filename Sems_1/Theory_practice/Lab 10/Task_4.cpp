#include<iostream>

using namespace std;
class Count{
private:
	static int serial_number;
	int id;
public:
	Count(){
		serial_number++;
		id=serial_number;
	}
	void getnum(){
		cout<<id;
	}

};
int Count:: serial_number = 0;
int main(){
	Count one,two;
	one.getnum();
	two.getnum();
return 0;
}
