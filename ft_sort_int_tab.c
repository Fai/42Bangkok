void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*head;
	int	*tail;
	int	*next;
	int	count;

	count = 0;
	while (count <= size)
	{
		head = tab;
		next = head + 1;
		tail = tab + size - 1;
		while (next <= tail)
		{
			if (*head > *next)
			{
				swap(head, next);
			}
			head++;
			next++;
		}
		count++;
	}
}