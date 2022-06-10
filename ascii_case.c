#include "ascii_case.h"


bool is_lower(const char c) {
  return (c >= A_LOWER && c <= Z_LOWER);
}

bool is_upper(const char c) {
  return (c >= A_UPPER && c <= Z_UPPER);
}

char uppercase(const char c) {
  return (c - (A_LOWER - A_UPPER));
}

char lowercase(const char c) {
  return (c + (A_LOWER - A_UPPER));
}

char togglecase(const char c) {
  if (is_lower(c)) {
    return uppercase(c);
  } else if (is_upper(c)) {
    return lowercase(c);
  } else {
    return c;
  }
}
