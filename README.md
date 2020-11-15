# dps-lab-1
Laboratory 1
*************************************************************************************************
Versión utilizada de gcc --> gcc (MinGW.org GCC Build-2) 9.2.0
*************************************************************************************************
*************************************************************************************************
Salida de la compilación con gcc -Wall -std=c99
*************************************************************************************************
exampleStrings.c:22:19: warning: missing terminating " character
   22 | const char* s1 = R"foo(
      |                   ^
exampleStrings.c:22:19: error: missing terminating " character
   22 | const char* s1 = R"foo(
      |                   ^~~~~
exampleStrings.c:22:18: error: 'R' undeclared here (not in a function)
   22 | const char* s1 = R"foo(
      |                  ^
exampleStrings.c:23:1: error: expected ',' or ';' before 'Hello'
   23 | Hello
      | ^~~~~
exampleStrings.c:25:5: warning: missing terminating " character
   25 | )foo";
      |     ^
exampleStrings.c:25:5: error: missing terminating " character
   25 | )foo";
      |     ^~
exampleStrings.c: In function 'gets_example_func':
exampleStrings.c:32:16: warning: 'return' with a value, in function returning void [-Wreturn-type]
   32 |         return 1;
      |                ^
exampleStrings.c:28:6: note: declared here
   28 | void gets_example_func(void) {
      |      ^~~~~~~~~~~~~~~~~
exampleStrings.c: In function 'main':
exampleStrings.c:94:11: error: 's2' undeclared (first use in this function); did you mean 's1'?
   94 |     puts (s2);
      |           ^~
      |           s1
exampleStrings.c:94:11: note: each undeclared identifier is reported only once for each function it appears in
exampleStrings.c:73:10: warning: unused variable 'analitic3' [-Wunused-variable]
   73 |     char analitic3[100]="ð░ð¢ð░ð╗ð©Ð          ^~~~~~~~~
exampleStrings.c:69:9: warning: unused variable 'size_array2' [-Wunused-variable]
   69 |     int size_array2 = 100;
      |         ^~~~~~~~~~~
exampleStrings.c:68:9: warning: unused variable 'size_array1' [-Wunused-variable]
   68 |     int size_array1 = strlen("ð░ð¢ð░ð╗ð©Ð         ^~~~~~~~~~~
*************************************************************************************************
Salida de la compilación con gcc -Wall -std=c11
*************************************************************************************************
*************************************************************************************************
#Corección de errores en el codigo:
*************************************************************************************************
-En la función gets_example_func-->Al tratarse de una funcion void, no retorna nada por lo que suprimiendo el return ya no obtendriamos un warning, tambien se puede añadir un exit(0) para que se detenga la ejecución el programa, sería lo mas correcto.
-En la función get_y_or_n ---> Se esta reservando memoria de más, pues solo se va a almacenar 1 caracter 'y' or 'n' en la variable char response[8], por lo que con un [2] se reduce la memoria reservada. Además, el método gets no es seguro pues se puede producir un desbordamiento de buffer, por lo que se utiliza fgets para evitar esto fgets(response,sizeof(response),stdin); al indicar la longitud, se previene el desbordamiento de buffer.
-En el main:
            char analitic3[100]="аналитик";
            int size_array1 = sizeof("аналитик");/*Pondría sizeof para guardar el tamaño del array en la variable size_array1*/
            int size_array2 = sizeof(analitic3);/*De esta forma, guardo el tamaño del array de analitic3 en lugar del 100 y asi ya le doy uso al analitic3 colcándolo encima*/
            printf ("%d",size_array1);/*Como size_array1 no se utiliza, aqui deberia imprimirse el valor de la longitud size_array1, para ello la sentencia debería ser printf    ("%d",size_array1)*/
            printf ("%d",size_array2);/*Como size_array2 no se utiliza, aqui deberia imprimirse el valor de la longitud size_array2, para ello la sentencia debería ser printf ("%d",size_array2)*/
