PROGRAM POINT_NUMBERS
    INTEGER X, Y
    K = 0
    X = -7

10  Y = -5
20  IF ((2*X**2+3*Y**2) .LT.100)K = K + 1
    IF(Y.LE.5) THEN
        Y = Y + 1
        GOTO 20
    ELSE IF(X.LE.7) THEN
        X = X + 1
        GOTO 10
    END IF

    PRINT *, "NUMBER OF INTEGER POINTS INSIDE THE ELLIPSE IS:", K
    STOP
END PROGRAM
