PROGRAM EQUATION_2020_6_a
    PRINT*,'     X  ','       Y'
    DO 10   I=1,51
            X=-3+(I-1)*0.1
            Y=X**2-X-6
            WRITE(*,20)X,Y
            20 FORMAT(2(F8.2,3X))
    10 CONTINUE
    STOP
    END PROGRAM

