/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:20:54 by bford             #+#    #+#             */
/*   Updated: 2019/09/28 15:35:10 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# define BUFF_SIZE 5

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

typedef struct			s_list_gnl
{
	int					nfd;
	char				*content;
	struct s_list_gnl	*next;
}						t_gnl;

typedef struct			s_list_fil
{
	char				c;
	int					n;
	struct s_list_fil	*next;
}						t_fil;

int						ft_atoi(const char *s);
size_t					ft_strlen(const char *s);
int						ft_strcmp(const char *s1, const char *s2);
char					*ft_strdup(const char *src);
char					*ft_strcpy(char *s1, const char *s2);
char					*ft_strncpy(char *s1, const char *s2, size_t n);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strncat(char *s1, const char *s2, size_t n);
char					*ft_strstr(const char *s1, const char *s2);
char					*ft_strnstr(const char *s1, const char *s2, size_t n);
char					*ft_strrchr(const char *s, int c);
char					*ft_strchr(const char *s, int c);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_toupper(int c);
int						ft_tolower(int c);
size_t					ft_strlcat(char *s1, const char *s2, size_t len);
void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *s1, const void *s2, size_t n);
void					*ft_memcpy(void *s1, const void *s2, size_t n);
void					*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void					*ft_memmove(void *s1, const void *s2, size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					*ft_memalloc(size_t n);
void					ft_memdel(void **ap);
char					*ft_strnew(size_t size);
int						ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s, char (*f)
(unsigned int, char));
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strsub(char const *s, unsigned int start,
		size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					**ft_strsplit(char const *s, char c);
char					*ft_itoa(int n);
void					ft_putchar(char c);
void					ft_putstr(char const *s);
void					ft_putendl(char const *s);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **alst, void (*del)
(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

t_gnl					*ft_lstnewget(int fd);
char					*ft_strjoinfree(char *s1, char const *s2);
int						get_next_line(int fd, char **line);

t_fil					*ft_lst_new_f(char c, int n);
int						ft_numofc(char *s, int c);
char					*ft_ptrofc(char *s, int c, int n);
int						ft_strduporjoin(char **s, char *s2);
int						ft_lstnewornot(t_fil **lst, t_fil **ptr, char c, int i);

#endif
