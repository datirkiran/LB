#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  // Only LINUX based OS
#include<string.h>

#define BUFFER_SIZE 100

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[BUFFER_SIZE] = {'\0'};

    fd = open("Marvellous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        lseek(fd,-10,2);

        iRet = read(fd,Data,10);

        printf("%d bytes gets Succesfully read\n",iRet);
        printf("Data from file is %s\n",Data);

        close(fd);

    }

    return 0;
}