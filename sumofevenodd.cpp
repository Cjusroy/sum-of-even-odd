#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int sum_odd;
    int sum_ev=0;
    int n;
    cin>>n;
    
    while(n>0){
        int d=n%10;
        if (d%2==0){
            sum_ev=sum_ev+d;
        }
        else{
            sum_odd=sum_odd+d;
        }
        n=n/10;
    }
    cout<<sum_ev<<" "<<sum_odd;
}

