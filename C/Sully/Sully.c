#include <stdio.h>
#include <stdlib.h>

#define SELF "#include <stdio.h>%c#include <stdlib.h>%c%c#define SELF %c%s%c%c%cint main(){%c%c%c%c%cint i = %d;%c%c%c%c%cchar new_exec[20];%c%c%c%c%cchar new_file[25];%c%c%c%c%cchar compile[300];%c%c%c%c%cFILE *file;%c%c%c%c%csprintf(new_exec , %c./Sully_%%d%c, i);%c%c%c%c%csprintf(new_file , %cSully_%%d.c%c, i--);%c%c%c%c%csprintf(compile, %cgcc -Wall -Wextra -Werror %%s -o %%s%c, new_file, new_exec);%c%c%c%c%cfile = fopen(new_file, %cw%c);%c%c%c%c%cif(file != NULL){%c%c%c%c%c%c%c%c%cfprintf(file, SELF, 10, 10, 10, 34, SELF, 34, 10, 10, 10, 32, 32, 32, 32, i, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10 );%c%c%c%c%c%c%c%c%cfclose(file);%c%c%c%c%c}%c%c%c%c%csystem(compile);%c%c%c%c%cif(i >= 0){%c%c%c%c%c%c%c%c%csystem(new_exec);%c%c%c%c%c}%c%c%c%c%creturn(0);%c}"

int main(){
    int i = 5;
    char new_exec[20];
    char new_file[25];
    char compile[300];
    FILE *file;
    sprintf(new_exec , "./Sully_%d", i);
    sprintf(new_file , "Sully_%d.c", i--);
    sprintf(compile, "gcc -Wall -Wextra -Werror %s -o %s", new_file, new_exec);
    file = fopen(new_file, "w");
    if(file != NULL){
        fprintf(file, SELF, 10, 10, 10, 34, SELF, 34, 10, 10, 10, 32, 32, 32, 32, i, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 34, 34, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10, 32, 32, 32, 32, 10 );
        fclose(file);
    }
    system(compile);
    if(i >= 0){
        system(new_exec);
    }
    return(0);
}