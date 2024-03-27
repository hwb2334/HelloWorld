#include<iostream>
using namespace std;
void func(int *arr, int l){

}
int main(){
	int arr[] = {78,57,23,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	func(arr,size);
	return 0;
}