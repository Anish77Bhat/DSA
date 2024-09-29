#include<iostream>
using namespace std;

int Sum(int n);
int Sum(int n){
    if(n==0)
        return 0;
    
    else
        return n + Sum(n-1);
}
int main()
{
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    int result=Sum(num);
    cout<<result;
    return 0;
}