#include<iostream>

using namespace std;
struct employee{
    int employee_number;
    float employee_salary;
};
int main()
{
    employee one,two;
    cout<<"Enter the number of employee: ";
    cin>>one.employee_number;
    cout<<"Enter the salary of employee: ";
    cin>>one.employee_salary;    
    cout<<"Enter the number of employee: ";
    cin>>two.employee_number;
    cout<<"Enter the salary of employee: ";
    cin>>two.employee_salary;
    cout<<"Employee number: "<<one.employee_number;
    cout<<"Employee Salary:"<<one.employee_salary;
    cout<<"Employee number: "<<two.employee_number;
    cout<<"Employee Salary:"<<two.employee_salary;


} // namespace std;
