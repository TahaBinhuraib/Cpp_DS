// Also known as Interval search algorithms and are specifically designed to work on sorted arrays
// Code is taken from Simple Snippets Youtube channel

# include<iostream>
using namespace std;

int binary_search(int arr[], int left, int right, int val){
    while(left <= right){
        int mid = left + (right-left)/2;
        if(arr[mid] == val){
            return mid;
        }
        else if(arr[mid]<val){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;


}


int main(){
    int num;
    int arr[10];
    int output;

    cout<<"Enter 10 numbers in ascending order"<<endl;
    for(int i = 0; i<10;i++){
        cin>>arr[i];

    }
    cout<<"Enter the number you want to search"<<endl;
    cin>>num;
    output = binary_search(arr, 0, 9, num);
    if(output == -1){
        cout<<"No match found"<<endl;
    }
    else{
        cout<<"Match found at position "<<output<<endl;
    }
    return 0;
}
