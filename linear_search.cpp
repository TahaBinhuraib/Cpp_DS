//Linear search is a sequential type of searching algorithm.
# include<iostream>
using namespace std;


void linear_search(int a[] , int num){
    int temp = -1;
    
    for(int i = 0; i<5;i++){
        if(a[i] == num){
            cout<<"element found at location "<<i<<endl;
            temp = 1;
        }
    }
    if(temp==-1){
        cout<<"no element found!!"<<endl;

}
}

int main(){
    int arr[5] = {1,2,55,63,12};
    cout<<"please enter an element to search"<<endl;
    int num;
    cin>>num;

    linear_search(arr, num);
    return 0;
}
