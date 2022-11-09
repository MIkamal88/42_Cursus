#include "libft.h"
#include <string.h>

// size_t ft_strlcpy(char *dst, const char *src, size_t size)
// {

// }
int main(void)
{
	char dst[100];
	char src[] = "This is my test phrase";

	printf("%d\n", strlcpy(dst, src, 23));
}
