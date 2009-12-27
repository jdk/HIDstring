#include <stdio.h> 
#include <string.h>
#include <translate.h>
#include <prjutil.h>

// --Help commands
static void usage(char *name)
{
	printf("\nconvertStringtoHID Version: (%s)\n\n",SCM_HASH);
	printf("  Will convert given string in quotes into HID code\n\n");
	printf("  Example: %s \"sample text\"\n\n", name);
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		//User didn't enter enough arguments
		usage(argv[0]);
		return(1);
	}

	int i;
	int ascii;
	int keyReport[2];
	
	pdebug("number of arguments:%d\n",argc);
	printf("\nThe string \"%s\" in USB HID is:\n",argv[1]);
	printf("\n{");

	for (i = 0; i < strlen(argv[1]);i++)
	{
		ascii = *(argv[1]+i);
		pdebug("Character:%c Ascii:%d \n", *(argv[1]+i), ascii);	
		if(ascii == 32)
		{
			keyReport[1] = 0;
			keyReport[0] = 44;
		}
		else
		{
			translate(ascii, keyReport);
		}
		
		printf("%d,%d,", keyReport[1], keyReport[0]);
	}	
		
	printf("0,0}\n");

	printf("\n");
	return (0);
}

