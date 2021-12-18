// Insertion sort is a simple sorting algorithm that works the way we sort playing cards
// Time complexity O(n^2)
// Efficient for small datasets
// Code mostly taken from simple snippets youtube channel


# include<iostream>
using namespace std;


void insertion_sort(int arr[]){
    int j=0;
    int key;

    for(int i=1;i<5;i++){
        key = arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=key;

    }
}

int main(){

    int arr[5];
    cout<<"Enter 5 integers in random order:"<<endl;
    for(int i = 0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"before the sorting algorithm:"<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    cout<<"After sorting algorithm:"<<endl;
    insertion_sort(arr);
    return 0;
}
