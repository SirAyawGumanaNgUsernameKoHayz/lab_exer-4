#include <iostream>
using namespace std;

int main()
{
	int numero[5];
	int *ptr =numero; 
	
	cout<<"Access 5 numbers:"<< endl;
	cin>>numero[0]>>numero[1]>>numero[2]>>numero[3]>>numero[4];
	
	cout<<"You put the numbers:"<< endl;
	for(int i = 0;i < 5; i++)
	{
		cout<< *ptr << endl;
		ptr++;
	} 

}
