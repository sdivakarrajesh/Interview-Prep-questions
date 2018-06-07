#include<stdio.h>
#include<string.h>
int main(){
int count=0,b1=0,b2=0,b3=0;
char str[100];
scanf("%s",str);
int length = strlen(str);
for(int i=0;i<length&&b1>-1&&b2>-1&&b3>-1;i++){
if(str[i]=='('){
    b1++;
    for(int test=i;test<length;test++){
        if(str[test]=='}'||str[test]=='}')
            {printf("-1"); return 0;}
        else if(str[test]==')'){count++;break;}
    }

   }

if(str[i]=='['){
    b2++;
    for(int test=i;test<length;test++){
        if(str[test]==')'||str[test]=='}')
            {printf("-1"); return 0;}
        else if(str[test]==']'){count++;}

    }
}


if(str[i]=='{'){
    b3++;
    for(int test=i;test<length;test++){
        if(str[test]==')'||str[test]==']')
            {printf("-1"); return 0;}
        else if(str[test]=='}'){count++;}

    }
}

if(str[i]==')')b1--;
if(str[i]==']')b2--;
if(str[i]=='}')b3--;
}
    if(b1==0&&b2==0&&b3==0&&count>0)printf("Balanced %d",count);
    else{printf("Not Balanced");}
return 0;
}
