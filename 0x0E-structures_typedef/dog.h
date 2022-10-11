#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - new structure data type
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to name of owner
 *
 * Description: simply that
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
