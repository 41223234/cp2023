#include <stdio.h>     // Include the standard input/output header file.

float kmph;              /* kilometers per hour */
float miph;              /* miles per hour (to be computed) */
char  line_text[50];      /* a line from the keyboard */

int main()
{
printf("Input kilometers per hour: ");   // Prompt the user to input kilometers per hour.
fgets(line_text, sizeof(line_text), stdin);   // Read a line of input from the user and store it in 'line_text'.
sscanf(line_text, "%f", &kmph);   // Convert the input to a float and store it in 'kmph'.

miph = (kmph * 0.6213712);   // Convert kilometers per hour to miles per hour.
printf("%f miles per hour\n", miph);   // Print the result in miles per hour.

return(0);   // Return 0 to indicate successful execution of the program.
}
