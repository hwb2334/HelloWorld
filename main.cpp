#include<iostream>
using namespace std;
void func(int *arr, int l){
	for(int i = 0;i<l-1;++i){
		for(int j=0;j<size-1-i;++j){
			// shm 数组从小到大排序
			if(arr[j]>arr[j+1]){
				tmp = arr[i];
                        	arr[i] = arr[j];
                        	arr[j] = arr[i];
			}
		}
	}
}
int main(){
	int arr[] = {78,57,23,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	func(arr,size);
	// shm 给注释
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
