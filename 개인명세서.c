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

	printf("�� ���� �Է��Ͻðڽ��ϱ�? (5���� 10�� ����) : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("%d��° ����Դϴ�.\n", i + 1);
		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s", arr[i].name);
		printf("��������� �Է��ϼ��� : ");
		scanf("%d", &arr[i].birthday);
		printf("������ �Է��ϼ��� : ");
		scanf("%s", arr[i].gen);
		printf("�ּҸ� �Է��ϼ��� : ");
		scanf("%s", arr[i].address);
		printf("��ȭ��ȣ�� �Է��ϼ��� : ");
		scanf("%d", &arr[i].num);
		printf("\n");
	}

	printf("------------- �Է��� ���� -------------\n");

	printf("%-8s %-12s %-8s %-30s %10s\n", "�̸�", "�������", "����", "�ּ�", "��ȭ��ȣ");
	
	for (i = 0; i < n; i++)
	{
		printf("%-8s %-12d %-8s %-30s 0%-10d\n", arr[i].name, arr[i].birthday,arr[i].gen,arr[i].address,arr[i].num);
	}

	printf("\n");

	printf("------------- ������� ������ �������� -------------\n");

	printf("%-8s %-12s %-8s %-30s %10s\n", "�̸�", "�������", "����", "�ּ�", "��ȭ��ȣ");

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

	printf("------------- �̸� ������ �������� -------------\n");

	printf("%-8s %-12s %-8s %-30s %10s\n", "�̸�", "�������", "����", "�ּ�", "��ȭ��ȣ");

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