#include<iostream>
using namespace std;

int getSum(int arr[], int size){
    if (size==0)
    {
        return 0;
    }
    if (size==1)
    {
        return arr[0];
    }

    int remainPart = getSum(arr+1,size-1);
    int sum= arr[0]+ remainPart;
    return sum;    
    

}

int main(){
    
    int arr[10]={3,2,5,1,6};

    int sum = getSum(arr,10);

    cout<<"sum is "<<sum<<endl;


    return 0;
}