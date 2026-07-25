#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  // Only LINUX based OS

int main()
{
    int fd = 0;
    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to Open File\n");

    }
    else
    {
        printf("File get Succesfully Opened with fd : %d\n",fd);

        write(fd,"Jay Ganesh...",13);
        
        close(fd);
    }

    return 0;
}