#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include<pthread.h>
#include<unistd.h>
#define BUFFER_SIZE 10

typedef struct
{
    char type;
    // 0=fried chicken, 1=French fries
    int amount;
    // pieces or weight
    char unit;
    // 0=piece, 1=gram
} item;

item buffer[BUFFER_SIZE];
int first = 0;
int last = 0;

void produce(item *i) 
{
    while
    ((first + 1) % BUFFER_SIZE == last) 
    {
    // do nothing -- no free buffer item
    }
memcpy(&buffer[first], i, sizeof(item));
first = (first + 1) % BUFFER_SIZE;
}

item *consume() {
{
    item *i = malloc(sizeof(item));
    while (first == last) {
    // do nothing -- nothing to consume
}
sem_wait(&sem);
memcpy(i, &buffer[last], sizeof(item));
last = (last + 1) % BUFFER_SIZE;
return i;
}

void *pthread_producer(void *param)
{
item a, b,c;
    a.type = '0';
    a.unit = '0';
    a.amount = 10;
    printf("Item a \n", a.type, a.unit, a.amount);    
    
    b.type = '1';
    b.unit = '1';    
    b.amount = 5;
    printf("Item b \n", b.type, b.unit, b.amount);
    
    c.type = '0';
    c.unit = '0';    
    c.amount = '12';
    printf("Item c \n",c.type, c.unit, c.amount);

    produce(&a);
    produce(&b);
    produce(&c);
}

void *pthread_consumer(void *param)
{
    item *consumeitem = consume();
    print("Consumed item \n", consumeitem.type, consumeitem.unit, consumeitem.amount);
    item *consumeitem = consume();
    print("Consumed item \n", consumeitem.type, consumeitem.unit, consumeitem.amount);
}

void wait(s)
{
    while (s <= 0);
    s--;
}

void signal(s)
{
    while (s <= 0);
    s++;
}

sem_t s;
int sem_init(sem_t *sem, int pshared, unsigned int value);
int sem_wait(sem_t *sem);
int sem_post(sem_t *sem);
int sem_destroy(sem_t *sem);



int main()
{
    pthread_t tid1, tid2;
    pthread_create(&tid1, NULL, pthread_producer, NULL);
    pthread_join(tid1, NULL);
    pthread_create(&tid2, NULL, pthread_consumer, NULL);
    pthread_join(tid2, NULL);
}
