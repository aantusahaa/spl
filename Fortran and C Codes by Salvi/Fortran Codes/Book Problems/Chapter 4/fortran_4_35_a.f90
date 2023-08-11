PROGRAM FIBONACCI
    INTEGER T1,T2
    T1=1
    T2=1
    PRINT*,"THE FIBONACCI SERIES UP TO 10000 IS"
    PRINT*,T1
    PRINT*,T2
    10  NT=T1+T2
        T1=T2
        T2=NT
        IF(T2.LE.10000)THEN 
            PRINT*,T2
            GOTO 10
        END IF
    STOP
END PROGRAM