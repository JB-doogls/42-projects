

#include "../includes/fillit.h"

t_tetri		*set_test(t_tetri *node)
{
	t_tetri *head;
	int	kvadrat = {0, 0, 0, 1, 1, 0, 1, 1};
	int palka_vniz = {0, 0, 1, 0, 2, 0, 3, 0};
	int palka_vbok = {0, 0, 0, 1, 0, 2, 0, 3};
	int loshadyu_hodi_vpravo = {0, 0, 0, 1, 1, 0, 2, 0};

	head = node;

	node->shape = kvadrat;
	node = mode->next;
	node->shape = palka_vniz;
	node = mode->next;
	node->shape = palka_vbok;
	node = mode->next;
	node->shape = loshadyu_hodi_vpravo;
	node = mode->next;
	
	return (head);
}

int main(int ac, char **av)
{
	t_tetri *node;

	if (ac == 2)
	{
		node = set_test(node);
	}
}







	// xx		0, 0, 0, 1, 1, 0, 1, 1
	// xx
	
	// x		0, 0, 1, 0, 2, 0, 3, 0
	// x
	// x
	// x			
	
	// xxxx		0, 0, 0, 1, 0, 2, 0, 3
	
	// xx		0, 0, 0, 1, 1, 0, 2, 0
	// x
	// x

