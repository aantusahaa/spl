PROGRAM FIBONACCI
    INTEGER T1,T2
    PRINT*,"HOW MANY TERMS?"
    READ*,N
    T1=1
    T2=1
    PRINT*,"THE FIBONACCI SERIES IS:"
    PRINT*,T1
    PRINT*,T2
    I=3
    10  NT=T1+T2
        T1=T2
        T2=NT
        PRINT*,T2
        I=I+1
        IF(I.LE.N) GOTO 10
    STOP
END PROGRAM