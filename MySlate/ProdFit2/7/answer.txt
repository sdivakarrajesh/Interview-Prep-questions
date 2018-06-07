#include<stdio.h>
#include<stdbool.h>
bool isVowel(char c){
char vowels[] = {'a','e','i','o','u','A','E','I','O','U'};
for(int i=0;i<10;i++){
    if(c==vowels[i]) return true;
}
return false;
}
void swap(char *c1,char *c2){
char temp = *c1;
*c1= *c2;
*c2 = temp;
return;
}
int main()
{
    char str[10000];
    scanf("%[^\n]s",str);
    int strlen;
    for(strlen=0;str[strlen]!='\0';strlen++);
    int checker2 = strlen-1;
    for(int checker1=0;checker1<strlen&&checker1<checker2;checker1++){
        if(isVowel(str[checker1])&&isVowel(str[checker2])){
            swap(&str[checker1],&str[checker2]);
            checker2--;
        }
        while(!isVowel(str[checker2])) checker2--;
    }
    printf("%s",str);
    return 0;
}

