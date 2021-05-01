/* Given a sorted and rotated array, find if there is a pair with a given sum
Input: arr[] = {11, 15, 6, 8, 9, 10}, x = 16                    Output: true            There is a pair (6, 10) with sum 16
Input: arr[] = {11, 15, 26, 38, 9, 10}, x = 35                  Output: true            There is a pair (26, 9) with sum 35
Input: arr[] = {11, 15, 26, 38, 9, 10}, x = 45                  Output: false           There is no pair with sum 45.
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(x==arr[i]+arr[j])
            {
                return true;
            }
            else
            {
                return false;
            }
            
        }
    }
    return 0;
}