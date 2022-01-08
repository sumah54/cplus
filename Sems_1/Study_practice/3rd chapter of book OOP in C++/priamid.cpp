//Questin5
#include<iostream>
#include<iomanip>
using namespace std;

int main(){/*
	//king's work
	int space =9;
	for (int x = 1; x <=9;x+=2){
		if (x > 1){
			cout << endl;
			
		}
		cout<< setw(space);
		space -= 1;
		for ( int i= 1; i <= x;i++){
			cout <<'x';
		}
	}
	cout<<endl<< setfill('-')<<setw(15)<<"OR"<<setw(14)<<'-';
	cout<<setfill(' ')<<setw(0);
	*/
	//my work
	int x = 20; //defining spaces
	for (int a=0;a<40;a+=1){ //making a loop for rows
		if(a>1){ //if columns increases than 1 then it happens
			cout<<endl;
		}
		cout<<setw(x); //spaces before priamid
		x--; //decrease spaces after every interval
		for (int y=1;y<a;y++){ //making a loop for columns
			cout<<'x'; //output x equal to column number
		}
	}
	cout<<endl<< setfill('-')<<setw(15)<<"OR"<<setw(14)<<'-';
	
	return 0;
}
