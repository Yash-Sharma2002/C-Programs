#include <stdio.h>
void rev(char *, int, int);
void revWord(char *, int);
void end4(char *, int);
void atStartSpecial(char *, int);
void only2(char *, int);
void secondUpper(char *, int);
void title(char *, int);
void last2SwapTitle(char *, int);
void minWordAllName(char *, int, int);
void encrypt1(char *, int);
void decrypt1(char *, int);
void wordSorting(char *, int);
void upper(char *, int);
void lower(char *, int);
void split(char *, int, char);
int stWord(char *, int);
void main()
{
    char ch[] = "what is your name";
    int n = *(&ch + 1) - ch;
    // rev(ch, 0, n - 2);
    // revWord(ch,n);
    // end4(ch, n);
    // atStartSpecial(ch, n);
    // only2(ch, n);
    // secondUpper(ch, n);
    // title(ch, n);
    // last2SwapTitle(ch, n);
    // int min = stWord(ch, n);
    // minWordAllName(ch, n, min);
    // encrypt1(ch, n);
    // decrypt1(ch, n);
    // upper(ch,n);
    // lower(ch,n);
    // split(ch, n, '0');
    wordSorting(ch, n);
    printf("%s", ch);
}

void rev(char *a, int x, int y)
{
    while (x < y)
    {
        a[x] = a[x] + a[y] - (a[y] = a[x]);
        y--;
        x++;
    }
}

void revWord(char *a, int n)
{
    int i = 0, p = 0;
    for (; i < n; i++)
    {
        if (a[i + 1] == ' ' || i + 1 == n - 1)
        {
            rev(a, p, i);
            p = i + 2;
        }
    }
}

void atStartSpecial(char *a, int n)
{
    int i = 0, p = 0;
    for (; i < n; i++)
    {
        if (a[i + 1] == ' ' || i + 1 == n - 1)
            if (a[i] != ' ')
            {
                a[i] = 35; // ascii value of #
                a[p] = 64; // ascii value of @
                p = i + 2;
            }
            else
                ++p;
    }
}
void end4(char *a, int n)
{
    int i = 0, p = 48; // 48 is the ascii value where interger starts as characters
    for (; i < n; i++)
    {
        if (a[i] != ' ')
        {
            ++p;
            if (a[i + 1] == ' ' || i + 1 == n - 1)
            {
                if (p != i)
                    a[i] = p;
                p = 48;
            }
        }
    }
}

void secondUpper(char *a, int n)
{
    int i = 0, j = 0;
    for (; i < n; i++)
    {
        ++j;
        if (j == 2)
        {
            int x = a[i];
            if (x > 97)
            {
                a[i] = x - 32;
            }

            if (a[i + 1] == ' ' || i + 1 == n - 1)
            {
                j = -1;
            }
            else
                j = 0;
        }
    }
}

void only2(char *a, int n)
{
    int i = 0, j = 0;
    for (; i < n; i++)
    {
        if (a[i] != ' ')
        {
            ++j;
            if (j == 2)
            {
                a[i - 1] = a[i] + a[i - 1] - (a[i] = a[i - 1]);
                j = 0;
            }
        }
        else
            j = 0;
    }
}

void title(char *a, int n)
{
    int i = 0, j = 0;
    for (; i < n; i++)
    {
        int x = a[i];
        if ((a[i - 1] == ' ' || i == 0) && x > 97)
        {
            a[i] = x - 32;
        }
    }
}

void last2SwapTitle(char *ch, int n)
{
    int i = 0, p = 0;
    for (; i < n; i++)
    {
        if (ch[i + 1] == ' ' || i == n - 2)
        {
            int x = ch[i], y = ch[p];
            if (x > 97)
                ch[i] = x - 32;
            if (y > 97)
                ch[p] = y - 32;
            ch[i] = ch[p] + ch[i] - (ch[p] = ch[i]);
            p = i + 2;
        }
    }
}

int stWord(char *ch, int n)
{
    int i = 0, p = 0, min = n - 1;
    for (; i < n - 1; i++)
    {
        if (ch[i + 1] == ' ')
        {
            if (ch[i] != ' ')
            {
                int k = i - p + 1;
                if (min > k)
                    min = k;
                p = i + 2;
            }
            else
                ++p;
        }
    }
    return min;
}

void minWordAllName(char *ch, int n, int min)
{
    for (int j = 0; j < min; j++)
    {
        int p = j;
        for (int i = 0; i < n; i++)
        {
            if (ch[i + 1] == ' ' || i == n - 1)
            {
                if (ch[i] != ' ')
                {
                    printf("%c", (char)(ch[p] - 32));
                    p = i + 2 + j;
                }
                else
                    ++p;
            }
        }
        printf(" ");
    }
}

void encrypt1(char *ch, int n)
{
    char a[] = "01234";
    // char a[] = "aeiou";
    int lenA = (sizeof(a) / sizeof(*a)) - 1;
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (ch[i + 1] == ' ' || i + 1 == n - 1)
        {
            if (ch[i] != ' ')
            {
                for (int j = p; j <= i; j++)
                {
                    int k = 0, flag = 0;
                    for (; k < lenA; k++)
                    {
                        if (a[k] == ch[j])
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (flag)
                    {
                        if (k == lenA - 1)
                            ch[j] = a[0];
                        else
                            ch[j] = a[k + 1];
                    }
                    else
                    {
                        ch[j] = (char)(ch[j] + 1);
                    }
                }
                p = i + 2;
            }
            else
                ++p;
        }
    }
}

// problem here is while encypting characters like 'h' become vowel like 'i' and now while decrypting
// as it becomes 'i' a vowel so  it becomes 'a' not 'h' again
void decrypt1(char *ch, int n)
{
    // char a[] = "aeiou"; // wrong decrytion from this
    char a[] = "01234";
    int lenA = (sizeof(a) / sizeof(*a)) - 1;
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (ch[i + 1] == ' ' || i + 1 == n - 1)
        {
            if (ch[i] != ' ')
            {
                for (int j = p; j <= i; j++)
                {
                    int k = 0, flag = 0;
                    for (; k < lenA; k++)
                    {
                        if (a[k] == ch[j])
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (flag)
                    {
                        if (k == 0)
                            ch[j] = a[lenA - 1];
                        else
                            ch[j] = a[k - 1];
                    }
                    else
                    {
                        ch[j] = (char)(ch[j] - 1);
                    }
                }
                p = i + 2;
            }
            else
                ++p;
        }
    }
}

void upper(char *ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (ch[i] != ' ' && ch[i] >= 97)
        {
            ch[i] = ch[i] - 32;
        }
    }
}
void lower(char *ch, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (ch[i] != ' ' && ch[i] <= 97)
        {
            ch[i] = ch[i] + 32;
        }
    }
}

void split(char *ch, int n, char sp)
{
    int i = 0, p = 0, k = 0;
    for (; i < n; i++)
    {
        if (ch[i] == sp || i == n - 1)
        {
            int g = 0;
            for (int j = p; j < i; j++, g++)
            {
                printf("%c", ch[j]);
            }
            if (p != i)
                printf("\n");
            ++k;
            p = i + 1;
        }
    }
}

void wordSorting(char *ch, int n)
{
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (ch[i + 1] == ' ' || i + 1 == n - 1)
        {
            for (int j = p + 1; j <= i; j++)
            {
                int v = ch[j];
                int k = j - 1;

                for (; k >= p; k--)
                {
                    if (v < ch[k])
                        ch[k + 1] = ch[k];
                    else
                        break;
                }
                ch[k+ 1] = v;
            }
            p = i + 2;
        }
    }
}