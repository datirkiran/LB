#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    fd = open("Marvellous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File\n");

    }
    else
    {
        printf("File get Succesfully Opened with fd : %d\n",fd);
    }

    return 0;
}