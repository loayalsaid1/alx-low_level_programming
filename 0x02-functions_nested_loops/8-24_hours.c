#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 */
void jack_bauer(void)
{
	int hours_digit1;
	int hours_digit2;
	int minutes_digit1;
	int minutes_digit2;

	for (hours_digit1 = 0; hours_digit1 <= 2; hours_digit1++)
	{
		for (hours_digit2 = 0; hours_digit2 <= 9; hours_digit2++)
		{
			for (minutes_digit1 = 0; minutes_digit1 <= 5; minutes_digit1++)
			{
				for (minutes_digit2 = 0; minutes_digit2 <= 9; minutes_digit2++)
				{
					_putchar('0' + hours_digit1);
					_putchar('0' + hours_digit2);
					_putchar(':');
					_putchar('0' + minutes_digit1);
					_putchar('0' + minutes_digit2);
					_putchar('\n');
				}
			}

			if (hours_digit2 == 3 && hours_digit1 == 2)

			break;
		}
	}
}
