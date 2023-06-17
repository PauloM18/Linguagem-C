#include <stdio.h>
#include <locale.h>
void copiarString(char *copiarDaqui, char *colarAqui){
    while(*copiarDaqui != '\0'){
        *colarAqui = *copiarDaqui;
        ++copiarDaqui;
        ++colarAqui;
    }
    *colarAqui = '\0';
};

int main(void){
    setlocale(LC_ALL,"portuguese");
    void copiarString(char *copiarDaqui, char *colarAqui);

    char string1[] = "P�o com mortadela";
    char string2[20];

    copiarString(string1, string2);
    printf("%s\n", string2);
    getchar();
    return 0;
}