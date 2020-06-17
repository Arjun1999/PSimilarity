#include <stdio.h>

#define READ_INT(_x)					\
  {							\
    int _n_flag = 0, _tmp = 0;				\
    register int _ch = getchar_unlocked();		\
    while (_ch == ' ' || _ch == '\n')			\
      _ch = getchar_unlocked();				\
    if (_ch == '-')					\
      {							\
	_n_flag = 1;					\
	_ch = getchar_unlocked();			\
      }							\
    while (48 <= _ch && _ch <= 57)			\
      {							\
	_tmp = (_tmp << 3) + (_tmp << 1) + _ch - 48;	\
	_ch = getchar_unlocked();			\
      }							\
    (_x) = (_n_flag) ? -_tmp : _tmp;			\
  }							\

#define WRITE_INT(_x)				\
  {						\
    char _str[20];				\
    register int _i = 0;			\
    long long _tmp = (_x);			\
    if (_tmp < 0)				\
      {						\
	putchar_unlocked('-');			\
	_tmp = - _tmp;				\
      }						\
    do						\
      {						\
	*(_str + _i++) = _tmp % 10 + 48;	\
	_tmp /= 10;				\
      } while (_tmp != 0);			\
    for (_i--; _i >= 0; _i--)			\
      putchar_unlocked(*(_str + _i));		\
  }						\

int main(void)
{
  int n;

  READ_INT(n);
  if (n >= 0)
    {
      long long sum = 0;
      int x;

      while (n-- > 0)
	{
	  READ_INT(x);
	  sum += x;
	}

      WRITE_INT(sum);
      putchar_unlocked('\n');
    }

  return 0;
}
