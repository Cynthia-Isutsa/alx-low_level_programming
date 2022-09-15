#include <stdlib.h>
<<<<<<< HEAD
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: print value of n satus; zero, positive or negative
=======
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: print value of n status; zero, positive or negative
 *
>>>>>>> 0971067c0c773e776b44db77969f7951e6bab125
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD

					/*my code*/


=======
	/*My code*/
>>>>>>> 0971067c0c773e776b44db77969f7951e6bab125
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
<<<<<<< HEAD
			return (0);

}
=======
	return (0);
}

>>>>>>> 0971067c0c773e776b44db77969f7951e6bab125
