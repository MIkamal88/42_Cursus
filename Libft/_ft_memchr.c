#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	//Scans the first 'n' bytes of memory area pointed to by 's' for the first instance of 'c'. Both 'c' and the bytes of memory pointed to by 's' are interpreted as unsigned char.
	size_t i;
	unsigned char	*char_s;

	char_s = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (c == char_s[i])
			return (char_s + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char data[] = {'q', 'w', 'a', 's', 'r', 'p', 'z', 'x'};
// 	char *pos = ft_memchr(data, 'k', 8);
// 	printf("pos[0] = %c\n", pos[1]);
// }
// Error returned when 2nd argument isn't in the array.
