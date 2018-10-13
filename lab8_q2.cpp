#include<iostream>
using namespace std;
int func1(int arr[]){
	int a = arr[0];
	for (int i =0;i<10;i++){
		if(arr[i]>a){	
			a = arr[i];}
		
}
	return a;}
int func2(int arr[]){
	int a = arr[0];
	for (int i =0;i<10;i++){
		if(arr[i]< a){	
			a = arr[i];}
		
}
	return a;
}
int func3(int arr[]){
	float sum=0;
	for (int i=0;i<10; i++){
		sum+=arr[i];
	}
	return sum/10;

}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};  
	cout<<"The maximum of the numbers in the array: "<<func1(arr)<<endl;
	cout<<"The minimum of the numbers in the array: "<<func2(arr)<<endl;
	cout<<"The mean of the numbers in the array: "<<func3(arr)<<endl;
	return 0;
}
