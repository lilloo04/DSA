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
		list1 = (struct list*)malloc(sizeof(struct list)); //구조체 크기만큼 기억장소를 할당하여 list1 주소를 가짐
		if (list1 == NULL) return -1; //에러 방지 코드

		scanf_s("%s %d", list1->name, 10, &(list1->no)); //list1에 값 넣기 ex)kim 100

		if (head == NULL)
			head = list1; //처음에 head를 list1에 연결
		else
			pre->link = list1;

		list1->link = NULL; //list1 마지막 부분에 NULL값을 넣음

		//링크 값 연결
		pre = list1;
	} //여기까지 노드 생성

	for (next = head; next != NULL; next = next->link) //출력하기
		printf("%s, %d \n", next->name, next->no);

	while (head != NULL) //노드 삭제 로직
	{
		next = head->link; //다음 처리를 위해서
		printf("%s, %d deleted \n", head->name, head->no);
		free(head); //기억 장소 해제
		head = next;
	}
}