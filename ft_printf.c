#include <stdarg.h>

int		ft_typeanalize(const char *format)
{
	printf("%s\n", format);
	if (strncmp(format, "%c", 2) == 0)
		printf("%s\n","char recognized");
	if (strncmp(format, "%i", 2) == 0)
		printf("%s\n","i recognized");
	if (strncmp(format, "%e", 2) == 0)
		printf("%s\n","e recognized");
		if (strncmp(format, "%s",2) == 0)
		printf("%s\n","s recognized");
	return(0);
}

int		ft_printf(const char *format, ...)
{
	va_list ap;
	char *x;


	va_start(ap, format);
	x = va_arg(ap, char *);
	ft_typeanalize(format);
	printf("%s\n", x);
    va_end(ap);
	return(0);
}

int main()
{
	ft_printf("%s\n", "hello");
	printf("%s\n", "hello");
	return(0);
}
