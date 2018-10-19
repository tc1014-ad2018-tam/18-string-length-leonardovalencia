#include <stdio.h>
//This program was created for the purpose of asking the user to enter a string and the program will check its length.
//Marco Leonardo Valencia
//A01412017
//Date: October 17


//First I make a function that will calculate the lenght of the string received
int stringlenght (char strlenght[]){
    int contador=0;
    while (strlenght[contador] != '\0'){
       contador = contador + 1;
    }
    return contador-1;
}

int main() {
    //Then we declare the variables we are gonna use

    char strlenght[100];
    int valorregresado; //Variable where we will save the the lenght of the string
    printf("Hello, please give me a string\n");

    //Then I get the input from the user
    fgets(strlenght, sizeof(strlenght), stdin);
    valorregresado=stringlenght(strlenght);
    printf("Your string has a lenght of %i charachters\n", valorregresado);

    return 0;
}