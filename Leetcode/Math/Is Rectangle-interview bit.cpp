/**
 * @input A : Integer
 * @input B : Integer
 * @input C : Integer
 * @input D : Integer
 * 
 * @Output Integer
 */
int solve(int A, int B, int C, int D) {
    if(A==B && C==D)
        {
            return 1;
        }
    
    else if(A==C && B==D)
        {
            return 1;
        }
    
    else if(A==D && B==C)
        {
            return 1;
        }
    
    else
        {
            return 0;
        }
}



/*

int solve(int A, int B, int C, int D) {
    if((A==B && C==D) || (A==C && B==D) || (A==D && B==C))
        {
            return 1;
        }
    
    else
        {
            return 0;
        }
}

*/



/*

int solve(int A, int B, int C, int D) {
    return (A==B && C==D) || (A==C && B==D) || (A==D && B==C)?1 : 0;
}

*/
