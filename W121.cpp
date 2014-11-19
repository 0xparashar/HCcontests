#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int num(int W2[],int E2[],int l,int len){
    int m=0;
    for(int i=0;i<len;i++){
        if(E2[i]!=0){
        if((W2[i]>=W2[l])&&(W2[i]<=W2[l]+4))
           m++; 
        }
    }
    return m;    
}
int isempty(int e2[],int len){
    for(int i=0;i<len;i++){
        if(e2[i]!=0)
            return 1;
    }
    return 0;
}
int max(int E3[], int W3[],int len)
    {
    int ma=0;
    int in=0;
    for(int i=0;i<len;i++){
        if(num(W3,E3,i,len)>ma){
            ma=num(W3,E3,i,len);
            in=i;
        }
    }
    return in;
}

int main() {
    int n;
    cin >> n;
    int W[n];
    for(int i=0;i<n;i++)
        cin>>W[i];
    int E[n];
    for(int i=0;i<n;i++)
    {
        E[i]=1;
    }
    int cost=0;
    while(isempty(E,n)){
        int m=max(E,W,n);
        for(int i=0;i<n;i++){
         if(E[i]!=0){
        if((W[i]>=W[m])&&(W[i]<=W[m]+4))
           E[i]=0; 
        }   
        }
      cost++;  
    }
   cout<<cost;
    return 0;
}

