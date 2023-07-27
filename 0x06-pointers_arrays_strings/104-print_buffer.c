#include "main.h"

/**
 * print_buffer - Prints the content of a buffer.
 * @b: Buffer to be printed.
 * @size: Size of the buffer.
 */
void print_buffer(char *b, int size)
{
    int i, j;
    
    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
                printf("%02x", (unsigned char)b[i + j]);
            else
                printf("  ");

            if (j % 2)
                printf(" ");
        }

        printf(" ");

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
            {
                char c = b[i + j];

                if (c < 32 || c > 126)
                    c = '.';

                printf("%c", c);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

