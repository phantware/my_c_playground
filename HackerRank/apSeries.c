// #include <stdio.h>

// int main() 
// {

//     int n;
//     scanf("%d", &n);
//     int len = n*2 - 1;
//     for(int i=0;i<len;i++){
//         for(int j=0;j<len;j++){
//             int min = i < j ? i : j;
//             min = min < len-i ? min : len-i-1;
//             min = min < len-j-1 ? min : len-j-1;
//             printf("%d ", n-min);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
 
// void print_row(int n, int row);
 
// int main() 
// {
 
//     int n, i;
//     scanf("%d", &n);
    
//     // print first n - 1 rows
//     for (i = 0; i < n - 1; i++)
//         print_row(n, i);
      
//     // print middle row
//     print_row(n, i);
    
//     // print last n - 1 rows
//     for (i = n - 2; i >= 0; i--)
//         print_row(n, i);
        
//     return 0;
// }
 
// /**
//  * print_row - prints a single row
//  * @n: maximum digit in the row
//  * @row: index of the row to print
//  */
// void print_row(int n, int row)
// {
//     // print the first n - 1 columns
//     for (int i = 0, j = n; i < n - 1; i++)
//     {   
//         printf("%d ", j);
        
//         if (j > (n - row))
//             j--;
//     }
    
//     // print middle column
//     printf("%d", (n - row));
    
//     // print last n - 1 columns 
//     for (int i = 0, j = n - row; i < n - 1; i++)
//     {   
//         if (i >= n - row - 1)
//             j++;
        
//         printf(" %d", j);
//     }
    
//     printf("\n");
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int find_val(int i, int j, int n);
 
int main() 
{
 
    int n, val;
    scanf("%d", &n);
    
    // Complete the code to print the pattern.
    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < n * 2 - 1; j++)
        {
            // get value of current index
            val = find_val(i, j, n);
            
            if (j != 0)
                printf(" ");
                
            printf("%d", val);
        }
        
        printf("\n");
    }
    
    return 0;
}
 
/**
 * find_val - gets correct value of a given index in a n-1 x n-1 grid
 * @i: row index
 * @j: column index
 * @n: size of grid
 *
 * Return: correct value at given index
 */
int find_val(int i, int j, int n)
{
    // find the distances to the edges
    int dist_top = i - 0;
    int dist_bottom = abs(i - (n * 2 - 2));
    int dist_left = j - 0;
    int dist_right = abs(j - (n * 2 - 2));
    int val = n;
    
    // find minimum distance
    int dist[] = {dist_top, dist_bottom, dist_left, dist_right};
    for (int i = 0; i < 4; i++)
    {
        if (dist[i] < val)
            val = dist[i];
    
    }
    
    return (n - val);
}
