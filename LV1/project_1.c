#include <stdio.h>
// needs to be imported to use booleans
#include <stdbool.h>
#include <string.h>


const int FULL_NAME_BUFFER = 50;

struct Full_name {
  char firstname[FULL_NAME_BUFFER];
  char lastname[FULL_NAME_BUFFER];
} name1;

int getLength(int (*array)[4]){
  int sizeArray = sizeof((*array));
  int sizeArrayItem = sizeof((*array)[0]);
  return sizeArray / sizeArrayItem;
}


// struct as function argument
char * getFullName(struct Full_name name ){
  return strcat(strcat(name.firstname, " "), name.lastname);
};

int main ()
{
  //printing multiple lines
  printf("Hello World V2 \n");
  printf("I'm learning C \n");
  printf("And I'm lovin' it! \n");
  /*This
   * is a multiline comment
   * */

  printf("Hello World!\nI'm learning C.\nAnd it is awesome!\n");
  printf("This is an qoutation \"Quote\" mark\n ");


  /*
   * variables: int,float,char
   *  syntax: type variableName = value;
   *
   *  format specifiers:
   *    %d and %i for int, 
   *    %c for char,
   *    %f or %F for float,
   *    %s for string,
   *    %lf double,
   *
   *  Data types: 
   *  int: 2 - 4 bytes
   *  float: 4 bytes (6-7 decimal digits)
   *  double: 8 bytes (up to 15 decimal digits --> more precise than float but use more memory too)
   *  char: 1 byte (single character or ASCII values)
   * 
   * */

  int myNum1 = 15; // range 123, -123
  char myChar1 = 'C'; // upper + lower cases
  float myFloat1 = 12.23; // 19.99, -19.99
  bool myBool1 = true;


  printf("%d and %c with %f \nAnd boolean %s \n", myNum1, myChar1, myFloat1, (myBool1 == 1) ? "true" : "false");

  int myNum2 = 23, myNum3 = 16, myNum4 = 42;

  // reassign variable
  myNum1 = myNum2;

  printf("mynum1 is  %d\n", myNum1);
  printf("myNum3 = %d\nmyNum4 = %d\n", myNum3, myNum4);

  // Calculate area of rectangle

  int length = 4, width = 6;
  int area;

  area = length * width;

  printf("Length = %d\nWidth = %d\nArea = %d\n", length, width, area);

  // Data typedef structt
  // int, float, double, char (alphanumeric character)
  // format specifiers: int (%d,%i), float (%f, %F), double (%lf), char (%c), string (%s)

  char myName1[] = "Paulin";

  printf("My name is %s\n", myName1);

  // ASCII for chars
  char a = 65, b = 66, c = 67;

  printf("%c\n%c\n%c\n", a, b, c);

  float myFloat2 = 12.345345;

  printf("myFloat2 with double precision = %.2f\nmyFloat in its entirety = %f\n", myFloat2, myFloat2);

  // Type conversion

  // implicit => auto 
  float myFloat3 = 5;
  float sum = 5.0 / 2; // 2.00 instead of 2.5
  printf("\nsum using implicit: %f\n", sum);

  // explicit => manual
  float correctSum = (float) 5 / 2; // 2.5
  printf("myFloat3: %f\nsum: %.2f\ncorrectSum: %.2f\n", myFloat3, sum, correctSum);

  const float MY_FLOAT_CONST = 3.14;
  printf("MY_FLOAT_CONST = %.2f\n", MY_FLOAT_CONST);

  // exponnetial float
  float f1 = 35e-3; // or float f1 = 35E3
  printf("%lf\n", f1);

  // sizeof operator
  // %lu means "long unsigned"
  printf("sizeof(f1) = %lu\n", sizeof(f1));

  // constants
  const char CONST_NAME[] = "Kubwira";
  printf("CONST_NAME: %s \n", CONST_NAME);

  // OPERATORS
  // ++x increment x by 1
  // --x decrement x by 1
  // A += x  increment A by x
  // A -= y decrement A by y
  // assignment operators
  // x/=3 --> x = x/3
  // "&" --> bitwise AND
  // "^" --> bitwise XOR
  // "|" --> bitwise OR
  // >> and << --> bitwise shift
  // conjunction or AND && 
  // disjunction or OR ||
  // == equal
  // != not equal
  // ! NOT
  printf("%f\n", ++myFloat3 );
  int num4 = 3;

  // 5/2 = 2 --> 1
  // 2/2 = 1 --> 0
  // 1/2 = 0 --> 1
  // 5 = 101 in base 2
  // 3 = 11 in base  2
  // 101
  // 110
  // 100 ==> 1
  num4 &= 5;
  printf("%d\n", num4 ); // 100 in binary or 1 in base 10

  int a_number = 1;
  int b_number = 2;
  // const char* s = (b_number > ) 
  printf("Number %d is larger than %d: %s", b_number, a_number, (b_number > a_number) ? "true" : "false");

  // Control Flow
  // if(EXPRESSION) {
  //   TO_DO
  // } else {
  //   TO_DO
  // }
  //
  //
  // shorthand
  // (EXPRESSION) ? EXPRESSION : EXPRESSION;
  //
  //
  // switch (EXPRESSION) {
  //  case x:
  //    TO_DO
  //    break;
  //  case y:
  //    TO_DO
  //    break;
  //  default:
  //    TO_DO
  // };
  //
  // INITIALIZE CONTROL VARIABLE
  // while (EXPRESSION) {
  // INCR or DECR CONTROL VARIABLE
  // }
  //
  // do {
  // TO_DO
  // } while (CONDITION);
  //
  // for (EXPRESSION_1, EXPRESSION_2, EXPRESSION_3) {
  //   TO_DO
  // }
  //

  for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
  }

  // statements:
  // break --> jump out of  loop 
  // continue --> skip the iteration of a loop
  //

  // ARRAY
  int myNumbers[] = {25,50,75,100};
  printf("%d\n", myNumbers[0]); // 25

  myNumbers[0] = 44;

  printf("After modification%d\n", myNumbers[0]);
  // Looping over an array
  int arrLength = sizeof(myNumbers) / sizeof(myNumbers[0]); 
  for (int i = 0; i < arrLength; i++ ) {
    printf("%d\n", myNumbers[i]);
  }
  // using pointer
  int (*ptr)[4];
  ptr = &myNumbers;
  printf("%d\n", getLength(ptr));

  // Multidimensional arrays
  // 2 x 3 matrix
  // 1 | 4 | 2 
  // --+---+--
  // 3 | 6 | 8
  //
  int matrix[2][3] = {{1,4,2}, {3,6,8}};

  printf("%d\n", matrix[0][2]); // 2

  // strings
  // are implemented as char array
  char greetings[] = "Hello World!"; // mandator to use ""
  printf("Intial greetings: %s\n", greetings); // "Hello World!"

  greetings[0] = 'J'; // "" for string and '' for char
  printf("Modified greetings: %s\n", greetings); // "Jello World!"
  printf("%c\n", greetings[0]); // g

  int greetingsLength = sizeof(greetings)/sizeof(greetings[0]);

  // loop through string
  int i;
  for (i = 0; i < greetingsLength; ++i) {
    printf("%c\n", greetings[i]);
  }

  // pointer testing
  int myNum5 = 42;
  // create pointer and reference myNum5 
  int (*myNum5Ptr) = &myNum5; 
  printf("myNum5 with ptr = %d\n", *myNum5Ptr); // 42

  // pointer to 2d array
  int my2DArray[2][2] = {{1,2},{3,4}};

  int (*my2DArrayPtr)[2][2]= &my2DArray;
  printf("row 1 col 2 is %d\n", (*my2DArrayPtr)[0][1]); // 2

  for (int i=0; i < 2; i++) {
    for (int j=0; j < 2; j++) {
      printf("%d", (*my2DArrayPtr)[i][j]);
    }
    printf("\n");
  }

  // 3d array
  int my3DArr[2][3][2] = {{{1,2}, {3,4}, {5,6}}, {{7,8}, {9,10}, {11,12}}};
  int (*my3DArrPtr)[2][3][2] = &my3DArr;

  printf("Printing 3D array next: \n");

  for (int i=0; i < 2; i++){
    for (int j=0; j < 3; j++){
      for(int k =0; k < 2; k++ ) {
        printf("%d", (*my3DArrPtr)[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  // special characters
  // use "\" to escape special characters
  char someText1[] = "We are \"VICKINGS\"";

  printf("Who are y'all? \n\t%s\n", someText1);

  char myString1[] = "Hello";
  printf("this is myString1 = %lu\n", strlen(myString1));

  // user defined types: 
  // struct: 
  struct book {
    char title[20];
    char author[20];
    double price;
    int pages;
  };

  // initialization

  // typedef:
  // union:
  // enum:
  enum week{Mon=10, Tue, Wed, Thu=15, Fri, Sat, Sun=11};
  // assign both book1 and book2
  struct book book1 = {"Some Title", "Paulin Kubwira", 99.99, 800}, book2;

  book2 = book1;
  printf("The book %s was written by: %s \nIt sells for %lf $USD and has %d pages \n", book1.title, book1.author, book1.price, book1.pages);
  // another way to declare and initialize a struct MyStruct 


  strcpy(name1.firstname, "Paulin");
  strcpy(name1.lastname, "Kubwira");

  char myFullName[2 * FULL_NAME_BUFFER];
  strcpy(myFullName, getFullName(name1));

  printf("full name: %s\n", myFullName);




  // storage types: 
  // - auto: automatic storage class
  // - extern: variable or function; extern is used to declare a global variable 
  // or function in another file
  // - static: static storage class; existence during the life-time of the program
  // instead of creating and destroying it each time it comes into and goes out of
  // scope.
  // - register: register storage class;  has a maximum size equal to the register
  // size (usually one word) and can't have the unary '&' operator applied to it 
  // (as it does not have a memory location).
  // }

  // user input:
  //
  // scanf: 
  //
  // getchar: single char (no need to press enter after input)
  //
  // fgets: until encounters new line or end of buffer
  //
  // fgets(char *str, int n, FILE *stream)
  // str - It is the variable in which the string is going to be stored 
  // n - It is the maximum length of the string that should be read 
  // stream - It is the filehandle, from where the string is to be read.
  //
  // gets: 
  //
  // manual char sequence
  //
  // char ch;
  // char word[10];
  //  ...
  //  int i = 0;
  //  while(1) {
  //    ch = getchar();
  //    word[i] = ch;
  //    if (ch == '\n')
  //      break;
  //    i++;
  //  }

  return 0;
}

