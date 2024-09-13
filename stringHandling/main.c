#include <stdio.h>
#include <string.h>

/*
 *      strcat(string1, string2)        : string append concatenation  
 *      strlen(string)                  : returning string length
 *      strcpy(str1, str2)              : copying str2(source) to str1(destination) 
 *      strcmp(str1, str2)              : string comparing operation
 *      strrev(str)                     : reverse string
 *      SUBSTRING(str, position, len)   : extracting substring from position to the size
 *      INSERT(mainStr, position, str)  : inserting another string at postion
 *      INDEX(mainStr, subStr)          : return index of the subStr start
 *      DELETE(mainStr, pos, len)       : delete the given length from position
 *      REPLACE(mainStr,patt1, patt2)   : replace pattern1 in main string with pattern2 
 *
 * */

int main()
{

    /*Implementing strcat(s1, s2)*/

    char str1[] = "Hello ";
    char str2[] = "World";

    printf("string 1: %s\n", str1);
    printf("string 2: %s\n", str2);
    strcat(str1, str2);
    printf("resulting string: %s\n", str1);


    /*strlen(s) operation implementation*/
    printf("length of str1: %d\n", strlen(str1));

    /*cpying string */
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    strcpy(str1, str2);
    printf("str1: %s\n", str1);

    return 0;
}
