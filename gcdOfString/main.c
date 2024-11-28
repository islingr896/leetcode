#include <stdio.h>
#include <string.h>

#define MAX 2000

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

char * gcdOfStrings(char *str1, char *str2)
{
    int len_1 = strlen(str1);
    int len_2 = strlen(str2);
    int len_3 = gcd(len_1, len_2);

    static char result[1000] = "";
    char temp1[MAX], temp2[MAX];

    strcpy(temp1, str1);
    strcat(temp1, str2);
    
    strcpy(temp2, str2);
    strcat(temp2, str1);
    
    if(strcmp(temp1, temp2) != 0) return "";
    
    strncpy(result,str1,len_3);
    result[len_3] = '\0';
    return result;

}
int main()
{
    char* str1 = "ABAB";
    char* str2 = "AB";
    char* result = gcdOfStrings(str1, str2);
    printf("\n\t%s", result);


    return 0;
}