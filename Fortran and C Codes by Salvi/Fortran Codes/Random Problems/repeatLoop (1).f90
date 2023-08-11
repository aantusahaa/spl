!This is a program for counting the sum of consecutive ODD numbers from 1 to 100
PROGRAM SALVI
    INTEGER I,N,SUM
    READ*,N
    SUM=0
    DO 10 I=1,N,1
          SUM=SUM+I
    10  CONTINUE
WRITE(*,*)'SUM=',SUM

STOP
END PROGRAM

