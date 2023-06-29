#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a struct for a dog
 * @name: the dog's name, a string
 * @age: dog's age, a float
 * @owner: the name of the dogs owner, a string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
