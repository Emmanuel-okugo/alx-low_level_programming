/**
 * swap_int - entry point for this function
 * @a: first parameter
 * @b: second parameter
 * descripton: swaps thwe values of variables usig pointers pointing to them
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
