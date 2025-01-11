#include <stdio.h>
#include <stdlib.h>
main() 
{
    FILE *file;
    char filename[]="ABC.txt",ch;
    int charCount = 0,spaceCount = 0,newlineCount = 0;
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) 
	{
        charCount++;
        if (ch == ' ') {
            spaceCount++;
        }
        if (ch == '\n') {
            newlineCount++;
        }
    }
    fclose(file);
    printf("The %s file has......\n",filename);
    printf("Number of characters: %d\n", charCount);
    printf("Number of spaces: %d\n", spaceCount);
    printf("Number of new lines: %d\n", newlineCount);
}
