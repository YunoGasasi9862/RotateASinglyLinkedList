#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"

node_t* rotate(node_t* hp, int k)
{
	node_t* temp = hp;
	int data;
	for (int i = 0; i < k; i++)
	{
		data = temp->data;
		hp = deleteFirst(hp);
		temp = hp;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		AddAfter(temp, data);
		temp = hp;
	}

	return hp;
}

int main(void)
{
	//test case 1
	node_t* hp = NULL;
	hp = addBeginning(hp, 2);
	node_t* temp = hp;
	AddAfter(temp, 4);
	temp = temp->next;
	AddAfter(temp, 7);
	temp = temp->next;
	AddAfter(temp, 8);
	temp = temp->next;
	AddAfter(temp, 9);
	temp = temp->next;


	//k=3
	hp=rotate(hp, 3);


	return 0;
}