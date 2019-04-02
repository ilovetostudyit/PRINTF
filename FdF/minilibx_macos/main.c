
#include <unistd.h>
#include "mlx.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
  write(1, &c, 1);
}

int deal_key(void *key, void *param)
{
  int a;
  int color;
			color = rand() % 255255255;
			printf("%d\n", color);
			a = 0;
			//1 square
				while (a < 101)
			{
				mlx_pixel_put(key, param, a+200, 300, color);
				a++;
			}
					a = 0;
					while (a < 101)
			{
				mlx_pixel_put(key, param, 200, 300+a, color);
				a++;
			}
					a = 0;
					while (a < 101)
			{
				mlx_pixel_put(key, param, 300, 300+a, color);
				a++;
			}
					a = 0;
					while (a < 101)
			{
				mlx_pixel_put(key, param, a+200, 400, color);
				a++;
			}
			//2 square
					a = 0;
					while (a < 101)
			{
				mlx_pixel_put(key, param, a+150, 350, color);
				a++;
			}
					a = 0;
					while (a < 101)
			{
				mlx_pixel_put(key, param, 150, 350+a, color);
				a++;
			}
					a = 0;
					while (a < 101)
			{
				mlx_pixel_put(key, param, 250, 350+a, color);
				a++;
			}
					a = 0;
					while (a < 101)
			{
				mlx_pixel_put(key, param, a+150, 450, color);
				a++;
			}
					//lines
					a = 0;
					while (a < 51)
			{
				mlx_pixel_put(key, param, 200-a, 300+a, color);
				a++;
			}
					a = 0;
					while (a < 51)
			{
				mlx_pixel_put(key, param, 300-a, 300+a, color);
				a++;
			}
					a = 0;
					while (a < 51)
			{
				mlx_pixel_put(key, param, 200-a, 400+a, color);
				a++;
			}
					a = 0;
					while (a < 51)
			{
				mlx_pixel_put(key, param, 300-a, 400+a, color);
				a++;
			}
return(1);
}

int line_size(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\n')
		i++;
	return(i);
}

int matrix_size(char *str)
{
	int i;
	int a;
	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			a++;
		i++;
	}
	return(a+1);
}

char *ft_matrix_transform(char *str)
{
	int i;
	int x;
	int y;
	int size;
	int count;
	int count2;
	int mass[26][4];

	i = line_size(str);
	x = 0;
	y = 0;
	count = 0;
	count2 = 0;
	size = matrix_size(str);
	while (y < size)
	{
		printf("%d ", x);
		printf("%d ", y);
		printf("%c\n", str[count]);
		x++;
		count++;
		if (x == i)
		{
			x = 0;
			y++;
			count++;
		}
	}
	return(0);
}

int main()
{
	void *mlx_ptr;
	void *win_ptr;
	int a;
	char *b;

	a = 0;
	b = "00000\n01110\n01210\n01110\n00000";
	ft_matrix_transform(b);
	printf("%s\n", b);
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 600, 600, "sonia");
	mlx_key_hook(win_ptr, deal_key, (mlx_ptr,win_ptr));
	mlx_loop(mlx_ptr);
	return(0);
}
