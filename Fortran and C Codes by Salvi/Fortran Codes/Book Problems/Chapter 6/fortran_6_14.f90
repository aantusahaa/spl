FUNCTION Y(X)
    Y=2.0*X**4-5.0*X**3+6.0*X**2-8.0*X+9
RETURN
END FUNCTION

PROGRAM MAIN 
    DO  I=1,21
        X=I-11
        F=Y(X)
        WRITE(*,20)X,F
        20 FORMAT(2F12.2) 
    END DO
END PROGRAM
