PRINT*,"PUT NUMBERS:"
READ*,J
ISML=J
DO I=2,3
    READ*,N
    IF(N.LT.ISML)ISML=N
END DO
PRINT*,"SMALLEST BETWEEN 3 NUMBERS IS:",ISML 
STOP 
END