#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int num_of_array;

	do
	{
		printf("how many elements you want to store in the array? ");
		scanf("%d", &num_of_array);
	} while (num_of_array <= 0);

	int *ptr;

	ptr = (int *)malloc(sizeof(int) * num_of_array);

	if (ptr == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	// allocate space for the array.
	int i;

	for (i = 0; i < num_of_array; i++)
	{
		/* code */
		printf("Input Element [%d]: ", i + 1);
		scanf("%d", &ptr[i]);
	}

	printf("printing the elements\n");

	for (i = 0; i < num_of_array; i++)
	{
		/* code */
		printf("%d\n", ptr[i]);
	}

	free(ptr);
	return (0);
}