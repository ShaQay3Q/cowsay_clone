#include <stdio.h>
#include "./cow.h"
#include <string.h>

int count_length(char *input[]);
void print_dash(int length);



int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s \"message\"\n", argv[0]);
        return 1;
    }

    print_dash(count_length(&argv[1]));
    printf("< %s >\n", argv[1]);
    print_dash(count_length(&argv[1]));
    print_cow();
    return 0;
}

int count_length(char *input[])
{
    return strlen(*input);
}

void print_dash(int length)
{
    printf(" ");
    for (int i = 0; i < length + 2; i++)
    {
        printf("-");
    }
    printf("\n");
}