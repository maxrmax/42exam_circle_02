typedef struct s_list
{
	int		data;
	t_list	*next;
}			t_list;

int	ascending(int a, int b)
{
	return (a <= b);
}
