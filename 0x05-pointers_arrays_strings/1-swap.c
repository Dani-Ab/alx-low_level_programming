/**
 * swap_int - swaps the values of two integers.
 * @a: First value.
 * @b: Second value.
 */
void swap_int(int *a, int *b)
{
	int aa;
	int bb;

	aa = *a;
	bb = *b;

	*a = bb;
	*b = aa;
}
