#include<iostream>
using namespace std;
int func(int arr[],int n){
	int sum=0;
	for (int i=0;i<n; i++){
		sum+=arr[i];
	}
	return sum;

}
int main(){
	int arr[5]={1,2,3,4,5};  
	cout<<"The sum of the numbers in the array: "<<func(arr,5)<<endl;
	return 0;
}
