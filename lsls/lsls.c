#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  struct dirent *dir;
  struct stat buf;

  if (!argv[1]){
    DIR *d = opendir(".");
    while ((dir = readdir(d)) != NULL){
      stat(dir->d_name, &buf);
      printf("%10ld  %s\n", buf.st_size, dir->d_name);
    }
    closedir(d);
  }
  else {
    DIR *d = opendir(argv[1]);
    while ((dir = readdir(d)) != NULL){
      stat(dir->d_name, &buf);
      printf("%10ld  %s\n", buf.st_size, dir->d_name);
    }
    closedir(d);
  }


  return 0;
}

