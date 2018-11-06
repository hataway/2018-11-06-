#include <stdio.h>
#include <string.h>

struct priv {
	char name[20];
	int birthday;
	char gen[5];
	char address[20];
	int num;
};

int main()
{
	struct priv arr[10];
	int i, n;

	printf("몇 명을 입력하시겠습니까? (5명에서 10명 사이) : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("%d번째 사람입니다.\n", i + 1);
		printf("이름을 입력하세요 : ");
		scanf("%s", arr[i].name);
		printf("생년월일을 입력하세요 : ");
		scanf("%d", &arr[i].birthday);
		printf("성별을 입력하세요 : ");
		scanf("%s", arr[i].gen);
		printf("주소를 입력하세요 : ");
		scanf("%s", arr[i].address);
		printf("전화번호를 입력하세요 : ");
		scanf("%d", &arr[i].num);
		printf("\n");
	}

	printf("------------- 입력한 정보 -------------\n");

	printf("%-8s %-12s %-8s %-30s %10s\n", "이름", "생년월일", "성별", "주소", "전화번호");
	
	for (i = 0; i < n; i++)
	{
		printf("%-8s %-12d %-8s %-30s 0%-10d\n", arr[i].name, arr[i].birthday,arr[i].gen,arr[i].address,arr[i].num);
	}

	printf("\n");

	printf("------------- 생년월일 순으로 오름차순 -------------\n");

	printf("%-8s %-12s %-8s %-30s %10s\n", "이름", "생년월일", "성별", "주소", "전화번호");

	int a, b;
	struct priv temp;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			if (arr[a].birthday < arr[b].birthday)
			{
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;
			}
		}
	}

	printf("\n");

	for (i = 0; i < n; i++)
	{
		printf("%-8s %-12d %-8s %-30s 0%-10d\n", arr[i].name, arr[i].birthday, arr[i].gen, arr[i].address, arr[i].num);
	}

	printf("\n");

	printf("------------- 이름 순으로 내림차순 -------------\n");

	printf("%-8s %-12s %-8s %-30s %10s\n", "이름", "생년월일", "성별", "주소", "전화번호");

	struct priv temp2;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			if (strcmp(arr[a].name, arr[b].name) == 1)
			{
				temp2 = arr[a];
				arr[a] = arr[b];
				arr[b] = temp2;
			}

		}
	}

	printf("\n");


	for (i = 0; i < n; i++)
	{
		printf("%-8s %-12d %-8s %-30s 0%-10d\n", arr[i].name, arr[i].birthday, arr[i].gen, arr[i].address, arr[i].num);
	}

}