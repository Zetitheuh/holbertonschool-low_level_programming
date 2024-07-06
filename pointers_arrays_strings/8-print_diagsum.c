/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: the size of the matrix (number of rows/columns)
 */
void print_diagsums(int *a, int size)
{
	int main_diagonal_sum = 0;
	int secondary_diagonal_sum = 0;

	for (int i = 0; i < size; i++)
	{
		main_diagonal_sum += a[i * size + i];
		secondary_diagonal_sum += a[i * size + (size - 1 - i)];
	}
