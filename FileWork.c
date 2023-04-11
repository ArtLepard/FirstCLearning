#include <stdio.h>
                              
int main(){
    char line[255]; 
FILE *Myfile = fopen("test.txt", "r");   //"r" - to read file "w" - to right in file "a" - to apend file
                                        // fprintf(Myfile, "\nSecond wright in my file"); -позволяет записывать в файле
    fgets(line, 255, Myfile);           // - позволяет считать одну строку из файла
        printf("%s", line);
    fgets(line, 255, Myfile);           // - позволяет считать одну строку из файла
        printf("%s", line);    


    fclose(Myfile);
    return 0;
}