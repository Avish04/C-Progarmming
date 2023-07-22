#include<iostream>
using namespace std;

bool Lsearch(int arr[],int size,int k){
    if(size==0)
    return false;
    if(arr[0]==k)
    return true;
    else{
        int remainPart=Lsearch(arr+1,size-1,k);
        return remainPart;
    }
    
}

int main(){
    
    int arr[10]={3,5,1,2,6};
    int k=4;
    bool ans=Lsearch(arr,10,k);
    if(ans){
        cout<<"Present"<<endl;
    }

    else{
        cout<<"Absent"<<endl;
    }
    
    return 0;
}