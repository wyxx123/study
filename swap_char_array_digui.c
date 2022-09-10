define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int swap_char_array(char* array)
{
	int size = strlen(array);
	if (size < 2)
		return -1;
	else
	{
		/*int left = 0;
		int right = size-1;*/
		char ret = *array;
		*array = *(array + size - 1);
		*(array + size - 1) = 0;
		array++;
		if (size >= 4)
		{
			swap_char_array(array);
		}
		*(array + size - 2) = ret;
		return size;
	}
}

int main()
{
	char array[] = "asdfghjkl;";
	int ret = swap_char_array(array);
	if (ret > 0)
	{
		int i = 0;
		printf("%s\n", array);
	}
	else
		printf("too short to swap.\n");
	return 0;
}
