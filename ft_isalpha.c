#include <unistd.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
#include <stdio.h>
int main()
{
	int d = 0;
	printf("%d", ft_isalpha(d));
}