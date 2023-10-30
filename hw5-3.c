#include <stdio.h>
main()
{
    int hour,money;
    scanf("%d %d", &hour,&money);
    float salary;
    if(hour<=60)
    {
        salary=hour*money;
    }
    else if(hour<=120)
    {
        salary=(60+(hour-60)*1.33)*money;
    }
    else
    {
        salary=(60+60*1.33+(hour-120)*1.66)*money;

    }

    printf("%.1f",salary);

}

