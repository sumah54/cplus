#include<iostream>

using namespace std;

int main(){
    const int size = 5;
    int arr[size]={10,9,8,7,6};
    int number,small;
    for(int i=0;i<size;i++){
        small=arr[0];
        if(small>arr[i]){
            small=arr[i];
            number = i;

        }
    }
    cout<<"Smallest number in array is: "<<small<<endl;
    cout<<"And its index is: "<<number<<endl;
    
    return 0;
}