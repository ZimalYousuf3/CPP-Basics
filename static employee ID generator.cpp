#include<iostream>
using namespace std;

void getNext_Employees(){
	
	static int first_ID = 1000 ;
    static int count = 1 ;
	cout << count << ". ID of Employee: "<< first_ID << endl ; 
    count++ ;
    first_ID++ ;
}

int main(){
	for(int i=1 ; i <= 15 ; i++)
	{
		getNext_Employees() ;
	}
	
	return 0;
}

