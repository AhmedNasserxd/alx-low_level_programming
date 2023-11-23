#include "main.h"

/**
*flip_bits - to determine the number of bits to flip
*@n: first used number
*@m: second used number
*Return: result
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int differ;
unsigned int diff;

diff = 0;

differ = n ^ m;

do {
diff += (differ & 1);
differ >>= 1;
} while
(differ > 0);

return (diff);
}
