#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int count = 0,guess = 0,answer;
    answer = rand()%100 + 1;
    do
    {
        printf("���һ����:");
        scanf("%d",&guess);
        if(guess<answer)
            printf("���µ���С��\n");
        else if(guess > answer)
            printf("���µ�������\n");
        count ++;
    }
    while(guess != answer);
    printf("��ϲ��ֻ����%d�ξͲ¶��ˣ�",count);
    return 0;
}
