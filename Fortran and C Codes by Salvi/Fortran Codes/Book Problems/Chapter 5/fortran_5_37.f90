PROGRAM FUNCTIONAL_VALUES
    WRITE(*,20)
    20  FORMAT(6X,'X',9X,'Y',10X,'Z'/)
    DO  I=1,31
        X=-3.0+((I-1.0)*0.2)
        DO  J=1,31
            Y=-3.0+((J-1.0)*0.2)
            Z=X**2-2.0*X*Y+3.0*Y**2-8.0*X+3.0*Y-8.0
            WRITE(*,30)X,Y,Z
            30  FORMAT(3(F8.2,3X))
        END DO
    END DO
STOP
END PROGRAM
