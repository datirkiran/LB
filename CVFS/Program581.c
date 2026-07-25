#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  // Only LINUX based OS
#include<string.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Data[100] = {'\0'};

    fd = open("Marvellous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        printf("File get Succesfully Opened with fd : %d\n",fd);

        iRet = read(fd,Data,13);

        printf("%d bytes get Succesfully Read \n",iRet);

        printf("Data from file is : %s\n",Data);
        
        close(fd);
    }

    return 0;
}