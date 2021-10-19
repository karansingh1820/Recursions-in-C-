#include<iostream>
using namespace std;
bool checkNumber(int input[], int size, int x) 
{
    if(size==0)
        return false;
    else
    {
    if(input[size]==x)
        return true;
    else
    {
        checkNumber(input,size-1,x);
    }
    }

}
int main()
{
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

    cout<<"Enter the element which you want to find ";
    cin >> x;
    
    if(checkNumber(input, n, x)) 
    {
        cout << "true" << endl;
    }
    else 
    {
        cout << "false" << endl;
    }
}