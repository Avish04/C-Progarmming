#include<iostream>
#include<array>
using namespace std;

int main(){

    int basic[3]={1,2,3};
    array<int, 4>a={1,2,3,4}
    int size = a.size();

    for (int i = 0; i <size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd index :"<<a.at(2)<<endl;
    cout<<"empty or not :"<<a.empty()<<endl;
    cout<<"First Elment :"<<a.first()<<endl;
    cout<<"Last Elment :"<<a.back()<<endl;

    


    return 0;
}