#include<iostream>
using namespace std;

int rev(int arr[], int a){
    int s=0;
    int e=a-1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
} 

void print(int arr[], int a){
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
int arr[4];
int n=4;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

rev(arr,4);
print(arr,4);
    return 0;
}