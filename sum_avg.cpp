#include<iostream>
using namespace std;
int main(){
    int x[5],sum=0,avg;
    cout<<"Enter five elements ";
    for(int i=0;i<5;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<5;i++){
        sum=sum+x[i];
    }
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Average is: "<<sum/5;

}   

/*
Enter five elements 4
5
6
3
3
Sum is: 21
Average is: 4
*/
