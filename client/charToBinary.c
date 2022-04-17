#include <unistd.h>

int	main(void)
{
	char	*str;
	int		i;
	int		j;

	str = "ABCD";
	i = 7;
	j = 0;
	while (str[j])
	{
		i = 7;
		while (i >= 0)
		{
			if (str[j] & (1 << i))
				write(1, "1", 1);
			else
				write(1, "0", 1);
			i--;
		}
		write(1, " ", 1);
		j++;
	}
	return (0);
}