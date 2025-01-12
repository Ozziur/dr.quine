#include <stdio.h>

// pirates are outside

char *ship() {
    return "#include <stdio.h>%c%c// pirates are outside%c%cchar *ship() {%c    return %c%s%c;%c}%c%cint main() {%c    char *pirate;%c%c    pirate = ship();%c    // pirate is now inside%c    printf(pirate, 10, 10, 10, 10, 10, 34, pirate, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);%c    return 0;%c}%c";
}

int main() {
    char *pirate;

    pirate = ship();
    // pirate is now inside
    printf(pirate, 10, 10, 10, 10, 10, 34, pirate, 34, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    return 0;
}
