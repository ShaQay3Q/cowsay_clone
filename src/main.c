#include <stdio.h>
#include "./cow.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s \"message\"\n", argv[0]);
        return 1;
    }

    printf("< %s >\n", argv[1]);
    print_cow();
    return 0;
}