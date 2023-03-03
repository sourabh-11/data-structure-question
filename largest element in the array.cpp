#include<iostream>
using namespace std;
 
 int largeElement(int arr[],int n)
 {
 	int max = arr[0];
 	for(int i=1;i<n;i++)
 	{
 		if(arr[0]<arr[i])
 		max = arr[i];
 		else
 		return max;
	 }
	 
 }
 int main()
 {
 	int arr[] ={1,2,3,4,5,6,7,8,0};
 	int n = sizeof(arr)/sizeof(arr[0]);
 	cout<<"largest element in the array is "<<largeElement(arr,n);
 	
 }
