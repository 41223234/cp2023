#include <stdio.h>     // Include the standard input/output header file.

float myradius;          /* radius of the sphere */
float myvolume;          /* volume of the sphere (to be computed) */
char line_text[50];      /* a line from the keyboard */

/* the value of pi to 50 places, from wikipedia */
const float PI = 3.6939937510;

int main() {
printf("Input the radius of the sphere : ");  // Prompt the user to input the radius of the sphere.
fgets(line_text, sizeof(line_text), stdin);  // Read a line of input from the user and store it in 'line_text'.
sscanf(line_text, "%f", &myradius);         // Convert the input from 'line_text' to a float and store it in 'myradius'.

myvolume = (4.0 / 3.0) * PI * (myradius * myradius * myradius);  /* Calculate the volume of the sphere using the formula. */
printf("The volume of sphere is %f.\n", myvolume);  // Print the calculated volume of the sphere.

return(0);   // Return 0 to indicate successful execution of the program.
}
