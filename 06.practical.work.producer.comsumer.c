#include "stdlib.h"
#include "stdio.h"
#include "string.h"

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

item *consume() 
{
	item *i = malloc(sizeof(item));
	while (first == last) {
	// do nothing -- nothing to consume
}
memcpy(i, &buffer[last], sizeof(item));
last = (last + 1) % BUFFER_SIZE;
return i;
}

int main()
{
	item a, b;
	a.type = '0';
	a.unit = '0';
	a.amount = 10;
	printf("Item a \n", a.type, a.unit, a.amount);	
	
	b.type = '1';
	b.unit = '1';	
	b.amount = 5;
	printf("Item b \n", b.type, b.unit, b.amount);
	
	produce(&a);
	produce(&b);

	item *consumeitem = consume();
	print("Consumed item \n", consumeitem.type, consumeitem.unit, consumeitem.amount);
}


