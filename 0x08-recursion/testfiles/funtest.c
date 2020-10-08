#include <stdio.h>

int _strlen(char *s3, int len)
{
	printf("%s, %d\n", s3, len);

        if (s3[len] == '\0')
                return (len);

        return (_strlen(s3, ++len));

}

int main(void)
{
  int length = 0;
  
  char *s = "level";
  
  length = _strlen(s, length);
  
  return (0);
}
