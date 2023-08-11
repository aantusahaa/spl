PROGRAM SERIES
    SUM=0.0
    A=2.0
    B=3.0
    PRINT*,"VALUE OF A:",A
    PRINT*,"VALUE OF B:",B
    PRINT*,"VALUE OF N?"
    READ*,N
    DO 10 I=0,N
        SUM=SUM+(1.0/(A+I*B))
    10 CONTINUE
    PRINT*,"THE SUM IS",SUM
    STOP
END PROGRAM