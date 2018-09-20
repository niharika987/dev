/*#include <stdio.h>

int main()
{
   char *a[2] = {"hel","helo"};
   printf("%d", sizeof(a[));
   return 0;
}
#include<stdio.h>
int main()
    {
        int k;
        for(k=1; k<=100; k++)
        {
            if(k < 50)
                continue;
            else
                break;
            printf("XYZ");
        }
        return 0;
    }*/
    #include<stdio.h>

    int main()
    {   
        int x[] = {1, 2, 3, 4, 5};
        int y;
        for(y=0; y<5; y++)
        {
            printf("%d\n", x);
            x++;
        }
        return 0;
    }
