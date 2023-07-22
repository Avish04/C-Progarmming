#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    vector<int> a(5,1);
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;

    cout<<"Size-> "<<v.size()<<endl;

    cout<<"Element at 2nd index :"<<v.at(2)<<endl;

    cout<<"First Elment :"<<v.front()<<endl;
    cout<<"Last Elment :"<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"before clear "<<v.size()<<endl;
    v.clear();
    cout<<"after clear "<<v.size()<<endl;




    return 0;
}