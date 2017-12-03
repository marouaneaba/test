#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main()
{

    struct stat fileStat;
    if(stat("C:/Users/abk/Desktop/m1/ASE/codeblocs_TP/test/main.c",&fileStat) < 0)
        return 1;

    printf("Information for %s\n","C:/Users/abk/Desktop/m1/ASE/codeblocs_TP/test/main.c");
    printf("---------------------------\n");
    printf("File Size: \t\t%d bytes\n",fileStat.st_size);
    printf("Number of Links: \t%d\n",fileStat.st_nlink);
    printf("File inode: \t\t%d\n",fileStat.st_ino);

printf("I-node number:            %ld\n", (long) fileStat.st_ino);
printf("Mode:                     %lo (octal)\n",(unsigned long) fileStat.st_mode);
printf("Link count:               %ld\n", (long) fileStat.st_nlink);
printf("Ownership:                UID=%ld   GID=%ld\n",(long) fileStat.st_uid, (long) fileStat.st_gid);

//printf("Preferred I/O block size: %ld bytes\n",(long) fileStat.st_blksize);
printf("---- size: %ld bytes\n",(long) fileStat.st_size);

printf("---- linlk: %ld bytes\n",(long) fileStat.st_nlink);
           printf("File size:                %lld bytes\n",(long long) fileStat.st_size);
           //printf("Blocks allocated:         %lld\n",(long long) fileStat.st_blocks);

           printf("Last status change:       %s", ctime(&fileStat.st_ctime));
           printf("Last file access:         %s", ctime(&fileStat.st_atime));
           printf("Last file modification:   %s", ctime(&fileStat.st_mtime));
printf("\n\n");
    printf("File Permissions: \t");
    printf( (S_ISDIR(fileStat.st_mode)) ? "d" : "-");
    printf( (fileStat.st_mode & S_IRUSR) ? "r" : "-");
    printf( (fileStat.st_mode & S_IWUSR) ? "w" : "-");
    printf( (fileStat.st_mode & S_IXUSR) ? "x" : "-");
    //printf((fileStat.st_mode & S_IRGRP));
    //printf( (fileStat.st_mode & S_IRGRP) ? "r" : "-");
//    printf( (fileStat.st_mode & S_IWGRP) ? "w" : "-");
    //printf( (fileStat.st_mode & S_IXGRP) ? "x" : "-");
    //printf( (fileStat.st_mode & S_IROTH) ? "r" : "-");
    //printf( (fileStat.st_mode & S_IWOTH) ? "w" : "-");
    //printf( (fileStat.st_mode & S_IXOTH) ? "x" : "-");
    printf("\n\n");

    //printf("The file %s a symbolic link\n", (S_ISLNK(fileStat.st_mode)) ? "is" : "is not");

    return 0;
}
