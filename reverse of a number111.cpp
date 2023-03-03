#include<iostream>
using namespace std;
int main()
{
	int num = 12345,rem,rev=0;
	while(num!=0){
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
		
	}
	cout<<"the reverse of a number "<<rev<<endl;
	return 0;
}
