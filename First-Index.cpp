#include<iostream>
using namespace std;
int firstIndex(int input[], int size, int x) {
  
    if(size==0)
        return -1;
    else{
    static int i=0;
    if(input[0]==x)
        return i;
    else{
        i++;
        firstIndex(input+1,size-1,x);
    }
    }

}
int main(){
    int n;
    cout<<"Enter the size: ";
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++)
     {
        cout<<"Enter the element "<<i<<": ";
        cin >> input[i];
    }
    
    int x;
    cout<<"Enter the element which you want to find: ";
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;

}