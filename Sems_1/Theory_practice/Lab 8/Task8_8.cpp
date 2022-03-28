#include<iostream>

using namespace std;
int smal(int []);
int main(){
    const int size = 5;
    int arr[size]={10,9,8,7,6};
    cout<<smal(arr);
    return 0;
}
int smal(int a[]){
    return a[2];
}