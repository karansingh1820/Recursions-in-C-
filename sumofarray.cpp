#include<iostream>
using namespace std;
int sum(int input[],int n)
{


    if(n==1)
        return input[n-1];
    return input[n-1]+sum(input,n-1);
}
int main(){
    int n;
    cout<<"Enter the size:  ";
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cout<<"Enter the element "<<i<<": ";

        cin >> input[i];
    }
    
    cout<<"SUM=  "<< sum(input, n) << endl;
}
