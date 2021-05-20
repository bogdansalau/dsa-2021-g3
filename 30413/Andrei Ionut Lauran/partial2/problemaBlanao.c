#include <stdio.h>

void CodBlanao(int current_line, int current_column, int total_lines, int total_columns, int* counter)
{
    if (current_line == 0 && current_column == total_columns - 1)
    {
        (*counter)++;
        return;
    }
    if (current_line != 0)
        CodBlanao(current_line - 1, current_column, total_lines, total_columns, counter);
    if (current_column != total_columns - 1)
        CodBlanao(current_line, current_column + 1, total_lines, total_columns, counter);
    if (current_line != 0 && current_column != total_columns - 1)
        CodBlanao(current_line - 1, current_column + 1, total_lines, total_columns, counter);
}

int main()
{
    int M,N;
    printf("Te salut Bogdan! ^_^\n");
    printf("N is:\n");
    scanf("%d", &N);
    printf("M is:\n");
    scanf("%d", &M);
    int counter = 0;
    CodBlanao(N-1, 0, N, M, &counter);
    printf("%d", counter);
    return 0;
}