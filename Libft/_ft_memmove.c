#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	//Copies 'n' bytes from memory area 'src' to memory area 'dest'.
	//Memory areas may overlap as copying takes place in a temp array first then to dest.
	char	*char_dest;
	char	*char_src;
	char	*swap;
	size_t	i;

	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	
}
