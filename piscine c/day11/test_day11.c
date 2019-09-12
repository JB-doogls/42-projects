#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_last(t_list *begin_list);
t_list *ft_list_push_params(int ac, char **av);

int		main(int argc, char **argv)
{
    t_list *l = NULL;
	t_list *params = NULL;

    ft_list_push_front(&l, "1111");
    ft_list_push_front(&l, "2222");
    ft_list_push_front(&l, "3333");
    ft_list_push_back(&l, "4444");
    ft_list_push_back(&l, "5555");
	ft_list_push_back(&l, "6666");
    ft_list_push_front(&l, "3233");
    printf("LIST_SIZE === %d\n", ft_list_size(l));
    
    t_list *d;
    d = ft_list_last(l);
    printf("2 ===== %s\n", (char *)l->next->data);
    
    while (l)
    {
        printf("Current elem data is: %s\n", (char *)l->data);
        l = l->next;
    }
	params = ft_list_push_params(argc, argv);
	printf("whitespace\n");
	 while (params)
    {
		printf("Param: %s\n", (char *)params->data);
		params = params->next;
    }
	

    return (0);
}
