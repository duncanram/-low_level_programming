#include <stdio.h>
#include "main.h"

/*
 *_putchar - writes char c to stdout.
 *@c: char to print 
 *Return: 1 - on success
 *on ERRROR: -1
*/

int _putchar(char c)
{
    return (write(1, &c, 1));
}