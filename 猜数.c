#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int count = 0,guess = 0,answer;
    answer = rand()%100 + 1;
    do
    {
        printf("请猜一个数:");
        scanf("%d",&guess);
        if(guess<answer)
            printf("您猜的数小了\n");
        else if(guess > answer)
            printf("您猜的数大了\n");
        count ++;
    }
    while(guess != answer);
    printf("恭喜您只用了%d次就猜对了！",count);
    return 0;
}
