INTEGER T1,T2
ICOUNT=0
T1=1
T2=1
PRINT*,T1,T2

DO I=3,30
    NT=T1+T2
    T1=T2
    T2=NT
    WRITE(*,'(I8)',ADVANCE='NO')T2
    ICOUNT=ICOUNT+1
    IF(MOD(ICOUNT,3).EQ.0)WRITE(*,*)
END DO
STOP
END