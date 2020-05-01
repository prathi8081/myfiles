 #include<stdio.h>
 main()
 {
    int N=3,i,j;
    int sz = 2*N - 1;
    int a[sz][sz];
    
    for (int i = 0; i < N; ++i)				//		Making first quarter
    {
        for (int j = 0; j < N; ++j)
        {
            if (j <= i)
                a[i][j] = N - j;
            else
                a[i][j] = N - i;
        }
    }

    for (int i = 0; i < N; ++i)				//		taking mirror image for second quarter
    {
        for (int j = sz - 1; j >= N; --j)
        {
            a[i][j] = a[i][sz - 1 - j];
        }
    }

    for (int i = sz - 1; i >= N; --i)		//		taking water image for below half
    {
        for (int j = 0; j < sz; ++j)
        {
            a[i][j] = a[sz - 1 - i][j];
        }
    }

    for (int i = 0; i < sz; ++i)			//		printing the 2D - array 
    {
        for (int j = 0; j < sz; ++j)
        {
           printf("  %2d  ",a[i][j]);
           }
       printf("\n");
    }
}