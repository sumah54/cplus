#include<iostream>

using namespace std;

class employee{
private:
	int employee_number;
	float employee_salary;
public:
	void setSalary(float a){
		employee_salary =a;
	}
	float getSalary(){
		return employee_salary;

	}
	void setNumber(int a){
		employee_number=a;
	}
	int getNumber(){
		return employee_number;

	}

};

int main(){
	employee one,two,three;
	int a;
	float b;
	cout<<"Enter employee number: ";
	cin>>a;
	one.setNumber(a);
	cout<<"Enter employee salary: ";
	cin>>b;
	one.setSalary(b);
	cout<<"Enter employee number: ";
	cin>>a;
	two.setNumber(a);
	cout<<"Enter employee salary: ";
	cin>>b;
	two.setSalary(b);
	cout<<"Enter employee number: ";
	cin>>a;
	three.setNumber(a);
	cout<<"Enter employee salary: ";
	cin>>b;
	three.setSalary(b);
	cout<<"Employee Number: "<<one.getNumber()<<endl;
	cout<<"Employee Salary: "<<one.getSalary()<<endl;	
	cout<<"Employee Number: "<<two.getNumber()<<endl;
	cout<<"Employee Salary: "<<two.getSalary()<<endl;
	cout<<"Employee Number: "<<three.getNumber()<<endl;
	cout<<"Employee Salary: "<<three.getSalary()<<endl;
	return 0;
}