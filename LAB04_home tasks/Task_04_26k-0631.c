#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    if(isalpha(ch))
    {
        switch(ch)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                printf("%c is a Vowel\n",ch);
                break;

            default:
                printf("%c is a Consonant",ch);
        }
    }
    else
    {
        printf("Error: Input is not a letter");
    }
        return 0;
}
