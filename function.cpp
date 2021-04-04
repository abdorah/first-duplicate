#include <stdlib.h>
#include <stdio.h>

int function(char str[])
{
    int result = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        int j = i + 1;
        while (str[j] != '\0')
        {
            if (str[i] == str[j] && j != i)
            {
                result = str[j];
                break;
            }
            j++;
        }
        if (result != 0)
        {
            break;
        }
    }
    return result;
}