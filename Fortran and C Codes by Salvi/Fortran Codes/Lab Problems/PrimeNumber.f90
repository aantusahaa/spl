PROGRAM Fortran_Prime_Detector
INTEGER COUNT
PRINT*,"CHECK IF PRIME OR NOT:"
READ*,N
COUNT=0
I=1
100     IF(MOD(N,I).EQ.0)COUNT=COUNT+1
        I=I+1
        IF(I.LE.N) GOTO 100

IF(COUNT.EQ.2)PRINT*,"PRIME NUMBER"
IF(COUNT.NE.2)PRINT*,"NOT PRIME"

STOP
END PROGRAM

