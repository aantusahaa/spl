!     This program prints the numbers from 1 to N in a single line using a loop.
      INTEGER N, I

!     Read in the value of N
      READ (*,*) N

!     Loop through the numbers from 1 to N
      DO I = 1, N
         WRITE (*,'(I5,1X)',ADVANCE='NO') I   ! print the current number and a space
      END DO

      END
