#include<stdio.h>
int main(){

int seconds1,seconds2,totalSeconds,t1_hour,t2_hour,t3_hour,t1_minute,t2_minute,t3_minute,t1_second,t2_second,t3_second;
	scanf("%d:%d:%d",&t1_hour, &t1_minute, &t1_second);
	scanf("%d:%d:%d",&t2_hour, &t2_minute, &t2_second);
	seconds1 = t1_hour*60*60 + t1_minute*60 + t1_second;
	seconds2 = t2_hour*60*60 + t2_minute*60 + t2_second;
    if(seconds1>seconds2)
	totalSeconds = seconds1-seconds2;
    else
        totalSeconds=seconds2-seconds1;
	t3_minute = totalSeconds/60;
	t3_hour = t3_minute/60;
	t3_minute = t3_minute%60;
	t3_second = totalSeconds%60;
    printf("%02d:%02d:%02d\n",t3_hour,t3_minute,t3_second);

return 0;
}

	