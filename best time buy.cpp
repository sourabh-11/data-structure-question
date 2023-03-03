#include<iostream>
using namespace std;

int maxprofit(int price[],int n)
{
	int buy  = price[0],max_profit = 0;
	for(int i =1;i<n;i++)
	{
		if(buy>price[i])
		buy  = price[i];
		else if(price[i]-buy>max_profit)
		max_profit = price[i]-buy;
		
	}
	return max_profit;
	
	
	
}
int main()
{
	int price[]={5,2,3,7,8};
	int size= sizeof(price)/sizeof(price[0]);
	int max_profit = maxprofit(price,size);
	cout<<max_profit<<endl;
	return 0;
	
	
}
