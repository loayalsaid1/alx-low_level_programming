void *malloc_checked(unsigned int b);
int _strlen(char *str)
{
        int counter;

        for (counter = 0; str[counter] != '\0'; counter++)
                ;
        return (counter);
}
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

