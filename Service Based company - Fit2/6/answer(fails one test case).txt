#include<stdio.h>
int main()
{
    char str[1000],searchFor[100];
    scanf("%s",str);
    scanf("%s",searchFor);
    int inputLength=0,searchForLength=0;
    for(int i=0;str[i]!='\0';i++)inputLength++;
    for(int i=0;searchFor[i]!='\0';i++)searchForLength++;
    int count=0;
    for(int i=0;i<inputLength;i++){
        int flag =1,isMatching=0;
        if(str[i]==searchFor[0]){
            isMatching=1;
            for(int j=1;j<searchForLength;j++){
                if(str[i+j]!=searchFor[j]){flag = 0;break;}
            }
        if(flag==1&&isMatching==1)count++;
        }
    }
    printf("%d",count);
    return 0;
}
