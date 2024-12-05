#include <stdio.h>
#include "utils.h"

void helpMenu(){

    printf("Usage: bitwise_calculator [flags] [operation] [operand1] [operand2]\n");
    printf("\nPerform bitwise operations on integers.\n\n");
    printf("Flags:\n");
    printf("  -i    Perform bitwise operation on two or more signed (int, char, long) values\n");
    printf("  -u    Perform bitwise operation on two or more unsigned values");
    printf("  -h    Perform bitwise operation on two or more hex values\n");
    printf("  -m    Perform bitwise operation on two or more hex/signed/unsigned values\n");
    printf("    -r [s/u/b]    Specifies whether result will be output as signed or unsigned value");
    printf("Operations:\n");
    printf("  AND        Perform bitwise AND on operand1 and operand2\n");
    printf("  OR         Perform bitwise OR on operand1 and operand2\n");
    printf("  XOR        Perform bitwise XOR on operand1 and operand2\n");
    printf("  NOT        Perform bitwise NOT on operand1 (operand2 is ignored)\n");
    printf("  LSHIFT     Shift bits of operand1 to the left by operand2 positions\n");
    printf("  RSHIFT     Shift bits of operand1 to the right by operand2 positions\n");
    printf("\nExamples:\n");
    printf("  bitwise_calculator AND 5 3\n");
    printf("  bitwise_calculator NOT 10\n");
    printf("  bitwise_calculator LSHIFT 4 2\n\n");
    printf("Note:\n");
    printf("  - Both operand1 and operand2 must be integers.\n");
    printf("  - For NOT operation, only operand1 is required.\n");

}