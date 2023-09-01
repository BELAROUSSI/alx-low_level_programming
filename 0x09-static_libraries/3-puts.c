#include "main.h"
#include <stdio.h>

void _puts(char *str); // Corrected the function declaration here

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    _puts("\"Programming is like building a multilingual puzzle");
    return (0);
}

void _puts(char *str) // Corrected the function definition here
{
    /* Your _puts implementation goes here */
    /* For example, you can use printf to print the string */
    printf("%s\n", str);
}

