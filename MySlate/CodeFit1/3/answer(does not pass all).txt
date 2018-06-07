#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num,ans=0;
        scanf("%d ",&num);
        char str[num];
		scanf("%[\n]s",str);
        for(int i=0;i<num;i++){
            if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
                if(str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
                    str[ans] = str[i];
                    ans++;
                }
            }
        }
        for(int i=0;i<ans;i++){
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
