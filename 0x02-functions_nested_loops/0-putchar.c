 #include <stdio.h>
/**
 * main - main block
 * Write a program that prints _putchar, 
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
    int i;
    char str[] = "_putchar";
    
    for (i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
    
    putchar('\n');
    
    return 0;
}
