#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c)
{
    if( (c >= 'a' && c <= 'z') || c == '\'' || (c >= 'A' && c <= 'Z' ))
        return true;

    else if((c >= '0' && c <= '9') || c == '-' || c == '.')
        return true;

    else
        return false;
}


int countWords (const char string[])
{
    int i, wordCount = 0;
    bool lookingForword = true, alphabetic (const char c);

    for(i = 0; string[i] != '\0'; ++i)
        if( alphabetic(string[i]))
        {
            if(lookingForword)
            {
                ++wordCount;
                lookingForword = false;
            }
        }
        else
            lookingForword = true;

        return wordCount;
}

int main (void)
{
    const char text1[] = "Wells's,-123.";
    const char text2[] = " -23.5.";
    int countWords(const char string[]);

    printf("%s - words = %i\n", text1, countWords(text1));
    printf("%s - words = %i\n", text2, countWords(text2));

    return 0;
}

