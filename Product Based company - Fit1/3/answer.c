#include<stdio.h>
#include<stdbool.h>
bool isAlphabet(char c){
    return ((c>='a' && c<='z')||(c>='A' && c<='Z'));
}

void swap(char *c1,char *c2){
    char temp=*c1;
    *c1=*c2;
    *c2=temp;
    return;
}

void reverse(char *left,char *right){
    while(left<right){
    if(!isAlphabet(*left)){
        left++;
    }
    else if(!isAlphabet(*right)){
        right--;
    }
    else{//they are both alphabets so reverse
        swap(left,right);
        left++;
        right--;
    }
  }
}
void reverseWords(char *str){
    char *beginsAt=str;
    char *endsAt=str;
    while(*endsAt){
        endsAt++;
        if(*endsAt==' '){
            reverse(beginsAt,endsAt-1);
            beginsAt = endsAt+1;
        }
        else if(*endsAt=='\0'){
            reverse(beginsAt,endsAt-1);
        }
        }

    }
int main()
{
  int n;
  scanf("%d ",&n);
  char str[n];
  scanf("%[^\n]s",str);
  reverseWords(str);
  printf("%s",str);
}

