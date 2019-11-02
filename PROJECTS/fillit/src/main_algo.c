

#include "../includes/fillit.h"


t_tetri	*lst_new_set()
{
	t_tetri *new;
	int i = 0;

	if (!(new = (t_tetri*)malloc(sizeof(t_tetri) * 1)))
		return (NULL);
	new->c = '0';
	while (i < 8)
	new->shape[i++] = 0 + i;
	new->next = NULL;
	return (new);
}

t_tetri		*set_test(t_tetri *node)
{
	t_tetri *head;
	t_tetri *tmp;
	int i = 0;
	int j = 0;
	int ct = 4;
	
	int	kvadrat[8] = {0, 0, 0, 1, 1, 0, 1, 1};
	int palka_vniz[8] = {0, 0, 1, 0, 2, 0, 3, 0};
	int palka_vbok[8] = {0, 0, 0, 1, 0, 2, 0, 3};
	int loshadyu_hodi_vpravo[8] = {0, 0, 0, 1, 1, 0, 2, 0};

	head = node;
	if (!node->next && ct--)
	{
		if (!(tmp = lst_new_set()))
			return (NULL);
		node->next = tmp;
	}

	node->shape[i++] = kvadrat[j++];
	node = node->next;
	i = j = 0;
	printf("%d\n%d\n", i, j);
	node->shape[i++] = palka_vniz[j++];
	node = node->next;
	i = j = 0;
	node->shape[i++] = palka_vbok[j++];
	node = node->next;
	i = j = 0;
	node->shape[i++] = loshadyu_hodi_vpravo[j++];
	node = node->next;
	
	return (head);
}

int 	main()
{
	t_tetri *node;
	
	if (!(node = lst_new_set()))
		return (-1);
	set_test(node);
	if (ft_solving(node) == -1)
	{
		printf("Error\n");
		return (0);
	}
	return (0);
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

