#include <stdio.h>

int main()
{
    char ch = 'a';

    for (int i = 0; ch <= 'z'; i++)
    {
        printf("%c", ch);

         ch += 4;

        if (ch <= 'z')
        {
            printf(", ");
        }
    }
    return 0;
}
