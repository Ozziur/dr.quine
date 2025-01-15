#include <stdio.h>
#include <stdlib.h>

#define SELF "#include <stdio.h>%c#include <stdlib.h>%c%c#define SELF %c%s%c%c%cint main(){%c%c%c%c%cint i = %d;%c%c%c%c%cchar new_ship[20];%c%c%c%c%cchar new_pirate[25];%c%c%c%c%cchar compile[300];%c%c%c%c%cFILE *pirate;%c%c%c%c%csprintf(new_ship , %c./Sully_%%d%c, i);%c%c%c%c%csprintf(new_pirate , %cSully_%%d.c%c, i--);%c%c%c%c%csprintf(compile, %cgcc -Wall -Wextra -Werror %%s -o %%s%c, new_pirate, new_ship);%c%c%c%c%cpirate = fopen(new_pirate, %cw%c);%c%c%c%c%cif(pirate != NULL){%c%c%c%c%c%c%c%c%cfprintf(pirate, SELF, 10, 10, 10, 34, SELF, 34, 10, 10, 10, 32, 32, 32, 32, i, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10 );%c%c%c%c%c%c%c%c%cfclose(pirate);%c%c%c%c%c}%c%c%c%c%csystem(compile);%c%c%c%c%cif(i >= 0){%c%c%c%c%c%c%c%c%csystem(new_ship);%c%c%c%c%c}%c%c%c%c%creturn(0);%c}"

int main(){
    int i = 5;
    char new_ship[20];
    char new_pirate[25];
    char compile[300];
    FILE *pirate;
    sprintf(new_ship , "./Sully_%d", i);
    sprintf(new_pirate , "Sully_%d.c", i--);
    sprintf(compile, "gcc -Wall -Wextra -Werror %s -o %s", new_pirate, new_ship);
    pirate = fopen(new_pirate, "w");
    if(pirate != NULL){
        fprintf(pirate, SELF, 10, 10, 10, 34, SELF, 34, 10, 10, 10, 32, 32, 32, 32, i, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10 );
        fclose(pirate);
    }
    system(compile);
    if(i >= 0){
        system(new_ship);
    }
    return(0);
}