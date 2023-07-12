#include <stdio.h>

int main() {
    int numRows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &numRows);

    for (i = 1; i <= numRows; i++) {
        // Print spaces
        for (j = 1; j <= numRows - i; j++) {
            printf("  ");
        }

        // Print letters in increasing order
        for (j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }

        // Print letters in decreasing order
        for (j = i - 1; j >= 1; j--) {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}



/*	int row,i,j,k=1;
	for(row=5;row>=1;row--){
		
		for(i=1;i<=row-1;i++)
	
	{
			printf(" ");}
			
		printf("A b c d e ");
		printf("\n");}

}*/
