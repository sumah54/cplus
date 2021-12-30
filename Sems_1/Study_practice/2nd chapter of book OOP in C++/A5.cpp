#include<iostream>

using namespace std;
int main(){
	char x; //declare character
	cout << "give the character: ";
	cin >> x; //input of character (a)
	if (islower(x)){
		cout << 0; //if letter is of lowercase then 0 (0)
	}else{
		cout << 1; //if letter is of uppercase then 1
	}
}
