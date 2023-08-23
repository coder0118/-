
int main(int argc, char const *argv[])
{
    int array[20] = {0};
    int *ptr = array;
    for (int i = 0; i < 20; i++)
    {
        (*ptr)++;
        printf("%d\n", array[i]);
        ptr++;
        
    }
    
     return 0;
}
