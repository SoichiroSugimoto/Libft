#include "stdlib.h"
#include "stdio.h"
#include "libft.h"

int		main()
{
	printf("\n\n\n\n\n\n\n\n");
	printf("ft_splitのテスターです。\n\n使い方：区切り文字と区切りたい文字列を入力すると結果が帰ってきます。");
	printf("\n\n");
	char s[1000];
	char **spl;
	char c;
	char C;

	while(1)
	{

		printf("区切り文字：");
		scanf("%[^\n]%*c", &C);

		printf("区切りたい文字列：");
		scanf("%[^\n]%*c", s);

		printf("\n\n");
		spl = ft_split(s,C);
		for(int i = 0;spl[i];i++)
			printf("ft_split%d  ：  ""%s""\n",i,spl[i]);
		printf("\n\n\n");
		free(spl);
		printf("もう一度テストしますか？(nで終了):");
		scanf("%c", &c);
		if(c == 'n')
			break;
		printf("\n\n");
	}
	printf("\n\n");
	printf("メモリリークだけ後で確認してね！！");
}
