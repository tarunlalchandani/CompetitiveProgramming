#include<bits/stdc++.h>
using namespace std;
template <size_t n>
int largest(int (&arr)[n]){
	return *max_element(arr,arr+n);
}
int main(){
	int arr[] = {10,324,45,90,9808};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<< largest(arr);
	return 0;
}

