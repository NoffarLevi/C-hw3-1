
#define LINE 256
#define WORD 30

int getLine(char s[]);
int getWord(char w[]);
int substring( char * str1, char * str2, int lenofWord);
int similar (char *s, char *t, int n,  int lenofWord, int lenCheckWord);
void print_lines(char *str,  int lenofWord);
void print_similar_words(char *str,  int lenofWord);