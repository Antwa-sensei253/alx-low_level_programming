#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int is_upper(int c){
        if ( (int) c <65 && c>96)
                printf("%d", 1);     
        else
        printf("%d",0);
}
int main(void)
{
    char c;

    is_upper(c);

    
    return (0);
}
