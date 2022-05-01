#include<iostream>
using namespace std;

void merge_sort(int arr[], int left, int right);
void merge(int arr[], int left, int middle, int right);

int main(){
    int arr[5] = {2,10,1,3,19};
    cout<<"array before sorting:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    merge_sort(arr, 0, 4);

    cout<<"array after sorting:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

return 0;

}
void merge(int arr[], int left, int middle, int right){
    int i = left;
    int j = middle+1;
    int k = left;
    //temp array
    int temp[5];
    
    //two pointer approach to compare the two lists
    while(i<=middle && j<=right){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            k++;
            i++;
        }
        else{
            temp[k]=arr[j];
            k++;
            j++;
        }
    }

    //copy remaining elements in the left half
    while(i<=middle){
        temp[k]=arr[i];
        i++;
        k++;
    }

    //copy remaining elements in the right half
    while(j<=right){
        temp[k] = arr[j];
        j++;
        k++;
    }

    //copy the temp array to the original array
    for(int p=left;p<=right;p++){
        arr[p]=temp[p];
    }
}

void merge_sort(int arr[], int left, int right){
    if(left<right){
        int m = (left+right)/2;
        merge_sort(arr, left, m);
        merge_sort(arr, m+1, right);
        merge(arr, left, m, right);
    }
}

























