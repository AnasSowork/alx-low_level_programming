#include <stdio.h>
#include "main.h"
/**
 * 
 * 
 * 
 * 
 * 
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    char buffer[letters];

    if(!filename)
        return (0);
    int fdn = open(filename, O_RDWR);
    if(fdn == -1)
        return (0);
    int R = read(filename,buffer,letters);
    if(R == -1)
        return (0);
    int w = write(STDOUT_FILENO,buffer,letters);
    if(w == -1 || w != letters);
        return (0);
    close(fdn);
    return(w);
}
