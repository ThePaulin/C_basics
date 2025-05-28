#include <stdio.h>
#include <string.h>

int BUFFER = 20;

int main() {
  char nom[BUFFER];
  char prenom[BUFFER];
  int age;
  char gender;
  char * userGender = "man";

  // additional 
  char name[50];


  printf("Entrez votre nom de famille: \n" );
  // scanf("%s", &nom );
  fgets(nom, BUFFER,stdin);
  nom[strcspn(nom, "\n")] = 0;
  printf("Entre votre prenom et age en chiffre: \n");
  // scanf("%s %d", &prenom, &age);
  fgets(prenom, BUFFER, stdin);

  // replacing character at index of line-break with 0, to end string
  prenom[strcspn(prenom, "\n")] = 0;
  scanf("%d", &age);

  printf("Your name is %s %s and you are %d years old.\n", prenom, nom, age);
  printf("Hello %s!\n", prenom);

  printf("Gender (M/F)?\n");
  scanf("%s", &gender);

  printf("Additional name? \n");
  scanf("%49s",name);

  printf("Additional name is %s \n", name);



  if(gender == 'F') {
    userGender = "woman";
  };



  printf(" You are a %s. \n", userGender);
  return 0;

}
