#include<stdio.h>
void main()
{
           int a[50][50],b[50][50],m,n,t,i,j,k=1;
           printf("Enter the no.of rows & columns of matrix: ");
             t++;
            scanf("%d %d" ,&m,&n);
             t++;
             printf("Enter elements of array: ");
             t++;
             for(i=0;i<m;i++)
             {
             for(j=0;j<n;j++,t++){
                       t++;
                      scanf("%d",&a[i][j]);
                      t++;
                      }
              }
                        printf("Original array: \n");
              t++;
              for(i=0;i<m;i++)
              {
              for(j=0;j<n;j++,t++){
                     t++;
                      printf("%d \t",a[i][j]);
                      t++;
                }  
                printf("\n");
                }
                 t++;  
                 b[0][0]=m;
                 b[0][1]=n;
                 for(i=0;i<m;i++,t++)
              {
              		for(j=0;j<n;j++,t++)
              		{ 
              			if (a[i][j]!=0)
              			{
              			           t++;
              			          b[k][0]=i;
              			          t++;
                 		          b[k][1]=j;
                 		          t++;
                 		          b[k][2]=a[i][j];
                 		          k++;
                 		          }
                 		}
                 	}
                 	b[0][2]=k-1;
                 	printf("Sparse matrix representation is:\n");
                 for(i=0;i<k;i++){
                   for(j=0;j<3;j++) {
                                printf("%d\t",b[i][j]);
                                }
                                printf("\n");
                            }
                    }     
