#include <stdio.h>

int deleteSegment(int tokenIds[], int size, int segmentStart, int segmentLength)
{
    for (int i = segmentStart; i < size - segmentLength; i++)
        tokenIds[i] = tokenIds[i + segmentLength];

    return size - segmentLength;
}

int evaluateTokenIds(int tokenIds[], int size)
{
    for (int i = 0; i < size - 2; i++)
    {
        if (
            (tokenIds[i] == 6 && tokenIds[i + 1] == 2 && tokenIds[i + 2] == 6) ||
            (tokenIds[i] == 6 && tokenIds[i + 1] == 3 && tokenIds[i + 2] == 6) ||
            (tokenIds[i] == 4 && tokenIds[i + 1] == 6 && tokenIds[i + 2] == 5))
        {
            // for (int i = 0; i < size; i++)
            // {
            //     printf("%d", tokenIds[i]);
            // }
            // printf(" -> %d%d%d -> ", tokenIds[i], tokenIds[i + 1], tokenIds[i + 2]);

            tokenIds[i] = 6;
            size = deleteSegment(tokenIds, size, i + 1, 2);
            i = -1;

            // for (int i = 0; i < size; i++)
            // {
            //     printf("%d", tokenIds[i]);
            // }

            // printf("\n");
        }
    }

    return size;
}

int main()
{
    char tokens[] = {'{', '2', '+', '(', '3', '+', '4', ')', '+', '5', '}'};
    int size = sizeof(tokens) / sizeof(tokens[0]);

    int tokenIds[size];

    for (int i = 0; i < size; i++)
    {
        switch (tokens[i])
        {
        case '(':
        case '{':
            tokenIds[i] = 4;
            break;
        case ')':
        case '}':
            tokenIds[i] = 5;
            break;
        case '+':
            tokenIds[i] = 2;
            break;
        case '*':
            tokenIds[i] = 3;
            break;
        default:
            if (tokens[i] >= '0' && tokens[i] <= '9')
                tokenIds[i] = 6;
            else
                tokenIds[i] = -1;
            break;
        }
    }

    size = evaluateTokenIds(tokenIds, size);
    if (size == 1 && tokenIds[0] == 6)
        printf("Valid Expression\n");
    else
        printf("Invalid Expression\n");
}