#ifndef DOG
#define DOG

/**
 * struct dog - define struct dog
 *@name: first member
 * it is a header file.
 *@age: second member
 *@owner: 3rd member.
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog doggy;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
