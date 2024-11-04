

#include "../../includes/push_swap.h"

char    **args_splitter(char *args[])
{
	char	**result;
	result = ft_split(args[1], ' ');
	return (result);
}