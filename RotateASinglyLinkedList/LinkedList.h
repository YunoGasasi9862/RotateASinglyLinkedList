#pragma once
typedef int LType;
typedef struct node_s
{
	LType data;
	node_s* next;
}node_t;

node_t* getNode(void)
{
	node_t* tp;
	tp = (node_t*)malloc(sizeof(node_t));
	tp->next = NULL;
	return tp;

}

node_t* addBeginning(node_t* hp, LType data)
{

	node_t* tp;
	tp = getNode();
	tp->next = hp;
	tp->data = data;
	return tp;
}

void AddAfter(node_t* hp, LType data)
{

	node_t* tp;
	tp = getNode();
	tp->next = hp->next;
	hp->next = tp;
	tp->data = data;
}

node_t* deleteFirst(node_t* hp)
{
	node_t* temp;
	temp = hp;
	hp = temp->next;
	free(temp);
	return hp;
}

void DeleteAfter(node_t* hp)
{
	node_t* temp;
	temp = hp->next;
	hp->next = temp->next;
	free(temp);

}