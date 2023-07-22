#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;

    // put character in stack
    s.push("Avish");
    s.push("Singh");
    s.push("Raghav");

    cout<<"Top Element "<<s.top()<<endl;
 
    // take off chars 
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;
    
    cout<<"Size "<<s.size()<<endl;
 
    cout<<"Empty or not "<<s.empty()<<endl;

    return 0;
}