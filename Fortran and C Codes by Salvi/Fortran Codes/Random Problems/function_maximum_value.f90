PROGRAM VALUE_OF_Z
    REAL MAX_Z
    PRINT *, '     X      ','Y      ',' Z'
    MAX_Z = -1.0E10
    X = -3.0
10  Y = -3.0
20  Z = X**2 - 2.0*X*Y + 3.0*Y**2 - 8.0*X + 3.0*Y - 8.0
    IF(Z.GT.MAX_Z)MAX_Z=Z
    WRITE(*, 30) X, Y, Z
    30 FORMAT(1X,F6.2,2X,F6.2,3X,F6.2)
    IF (Y .LE. 3.0) THEN
        Y = Y + 0.2
        GOTO 20
    ELSE IF (X .LE. 3.0) THEN
        X = X + 0.2
        GOTO 10
    END IF

PRINT*,'THE MAXIMUM VALUE OF Z IS:',MAX_Z
STOP
END PROGRAM
