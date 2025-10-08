#include <fcntl.h>
#include <stdlib.h>
#include <sys/file.h>
#include <unistd.h>

#define  NULL      0
#define  EOF       (-1)
#define  BUFSIZ    1024
#define  OPEN_MAX  20
#define  PERMS     0666

typedef struct _iobuf
{
	int cnt;
	char *ptr;
	char *base;
	int flag;
	int fd;
} FILE;

#define  stdin   (&_iob[0])
#define  stdout  (&_iob[1])
#define  stderr  (&_iob[2])

enum _flags
{
	_READ  = 01,
	_WRITE = 02,
	_UNBUF = 04,
	_EOF   = 010,
	_ERR   = 020
};

FILE _iob[OPEN_MAX] = {
	{0, (char *)0, (char *)0, _READ, 0},
	{0, (char *)0, (char *)0, _WRITE, 1},
	{0, (char *)0, (char *)0, _WRITE | _UNBUF, 2}
};

int _fillbuf(FILE *fp);
FILE *fopen(char *name, char *mode);
int _flushbuf(int x, FILE *fp);
int fflush(FILE *fp);
int fclose(FILE *fp);
int fseek(FILE *fp, long offset, int origin);

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
	
	if (fseek(myFile, 5, 1) == 0) {
		
	} else {
		exit(0);
	}

	fclose(myFile);

	return 0;
}

int _fillbuf(FILE *fp)
{
	int bufsize;

	if ((fp->flag & (_READ | _EOF | _ERR)) != _READ) {
		return EOF;
	} else {

	}

	bufsize = (fp->flag & _UNBUF) ? 1: BUFSIZ;

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
			fp->flag |= _EOF;
		} else {
			fp->flag |= _ERR;
		}

		fp->cnt = 0;

		return EOF;
	}

	return (unsigned char)*fp->ptr++;
}

FILE *fopen(char *name, char *mode)
{
	int fd;
	FILE *fp;

	if ((*mode |= 'r') && (*mode |= 'w') && (*mode |= 'a')) {
		return NULL;
	} else {

	}

	for (fp = _iob; fp < _iob + OPEN_MAX; fp++) {
		if ((fp->flag & (_READ | _WRITE)) == 0) {
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
		if ((fd = open(name, O_WRONLY, 0)) == -1) {
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
	fp->flag = (*mode == 'r') ? _READ : _WRITE;

	return fp;

	return fp;
}

int _flushbuf(int x, FILE *fp)
{
	unsigned nc;
	int bufsize;

	if ((fp < _iob) || (fp >= _iob + OPEN_MAX)) {
		return EOF;
	} else {

	}

	if ((fp->flag & (_WRITE | _ERR)) != _WRITE) {
		return EOF;
	} else {

	}

	bufsize = (fp->flag & _UNBUF) ? 1 : BUFSIZ;

	if (fp->base == NULL) {
		if ((fp->base = (char *)malloc(bufsize)) == NULL) {
			fp->flag != _ERR;

			return EOF;
		} else {

		}
	} else {
		nc = fp->ptr - fp->base;

		if (write(fp->fd, fp->base, nc) != nc) {
			fp->flag |= _ERR;

			return EOF;
		} else {

		}
	}

	fp->ptr = fp->base;
	*fp->ptr++ = (char)x;
	fp->cnt = bufsize - 1;

	return x;
}

int fflush(FILE *fp)
{
	int rc = 0;

	if (fp < _iob || fp >= _iob + OPEN_MAX) {
		return EOF;
	} else {

	}

	if (fp->flag & _WRITE) {
		rc = _flushbuf(0, fp);
	} else {

	}

	fp->ptr = fp->base;
	fp->cnt = (fp->flag & _UNBUF) ? 1 : BUFSIZ;

	return rc;
}

int fclose(FILE *fp)
{
	int rc;

	if ((rc = fflush(fp)) != EOF) {
		free(fp->base);
		fp->ptr = NULL;
		fp->cnt = 0;
		fp->base = NULL;
		fp->flag &= ~(_READ | _WRITE);
	} else {

	}

	return rc;
}

int fseek(FILE *fp, long offset, int origin)
{
	unsigned nc;
	long rc;

	if (fp->flag & _READ) {
		if (origin == 1) {
			offset -= fp->cnt;
		} else {

		}

		rc = lseek(fp->fd, offset, origin);
		fp->cnt = 0;
	} else if (fp->flag & _WRITE) {
		if ((nc = fp->ptr - fp->base) > 0) {
			if (write(fp->fd, fp->base, nc) != nc) {
				rc = -1;
			} else {

			}
		} else {

		}

		if (rc != -1) {
			rc = lseek(fp->fd, offset, origin);
		} else {

		}
	} else {

	}

	return (rc == -1) ? -1 : 0;
}
