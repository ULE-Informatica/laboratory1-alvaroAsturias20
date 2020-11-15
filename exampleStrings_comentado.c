#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char array1[] = "Foo" "bar"; 
char array2[] = { 'F', 'o', 'o', 'b', 'a', 'r', '\0' };
 
enum { BUFFER_MAX_SIZE = 1024 };
 /*Raw string litereal no es implementado para c sino para c++. Su implementacion sería --> const char* s1 = "Hello world";*/
const char* s1 = R"foo( 
Hello
World
)foo";
const char* s2 = "\nHello\nWorld\n";

void gets_example_func(void) {
  char buf[BUFFER_MAX_SIZE];
 
  if (fgets(buf, sizeof(buf), stdin) == NULL) {
        return 1;/*Al tratarse de una funcion void, no retorna nada por lo que suprimiendo el return ya no obtendriamos un warning, tambien se puede añadir un exit(0) para
		que se detenga la ejecución el programa, sería lo mas correcto*/
  }
  buf[strlen(buf) - 1] = '\0';
}

const char *get_dirname(const char *pathname) {
  char *slash;
  slash = strrchr(pathname, '/');
  if (slash) {
    *slash = '\0'; /* Undefined behavior */
  }
  return pathname;
}
 

void get_y_or_n(void) {  
	char response[8];/*Se esta reservando memoria de más, pues solo se va a almacenar 1 caracter 'y' or 'n', por lo que con un [2] se reduce la memoria reservada. Reservamos
	para 2 posiciones porque fgets añade un salto de linea al final, de modo que hay que reservar una posción más de la esperada. Además, dicha posición debería 
	de eliminarse después con la linea --> cadena[strcspn(cadena, "\r\n")] = 0;*/

	printf("Continue? [y] n: ");  
	gets(response);/*gets no es seguro pues se puede producir un desbordamiento de buffer y además está en desuso, por lo que se utiliza fgets para evitar esto fgets(response,sizeof(response),stdin);
	al indicar la longitud, se previene el desbordamiento de buffer ya que fgets solo leerá la longitud que le indiques*/

	if (response[0] == 'n') 
		exit(0);  

	return;
}

 
int main(int argc, char *argv[])
{
    char key[24];
    char response[8];
    char array3[16];
    char array4[16];
    char array5 []  = "01234567890123456";
    char *ptr_char  = "new string literal";
    char analitic3[100]="аналитик";
    int size_array1 = strlen("аналитик");/*Pondría sizeof para guardar el tamaño del array en la variable size_array1*/
    int size_array2 = sizeof(analitic3);/*De esta forma, guardo el tamaño del array de analitic3 en lugar del 100*/
    
   // char analitic1[size_array1]="аналитик";
   // char analitic2[size_array2]="аналитик";
    

    puts(get_dirname(__FILE__));

        
    strcpy(key, argv[1]);  
    strcat(key, " = ");  
    strcat(key, argv[2]);


    fgets(response,sizeof(response),stdin);
    
    get_y_or_n();

    printf ("%s",array1);/*Aqui podría imprimirse el valor de la longitud size_array1, para ello la sentencia debería ser printf ("%d",size_array1)*/
    printf ("\n");
    printf ("%s",array2);/*Aqui podría imprimirse el valor de la longitud size_array2, para ello la sentencia debería ser printf ("%d",size_array2)*/
    printf ("\n");
 
    puts (s1);
    printf ("\n");
    puts (s2);
    printf ("\n");
    
    strncpy(array3, array5, sizeof(array3));  
    strncpy(array4, array3, strlen(array3));
    
    array5 [0] = 'M';
    ptr_char [0] = 'N';
    
    array3[sizeof(array3)-1]='\0';
    
    
    return 0;
}
