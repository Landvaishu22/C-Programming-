#include <stdio.h>
int main()
{
    int small, big, goal;
    printf("Enter number of small bars: ");
    scanf("%d", &small);
    printf("Enter number of big bars: ");
    scanf("%d", &big);
    printf("Enter goal kilos: ");
    scanf("%d", &goal);
    int req = goal / 5;
    {
if (req > big)
    req = big;
int rem = goal - (req * 5);
    if (rem<=small)
    return 1;
    else
    return -1;
    }
    return 0;
}