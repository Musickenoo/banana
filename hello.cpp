#include<iostream>
using namespace std;

int findGCD(int x , int y){
    int min;
    if(x<=y){min=x;}
    else{min = y;}

    int i = min;
    while(i>0){
        if(x%i==0 and y%i == 0){
            return i;
        }else{i--;}
    }
}

int main()
{
    cout <<"findGCD(12,8) ="<< findGCD(12,8)<<"\n";
    cout <<"findGCD(240,750) ="<< findGCD(240,750)<<"\n";
    return 0;
}