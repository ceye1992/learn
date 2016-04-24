//将第一的字典按字母表顺序排序 倒序

#include <stdio.h>
#include <stdbool.h>

struct entry
{
    char word[15];
    char definition[50];
};


void dictionarySort( struct entry dictionary[], int wordsNumber)
{
    int j, i = 0, m = 0;
    struct entry temp[2];
    bool areover;

    for(i = 0; i < wordsNumber - 1; ++i)
        for(j = i + 1; j < wordsNumber; ++j)
        {
            areover = false;

            while(dictionary[i].word[m] == dictionary[j].word[m] && dictionary[i].word[m] != '\0'
                && dictionary[j].word[m] != '\0' && ! areover)
                    ++m;

            if(dictionary[i].word[m] < dictionary[j].word[m])
            {
                temp[1] = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = temp[1];
                areover = true;
            }
        }
}

int main (void)
{
    struct entry dictionary[10] =
    { {"aardvark", "a burrowing African mammal"            },
      {"abys",     "a bottomless pit"                      },
      {"acumen",   "mentally sharp; keen"                  },
      {"addle",    "to become confused"                    },
      {"aerie",    "a high nest"                           },
      {"affix",    "to append; attach"                     },
      {"agar",     "a jelly made from seaweed"             },
      {"ahoy",     "a nautical call of greeting"           },
      {"aigrette", "an ornamental cluster of feathers"     },
      {"ajar",     "partially opened"                      },};


      int i;

      for(i = 0; i < 10; ++i)
      printf("%s\n", dictionary[i].word);

      printf("\n\n");

      dictionarySort(dictionary, 10);

      for(i = 0; i < 10; ++i)
      printf("%s\n", dictionary[i].word);

}
