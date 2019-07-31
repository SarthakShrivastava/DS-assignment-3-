#include<iostream.h>
#include<conio.h>
int main(){
    int arr[5];
    cout<<"Ënter the array";
    for(int i =0; i<5; i++){
    cin>>arr[i];
    }
    for(i=0;i<5;i++){
        for(int n=i;n<5-i;n++){
            int temp;
            temp=arr[i];
            arr[n]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i =0; i<5; i++){
    cout<<arr[i];
    }
    return(0);
}
