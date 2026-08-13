#include <stdio.h>
#include "./cow.h"
#include <string.h>

size_t count_length(const char input[]);
void print_dash(size_t length);



int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s \"message\"\n", argv[0]);
        return 1;
    }
    size_t message_length = count_length(argv[1]);
    print_dash(message_length);
    printf("< %s >\n", argv[1]);
    print_dash(message_length);
    print_cow();
    return 0;
}

size_t count_length(const char input[])
{
    return strlen(input);
}

void print_dash(size_t length)
{
    printf(" ");
    for (size_t i = 0; i < length + 2; i++)
    {
        printf("-");
    }
    printf("\n");
}