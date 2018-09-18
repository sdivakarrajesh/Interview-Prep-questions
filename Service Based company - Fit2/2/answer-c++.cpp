#include<stdio.h>
#include<stack>
using namespace std;
int main()
{
    stack<char> s;
    char expression[1000];
    int length,flag = 1,temp,count=0;
    gets(expression);

    for(length=0;expression[length]!='\0';length++);

    for(int i=0;i<length;i++){
        if(expression[i]=='{' || expression[i]=='[' || expression[i]=='('){
            s.push(expression[i]);
            count++;
           }
        else if (expression[i]=='}' || expression[i]==']' || expression[i]==')')
        {
            if(s.empty()){
                flag = 0;
                break;
            }
            else{
                switch(expression[i]){
                case '}':
                    temp = s.top();
                    s.pop();
                    if(temp=='['||temp=='('){flag=0;break;}

                case ']':
                    temp = s.top();
                    s.pop();
                    if(temp=='{'||temp=='('){flag=0;break;}

                case ')':
                    temp = s.top();
                    s.pop();
                    if(temp=='{'||temp=='['){flag=0;break;}

                }
            }
        }
    }
    if(!s.empty())flag=0;
    if(flag==1)printf("Balanced %d",count);
    else printf("Not Balanced");

    return 0;
}
