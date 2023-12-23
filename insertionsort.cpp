#include<iostream>
using namespace std;
                   
void insertion_sort(int n,int arr[]){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1; //Will store index of previous element.
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j]; //Shifting the elements.
            j--; //Will Check at previous indices. 
        }
        arr[j+1]=key;
    }
}

void display(int n,int arr[]){
    //Displaying Array.
    cout<<"Your Array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;   
}

int main(){
    //Array Input.
    int size;
    cout<<"Enter Size of your Array :";
    cin>>size;
    int a[size];

    cout<<"Enter Array elements :"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    display(size,a);
    insertion_sort(size,a);
    cout<<"After Sorting"<<endl;
    display(size,a);

    return 0;
}