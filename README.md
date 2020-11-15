# dps-lab-1

En el archivo exampleStrings_comentado.c se detallan los errores y arreglos del código sin modificar el original.
En el archivo exampleStrings_sinErrores.c se muestra el código editado y que compila sin errores tanto para el estandar 99 como el 11.
- Versión utilizada de gcc --> gcc (MinGW.org GCC Build-2) 9.2.0


## Salida de la compilación con gcc -Wall, sin estándares
```
exampleStrings.c: In function 'gets_example_func':
exampleStrings.c:32:16: warning: 'return' with a value, in function returning void [-Wreturn-type]
   32 |         return 1;
      |                ^
exampleStrings.c:28:6: note: declared here
   28 | void gets_example_func(void) {
      |      ^~~~~~~~~~~~~~~~~
exampleStrings.c: In function 'main':
exampleStrings.c:73:10: warning: unused variable 'analitic3' [-Wunused-variable]
   73 |     char analitic3[100]="ð░ð¢ð░ð╗ð©Ð          ^~~~~~~~~
exampleStrings.c:69:9: warning: unused variable 'size_array2' [-Wunused-variable]
   69 |     int size_array2 = 100;
      |         ^~~~~~~~~~~
exampleStrings.c:68:9: warning: unused variable 'size_array1' [-Wunused-variable]
   68 |     int size_array1 = strlen("ð░ð¢ð░ð╗ð©Ð         ^~~~~~~~~~~

```
## Salida de la compilación con gcc -Wall -std=c99
```
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
```
## Salida de la compilación con gcc -Wall -std=c11
```
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
```
## Salida de la compilación con g++ -Wall
En este caso solo se incluye la salida sin estándares ya que tanto para el estandar 99 como para el 11 la salida es la misma que la que se ve a continuación.
```
exampleStrings.c: In function 'void gets_example_func()':
exampleStrings.c:32:16: error: return-statement with a value, in function returning 'void' [-fpermissive]
   32 |         return 1;
      |                ^
exampleStrings.c: In function 'int main(int, char**)':
exampleStrings.c:67:23: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
   67 |     char *ptr_char  = "new string literal";
      |                       ^~~~~~~~~~~~~~~~~~~~
exampleStrings.c:68:9: warning: unused variable 'size_array1' [-Wunused-variable]
   68 |     int size_array1 = strlen("ð░ð¢ð░ð╗ð©Ð         ^~~~~~~~~~~
exampleStrings.c:69:9: warning: unused variable 'size_array2' [-Wunused-variable]
   69 |     int size_array2 = 100;
      |         ^~~~~~~~~~~
exampleStrings.c:73:10: warning: unused variable 'analitic3' [-Wunused-variable]
   73 |     char analitic3[100]="ð░ð¢ð░ð╗ð©Ð          ^~~~~~~~~

```
## Reglas CMU-Cert que se incumplen en el código

- STR31-C Guarantee that storage for strings has sufficient space for character data and the null terminator --> Línea 51
- MSC34-C Do not use deprecated or obsoloescent functions --> Linea 51
- MEM35-C. Always allocate sufficient memory for an object. --> Linea 17,18 y 66 
- STR30-C. Do not attempt to modify string literals ---> Linea 67, 101
- ARR02-C. Explicitly specify array bounds, even if implicitly defined by an initializer --> Linea 18
- ARR32-C  Ensure size arguments for variable length arrays are in a valid --> Linea 48

## Análisis de los resultados
Para la edición del programa se ha decidido realizar los cambios en base a la compilación con gcc y el estándar 99.

En este apartado se comentan las diferentes salidas que presentan las diferentes compilaciones.
- Compilación con gcc sin estándares: 
   - En la función 'gets_example_func' se obtiene un warning por que retorna un 1 cuando la función es de tipo void.
   - En el main, se obtienen tres warning por tener sin utilizar tres variables--> 'analitic3', 'size_array1' y 'size_array2'
- Compilación gcc con estándar 99:
   - En la declaracion de const char* s1 se obtienen 4 errores y 2 warning.
   - En la función 'gets_example_func' se obtiene un warning por que retorna un 1 cuando la función es de tipo void.
   - En el main, error en la declaración de s2.
   - En el main, se obtienen tres warning por tener sin utilizar tres variables--> 'analitic3', 'size_array1' y 'size_array2'.
- Compilación gcc con estándar 11: Igual que con el estándar 99
   - En la declaracion de const char* s1 se obtienen 4 errores y 2 warning.
   - En la función 'gets_example_func' se obtiene un warning por que retorna un 1 cuando la función es de tipo void.
   - En el main, error en la declaración de s2.
   - En el main, se obtienen tres warning por tener sin utilizar tres variables--> 'analitic3', 'size_array1' y 'size_array2'.
- Compilación con g++ sin estándares:
   - En la función 'gets_example_func' se obtiene un warning por que retorna un 1 cuando la función es de tipo void.
   - En el main, se obtiene un warning por intentar modificar un string constant en un puntero a caracteres. --> char *ptr_char  = "new string literal";
   - En el main, se obtienen tres warning por tener sin utilizar tres variables--> 'analitic3', 'size_array1' y 'size_array2'.
