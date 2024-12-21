// 2123 bytes after formatting
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char buf[1000006];

int n;
int  type_l[500], type_r[500];
char *str_l[500], *str_r[500];
char strinput[1000006];


void read_inst(int *ptype1, char **pstr1, int *ptype2, char **pstr2) {
    char ch1, ch2;
    scanf("%s", buf);

    char *tmp = strtok(buf, "]");
    ch1 = *tmp;
    for (int i = 0; i < 3; i++) if (ch1 == ".^$"[i]) *ptype1 = i;
    *pstr1 = malloc(strlen(tmp + 2) + 1);
    strcpy(*pstr1, tmp + 2);

    tmp = strtok(NULL, "]");
    ch2 = *tmp;
    for (int i = 0; i < 3; i++) if (ch2 == ".^$"[i]) *ptype2 = i;
    *pstr2 = malloc(strlen(tmp + 2) + 1);
    strcpy(*pstr2, tmp + 2);
}

void input() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        read_inst(&type_l[i], &str_l[i], &type_r[i], &str_r[i]);
    scanf("%s", strinput);
}

char *find_in_str(char *dest, const char *targ, int type) {
    if (type == 0) return strstr(dest, targ);
    int len_dest = strlen(dest);
    int len_targ = strlen(targ);
    if (type == 1) {
        if (strncmp(dest, targ, len_targ) == 0) return dest;
        else return NULL;
    }
    if (type == 2) {
        if (strncmp(dest + len_dest - len_targ, targ, len_targ) == 0) return dest + len_dest - len_targ;
        else return NULL;
    }
}

int try_substitute(int id) {
    char *res = find_in_str(strinput, str_l[id] ,type_l[id]);
    if (res == NULL) return 0;
    int len_l = strlen(str_l[id]);
    int len_r = strlen(str_r[id]);
    int len_ex = strlen(res + len_l); // 找出当前字符串匹配部分右侧的长度
    if (type_r[id] == 0) {                                 // abbccc0? .[bb].[ddd]
        memmove(res + len_r, res + len_l, len_ex + 1);       // a???ccc0
        memmove(res, str_r[id], len_r);                      // adddccc0
    }
    if (type_r[id] == 1) {                                 // a bbccc0? .[bb]^[ddd]
        memmove(res + len_r, res + len_l, len_ex + 1);       // a???ccc0
        memmove(strinput + len_r, strinput, res - strinput); // ???accc0
        memmove(strinput, str_r[id], len_r);                 // dddaccc0
    }
    if (type_r[id] == 2) {                                 // abbccc0? .[bb]$[ddd]
        memmove(res, res + len_l, len_ex);                   // accc????
        memmove(res + len_ex, str_r[id], len_r + 1);         // acccddd0
    }
    return 1;
}

void output() {
    printf("%s\n", strinput);
}

void finish() {
    for (int i = 0; i < n; i++) {
        free(str_l[i]);
        free(str_r[i]);
    }
}

int main() {
    input();
    int changed = 1;
    while (changed) {
        changed = 0;
        for (int i = 0; i < n; i++)
            if (try_substitute(i)) {
                changed = 1;
                break;
            }
    }
    output();
    finish();
}