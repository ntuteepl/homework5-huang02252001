#include <stdio.h>
main()
{
    int hour,minute;
    scanf("%d %d", &hour,&minute);
    float angleh,anglem;

    angleh=360*(float)hour/12+(30*(float)minute/60);//1 hr=360/12=30.
    anglem=360*(float)minute/60;

    if(fabs(angleh-anglem)<360-fabs(angleh-anglem))printf("%.3f",fabs(angleh-anglem));
    else printf("%.3f",360-fabs(angleh-anglem));




}

