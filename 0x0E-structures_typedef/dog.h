#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's data
 * @name: First member - The name
 * @age: Second member - Dog's age
 * @owner: Third member - The owner
 *
 * Description: It represents basic data of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

