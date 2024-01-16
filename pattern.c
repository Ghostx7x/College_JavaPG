#include <stdio.h>

void stringmatch(char str[], char pat[], char rep[]) {
    char ans[100];
    int i = 0, j = 0, k = 0;

    while (str[i] != '\0') {
        int match = 1;

        for (k = 0; pat[k] != '\0'; k++) {
            if (str[i + k] != pat[k]) {
                match = 0;
                break;
            }
        }

        if (match) {
            for (k = 0; rep[k] != '\0'; k++, j++)
                ans[j] = rep[k];

            // Skip characters in the original string until a non-alphabetic character is encountered
            while (str[i + k] != '\0' && (str[i + k] < 'A' || (str[i + k] > 'Z' && str[i + k] < 'a') || str[i + k] > 'z')) {
                ans[j++] = str[i + k];
                k++;
            }

            if (str[i + k] != '\0' && str[i + k] != ' ') {
                ans[j++] = ' ';  // Add space after replacement if not at the end of the string
            }

            i += k;
        } else {
            ans[j++] = str[i++];
        }
    }

    ans[j] = '\0';

    printf("\nThe resultant string is:\n%s\n", ans);
}

int main(void) {
    char str[100], pat[50], rep[50];

    printf("Enter a main string:\n");
    scanf("%99[^\n]", str);

    printf("Enter a pattern string:\n");
    scanf("%49s", pat);

    printf("Enter a replace string:\n");
    scanf("%49s", rep);

    stringmatch(str, pat, rep);
}




/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int find_match(char str[100],char pat[100],char rep[100],char ans[100]);

int main(void)
{
    char str[100], pat[100], rep[100], ans[100];
    int flag;
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the pattern string: ");
    fgets(pat, sizeof(pat), stdin);
    printf("Enter the replacement string: ");
    fgets(rep,sizeof(rep), stdin);
    flag = find_match(str,pat,rep,ans);
    if(flag == 1)
    {
        printf("\n Pattern Found \n");
        printf("\n The string after replacement is %s", ans);
    }
    else
        printf("\n Pattern not found \n");
}

int find_match(char str[100],char pat[100],char rep[100],char ans[100])
{
    int i,j,m,c,k,flag;
    i = j = m = c = flag = 0;
    while(str[c] != '\0')
    {
        if(str[m] == pat[i])
        {
            i++;
            m++;
            if(pat[i] == '\0')
            {
                flag = 1;
                for(k=0;rep[k] != '\0';k++,j++)
                    ans[j] = rep[k];
                i=0;
                c=m;
            }
        }
        else
        {
            ans[j] = str[c];
            j++;
            c++;
            m=c;
            i=0;
        }
    }
    ans[j] = '\0';
    return flag;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char str[100], pat[50], rep[50], ans[100];
int i, j, c, m, k, flag=0;
void stringmatch()
{
    i = m = c = j = 0;
    while(str[c] != '\0')
    {
        if(str[m] == pat[i]) // ...... matching
        {
            i++; m++;
            if(pat[i] == '\0') //.....found occurrences.
            {   
                flag = 1;
                //.... copy replace string in ans string.

                j=c;
                for(k = 0; rep[k] != '\0'; k++, j++)
                    ans[j] = rep[k];
                i = 0;
                c = m;
            }
        } // if ends.
        else //... mismatch
        {
            ans[j] = str[c];
            j++;
            c++;
            m = c;
            i = 0;
        }//else ends
    } //end of while
    ans[j] = '\0';
} //end stringmatch()

int main(void)
{
    printf("\nEnter a main string \n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the input strings
    str[strcspn(str, "\n")] = '\0';

    printf("\nEnter a pattern string \n");
    fgets(pat, sizeof(pat), stdin);

    pat[strcspn(pat, "\n")] = '\0';

    printf("\nEnter a replace string \n");
    fgets(rep, sizeof(rep), stdin);

    rep[strcspn(rep, "\n")] = '\0';

    stringmatch();

    if(flag == 1)
        printf("\nThe resultant string is\n%s" , ans);
    else
        printf("\nPattern string NOT found\n");
}
*/






/*
#include <stdio.h>

void stringmatch(char str[], char pat[], char rep[]) {
    char ans[100];
    int i = 0, j = 0, k = 0;

    while (str[i] != '\0') {
        int match = 1;

        for (k = 0; pat[k] != '\0'; k++) {
            if (str[i + k] != pat[k]) {
                match = 0;
                break;
            }
        }

        if (match) {
            for (k = 0; rep[k] != '\0'; k++, j++)
                ans[j] = rep[k];
            ans[j++] = ' ';
            i += k;
        } else {
            ans[j++] = str[i++];
        }
    }

    ans[j] = '\0';

    printf("\nThe resultant string is\n%s\n", ans);
}

int main(void) {
    char str[100], pat[50], rep[50];

    printf("Enter a main string:\n");
    gets(str);

    printf("Enter a pattern string:\n");
    gets(pat);

    printf("Enter a replace string:\n");
    gets(rep);

    stringmatch(str, pat, rep);

    return 0;
}
*/