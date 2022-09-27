void *my_memset(void *b, int c, int len)
{
    int i;

    i = 0;
    while(b && len > 0)
    {
        b = c;
        b++;
        len--;
    }
    return(b);
}

int main()
{
    char *str;

    str = strdup("hello");
    my_memset(str, 'a', 5);
    printf("%s\n", str);
}
