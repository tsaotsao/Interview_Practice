// hint : left to right
// 1. p is a const pointer to char
char *const p1;

// 2. p is a pointer to (const char)/(char const)
const char *p2;
char const *p2;

// 3. p is a pointer to a pointer to char
char **p3;

// 4. p is a pointer to a pointer to (const char)/(char const)
char const *p4;
const char *p4;

// 5. p is pointer to const pointer to char
char *const *p5;

// 6. p is a pointer to const pointer to (const char)/(char const)
const char *const *p6;
char const *const *p6;

// 7. p is a const pointer to a pointer to char
char **const p7;

// 8. p is a const pointer to a pointer to (const char)/(char const)
const char **const p8;

// 9. p is a const pointer to a const pointer to char
char *const *const p9;

// 10. p is a const pointer to a const pointer to (const char)/(char const)
const char *const *const p10;
