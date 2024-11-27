#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char * mergeAlternately(char * word1, char * word2)
{
	int i;
	int k;
	int count_1 = 0;
	int count_2 = 0;
	int count_3 = 0;
	int len_word1 = strlen(word1);
	int len_word2 = strlen(word2);
	char *merged = (char *)malloc(len_word1 + len_word2 + 1);
	
	while(count_1 < len_word1 || count_2 < len_word2)
	{
		
	
		if(count_1 < len_word1)
		{
			merged[count_3] = word1[count_1];
			count_1 ++;
			count_3 ++;
		}
		 
		
		if(count_2 < len_word2)
		{
			merged[count_3] = word2[count_2];
			count_2 ++;
			count_3 ++;
		}
		 
	}
	
	merged[count_3] = '\0';
	return merged;

}



int main()
{
	char word1[100] = "abc";
	char word2[100] = "pqr";
	int i;
	char * result = mergeAlternately(word1, word2);
	
 	printf("Merged string: %s \n", result);
	 
	
	free(result);
	  
	
	
	return 0;
}