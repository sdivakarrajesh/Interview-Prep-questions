#include<stdio.h>
void swap(char *c1,char *c2){
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
    return;
}
void reverse(char *begin,char *end){
    while(begin<end){
        swap(begin,end);
        begin++;
        end--;
    }
return;
}
void reverseWords(char *str){
char *beginsAt = str;
char *endsAt = str;
while(*endsAt){
    endsAt++;
    if(*endsAt==' '){
        reverse(beginsAt,endsAt-1);
        beginsAt= endsAt+1;
    }
    else if(*endsAt=='\0'){
        reverse(beginsAt,endsAt-1);
    }
}
return;
}
int main()
{
    int n;
    scanf("%d ",&n);
    char str[n];
    scanf("%[^\n]s",str);
    reverse(str,&str[n-1]);
    reverseWords(str);//reverses each words after reversing the whole sentence
    printf("%s",str);
    return 0;
}

