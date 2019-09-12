#include <stdlib.h>
#include <stdio.h>

#ifndef FT_LIST_H
# define FT_LIST_H
typedef	struct		s_list
{
	struct		s_list	*next;
	void		*data;
}				t_list;
#endif

t_list		*ft_create_elem(void *data)
{
	t_list *list;

	list = malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

int		ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		++count;
	}
	return (count);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;

	if (begin_list && *begin_list)
	{
		new = *begin_list;
		while (new->next)
			new = new->next;
		new->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	if (*begin_list)
	{
		new = ft_create_elem(data);
		new->next = *begin_list;
		*begin_list = new;
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list		*ft_list_last(t_list *begin_list)
{
    if (begin_list)
	    while (begin_list->next)
		    begin_list = begin_list->next;
    return (begin_list);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list;
	t_list *first;

	--ac;
	if (ac < 1)
		return (NULL);
	while (ac != 0)
	{
		if (!list)
		{
			first = ft_create_elem(av[ac]);
			list = first;
			--ac;
		}
		else
		{
			list->next = ft_create_elem(av[ac]);
			list = list->next;
			--ac;
		}
	}
	return (first);
}

int main()
{
    t_list *l = NULL;

    ft_list_push_front(&l, "1111");
    ft_list_push_front(&l, "2222");
    ft_list_push_front(&l, "3333");
    ft_list_push_back(&l, "4444");
    ft_list_push_back(&l, "5555");
    ft_list_push_back(&l, "6666");
    ft_list_push_front(&l, "3233");
    printf("LIST_SIZE === %d\n", ft_list_size(l));
    
    //f = ft_list_push_params(3, "KOKO", "JOJO", "POPO");
    
    t_list *d;
    d = ft_list_last(l);
    printf("LAST LAST LAST ===== %s\n", (char *)d->data);
    
    while (l)
    {
        printf("Current elem data is: %s\n", (char *)l->data);
        l = l->next;
    }
    
    return (0);
}