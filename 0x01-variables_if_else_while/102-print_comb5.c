/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers from two digits
 * Return: Zero value
 */

int main(void)
{
	int y = 0;
	int t;

	for (y = 0; y <= 99; y++)
	{
		for (t = y + 1; t <= 99; t++)
		{
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			putchar(' ');
			putchar((t / 10) + '0');
			putchar((t % 10) + '0');

			if (y < 98 || t < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
