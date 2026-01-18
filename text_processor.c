int text_processor(const char *str) {
  int total = 0;
  int sign = 1;
  
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      total += 10 * sign;
    } else if (str[i] >= '0' && str[i] <= '9') {
      if ((str[i] - '0') % 2 == 0) {
        sign = 1;
      } else {
        sign = -1;
      }
    } else if (str[i] == '!') {
      total = 0;
    }
  }
  
  return total;
}
