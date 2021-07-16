#include <iostream>
using namespace std;

int* prod(int arr[], int s){
	int left[s];
	int right[s];
	left[0] = 1;
	right[s-1] = 1;

	for(int i =1; i<s; i++){
		left[i] = left[i-1] * arr[i-1];
	}

	for(int i = s-2; i>=0 ; i--){
		right[i] = right[i+1] * arr[i+1];
	}

	for(int i =0; i<s; i++){
		arr[i] = left[i] * right[i];
	}

	return arr;
}

int main(){
	int arr[] = {-1,1,0,-3,3};
	int size = 5;
	int * p = prod(arr,size);
	for(int i =0; i<size; i++)
	{
		cout<<p[i]<<" ";
	}

	return 0;
}