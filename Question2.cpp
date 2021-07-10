/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int myCompare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);
 
    // then append X at the end of Y
    string YX = Y.append(X);
 
    // Now see which of the two
    // formed numbers is greater
    return XY.compare(YX) > 0 ? 1 : 0;
}
 

void printLargest(vector<string> arr)
{
     
    sort(arr.begin(), arr.end(), myCompare);
 
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i];
}
 
// Driver code
int main()
{
    vector<string> arr1, arr2;
    arr1={"3","30","34","5","9"};
    arr2={"54","546","548","60"};
    printLargest(arr1);
    cout<<endl;
    printLargest(arr2);
 
    return 0;
}
