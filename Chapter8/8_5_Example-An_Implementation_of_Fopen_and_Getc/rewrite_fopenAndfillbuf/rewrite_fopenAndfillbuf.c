#include <fcntl.h>
#include <stdlib.h>
#include <sys/file.h>
#include <unistd.h>

#define  NULL      0
#define  EOF       (-1)
#define  BUFSIZ    1024
#define  OPEN_MAX  20
#define  PERMS     0666

#define  _READ     01
#define  _WRITE    02
#define  _UNBUF    04
#define  _EOF      010
#define  _ERR      020

typedef struct flag_field
{
	unsigned is_read  : 1;
	unsigned is_write : 1;
	unsigned is_unbuf : 1;
	unsigned is_buf   : 1;
	unsigned is_eof   : 1;
	unsigned is_err   : 1;
} FLAG;

typedef struct _iobuf
{
	int cnt;
	char *ptr;
	char *base;
	FLAG flag;
	int fd;
} FILE;

#define  stdin   (&_iob[0])
#define  stdout  (&_iob[1])
#define  stderr  (&_iob[2])

FILE _iob[OPEN_MAX] = {
	{0, (char *)0, (char *)0, _READ, 0},
	{0, (char *)0, (char *)0, _WRITE, 1},
	{0, (char *)0, (char *)0, _WRITE | _UNBUF, 2}
};

int _fillbuf(FILE *fp);
FILE *fopen(char *name, char *mode);

#define  feof(p)    (((p)->flag & _EOF) != 0)
#define  ferror(p)  (((p)->flag & _ERR) != 0)
#define  fileno(p)  ((p)->fd)

#define  getc(p)     (--(p)->cnt >= 0 ? (unsigned char)*(p)->ptr++ : _fillbuf(p))
#define  putc(x, p)  (--(p)->cnt >= 0 ? *(p)->ptr++ = (x) : _flushbuf((x), p))
#define  getchar()   getc(stdin)
#define  putchar(x)  putc((x), stdout)

int main()
{
	FILE *myFile = fopen("EnKaninOgEnAnd.txt", 'r');

	return 0;
}

int _fillbuf(FILE *fp)
{
	int bufsize;

	if ((fp->flag.is_read == 0) || (fp->flag.is_eof == 1) || (fp->flag.is_err == 1)) {
		return EOF;
	} else {

	}

	bufsize = (fp->flag.is_unbuf == 1) ? 1 : BUFSIZ;

	if (fp->base == NULL) {
		if ((fp->base = (char *)malloc(bufsize)) == NULL) {
			return EOF;
		} else {

		}
	} else {

	}

	fp->ptr = fp->base;
	fp->cnt = read(fp->fd, fp->ptr, bufsize);

	if (--fp->cnt < 0) {
		if (fp->cnt == -1) {
			fp->flag.is_eof = 1;
		} else {
			fp->flag.is_err = 1;
		}

		fp->cnt = 0;

		return EOF;
	} else {

	}

	return (unsigned char)(*fp->ptr++);
}

FILE *fopen(char *name, char *mode)
{
	int fd;
	FILE *fp;

	if ((*mode != 'r') && (*mode != 'w') && (*mode != 'a')) {
		return NULL;
	} else {

	}

	for (fp = _iob; fp < _iob + OPEN_MAX; fp++) {
		if ((fp->flag.is_read == 0) && (fp->flag.is_write == 0)) {
			break;
		} else {

		}
	}

	if (fp >= _iob + OPEN_MAX) {
		return NULL;
	} else {

	}

	if (*mode == 'w') {
		fd = creat(name, PERMS);
	} else if (*mode == 'a') {
		if ((fd = open(name, O_WRONLY)) == -1) {
			fd = creat(name, PERMS);
		} else {

		}

		lseek(fd, 0L, 2);
	} else {
		fd = open(name, O_RDONLY, 0);
	}

	if (fd == -1) {
		return NULL;
	} else {

	}

	fp->fd = fd;
	fp->cnt = 0;
	fp->base = NULL;
	fp->flag.is_unbuf = 0;
	fp->flag.is_buf = 1;
	fp->flag.is_eof = 0;
	fp->flag.is_err = 0;

	if (*mode == 'r') {
		fp->flag.is_read = 1;
		fp->flag.is_write = 0;
	} else {
		fp->flag.is_read = 0;
		fp->flag.is_write = 1;
	}

	return fp;
}
