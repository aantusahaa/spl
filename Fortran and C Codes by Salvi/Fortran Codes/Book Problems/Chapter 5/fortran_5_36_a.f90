DO I=1,101
    X=-5+(I-1)*0.1
    Y=X**2-4.0*X+6
    WRITE(*,20)X,Y
    20 FORMAT(2(F8.2))
END DO
STOP
END