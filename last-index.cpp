#include<iostream>
using namespace std;
int lastIndex(int input[], int size, int x) 
{
if(size==0)
        return -1;
    static int i=0,pos=-1;
    if(input[0]==x)
    {
        lastIndex(input+1,size-1,x);
        i++;
        pos++;
    }
    else
    {  
        lastIndex(input+1,size-1,x);
        if(i==0)
            return -1;
        pos++;
    }
    return pos;
    
}
int main()
{
    int n;
    cout<<"Enter the size: ";
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cout<<"Enter the element "<<i<<": ";
        cin >> input[i];
    }
    
    int x;
    cout<<"Enter the element which you want to find: ";
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}