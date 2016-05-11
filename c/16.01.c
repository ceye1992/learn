//以一个单词为命令行参数，查找单词

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct entry
{
    char word[15];
    char defintion[50];
};


bool equalStrings (const char s1[], const char s2[])
{
    int i = 0;
    bool areEqual;

    while( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if(s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;
    else
        areEqual = false;

    return areEqual;
}


int lookup(const struct entry dictionary[], const char search[], const int enteries)
{
    int i;
    bool equalStrings (const char s1[], const char s2[]);

    for(i = 0; i < enteries; ++i)
        if( equalStrings(search, dictionary[i].word) )
            return i;

    return -1;
}


int main(int argc, char *argv[])
{
    const struct entry dictionary[10] =
    { {"aardvark", "a burrowing African mammal"         },
      {"abyss",    "a bottomless pit"                   },
      {"acumen",   "mentally sharp; taken"              },
      {"addle",    "to become confused"                 },
      {"aerie",    "a high nest"                        },
      {"affis",    "to append ; attach"                 },
      {"agar",     "s jrlly med from seaweed"           },
      {"ahoy",     "a nautical call of greeting "       },
      {"aigrette", "an ornamental cluster of feathers"  },
      {"ajar",     "paetiaclly opened"                  }};

    int entries = 10;
    int entryNumber;
    int lookup(const struct entry dictionary[], const char search[], const int enteries);

    if(argc != 2)
    {
        fprintf(stderr, "No word type on the command line.\n");
        return EXIT_FAILURE;
    }

    entryNumber = lookup(dictionary, argv[1], entries);

    if(entryNumber != -1)
        printf("%s\n", dictionary[entryNumber].defintion);
    else
        printf("Sorry , %s is not in my dictionary.\n", argv[1]);

    return 0;
}
