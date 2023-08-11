PROGRAM ODD_RECIPROCALS
    SUM=0
    N=1.0
    10  SUM=SUM+1.0/N
        N=N+2
        IF(N.LE.9)GOTO 10
    WRITE(*,*)SUM
    STOP
END PROGRAM
