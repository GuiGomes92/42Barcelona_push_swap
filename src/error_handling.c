#include "../inc/pushswap.h"
#include "../42Barcelona_libft/libft.h"
#include <unistd.h>
#include <stdio.h>

int isAllNumbers(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while(i < argc)
    {
      while(argv[i][j] != '\0') {
      if(ft_isdigit(argv[i][j]) != 1) 
      {
          write(1, "Error", 5);
          return(-1);
      }
        j++;
      }
      j = 0;
      i++;
    }
	return(0);
}

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

//TODO
int isRepeated(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    while(i < argc)
    {
      if (ft_strcmp(argv[i],"-2147483648") == 0 || ft_strcmp(argv[i],"2147483647") == 0)
      {
        write(1, "Error", 5);
        return(-1);
      }
      j = i + 1;
      while(j < argc)
      {
        if(ft_strcmp(argv[i], argv[j]) == 0)
        {
          write(1, "Error", 5);
          return(-1);
        }
        j++;
      }
      i++;
    }
	return(0);
}