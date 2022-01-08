//permutation_and_loops
#include<iostream>

using namespace std;
int main(){
	int guests,chairs; 
	long perm=1; //permutation rule will be applied
	cout<<"Enter number of guests: ";
	cin >>guests;
	cout<<"Enter number of chairs: ";
	cin >>chairs;
	for(int y = guests,n=chairs; n>0;y--,n--){ //loop to permutate the guests on no: of chairs
		perm *=y; 
		//cout<<perm<<endl;
	}
	cout <<"The number of ways "<<guests<<" guests can sit on "<<chairs<<" chairs are "<<perm; //answer
	return 0;
}
