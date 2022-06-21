struct node* start = NULL;

void push(int num)
{
	struct node* newNode = malloc(sizeof(struct node));
	newNode->value = num;
	newNode->next = start;
	start = newNode;
}

void pop()
{
	struct node* tmp;

	if (start == NULL)
		printf("Stack is Empty\n");
	else
	{
		printf("Added element = %d\n", start->value);

		tmp = start;
		start = start->next;

		free(tmp);
	}
}


int getStackSize()
{
	int num = 0;

	struct node* current = start;

	while (current != NULL)
	{
		num++;
		current = current->next;
	}
	printf("%d\n", num);
	return num;
}



int skipPop(int i)
{
	int num = 0;
	struct node* tmp = start;

	int count = 0;

	while (count < i)
	{
		count++;
		tmp = tmp->next;
	}
	printf("%d", tmp->value);
}


void printList()
{
	struct node* tmp = start;

	while (tmp != NULL)
	{
		printf("%d->", tmp->value);
		tmp = tmp->next;
	}
	printf("NULL\n");
}