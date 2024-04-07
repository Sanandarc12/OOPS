#include<iostream>
using namespace std;

void acceptEle(int arr[],int n){
	cout<<"Enter elements of the array: "<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
}
void displayEle(int arr[],int n){
	cout<<"Array elements: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	cout<<endl;
}
void insertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
void selectionSort(int arr[],int n){
	for(int i=0;i<n;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]< arr[minIndex]){
				minIndex=j;
			}
		}
		swap(arr[minIndex],arr[i]);
	}
}
void bubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main(){
	int arr[100],n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	while(true){
		cout<<"\nMENU\n";
		cout<<"1. Accept elements of the array\n";
		cout<<"2. Display the elements of array\n";
		cout<<"3. Sort array using insertion array\n";
		cout<<"4. Sort array using selection sort\n";
		cout<<"5. Sort array using bubble sort\n";
		cout<<"6. Exit\n";
		
		int choice;
		cout<<"Enter your choice: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				acceptEle(arr,n);
				break;
			case 2:
				displayEle(arr,n);
				break;
			case 3:
				insertionSort(arr,n);
				cout<<"Array sorted using insertion sort"<<endl;
				break;
			case 4:
				selectionSort(arr,n);
				cout<<"Array sorted using selection sort"<<endl;
				break;
			case 5:
				bubbleSort(arr,n);
				cout<<"Array sorted using bubble sort"<<endl;
				break;
			case 6:
				exit(0);
			default:
				cout<<"Invalid choice\n";
		}
	}
	return 0;
}
