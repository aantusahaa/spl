INTEGER A,T
DIMENSION A(50)
PRINT*,"HOW MANY NUMBERS TO SORT?"
READ*,N
PRINT*,"ENTER NUMBERS TO SORT"
READ(*,*)(A(I),I=1,N)
NN=N-1

DO  I=1,NN
    JJ=N-I
    DO  L=1,JJ
        IF(A(L).GT.A(L+1))THEN
            T=A(L)
            A(L)=A(L+1)
            A(L+1)=T
        END IF
    END DO
END DO

PRINT*,"SORTED ARRAY:"
WRITE(*,*)(A(I),I=1,N)
STOP
END