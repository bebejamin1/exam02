void sort_int_tab(int *tab, unsigned int size)
{
    int stock = tab[0];
    int temp = 0;
    unsigned int look_size;
    unsigned int count = 0;
    while (count <= size)
    {
        look_size = 0;
        while (look_size < size)
        {
            if (tab[look_size] <= tab[look_size+1])
            {
                temp = tab[look_size];
                tab[look_size] = tab[look_size+1];
                stock = temp;
            }
            // tab[look_size] = stock;
            look_size++;
        }
        count++;
    }
}

#include <stdio.h>
int main(void)
{
    int size = 4;
    int tab[4] = {12, 50, 12, 0};
    int i = 0;
    printf("Avant:\n");
    while (i < size)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    sort_int_tab(tab, 4);
    i = 0;
    printf("\nApres:\n");
    while (i < size)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}