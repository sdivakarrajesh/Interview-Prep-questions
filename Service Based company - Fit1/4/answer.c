#include<stdio.h>
void swap(char *c1,char *c2){
char temp = *c1;
*c1 = *c2;
*c2 = temp;
return 0;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int size;
        scanf("%d ",&size);
        char str[size];
        gets(str);
        int length=0;
        for(int i=0;str[i]!='\0';i++)length++;
        for(int i=0;i<length/2;i++){
           swap(&str[i],&str[length-1-i]);
        }
        for(int i=0;i<length;i++){
            printf("%c",str[i]);
        }
        printf("\n");
        }
    return 0;
}
