#ifndef ___IntSet
#define ___IntSet


typedef struct {
	int max;
	int num;
	int *set;
} IntSet;

int Intialize(IntSet *s, int max);

int IsMember(const IntSet *s, int n);

void Add(IntSet *s, int n);

void Remove(IntSet *s, int);

int Capacity(const IntSet *s);

int Size(const IntSet *s);

void Assign(IntSet *s1, const IntSet *s2);

int Equal(const IntSet *s1, const IntSet *s2);

IntSet *Union(IntSet *s1, const IntSet *s2, const IntSet *s3);

IntSet *Intersection(IntSet *s1, const IntSet *s2, const IntSet *s3);

IntSet *Difference(IntSet *s1, const IntSet *s2, const IntSet *s3);

void Println(const IntSet *s);

void Terminate(IntSet *s);
#endif
<<<<<<< HEAD

=======
>>>>>>> 36ba4d0cbbf127c813c238dfc3596f790b1f91a3
