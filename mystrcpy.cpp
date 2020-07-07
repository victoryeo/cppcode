#include <stdio.h>
#include <stdlib.h>

char *my_strcpy(char *destination, char *source)
{
    char *start = destination;
 
    while(*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
 
    *destination = '\0'; // add '\0' at the end
    return start;
}

int main(void) {
    char str[] = "first string";
    char *bpn; 

    bpn = (char *)malloc(sizeof(char)*12);
    my_strcpy(bpn, str);
    printf("%s\n", bpn);

    return 0;
}
