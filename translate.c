#include <stdio.h>
#include <stdlib.h>

void translate(char input[], int size, char output[])
{

    for (int i = 0; i < size; i++)
    {

        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            output[i] = 'A' + (input[i] - 'A' + 4) % 26;
        }
        else if (input[i] >= 'a' && input[i] <= 'z')
        {
            output[i] = 'a' + (input[i] - 'a' + 4) % 26;
        }
        else
        {
            output[i] = input[i];
        }
    }
}

int main()
{

    char input[20];
    char output[20];
    int size = sizeof(input) / sizeof(input[0]);

    printf("input:");

    scanf("%s", input);

    //   if (strlen(input) != 5) {
    //     printf("Input must be 5 chars");
    //     return 1;
    //   }

    translate(input, size, output);

    printf(" Output :%s\n", output);

    return 0;
}