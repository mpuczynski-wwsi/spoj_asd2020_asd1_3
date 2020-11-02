#include <stdio.h>
#include <iostream>
#include <istream>

int main(void)
{
    int czynnik, min = 500, max = -500,  pos_min = 1, pos_max = 1,  n = 1;

    while (std::cin >> czynnik) {

        if (czynnik < min && czynnik >= -500)
        {
            min = czynnik;
            pos_min = n;
        }

        if (czynnik >= max && czynnik <= 500)
        {
            max = czynnik;
            pos_max = n;
        }
        n++;
    }
    printf("%d\n%d\n%d\n%d", min,pos_min, max, pos_max);
    
    return 0;
}