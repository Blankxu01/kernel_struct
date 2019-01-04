#ifndef LIST_H
#define LIST_H
#define 
struct list_head{
	struct list_head *prev;
	struct list_head *next;
	}
void list_head_init();
void list_add(struct list_head *head);
void list_add_tail(struct list_head *head);
void list_del(struct list_head *head);
bool list_empty(struct list_head *head); 
void list_insert();

#endif	

