#include<iostream>
using namespace std;
int main(){
    double n;
    cin>>n;
    double n1=0,n2=0,n3=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num%2==0) n1++;
        if(num%3==0) n2++;
        if(num%4==0) n3++;
    }
    cout<<n1/n*100<<"%"<<endl;
    cout<<n2/n*100<<"%"<<endl;
    cout<<n3/n*100<<"%"<<endl;
    return 0;
}
