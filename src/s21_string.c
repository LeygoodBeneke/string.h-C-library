#include "s21_string.h"

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_sprintf.h"

s21_size_t s21_strlen(const char *str) {
  s21_size_t len = 0;
  while (*(str + len) != s21_NULL) len++;
  return len;
}

void *s21_memchr(const void *str, int c, s21_size_t n) {
  char *str_pointer = (char *)str;
  s21_size_t idx = 0;
  while (idx < n && *(str_pointer + idx) != c) idx++;
  return idx < n ? str_pointer + idx : s21_NULL;
}

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  int return_value = 0;
  char *str1_pointer = (char *)str1, *str2_pointer = (char *)str2;
  s21_size_t idx = 0;
  while (idx < n && *(str1_pointer + idx) == *(str2_pointer + idx)) idx++;
  if (idx < n)
    return_value = *(str1_pointer + idx) < *(str2_pointer + idx) ? -1 : 1;
  return return_value;
}

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  for (s21_size_t i = 0; i < n; i++) *(char *)(dest + i) = *(char *)(src + i);
  return dest;
}

void *s21_memset(void *str, int c, s21_size_t n) {
  for (s21_size_t i = 0; i < n; i++) *(char *)(str + i) = c;
  return str;
}

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  s21_size_t i = 0, j = 0;
  while (dest[i] != '\0') i++;
  while (j < n) {
    dest[i + j] = src[j];
    j++;
  }
  dest[i + j + 1] = '\0';
  return dest;
}

char *s21_strchr(const char *str, int c) {
  if (c == '\0') return (char *)(str + s21_strlen(str));
  char *return_value = (char *)str;
  while (*return_value != c && return_value != (char *)(str + s21_strlen(str)))
    return_value++;
  if (return_value == (char *)(str + s21_strlen(str))) return_value = s21_NULL;
  return return_value;
}

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  int overflow = n > s21_strlen(src);
  s21_size_t limit = n > s21_strlen(src) ? s21_strlen(src) : n;
  for (s21_size_t idx = 0; idx < limit; idx++) *(dest + idx) = *(src + idx);
  if (overflow) *(dest + limit) = '\0';
  return dest;
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t i;
  s21_size_t len1 = s21_strlen(str1);
  s21_size_t len2 = s21_strlen(str2);
  for (i = 0; i < len1; i++) {
    for (s21_size_t j = 0; j < len2; j++) {
      if (str2[j] == str1[i]) {
        return i;
      }
    }
  }
  return i;
}

#ifdef __APPLE__
#define MAX_ERROR 107
char *errors[107] = {"Undefined error: 0",
                     "Operation not permitted",
                     "No such file or directory",
                     "No such process",
                     "Interrupted system call",
                     "Input/output error",
                     "Device not configured",
                     "Argument list too long",
                     "Exec format error",
                     "Bad file descriptor",
                     "No child processes",
                     "Resource deadlock avoided",
                     "Cannot allocate memory",
                     "Permission denied",
                     "Bad address",
                     "Block device required",
                     "Resource busy",
                     "File exists",
                     "Cross-device link",
                     "Operation not supported by device",
                     "Not a directory",
                     "Is a directory",
                     "Invalid argument",
                     "Too many open files in system",
                     "Too many open files",
                     "Inappropriate ioctl for device",
                     "Text file busy",
                     "File too large",
                     "No space left on device",
                     "Illegal seek",
                     "Read-only file system",
                     "Too many links",
                     "Broken pipe",
                     "Numerical argument out of domain",
                     "Result too large",
                     "Resource temporarily unavailable",
                     "Operation now in progress",
                     "Operation already in progress",
                     "Socket operation on non-socket",
                     "Destination address required",
                     "Message too long",
                     "Protocol wrong type for socket",
                     "Protocol not available",
                     "Protocol not supported",
                     "Socket type not supported",
                     "Operation not supported",
                     "Protocol family not supported",
                     "Address family not supported by protocol family",
                     "Address already in use",
                     "Can't assign requested address",
                     "Network is down",
                     "Network is unreachable",
                     "Network dropped connection on reset",
                     "Software caused connection abort",
                     "Connection reset by peer",
                     "No buffer space available",
                     "Socket is already connected",
                     "Socket is not connected",
                     "Can't send after socket shutdown",
                     "Too many references: can't splice",
                     "Operation timed out",
                     "Connection refused",
                     "Too many levels of symbolic links",
                     "File name too long",
                     "Host is down",
                     "No route to host",
                     "Directory not empty",
                     "Too many processes",
                     "Too many users",
                     "Disc quota exceeded",
                     "Stale NFS file handle",
                     "Too many levels of remote in path",
                     "RPC struct is bad",
                     "RPC version wrong",
                     "RPC prog. not avail",
                     "Program version wrong",
                     "Bad procedure for program",
                     "No locks available",
                     "Function not implemented",
                     "Inappropriate file type or format",
                     "Authentication error",
                     "Need authenticator",
                     "Device power is off",
                     "Device error",
                     "Value too large to be stored in data type",
                     "Bad executable (or shared library)",
                     "Bad CPU type in executable",
                     "Shared library version mismatch",
                     "Malformed Mach-o file",
                     "Operation canceled",
                     "Identifier removed",
                     "No message of desired type",
                     "Illegal byte sequence",
                     "Attribute not found",
                     "Bad message",
                     "EMULTIHOP (Reserved)",
                     "No message available on STREAM",
                     "ENOLINK (Reserved)",
                     "No STREAM resources",
                     "Not a STREAM",
                     "Protocol error",
                     "STREAM ioctl timeout",
                     "Operation not supported on socket",
                     "Policy not found",
                     "State not recoverable",
                     "Previous owner died",
                     "Interface output queue is full"};
#endif  // __APPLE__

#ifdef __unix__
#define MAX_ERROR 134
char *errors[134] = {"Success",
                     "Operation not permitted",
                     "No such file or directory",
                     "No such process",
                     "Interrupted system call",
                     "Input/output error",
                     "No such device or address",
                     "Argument list too long",
                     "Exec format error",
                     "Bad file descriptor",
                     "No child processes",
                     "Resource temporarily unavailable",
                     "Cannot allocate memory",
                     "Permission denied",
                     "Bad address",
                     "Block device required",
                     "Device or resource busy",
                     "File exists",
                     "Invalid cross-device link",
                     "No such device",
                     "Not a directory",
                     "Is a directory",
                     "Invalid argument",
                     "Too many open files in system",
                     "Too many open files",
                     "Inappropriate ioctl for device",
                     "Text file busy",
                     "File too large",
                     "No space left on device",
                     "Illegal seek",
                     "Read-only file system",
                     "Too many links",
                     "Broken pipe",
                     "Numerical argument out of domain",
                     "Numerical result out of range",
                     "Resource deadlock avoided",
                     "File name too long",
                     "No locks available",
                     "Function not implemented",
                     "Directory not empty",
                     "Too many levels of symbolic links",
                     "Unknown error 41",
                     "No message of desired type",
                     "Identifier removed",
                     "Channel number out of range",
                     "Level 2 not synchronized",
                     "Level 3 halted",
                     "Level 3 reset",
                     "Link number out of range",
                     "Protocol driver not attached",
                     "No CSI structure available",
                     "Level 2 halted",
                     "Invalid exchange",
                     "Invalid request descriptor",
                     "Exchange full",
                     "No anode",
                     "Invalid request code",
                     "Invalid slot",
                     "Unknown error 58",
                     "Bad font file format",
                     "Device not a stream",
                     "No data available",
                     "Timer expired",
                     "Out of streams resources",
                     "Machine is not on the network",
                     "Package not installed",
                     "Object is remote",
                     "Link has been severed",
                     "Advertise error",
                     "Srmount error",
                     "Communication error on send",
                     "Protocol error",
                     "Multihop attempted",
                     "RFS specific error",
                     "Bad message",
                     "Value too large for defined data type",
                     "Name not unique on network",
                     "File descriptor in bad state",
                     "Remote address changed",
                     "Can not access a needed shared library",
                     "Accessing a corrupted shared library",
                     ".lib section in a.out corrupted",
                     "Attempting to link in too many shared libraries",
                     "Cannot exec a shared library directly",
                     "Invalid or incomplete multibyte or wide character",
                     "Interrupted system call should be restarted",
                     "Streams pipe error",
                     "Too many users",
                     "Socket operation on non-socket",
                     "Destination address required",
                     "Message too long",
                     "Protocol wrong type for socket",
                     "Protocol not available",
                     "Protocol not supported",
                     "Socket type not supported",
                     "Operation not supported",
                     "Protocol family not supported",
                     "Address family not supported by protocol",
                     "Address already in use",
                     "Cannot assign requested address",
                     "Network is down",
                     "Network is unreachable",
                     "Network dropped connection on reset",
                     "Software caused connection abort",
                     "Connection reset by peer",
                     "No buffer space available",
                     "Transport endpoint is already connected",
                     "Transport endpoint is not connected",
                     "Cannot send after transport endpoint shutdown",
                     "Too many references: cannot splice",
                     "Connection timed out",
                     "Connection refused",
                     "Host is down",
                     "No route to host",
                     "Operation already in progress",
                     "Operation now in progress",
                     "Stale file handle",
                     "Structure needs cleaning",
                     "Not a XENIX named type file",
                     "No XENIX semaphores available",
                     "Is a named type file",
                     "Remote I/O error",
                     "Disk quota exceeded",
                     "No medium found",
                     "Wrong medium type",
                     "Operation canceled",
                     "Required key not available",
                     "Key has expired",
                     "Key has been revoked",
                     "Key was rejected by service",
                     "Owner died",
                     "State not recoverable",
                     "Operation not possible due to RF-kill",
                     "Memory page has hardware error"};
#endif  // unix

char *s21_strerror(int errnum) {
  static char unknown_error[1500];
  s21_sprintf(unknown_error, "Unknown error: %d", errnum);
  return (errnum >= 0 && errnum <= MAX_ERROR) ? errors[errnum] : unknown_error;
}
char *s21_strtok(char *str, const char *delim) {
  static char *result = s21_NULL;
  if (str) {
    result = str;
    while (*result && s21_strchr(delim, *result)) *result++ = '\0';
  }
  if (*result != '\0') {
    str = result;
    while (*result && !s21_strchr(delim, *result)) ++result;
    while (*result && s21_strchr(delim, *result)) *result++ = '\0';
  } else {
    str = s21_NULL;
  }
  return str;
}

char *s21_strpbrk(const char *str1, const char *str2) {
  char *return_value = s21_NULL;
  int hashmap[255] = {};
  for (s21_size_t i = 0; i < s21_strlen(str2); i++) hashmap[(int)str2[i]] = 1;
  s21_size_t idx = 0;
  while (idx < s21_strlen(str1) && !hashmap[(int)str1[idx]]) idx++;
  if (idx < s21_strlen(str1)) return_value = (char *)(str1 + idx);
  return return_value;
}

char *s21_strrchr(const char *str, int c) {
  char *res = s21_NULL;
  for (s21_size_t i = 0; i < s21_strlen(str) + 1; i++) {
    if (str[i] == c) {
      res = ((char *)str) + i;
    }
  }
  return res;
}

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int result = 0;
  for (s21_size_t i = 0; i < n; i++) {
    if (str1[i] != str2[i]) {
      result = str1[i] - str2[i];
      break;
    }
  }
  return result;
}

char *s21_strstr(const char *haystack, const char *needle) {
  s21_size_t needle_size = s21_strlen(needle);
  if (s21_strlen(haystack) < needle_size) return s21_NULL;
  s21_size_t last_index = s21_strlen(haystack) - needle_size;
  for (s21_size_t i = 0; i <= last_index; i++)
    if (s21_strncmp(haystack + i, needle, needle_size) == 0)
      return (char *)(haystack + i);
  return s21_NULL;
}

void *s21_to_upper(const char *str) {
  s21_size_t len_to_upper = s21_strlen(str);
  void *ch = s21_NULL;
  if (len_to_upper > 0) {
    char *buff = (char *)calloc(sizeof(char), (len_to_upper + 1));
    if (buff) {
      for (s21_size_t i = 0; i <= len_to_upper; i++)
        if (str[i] >= 'a' && str[i] <= 'z') {
          (buff[i] = str[i] - 32);
        } else
          (buff[i] = str[i]);
      ch = (void *)buff;
    }
  }
  return ch;
}

void *s21_to_lower(const char *str) {
  s21_size_t len_to_lower = s21_strlen(str);
  void *ch = s21_NULL;
  if (len_to_lower > 0) {
    char *buff = (char *)calloc(sizeof(char), (len_to_lower + 1));
    if (buff) {
      for (s21_size_t i = 0; i <= len_to_lower; i++)
        if (str[i] >= 'A' && str[i] <= 'Z') {
          (buff[i] = str[i] + 32);
        } else
          (buff[i] = str[i]);
      ch = (void *)buff;
    }
  }
  return ch;
}

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
  if (!src || !str) return s21_NULL;

  s21_size_t n1 = s21_strlen(src);
  s21_size_t n2 = s21_strlen(str);
  if (start_index > n1) return s21_NULL;

  char *non_const_src = (char *)src;
  for (s21_size_t i = start_index; i < start_index + n2; i++) {
    non_const_src[i + n2] = src[i];
    non_const_src[i] = str[i - start_index];
  }
  return (void *)src;
}

void *s21_trim(const char *src, const char *trim_chars) {
  if (!src) return s21_NULL;

  int hmap[500] = {};
  if (trim_chars != s21_NULL) {
    for (s21_size_t i = 0; i < s21_strlen(trim_chars); i++) {
      int val = trim_chars[i];
      hmap[val] = 1;
    }
  }
  int left_idx = 0, right_idx = s21_strlen(src) - 1;
  while (left_idx < (int)s21_strlen(src) && hmap[(int)src[left_idx]] == 1)
    left_idx++;
  while (hmap[(int)src[right_idx]] == 1) right_idx--;
  if (left_idx > right_idx) return s21_NULL;

  char *return_string = malloc((right_idx - left_idx + 2) * sizeof(char));

  for (int i = left_idx; i <= right_idx; i++) {
    return_string[i - left_idx] = src[i];
  }
  return_string[right_idx - left_idx + 1] = 0;
  return return_string;
}
