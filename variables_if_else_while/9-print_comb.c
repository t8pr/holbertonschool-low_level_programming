#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int nums = '0';
    while (nums <= '9')
    {
        putchar(nums);
        putchar(',');
        putchar(' ');
        nums++;
    }
    
    
    putchar('\n');
    return(0);
}