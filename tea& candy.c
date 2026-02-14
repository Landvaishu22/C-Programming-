#include <stdio.h>

int main() 
{
    int tea, candy;
    printf("enter amount of tea:");
    scanf("%d",&tea);
    printf("enter amount of candy:");
    scanf("%d",&candy);
if(tea<5 || candy<5)
{
printf("0");
}
else if("tea>2*candy || candy>=2*tea")
{
printf("2");
}
else
{
printf("1");
}
    return 0;
}