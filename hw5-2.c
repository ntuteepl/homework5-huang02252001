
#include <stdio.h>
main()
{
    int minute;
    scanf("%d", &minute);
    float cost;

    if(minute<=800)
    {
        cost=minute*0.9;
    }
    else if(minute<=1500)
    {
        cost=minute*0.9*0.9;
    }
    else
    {
        cost=minute*0.9*0.79;

    }

    printf("%.1f",cost);

}
