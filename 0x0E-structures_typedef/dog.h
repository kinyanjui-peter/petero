#ifndef DOG_H
#define DOG_H

/**
 * define struct dog 
 *
 * it is a header file.
 *
 *contain prototype
 *
 */
struct dog {
	char * name;
	float age;
	char *owner;
};
typedef struct dog doggy;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
