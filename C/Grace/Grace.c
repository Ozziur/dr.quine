#include <stdio.h>
/*
    aaargh
*/
#define NAME "Grace_kid.c"
#define SELF "#include <stdio.h>%c/*%c%c%c%c%caaargh%c*/%c#define NAME %cGrace_kid.c%c%c#define SELF %c%s%c%c#define START(c)int main() {FILE *fptr;fptr = fopen(c, %cw%c);if(fptr != NULL){fprintf(fptr,SELF,10,10,32,32,32,32,10,10,34,34,10,34,SELF,34,10,34,34,10,10);fclose(fptr);}return(0);}%c%cSTART(NAME)"
#define START(c)int main() {FILE *fptr;fptr = fopen(c, "w");if(fptr != NULL){fprintf(fptr,SELF,10,10,32,32,32,32,10,10,34,34,10,34,SELF,34,10,34,34,10,10);fclose(fptr);}return(0);}

START(NAME)