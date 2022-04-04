#include <stdio.h>
#include <string.h>

void hello() {
    int i;
    char hw[] = "1_hello wrld";

    for(i = 0; i < 12; i++) { // strlen hw = 12
        printf("%c", hw[i]);
    }
    printf("\n");
}

void test_printf_c() {
    printf("chapter_1.c:13:16: warning: unknown escape sequence: '\\c'\n"); // '\c' 
}

void cels_fahr_table() {
    float fahr, celsius;

    struct fc {
        int lower;
        int upper;
        int step;
    } fc;

    fc.lower = 0;
    fc.upper = 300;
    fc.step  = 20;

    fahr = fc.lower;
    while(fahr <= fc.upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf ("\t%3.0f\t%6.1f\n", fahr, celsius);
        fahr += fc.step;
    }
}

void cels_fahr_table_v2() {
    float fahr, celsius;

    struct fc {
        int lower;
        int upper;
        int step;
    } fc;

    fc.lower = 0;
    fc.upper = 300;
    fc.step  = 20;

    fahr = fc.lower;
    printf("     TEMPERATURE TABLE\n    celsius     fahr\n+------------+-------------+\n");
    while(fahr <= fc.upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf ("|    %3.0f     |   %6.1f    |\n+------------+-------------+\n", fahr, celsius);
        fahr += fc.step;
    }
}

void fahr_cels_table() {
    float fahr, celsius;

    struct fc {
        int lower;
        int upper;
        int step;
    } fc;

    fc.lower = 0;
    fc.upper = 300;
    fc.step  = 20;

    fahr = fc.lower;
    printf("     TEMPERATURE TABLE\n    fahr     celsius\n+-----------+-----------+\n");
    while(fahr <= fc.upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf ("|  %6.1f   |    %3.0f    |\n+-----------+-----------+\n", celsius, fahr);
        fahr += fc.step;
    }
}

void copy() {
    int c;
    while ((c = getchar()) != '\n') {
        putchar (c);
    }

}

void printEOF() {
    printf("EOF = %d\n", EOF);
}

void t_s_n_count() {
    char ch;
    int tabs, spaces, newlines;
    tabs = spaces = newlines = 0;

    while((ch = getchar()) != '.') {
        if(ch == ' ') {
            spaces++;
        }
        else if (ch == '\t') {
            tabs++;
        }
        else if(ch == '\n') {
            newlines++;
        }
    }
    printf("spaces: %d, tabs: %d, newlines: %d\n", spaces, tabs, newlines);
}

void shrimp_spaces() {
    char string[100] = "my        string       here\n";
    printf("%s", string);
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] != ' ' || 
           (string[i] == ' ' && i != 0 && i != 
            strlen(string) && string[i+1] != ' ')) {
            printf("%c", string[i]);
        }
        i++;
    }
}

void copy_t_s_n_symbols() {
    char ch;
    int tabs, spaces, newlines;
    tabs = spaces = newlines = 0;

    while((ch = getchar()) != '.') {
        if(ch == '\b') {
            printf("\\b");
        }else if(ch == '\n') {
            printf("\\n");
        }else if(ch == '\t') {
            printf("\\t");
        }else if(ch == '\\') {
            printf("\\\\");
        }
    }
}


int main() {
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_1>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    hello();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_2>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    test_printf_c();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_3>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    cels_fahr_table();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_4>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    cels_fahr_table_v2();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_5>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    fahr_cels_table();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_6>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    copy();
    printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_7>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printEOF();    
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_8>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    t_s_n_count();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_9>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    shrimp_spaces();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_10>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    copy_t_s_n_symbols();
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<EX_11>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

}