#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5,6,1,5};
	int l = sizeof(arr)/sizeof(arr[1]);
	for(int i =0;i<l;i++){
		for(int j =i+1;j<l;j++){
			if(arr[i] ==arr[j])
			cout<<arr[j]<<"\n";
		}
	}
	return 0;
}
