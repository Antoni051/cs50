#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef __uint8_t BYTE;

int main(int argc, char *argv[])
{
    //Sanitise input
    if (argc != 2)
    {
        printf("USAGE: ./recover FILENAME");
        return 1;
    }
    else
    {
        char *inputFileName = argv[1];
        FILE *inputPoint = fopen(inputFileName, "r");

        if (inputPoint == NULL)
        {
            printf("Error Reading The File\n Please Try Again");
            return 2;
        }
    }

    BYTE buffer[512];
    int count = 0;
    FILE *imgPointer = NULL;
    char filename[8];
    
    // first 3 bytes of jpeg 0xff 0xd8 and 0xff
    // last ranges from 0xe0 to 0xef

    while (fread(&buffer, 512, 1, inputPoint) == 1)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && ((buffer[3] & 0xf0) == 0xe0))
        {
            // if not first jpeg, close currently open
            if (count != 0)
            {
                fclose(imgPointer);
            }
            //initialise file
            sprintf(filename, "%03i.jpg", count);
            imgPointer = fopen(filename, "w");
            count++;
        }
        if (count != 0)
        {
            fwrite(&buffer, 512, 1, imgPointer);
        }

        fclose(imgPointer);
        fclose(inputPoint);
    }
