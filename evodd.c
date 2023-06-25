#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int num;
        scanf("%d",&num);
        if(num%2==0)
        {
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    return 0;
}
