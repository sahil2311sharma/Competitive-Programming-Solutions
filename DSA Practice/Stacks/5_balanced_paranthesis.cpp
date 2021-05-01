#include<iostream>
#include<stack>
using namespace std;
/*bool matching(char a,char b)
{
    return((a=='('&&b==')') || (a=='{'&&b=='}') || (a=='['&&b==']'));
}*/
bool isbalanced(string str)
{
    stack <int> s;
    char x;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
        {
            s.push(str[i]);
        }
        if(s.empty()==true)
        {
            return false;
        }
        switch (str[i])
        {
            case ')':
                x=s.top();
                s.pop();
                if(x=='{'||x=='[')
                {
                    return false;
                }
                break;

            case '}':
                x=s.top();
                s.pop();
                if(x=='('||x=='[')
                {
                    return false;
                }
                break;
        
            case ']':
                x=s.top();
                s.pop();
                if(x=='{'||x=='(')
                {
                    return false;
                }
                break;
        }
    }
    return (s.empty());
}
int main()
{
    string str;
    cin>>str;
    if (isbalanced(str)) 
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
    return 0;
}