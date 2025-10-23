#include <stdio.h>
#include <string.h>
int main() {
  char str[1001];
  scanf("%s", str);
  int length = strlen(str);

  int feq[1001] = {0};

  for (int i = 0; i < length; i++) {
    int val = str[i];
    feq[val]++;
  }

  for (int i = 1; i <= length + 1; i++) {
    printf("%d\n", feq[i]);
  }

  return 0;
}