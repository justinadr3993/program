#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "lib.h"

int main(int argc, char* argv[])
{

	ListNode* head = Create(4);
	head = CreateNext(5, head);
	head = CreateNext(6, head);

	Print(head);

	Free(head);

	int x = getchar();
	return EXIT_SUCCESS;
}