/*    BRUTE FORCE
    O(n^2)

#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // n = size of the array
    //i=0
    //
    for(int i=0;i<n;i++)
    {
        int next=-1;
        for(int j=i-1;j>=0;j--)
        {   if(arr[j]>arr[i])
            {   next=arr[j];
                break;
            }
        }
        cout<<next<<" ";
    }
    return 0;
}
*/

// optimised solution
#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    stack<int>str;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(str.size()==0)
        {
            v.push_back(-1);
        }
        else if(str.size()>0 && str.top()>arr[i])
        {
            v.push_back(str.top());
        }
        else if(str.size()>0 && str.top()<=arr[i])
        {
            while(str.size()>0 && str.top()<=arr[i])
            {
                str.pop();
            }
            if(str.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(str.top());
            }
        }
        str.push(arr[i]);
    }
    for(int ch:v)
    {
        cout<<ch<<" ";
    }
    return 0;
}


/*      TEST CASE DRY RUN

    1   3   2   4

    -1  3   2   4

    -1  -1  2   4

    -1  -1  3   4

    -1  -1  3   -1


// 1    3   2   4
// -1  -1   3  -1

//   4    3    2    1
//   -1   4    3    2
*/

/*
arr     -   1
vector  -   -1
stack   -   1
--->check for 1 
--->stack has size 0 so push -1 into vector 
    and push the element into stack

arr     -   3
vector  -   -1  -1
stack   -   3
--->check for 3
--->stack has size greater than 0 and stack top is less than 3
    we go into while and pop till top is greater than 3
    there is no element in stack greater than 3 
    so we pop the element and finally stack size became 0
    so we pushed -1 into vector
    now vector has     -1  -1
    and push the element into stack

arr     -   2
vector  -   -1  -1  3
stack   -   3   2
--->check for 2
--->stack has size greater than 0 and stack top is equal to 2
    we go into while loop
    we check condition size>0 and top is <=2
    we pop the top element
    then stack has 3 in it
    so 2 is smaller than 3
    so we come out of the loop  
    and then push the top into vector
    now vector has      -1   -1    3
    and push the element into stack

arr     -   4
vector  -   -1  -1  3  -1
stack   -   3   2
--->check for 4
--->stack has size greater than 0 and stack top is less than 4
    we go into while loop
    check size>0 and top element is less than 4
        answer is no
    so we pop the top element
    now stack has 3
    we check in while loop
    stack size>0 and stack top is less than 4
    so again we pop the top element
    now
    stack has size = 0
    so we push -1 into vector
    now vector has elements 
    -1  -1  3   -1
    and stack has 4 in it

*/