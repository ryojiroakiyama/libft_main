#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft/libft.h"

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
	t5.content = "fifth";
	t5.next = NULL;

	t_list	tf;
	tf.content = "added_front";
	tf.next = NULL;

	//lstnew
	printf("lstnew---------------------------------------------------------\n");
	t_list	*ans;
	ans = ft_lstnew("lstnew");
	printf("-ft_lstnew(\"lstnew\")-\n");
	printf("content:%s\n", (char *)ans->content);
	printf("next:%s\n", (char *)ans->next);
	free(ans);

	ans = ft_lstnew(NULL);
	printf("-ft_lstnew(NULL)-\n");
	printf("content:%s\n", (char *)ans->content);
	printf("next:%s\n", (char *)ans->next);
	free(ans);

	//lstadd_front
	printf("lstadd_front---------------------------------------------------------\n");
	t_list	*op;
	op = &t1;
	ft_lstadd_front(&op, &tf);
	printf("-ft_lstadd_front(&op, &tf)-\n");
	printf("op->content:%s\n", op->content);
	printf("op->next->content:%s\n", op->next->content);
/*
	t_list	*op1;
	op = &t1;
	ft_lstadd_front(0, &tf);
	printf("-ft_lstadd_front(0, &tf)-\n");
	printf("op1->content:%s\n", op1->content);
	printf("op1->next->content:%s\n", op1->next->content);
*/
	t_list	*op2;
	op2 = NULL;
	ft_lstadd_front(&op2, 0);
	printf("-ft_lstadd_front(&op2(= NULL), 0)-\n");
	printf("op2:%p\n", op2);

	t_list	*op3;
	op3 = &t1;
	ft_lstadd_front(&op3, 0);
	printf("-ft_lstadd_front(&op3, 0)-\n");
	printf("op3->content:%s\n", op3->content);
	printf("op3->next->content:%s\n", op3->next->content);






	system("leaks a.out");
	return (0);
}
