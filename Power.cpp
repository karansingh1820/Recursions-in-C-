#include<iostream>

using namespace std;

int power(int x, int n)
{  
   if(n == 0)
    return 1;
  else
    return x * power(x,n-1);
}

int main(){
    int x, n;
    cout<<"Enter the base:-\t";
    cin >> x ;
    cout<<"Enter the power:-\t";
    cin >> n;

  
    cout << power(x, n) << endl;
}