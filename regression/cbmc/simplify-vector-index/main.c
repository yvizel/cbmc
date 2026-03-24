#include <assert.h>

#ifdef __GNUC__
typedef int v4si __attribute__((vector_size(16)));

int main()
{
  // Test that indexing a constant vector with a constant index
  // is simplified to the corresponding element value.
  v4si a = {0, 1, 2, 3};

  assert(a[0] == 0);
  assert(a[1] == 1);
  assert(a[2] == 2);
  assert(a[3] == 3);

  return 0;
}
#else

int main()
{
  return 0;
}

#endif
