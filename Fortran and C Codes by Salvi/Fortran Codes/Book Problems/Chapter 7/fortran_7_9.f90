FUNCTION ISUM(X,N,IN,IT,IC)
    INTEGER X
    DIMENSION X(N)
    ISUM=0
    DO I=IN,IT,IC
        ISUM=ISUM+X(I)
    END DO
    RETURN
    END

!MAIN FUNCTION
    INTEGER A,B,C,D
    DIMENSION A(100),B(50),C(75),D(200)
    T1=ISUM(A,100,15,77,2)
    T2=ISUM(B,50,22,36,1)
    T3=ISUM(C,75,2,L,3)
    T4=ISUM(D,200,L,K,1)
    PRINT*,T1,T2,T3,T4
    STOP
    END

    