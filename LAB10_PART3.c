/*Jasmin Mungia 
 CSC 3320 LAB10
  jmungia1
 10/30/2020
 
 Description: I am declaring a char buffer array with allowed 100 elements and char buffer2 array with allowed 100 elemetns. I open the file called sendADropOfKindness and read it, storing the read content into stream. then I initialize an interger count that counts the characters read by buffer and count2 counts the characters read by buffer2. I set buffer to read the first 200 character of the poem and buffer2 reads the remaing 100 or less character of the remaining poem.*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

char buffer[200],buffer2[100];
/*declaring the two char buffer arrays that I will be using the read and retrieve the poem content on to output*/
FILE *stream; 
/*decaltig the file and setting stream as a pointer, which it will help us locate the address of the element we want in the poes*/
stream = fopen("sendADropOfKindness.txt", "r");
/*im opening the txt file sendADropOfKindness and reading it, will stroing the content/ address in to stream*/

int count = fread(&buffer, sizeof(char),200,stream);
/*we are initiating the count, and also we are setting buffer char to read the first 200 characters*/
int count2= fread(&buffer2,sizeof(buffer-buffer2),100,stream);
/*we are initiating the count and we are setting buffer 2 char to read the remaining 100 or less                                                               characters*/

fclose(stream);/*closing the opened file*/

printf("\nData read from file:\n%s\n",buffer);/*printing out buffer content*/
printf("\nData read from file: \n%s\n",buffer2);/*printing out buffer2 content*/
printf("\nElements read:%d\n",count);/*printing out buffer count*/
printf("\nElements read: %d\n", count2);/*printing out butter2 count*/
}
