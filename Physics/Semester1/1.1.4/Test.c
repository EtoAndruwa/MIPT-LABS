#include <stdio.h>
 
int main () { 
    FILE *fileIN;
    FILE *fileOUT;
    int arrIN[2];
    int arrOUT[2];

    
    fileIN = fopen("TestIN.txt", "r");
    fileOUT = fopen("TestOUT.txt", "w");

    fileOUT = fopen("TestOUT.txt", "r");
    printf("DATA IN:\n");
    while (fgets(arrIN, 3, fileIN) != NULL)
        printf("%d", arrIN);
        fileOUT = fopen("TestOUT.txt", "r");
     




    fprintf(fileOUT, "%d", 50); 
    fclose(fileOUT); 
    printf("DATA OUT:\n");
    
    while (fgets(arrOUT, 4, fileOUT) != NULL)
        printf("%d", arrOUT);

    printf("\n");
    getchar();

    fclose(fileIN);   
    fclose(fileOUT); 
}
