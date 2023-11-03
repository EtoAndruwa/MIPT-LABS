#iclude <stdio.h>

int main() {

    FILE *myfile;

    struct LabDataP {
         char Line[8];
         int x1;
         int x2;
         int x3;
         int x4;
         int x5;
         int x6;
         int x7;
         int x8;
         int x9;
         int x10;

    };
    
    myfile = fopen("LabData.txt", "r");

    fclose(myfile);
}