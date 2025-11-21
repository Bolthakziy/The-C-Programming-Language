#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "dirent.h"

#define  MAX_PATH  1024
#define  DIRSIZ    14

typedef struct
{
	long ino;
	char name[NAME_MAX + 1];
} Dirent;

typedef struct
{
	int fd;
	Dirent d;
} DIR;

void dirwalk(char *dir, void (*fcn)(char *));
void fsize(char *name);
DIR *opendir(char *dirname);
Dirent *readdir(DIR *dfd);
void closedir(DIR *dfd);

int main(int argc, char **argv)
{
	if (argc == 1) {
		fsize(".");
	} else {
		while (--argc > 0) {
			fsize(*++argv);
		}
	}

	return 0;
}

void dirwalk(char *dir, void (*fcn)(char *))
{
	char name[MAX_PATH];
	Dirent *dp;
	DIR *dfd;

	if ((dfd = opendir(dir)) == NULL) {
		fprintf(stderr, "\'dirwalk\' : It fails to open \'%s\'\n", dir);

		return;
	} else {

	}

	while ((dp = readdir(dfd)) != NULL) {
		if ((strcmp(dp->name, ".") == 0) || (strcmp(dp->name, "..") == 0)) {
			continue;
		} else {

		}

		if ((strlen(dir) + strlen(dp->name) + 2) > sizeof(name)) {
			fprintf(stderr, "\'dirwalk\' : The name \'%s/%s\' is too long....\n", dir, dp->name);
		} else {
			sprintf(name, "%s/%s", dir, dp->name);
			(*fcn)(name);
		}
	}

	closedir(dfd);
}

void fsize(char *name)
{
	struct stat stbuf;

	if (stat(name, &stbuf) == -1) {
		fprintf(stderr, "\'fsize\' can not access to \'%s\'....\n", name);

		return;
	} else {

	}

	if ((stbuf.st_mode & S_IFMT) == S_IFDIR) {
		dirwalk(name, fsize);
	} else {

	}

	printf("%5u %6o %3u %8ld %s\n", stbuf.st_ino, stbuf.st_mode, stbuf.st_nlink, stbuf.st_size, name);
}

DIR *opendir(char *dirname)
{
	int fd;
	struct stat stbuf;
	DIR *dp;

	if (((fd = open(dirname, O_RDONLY, 0)) == -1) || (fstat(fd, &stbuf) == -1) || ((stbuf.st_mode & S_IFMT) != S_IFDIR) || ((dp = (DIR *)malloc(sizeof(DIR))) == NULL)) {
		return NULL;
	} else {

	}

	dp->fd = fd;

	return dp;
}

Dirent *readdir(DIR *dfd)
{
	struct direct dirbuf;
	static Dirent d;

	while (read(dfd->fd, (char *)&dirbuf, sizeof(dirbuf)) == sizeof(dirbuf)) {
		if (dirbuf.d_ino == 0) {
			continue;
		} else {

		}

		d.ino = dirbuf.d_ino;
		strncpy(d.name, dirbuf.d_name, DIRSIZ);
		d.name[DIRSIZ] = '\0';

		return &d;
	}

	return NULL;
}

void closedir(DIR *dfd)
{
	if (dfd) {
		close(dfd->fd);
		free(dfd);
	} else {

	}
}
