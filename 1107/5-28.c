#include <stdio.h>

char changeCase(char ch)
{
        if (ch >= 'A' && ch <= 'Z')
        {
            return ch + ('a' - 'A');
        }
    
        else if (ch >= 'a' && ch <= 'z')
        {
            return ch - ('a' - 'A');
        }
        
        else
        {
            return ch;
        }
}

int main()
{
    char input, result;
    printf("Enter a character: ");
    scanf("%c", &input);

    result = changeCase(input);

    printf("Changed case: %c\n", result);

    return 0;
}