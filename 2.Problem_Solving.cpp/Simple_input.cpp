/* Problem Description:
Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.
Input Format: A list of integers to be processed
Sample Input: 1
2
88
-100
49
Output Format: Print all the numbers before the cumulative sum become negative.
Sample Output: 1
2
88   */

#include<iostream>
using namespace std;

int main(){
    
    int n;
    int sum=0;
    cin>>n;

    while (true)
    {
        sum=sum+n;
        if(sum>=0){
            cout<<n<<endl;
        }
        if (sum<0)
        {
            return 0;
            /* code */
        }
        cin>>n;
            
    }

     


    return 0;
}