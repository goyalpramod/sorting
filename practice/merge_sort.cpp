#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}


void merge(int arr[],int low,int mid,int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int l[n1];
    int r[n2];

    for(int a = 0;a<n1;a++){
        l[a] = arr[low + a];
    }

    for(int b = 0;b<n2;b++){
        r[b] = arr[mid + 1 + b];
    }

    int i = 0;
    int j = 0;
    int k = low;

    while(i<n1 && j<n2){
        if(l[i]<=r[j]){
            arr[k] = l[i];
            i++;
            k++;
        }else{
            arr[k] = r[j];
            j++;
            k++;
        }
    }

    while(i<n1){
        arr[k] = l[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = r[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid = low + (high - low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main(){
    int arr[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0; 
}