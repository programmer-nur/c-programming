#include <stdio.h>
#include <string.h>
int main() {
  int n;
  scanf("%d", &n);

  char str1[101];
  char str2[101];
  for (int i = 0; i < n; i++) {
    scanf("%s %s", str1, str2);
  }

  int str1_len = strlen(str1);
  int str2_len = strlen(str2);

  char main_str[str1_len + str2_len];

  for (int i = 0; i < str1_len + str2_len; i++) {
    main_str[i] = str1[i];
  }

  printf("%s", main_str);

  return 0;
}