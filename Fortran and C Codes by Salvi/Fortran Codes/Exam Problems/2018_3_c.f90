PROGRAM HELLO
L=2
10  DO 22   I=3,8,2
            IF(I.EQ.5)GOTO 10
            L=L+1
    22  CONTINUE
    L=2*L
    PRINT*,L
    STOP
END PROGRAM
! please dont execute this, this is an infinite loop and will crash your compiler