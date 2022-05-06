#include <stdio.h>
#include <stdlib.h>

int main()
{
    int potencia=1;

    while(potencia<600)
    {
        if(potencia==1)
        {
            printf("%d ",potencia);
        }
        potencia=potencia*2;
        if(potencia<600)
        {
            printf("%d ",potencia);
        }
    }
    return 0;
}
