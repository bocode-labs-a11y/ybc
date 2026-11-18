#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[512];
    char out[512];
    size_t n, i, j;
    int started = 0;

    if (!fgets(s, sizeof s, stdin))
        return 0;

    n = strlen(s);
    while (n > 0 && isspace((unsigned char)s[n - 1]))
        s[--n] = '\0';              /* 去尾部空白 */

    j = 0;
    for (i = 0; i < n; ) {
        if (isspace((unsigned char)s[i])) {  /* 跳过所有连续空白 */
            i++;
            continue;
        }
        if (started)                        /* 单词之间只补一个空格 */
            out[j++] = ' ';
        while (i < n && !isspace((unsigned char)s[i]))
            out[j++] = s[i++];
        started = 1;
    }
    out[j] = '\0';

    printf("%s.\n", out);           /* 句号紧跟最后一个词 */
    return 0;
}