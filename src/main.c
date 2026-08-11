#include <stdio.h>

int main(int argc, char *argv[])
{

    for (int i = 0; i < argc; i++)
    {
        printf("arg[%i]: %s\n", i, argv[i]);
    }
    printf("number of arguments is: %i\n", argc);

    return 0;
}