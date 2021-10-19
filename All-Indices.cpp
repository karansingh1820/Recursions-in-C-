#include<iostream>

using namespace std;
int allIndexes(int input[], int size, int x, int output[]) 
{
 
   static int index=-1;
    if(size==0)
    {
        return 0;
    }
    else
    {

    if(input[0]==x)
    {
    output[0]=++index;
    cout<<index<<" ";
    allIndexes(input+1,size-1,x,output+1);
    }
    else{
        ++index;
        allIndexes(input+1,size-1,x,output);
    }
    }
}
int main(){
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
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}
