FUNCTION ADD(M,N)
    ADD=0.0
    NN=N-1
    DO I=0,NN
        ADD=ADD+(M+I)
    END DO 
RETURN
END

INTEGER A,B
READ*,A,B
RESULT=ADD(A,B)
PRINT*,"SUM IS:",RESULT
STOP
END