PRINT*,"PUT I,J,N"
READ*,I,J,N
D=1.0/N
X=I
10  Y=I
20  Z=X**2+Y**2
    WRITE(*,30)X,Y,Z
    30 FORMAT(2(F6.2),2X,F12.2)
    Y=Y+D
    IF(Y.LE.FLOAT(J))GOTO 20
    X=X+D 
    IF(X.LE.FLOAT(J))GOTO 10

    STOP
    END
