#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int slargest(int arr[], int n){
    int largest=arr[0], secondlargest=INT_MIN;
//- finding largest element
    for (int i = 0; i < n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }

    }
    //- finding second largest element

    for (int i = 0; i < n;i++){

        if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest = arr[i];
        }
        
    }

    return secondlargest;
}

int main(){

    int arr[100], n;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter array elements" << endl;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = slargest(arr, n);

    cout << "Second largest: " << result;

}
