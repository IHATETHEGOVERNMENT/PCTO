#include <stdio.h>
int main()
{
    char  strattu[6];
    char i;
    scanf("%s", strattu);
    while((strattu[i]<122)&&(strattu[i]>65)){
        strattu[i]=strattu[i]-32;
    if((strattu[i]<90)&&(strattu[i]>65))
    {
        strattu[i] = strattu[i];
        }
        printf("%s" , strattu);
        }
    return 0;
}