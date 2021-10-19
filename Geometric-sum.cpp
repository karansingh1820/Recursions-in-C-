#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double geometricSum(int k) 
{
    if(k==0)
        return 1;
    else{
    double sump= (1/(pow(2,k)));
    return geometricSum(k-1)+sump;
    }
}
int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
