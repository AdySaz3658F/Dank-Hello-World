#include<stdio.h>
int main()
{
    printf("Hello World!\n");
    return 0;
    
    char color[20];
    FILE *filepointer;
    
    // take user input
    printf("Enter your favourite color: ");
    scanf("%s", color);
    

    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filepointer = fopen("inputlog.txt", "r") ;
    
    // Check if this filePointer is null
    // which maybe if the file does not exist
    if ( filepointer == NULL )
    {
        printf( "file failed to open." ) ;
    }
    else
    {
        filepointer = fopen("inputlog.txt", "w") ;
        fprintf(filepointer, "%s",color );
        fclose(filepointer) ;
        printf("\n\n\nData successfully overwritten to file change.txt \n");
        printf("The file is now closed.") ;
        printf("\n\n\n");
    }

}