
// It has O(n^2) time complexity, making it inefficient on large lists
// The algorithm divides the input into two parts: 
// The sublist of items already sorted, which is built up from left to right at the front(left) of list
// and the sublist of items remaining to be sorted occupy the rest of the list
// Initially, the sorted sublist is empty and the unsorted sublist is the entire input list
// The algorithm proceeds by finding the smallest or largest element in the unsorted sublist,
// exchanging it with the leftmost unsorted element and moving the sublist boundaries one element to 
// the right
// Code is mostly from coding snippets youtube channel

# include<iostream>
using namespace std;

//in cpp arrays are passed by address  and not by value
void selection_sort(int arr[]){
    
    for(int i =0;i<4;i++){
        int min = i;
        for(int j = i+1;j<5;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min!=i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;

        }
    }
    cout<<"Sorted Array:"<<endl;
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

}

int main(){

    int arr[5];
    cout<<"enter 5 elements in random order:"<<endl;
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }

    cout<<"The unsorted array is as follows:"<<endl;
    for(int i = 0; i<5;i++){
       cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    selection_sort(arr);


    return 0;
}
