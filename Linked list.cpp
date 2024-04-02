#include <stdio.h>
#include <stdlib.h>

struct list {
	char name[10];
	int no;
	struct list* link;
};

int main()
{
	struct list* list1, * head, * pre, * next;
	head = NULL;
	pre = NULL;

	for (int i = 0; i < 3; i++) {
		list1 = (struct list*)malloc(sizeof(struct list)); //����ü ũ�⸸ŭ �����Ҹ� �Ҵ��Ͽ� list1 �ּҸ� ����
		if (list1 == NULL) return -1; //���� ���� �ڵ�

		scanf_s("%s %d", list1->name, 10, &(list1->no)); //list1�� �� �ֱ� ex)kim 100

		if (head == NULL)
			head = list1; //ó���� head�� list1�� ����
		else
			pre->link = list1;

		list1->link = NULL; //list1 ������ �κп� NULL���� ����

		//��ũ �� ����
		pre = list1;
	} //������� ��� ����

	for (next = head; next != NULL; next = next->link) //����ϱ�
		printf("%s, %d \n", next->name, next->no);

	while (head != NULL) //��� ���� ����
	{
		next = head->link; //���� ó���� ���ؼ�
		printf("%s, %d deleted \n", head->name, head->no);
		free(head); //��� ��� ����
		head = next;
	}
}