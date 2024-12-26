// Binary Search With Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int BinarySearch(int arr[], int left, int right, int key) {
	if (left > right) {
		return -1;
	}
	int mid = left + (right - left) / 2;
	if (arr[mid] == key) {
		cout << "number found";
		return 1;
	}
	else if(arr[mid] > key) {
		BinarySearch(arr, left, mid - 1, key);
	}
	else {
		BinarySearch(arr, mid + 1, right, key);
	}
}
int main()
{
	int n = 10;
	int arr[10] = {5,7,15,22,35,56,63,65,78,99};
	int key = 56;
	int left = 0;
	int right = n - 1;
	cout<<"call the binary search function"<<endl;
	int ans=BinarySearch(arr, left, right, key);
	if (ans == 1) {
		cout << "number found";
	}
	else{
		cout<<"number not found";
	}
}