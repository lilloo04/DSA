#include <stdio.h>

#define n 5
int queue[n];
int head = 0, tail = 0;
void q_push(int data);
void q_pop();
void write();

int main() {
    for (int i = 1; i <= 5; i++) {
        q_push(i * 10);
        write();
    }
    
    while (head != tail) {
        q_pop();
        write();
    }

    return 0;
}

// 기본 큐의 추가 알고리즘
void q_push(int data) {
    if (tail >= n) {
        printf("overflow\n");
    }
    else {
        queue[tail] = data;
        tail++;
    }
}

void q_pop() {
    if (head == tail) {
        printf("underflow\n");
    }
    else {
        queue[head] = 0;
        head++;
        if (head == tail) {
            head = 0;
            tail = 0;
        }
    }
}

void write() {
    printf("Queue: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
