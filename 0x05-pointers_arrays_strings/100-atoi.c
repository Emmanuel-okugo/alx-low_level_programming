/**
 * _atoi - entry point
 * @s: parameter string to convert
 * descrition: a function that converts a sting to an integer
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, k;
	char l;
	int num = 0;
	int tens = 10;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-') /* finding the sign */
		{
			sign = -sign;
		}

		if (*(s + i) >= '0' && *(s + i) <= '9') /* if *(s + i) is a number*/
		{
			for (k = 0, l = '0'; l <= '9'; k++, l++)
			{
				if (*(s + i) == l) /* finding the number then updating our number */
				{
					num = (num * tens) + (k * sign);
					break;
				}
			}

			/* checking if the next characater is a number */
			if (*(s + i + 1) < '0' || *(s + i + 1) > '9')
			{
				return (num);
			}
		}
		i++;
	}
	return (0);
}
