#include <stdio.h>
#include <unistd.h>

#define  NALLOC    1024
#define  MAXBYTES  (unsigned)10240

typedef long Align;

union header
{
	struct
	{
		union header *ptr;
		unsigned size;
	} s;

	Align x;
};

typedef union header Header;

static unsigned maxalloc;
static Header base;
static Header *freep = NULL;

void myFree(void *ap);
static Header *morecore(unsigned nu);
void *myMalloc(unsigned nbytes);

int main()
{
	int size, i;
	int *array;

	printf("Enter the size of your integer array! : ");
	scanf("%d", &size);
	array = (int*)myMalloc(sizeof(int) * size);

	for (i = 0; i < size; i++) {
		printf("Input your numbers! : ");
		scanf("%d", array + i);
	}

	printf("Your numbers : ");

	for (i = 0; i < size; i++) {
		printf("%d ", *(array + i));
	}

	printf("\n");
	myFree(array);

	return 0;
}

void myFree(void *ap)
{
	Header *bp, *p;

	bp = (Header*)ap - 1;

	if ((bp->s.size == 0) || (bp->s.size > maxalloc)) {
		fprintf(stderr, "We can not free %u units.\n", bp->s.size);

		return;
	} else {

	}

	for (p = freep; !((bp > p) && (bp < p->s.ptr)); p = p->s.ptr) {
		if ((p >= p->s.ptr) && ((bp > p) || (bp < p->s.ptr))) {
			break;
		} else {

		}
	}

	if ((bp + bp->s.size) == p->s.ptr) {
		bp->s.size += p->s.ptr->s.size;
		bp->s.ptr = p->s.ptr->s.ptr;
	} else {
		bp->s.ptr = p->s.ptr;
	}

	if ((p + p->s.size) == bp) {
		p->s.size += bp->s.size;
		p->s.ptr = bp->s.ptr;
	} else {
		p->s.ptr = bp;
	}

	freep = p;
}

static Header *morecore(unsigned nu)
{
	char *cp;
	Header *up;

	if (nu < NALLOC) {
		nu = NALLOC;
	} else {

	}

	cp = sbrk(nu * sizeof(Header));

	if (cp == (char*)-1) {
		return NULL;
	} else {

	}

	up = (Header*)cp;
	up->s.size = nu;
	maxalloc = (up->s.size > maxalloc) ? up->s.size : maxalloc;
	myFree((void*)(up + 1));

	return freep;
}

void *myMalloc(unsigned nbytes)
{
	Header *p, *prevp;
	unsigned nunits;

	if (nbytes > MAXBYTES) {
		fprintf(stderr, "We can not allocate more than %u bytes\n", MAXBYTES);

		return NULL;
	} else {

	}

	nunits = (nbytes + sizeof(Header) - 1) / sizeof(Header) + 1;

	if ((prevp = freep) == NULL) {
		base.s.ptr = freep = prevp = &base;
		base.s.size = 0;
	} else {

	}

	for (p = prevp->s.ptr;;prevp = p, p = p->s.ptr) {
		if (p->s.size >= nunits) {
			if (p->s.size == nunits) {
				prevp->s.ptr = p->s.ptr;
			} else {
				p->s.size -= nunits;
				p += p->s.size;
				p->s.size = nunits;
			}

			freep = prevp;

			return (void*)(p + 1);
		} else {

		}

		if (p == freep) {
			if ((p = morecore(nunits)) == NULL) {
				return NULL;
			} else {

			}
		} else {

		}
	}
}
