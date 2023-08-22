#include<iostream>
using namespace std;

// Using Recursion
void sort012(int a[], int n){

    // Base case
    if(n==0||n==1)
    return ;
        
    for(int i=0; i<n-1;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }

    sort012(a,n-1); // R call
}


// Optimized Code

void sort012(int a[], int n){

    int s=0;
    int e=n-1;
    int mid=0;
        
    while(mid<=e){
            
        if(a[mid]==1){
            mid++;
        }
            
        else if(a[mid]==2){
            swap(a[mid],a[e]);
            e--;
        }
            
        else if(a[mid]==0){
            swap(a[mid],a[s]);
            s++;
            mid++;
        }
    
    }
}

int main(){
    


    return 0;
}