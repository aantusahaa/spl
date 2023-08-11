!     This program calculates the arithmetic mean of N numbers

PROGRAM AVERAGE_OF_NUMBERS
    INTEGER N, I
    REAL SUM, NUM, MEAN

!     Prompt the user to enter N
    WRITE (*,*) 'Enter the number of numbers to be averaged:'
    READ (*,*) N

!    Initialize SUM to zero
    SUM = 0.0

!     Loop through the N numbers and add them to SUM
    DO I = 1, N
       WRITE (*,*) 'Enter number ', I, ':'
       READ (*,*) NUM
       SUM = SUM + NUM
    END DO

!     Calculate the arithmetic mean
    MEAN = SUM / REAL(N)

!     Output the result
    WRITE (*,*) 'The arithmetic mean of the ', N, ' numbers is ', MEAN

END PROGRAM

