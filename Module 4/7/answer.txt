#include<stdio.h>
#include<string.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=2;i<num/2;i++){
		if((i*i)>num){printf("NO");break;}
        else if(i*i==num){printf("YES");break;}
        
    }
return 0;
}
