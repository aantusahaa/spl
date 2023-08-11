PROGRAM EQUATION_2020_6_a
    
    X=-3.0
    WRITE(*,20)
20  FORMAT(2X,'VALUE OF X',5X,'VALUE OF Y')

10      Y=X**2-X-6.0
        X=X+0.1
        WRITE(*,30)X,Y
        30  FORMAT(2(F10.2,5X))
        IF(X.LE.2.0) GOTO 10
    
END PROGRAM

