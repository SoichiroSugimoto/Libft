# Libft
## ●　PRPJECT OBJECTIVES<br>
>The aim of this project is to code a C library regrouping usual functions that you’ll be allowed to use in all your other projects.
<br>
<br>
<br>
<br>

## ●　USAGE
#### Preparation<br>
・main.c<br>
```
#include "libft.h"
#include <stdio.h>

int main()
{
	int n;
	char *str;

	str = "apple";
	n = ft_strlen(str);

	printf("%d\n", n);
}
```

#### Compile<br>
1) `$ make` in root dir to generate 'function name'.o<br>
2) `$ gcc 'function name'.o main.c` to generate a.out<br>
3) `$ ./a.out` to implement program
<br>
<br>
<br>
<br>

This project is from [42Tokyo](https://42tokyo.jp/) belongs to [42Network](https://www.42.fr/)
