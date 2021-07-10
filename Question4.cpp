/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int printMaxActivities(int s[], int f[], int n)
{
    int i, j, count = 0 ;

    cout <<"Following activities are selected "<< endl;
    // Consider rest of the activities
    for (j = 1; j < n; j++)
    {
      // If this activity has start time greater than or
      // equal to the finish time of previously selected
      // activity, then select it
      if (s[j] >= f[i])
      {
          count++;
      }
    }
    return count;
}

// driver program to test above function
int main()
{
    
    int s[] = {75250, 50074, 43659, 8931, 11273,
    27545, 50879, 77924};
    int f[] = {112960, 114515, 81825, 93424, 54316,
    35533, 73383, 160252};

    int n = 8;
    cout<<printMaxActivities(s, f, n);
    return 0;
}