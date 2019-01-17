#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char name[]= "ALFREDO";
	char *ptr = name;
	
	for (int x=0; x<strlen (name); x++)
	{
		cout<<*ptr<<endl;
		ptr++;
	}
}
