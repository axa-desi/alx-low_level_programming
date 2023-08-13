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
	int count = 0;

	while (y <= 98)
	{
		t = y + 1;
		while (t <= 99)
		{
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			putchar(' ');
			putchar((t / 10) + '0');
			putchar((t % 10) + '0');

			if (count != 4949)
			{
				putchar(',');
				putchar(' ');
			}
			t++;
			count++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
