#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int str1len=0,str2len=0,notSame=1;
    for(int i=0;str1[i]!='\0';i++)str1len++;
    for(int i=0;str2[i]!='\0';i++)str2len++;
    if(str1len==str2len){
        for(int i=0;i<str1len;i++){
            char temp = str1[0];

            for(int j=0;j<str1len-1;j++){
                str1[j] = str1[j+1];
            }
            str1[str1len-1] = temp;
            notSame = strcmp(str1,str2);
            if(notSame==0){printf("1");return 0;}

        }
    if(notSame!=0)printf("-1");
    }
    return 0;
}
