#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void	ft_del(void	*content)
{
	free(content);
}

void	toupper_odd(void *content)
{
	unsigned char *s;
	s = (unsigned char *)content;
	while (*s)
	{
		if (97 <= *s && *s <= 122)
			*s -= 32;
		s++;
	}
}

void	*ft_retoup(void *content)
{
	unsigned char *s;
	s = (unsigned char *)content;
	while (*s)
	{
		if (97 <= *s && *s <= 122)
			*s -= 32;
		s++;
	}
	return (content);
}

int	main(void)
{
	t_list	t1;
	t_list	t2;
	t_list	t3;
	t_list	t4;
	t_list	t5;

	t1.content = "first";
	t1.next = &t2;
	t2.content = "second";
	t2.next = &t3;
	t3.content = "third";
	t3.next = &t4;
	t4.content = "fourth";
	t4.next = &t5;
	t5.content = "last";
	t5.next = NULL;

	t_list	*op;
	t_list	*ans;
	t_list	*tmp;
	int		i;
	void	(*del)(void	*);
	del = ft_del;
	void	(*f)(void *);
	f = toupper_odd;
	void	*(*ff)(void *);
	ff = ft_retoup;

	t_list	tf;
	tf.content = "added_front";
	tf.next = NULL;

	t_list	tb;
	tb.content = "added_back";
	tb.next = NULL;

	//lstnew
	printf("lstnew---------------------------------------------------------\n");
	ans = ft_lstnew("lstnew");
	printf("==>ans = ft_lstnew(\"lstnew\")<==\n");
	printf("ans->content:%s\n", (char *)ans->content);
	printf("ans->next:%s\n", (char *)ans->next);
	free(ans);

	ans = ft_lstnew(NULL);
	printf("==>ans = ft_lstnew(NULL)<==\n");
	printf("ans->content:%s\n", (char *)ans->content);
	printf("ans->next:%s\n", (char *)ans->next);
	free(ans);

	//lstadd_front
	printf("lstadd_front---------------------------------------------------------\n");
	op = &t1;
	tmp = op;
	i = 1;
	while (tmp)
	{
		printf("t%d:%s\n", i, tmp->content);
		i++;
		tmp = tmp->next;
	}
	printf("op = &t1\n");
	ft_lstadd_front(&op, &tf);
	printf("==>ft_lstadd_front(&op, &tf)<==\n");
	printf("op->content:%s\n", op->content);
	printf("op->next->content:%s\n", op->next->content);
	tf.next = NULL;

	op = &t1;
	ft_lstadd_front(NULL, &tf);
	printf("==>ft_lstadd_front(NULL, &tf)<==\n");
	printf("op->content:%s\n", op->content);
	printf("op->next->content:%s\n", op->next->content);
	tf.next = NULL;

	op = NULL;
	ft_lstadd_front(&op, &tf);
	printf("==>ft_lstadd_front(&op(op==NULL), &tf)<==\n");
	printf("op->content:%s\n", op->content);
	tf.next = NULL;

	op = &t1;
	ft_lstadd_front(&op, NULL);
	printf("==>ft_lstadd_front(&op, NULL)<==\n");
	printf("op->content:%s\n", op->content);
	printf("op->next->content:%s\n", op->next->content);
	tf.next = NULL;

	//lstsize
	printf("lstsize---------------------------------------------------------\n");
	printf("==>ft_lstsize(&t1)<==\n");
	printf("size(5):%d\n", ft_lstsize(&t1));

	printf("==>ft_lstsize(NULL)<==\n");
	printf("size(0):%d\n", ft_lstsize(NULL));

	//lstlast
	printf("lstlast---------------------------------------------------------\n");
	ans = ft_lstlast(&t1);
	printf("==>ft_lstlast(&t1)<==\n");
	printf("ans->content:%s\n", ans->content);

	ans = ft_lstlast(NULL);
	printf("==>ft_lstlast(NULL)<==\n");
	printf("ans:%p\n", ans);

	//lstadd_back
	printf("lstadd_back---------------------------------------------------------\n");
	op = &t1;
	tmp = op;
	i = 1;
	while (tmp)
	{
		printf("t%d:%s\n", i, tmp->content);
		i++;
		tmp = tmp->next;
	}
	printf("op = &t1\n");
	ft_lstadd_back(&op, &tb);
	printf("==>ft_lstadd_back(&op, &tb)<==\n");
	printf("(t5.next)->content:%s\n", (t5.next)->content);
	t5.next = NULL;

	op = &t1;
	ft_lstadd_back(NULL, &tb);
	printf("==>ft_lstadd_back(NULL, &tb)<==\n");
	printf("t5.next:%p\n", t5.next);
	t5.next = NULL;

	op = NULL;
	ft_lstadd_back(&op, &tb);
	printf("==>ft_lstadd_back(&op(op==NULL), &tb)<==\n");
	printf("op->content:%s\n", op->content);
	t5.next = NULL;

	op = &t1;
	ft_lstadd_back(&op, NULL);
	printf("==>ft_lstadd_back(&op, NULL)<==\n");
	printf("t5.next:%p\n", t5.next);
	t5.next = NULL;

	//delone, clear
	//not consider about if free work fine or not but only NULL is set or not
	printf("delone, clear--------------------------------------------------\n");
	op = NULL;
	ans = ft_lstnew(ft_strdup("new1"));
	ft_lstadd_back(&op, ans);
	ans = ft_lstnew(ft_strdup("new2"));
	ft_lstadd_back(&op, ans);
	ans = ft_lstnew(ft_strdup("new3"));
	ft_lstadd_back(&op, ans);
	printf("~before_clear~\n");
	printf("op->content:%s\n", op->content);
	printf("op->next->content:%s\n", op->next->content);
	printf("op->next->next->content:%s\n",op->next->next->content);
	ft_lstclear(&op, del);
	printf("~after_clear~\n");
	printf("op:%p\n", op);

	//lstiter
	printf("lstiter------------------------------------\n");
	op = NULL;
	ans = ft_lstnew(ft_strdup("new1"));
	ft_lstadd_back(&op, ans);
	ans = ft_lstnew(ft_strdup("new2"));
	ft_lstadd_back(&op, ans);
	ans = ft_lstnew(ft_strdup("new3"));
	ft_lstadd_back(&op, ans);
	printf("~before_toupfunction~\n");
	printf("op->content:%s\n", op->content);
	printf("op->next->content:%s\n", op->next->content);
	printf("op->next->next->content:%s\n",op->next->next->content);
	ft_lstiter(op, f);
	printf("~after_toupfunction~\n");
	printf("op->content:%s\n", op->content);
	printf("op->next->content:%s\n", op->next->content);
	printf("op->next->next->content:%s\n",op->next->next->content);
	ft_lstclear(&op, del);

	//lstmap
	//don't act against NULL(del) because of unit-test and unnecessary because of lstclear the func
	op = &t1;
	printf("lstmap-------------------------------------\n");
	op = NULL;
	ans = ft_lstnew(ft_strdup("con1"));
	ft_lstadd_back(&op, ans);
	ans = ft_lstnew(ft_strdup("con2"));
	ft_lstadd_back(&op, ans);
	ans = ft_lstnew(ft_strdup("con3"));
	ft_lstadd_back(&op, ans);
	ans = ft_lstnew(ft_strdup("con4"));
	ft_lstadd_back(&op, ans);
	ans = ft_lstnew(ft_strdup("con5"));
	ft_lstadd_back(&op, ans);
	printf("~original~\n");
	tmp = op;
	i = 1;
	while (tmp)
	{
		printf("content%d:%s\n", i, tmp->content);
		i++;
		tmp = tmp->next;
	}
	t_list	*op2;
	op2 = ft_lstmap(op, ff, del);
	printf("~new~\n");
	tmp = op2;
	i = 1;
	while (tmp)
	{
		printf("content%d:%s\n", i, tmp->content);
		i++;
		tmp = tmp->next;
	}
	ft_lstclear(&op, del);
	while (op2)
	{
		tmp = op2->next;
		free(op2);
		op2 = tmp;
	}

	system("leaks a.out");
	return (0);
}
