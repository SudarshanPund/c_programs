//Implementation of algorithms for determination of various entropies and mutual
//information of a given channel
#include<conio.h>
#include<stdio.h>
#include<math.h>

float a[50][50];
float p[10];
void ser();
void channel();
void NFC() ;
void IIOC() ;
void BSC();
void BC();
void main()
{
    int ch;
    while(1)
    {
    printf("\n 1. Calculation of source and receiver entropy") ;
    printf("\n 2. Selection of type of channel");
    printf("\n 3. Exit");
    printf("\n Enter your choice");
    scanf("%d",&ch) ;
    switch(ch)
        {
            case 1:ser();
                    break;
            case 2:channel();
                    break;
           
        }
    }
}

//Definition of ser
void ser()
{
int i, M;
float c, I, sum, h, H, j;
printf("\n Enter the number of symbols:") ;
scanf("%d",&M) ;
sum=0;
while(sum!=1)
{
    for(i=0;i<M;i++)
      {
        printf("\n Enter the probability of the symbol:");
        scanf ("%f",&c);
        if(c>0 && c<1)
        {
            p[i]=c;
        }
        else
        {
            printf("\n Re-enter the probability:");
            i--; //To maintain same position in case wrong probability is entered
        }
        I=log(1/p[i])/log(2);
        printf("\n Amount of information of the symbol is:xd=xf", 1, I);
      }
    for (i=0;i<M;i++)
    {
        printf("\n\n The probability of each symbol is:%d=%f",i,p[i]);
    }
    sum=0;//Calculate the sum of probabilities
    for (i=0; i<M; i++)
    {
        sum=sum+p[i];
    }
        printf("\n\n The sum of probabilities is:%f",sum);
        if(sum==1)
        break;
}
//Calculation of Entropy
H=0;
    for (i=0; i<M; i++)
    {
        h=p[i]* (log(1/p[i])/log(2));
        H=H+h;
    }
printf("\n The entropy is:%f", H);
//Calculation of total amount of information
I=0;
    for (i=0;i<M;i++)
   {
    j=log(1/p[i])/log(2);
    I=I+j;
   }

printf("\n The total amount of information is:%f",I);
}
//Definition of channel
void channel()
{
int ch;
    while(1)
    {
        printf("\\n These are the options to select type of channel");
        printf("\n 1. Noise free channel") ;
        printf("\n 2. Independent input-independent output channel") ;
        printf("\n 3. Binary symmetric channel") ;
        printf("\n 4. Binary channel");
        printf("\n 5. Exit");
        printf("\n Enter your choice");
        scanf ("%d",&ch);
switch (ch)
        {
            case 1:NFC();
                    break;
            case 2:IIOC();
                    break;
            case 3:BSC();
                    break;
            case 4:BC();
                    break;
        

        }
    }
}

void NFC()
{
    int M,i,j,r;
    float h,H,R,C;
    printf("\n Enter the number of symbols");
    scanf("%d",&M) ;
    printf("\n Enter the probability matrix P(x,y) :") ;
    for(i=0; i<M; i++)
    {
        for(j=0;j<M;j++)
        {
            if(i==j)
            {
                scanf("%f",&a[i][j]);
            }
        }
    }

printf("\n The matrix P(x,y)is:");
for(i=0;i<M;i++)
    {
        printf("\n");
        for(j=0;j<M;j++)
        {
            printf("\t %f",a[i][j]);
        }
    }
//////////////////////////////////////////////////////////////////////////
//calculation of P(x) and P(y)
printf("\n The probability array P(X) is:");
for(i=0; i<M; i++)
    {
        for (j=0; j <M; j++)
        {
            if(i==j)
            {
                printf("\t %f",a[i][j]);
            }
        }
    }
    printf("\n The probability array P(Y) is:");
    for(i=0;i<M;i++)
    {
        for (j=0;j<M;j++)
        {
            if(i==j)
            {
                printf("\n %f",a[i][j]);
            }
        }
    }

//Calulation of Entropies
H=0;
    for(i=0;i<M;i++)
    {
        for (j=0;j<M;j++)
        {
            if(i==j)
            {
                h=(a[i][j])*(log(1/a[i][j])/log(2));
                H=h+H;
            }
        }
    }

printf("\n\n The joint Entropy H(X,Y) is:%f",H);
printf("\n The Entropy H(X)=H(Y)=H(X,Y) is:%f",H);
printf("\n The Dependent Entropy H(Y/X)=H(X/Y) is:%f",H-H) ;
printf("\\n The Mutual Information I(X, Y)=H(X, Y)=H(X)=H(Y) is:%f",H);
//Calculation of Channel capacity and information Rate
C=log(M)/log(2);
printf("\\n The channel capacity C=max [I(X, Y)] is:%f",C);
printf("\n Enter the number of symbols per second");
scanf("%d",&r);
R=r*H;
printf("\n The information rate R is:%f",R);
}//////////////////////////////////////////////////////////////////////////////
//Definition of IIOC
void IIOC()
{
int M,i,j,r;
float Y[10],x[10];
float h,H,G,F,R;
    printf("\n Enter the number of symbols");
    scanf ("%d",&M);
    printf("\n Enter the probability matrix P(x,y):");
    for (i=0;i<M;i++)
    {
        for (j=0;j<M;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
printf("\n The matrix P(x,y) is:");
    for(i=0;i<M;i++)
    {
        printf("\n");
            for(j=0;j<M;j++)
            {
                printf("\t %f",a[i][j]);
            }
    }
//Calculation of Probability Matrix P(X)
    for(i=0;i<M;++i)
    {
        x[i]=0;
        for(j=0;j<M;++j)
        {
            x[i]=x[i]+a[i][j];
        }
    }
printf("\n The probability matrix P(X) is:");
    for(i=0;i<M;i++)
    {
        printf("\t %f",x[i]);
    }

//Calculation of Probabilty matrix P(Y)
    for(j=0;j<M;j++)
    {
        Y[j]=0;
        for(i=0;i<M;i++)
        {
            Y[j]=Y[j]+a[i][j];
        }
    }

printf("\n The probability matrix P(Y) is:");
    for(j=0;j<M;j++)
    {
        printf("\n %f",Y[j]);
    }
//Calculation of Entropies
H=0;
    for(i=0;i<M;i++)
    {
        for (j=0;j<M;j++)
        {
            h=(a[i][j])*(log(1/a[i][j])/log(2));
            H=h+H;
        }
    }
printf("\n The joint Entropy H(X,Y) is:%f",H);
//Calculation of H(X)
G=0;
    for(i=0;i<M;i++)
    {
        h=x[i]*(log(1/x[i])/log(2));
        G=h+G;
    }
printf("\n The Individual Entropy H(X) is:%f",G);
printf("\n The dependent Entropy H(X/Y)=H(X) is:%f",G);
//Calculation of H(Y)

F=0;
    for(j=0;j<M;j++)
    {
        h=Y[j]*(log(1/Y[j])/log(2));
        F=h+F;
    }
printf("\n The Individual Entropy H(Y) is:%f",F);
printf("\n The dependent Entropy H(Y/X)=H(Y) is:%f",F);
//Calculation of Mutual Information I(X,Y)
printf("\\n The Mutual Information I(X,Y) is:%f",G-G);
//Calculation of Channel capacity and information Rate
printf("\\n The channel capacity C=max[I(X, Y)] is:%f",G-G);
printf("\n Enter the number of symbols per second") ;
scanf("%d",&r) ;
R=r*H;
printf("\n The information rate R is:%f",R);
}
//Definition of BSC
void BSC()
{
int M,i,j,r;
float Y[10],x[10];
float h,H,G,F,R,C;
    printf("\n Enter the number of symbols");
    scanf("%d",&M);
    printf("\n Enter the probability matrix P(x,y):");
    for(i=0;i<M;i++)
    {
        for (j=0;j<M;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
printf("\n The matrix P(x,y) is:");
    for(i=0;i<M;i++)
    {
        printf("\n");
            for(j=0;j<M;j++)
            {
                printf("\t %f",a[i][j]);
            }
    }
//Calculation of Probability Matrix P(X)
for(i=0;i<M;++i)
{
    x[i]=0;
    for(j=0;j<M;++j)
    {
        x[i]=x[i]+a[i][j];
    }
}

printf("\n The probability matrix P(X) is:");
    for (i=0;i<M;i++)
    {
        printf("\t %f",x[i]);
    }

//Calculation of Probabilty Matrix P(Y)
    for(j=0;j<M;j++)
    {
        Y[j]=0;
        for(i=0;i<M;i++)
        {
            Y[j]=Y[j]+a[1][j];
        }
    }

printf("\n The probability matrix P(Y) is;");
    for (j=0;j<M;j++)
    {
        printf("\n %f",Y[j]);
    }
//Calculation of Entropies
H=0;
    for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
        {
            h=(a[i][j])*(log(1/a[i][j])/log(2));
            H=h+H;
        }
    }

printf("\n\n The joint Entropy H(X,Y) is:%f",H);
//Calculation of H(X)
G=0;
    for(i=0;i<M;i++)
    {
        h=x[i]*(log(1/x[i])/log(2));
        G=h+G;
    }
printf("\n The Individual Entropy H(X) is:%f",G);
//Calculation of H(Y)
F=0;
    for(j=0;j<M;j++)
    {
        h=Y[j]*(log(1/Y[j])/log(2));
        F=h+F;
    }

printf("\n The Individual Entropy H(Y) is:%f",F);
printf("\n The dependent Entropy H(Y/X)=H(X,Y)-H(X) is :%f",H-G);
printf("\n The dependent Entropy H(X/Y)=H(X,Y)-H(Y) is:%f",H-F);
//Calculation of Channel capacity and information rate
C=1-((a[0][0]*(log(1/a[0][0])/log(2)))+(a[0][1]*(log(1/a[0][1])/log(2))));
printf("\\n The channel capacity C=max[I(X,Y)] is:%f",C);
printf("\n Enter the number of symbols per second");
scanf("%d",&r);
R=r*H;
printf("\n The information rate R is:%f",R);
}
//Definition of BC
void BC()
{
    int M,i,j,r;
    float Y[10],X[10];
    float h,H,G,F,R,C;
    printf("\n Enter the number of symbols");
    scanf("%d",&M);
    printf("\n Enter the probability matrix P(x,y):");
    for(i=0;i<M;i++)
        {
            for(j=0;j<M;j++)
                {
                scanf("%f",&a[i][j]);
                }
        }
    printf("\n The matrix P(x,y) is:");
    for(i=0;i<M;i++)
        {
            printf("\n");
            for(j=0;j<M;j++)
                {
                    printf("\t %f",a[i][j]);
                }
        }
//Calculation of Probability Matrix P(X)
for(i=0;i<M;++i)
{
X[i]=0;
for(j=0;j<M;++j)
{
X[i]=X[i]+a[i][j];
}
}
printf("\n The probability matrix P(X) is:");
for(i=0;i<M;i++)
{
printf("\t %f",X[i]);
}
//Calculation of Probabilty Matrix P(Y)
for(j=0;j<M;j++)
{
Y[j]=0;
for(i=0;i<M;i++)
{
Y[j]=Y[j]+a[i][j];
}
}
printf("\n The probability matrix P(Y) is:");
for(j=0;j<M;j++)
    {
        printf("\n %f",Y[j]);
    }
//Calculation of Entropies
H=0;
for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
    {
h=(a[i][j])*(log(1/a[i][j])/log(2));
H=h+H;
}
}
printf("\n\n The joint Entropy H(X,Y) is:%f",H);
//Calculation of H(X)
G=0;
for(i=0;i<M;i++)
    {
        h=X[i]*(log(1/X[i])/log(2));
        G=h+G;
    }
printf("\n The Individual Entropy H(X) is:%f",G);
//Calculation of H(Y)
F=0;
    for(j=0;j<M;j++)
        {
            h=Y[j]*(log(1/Y[j])/log(2));
            F=h+F;
        }
printf("\n The Individual Entropy H(Y) is:%f",F);
printf("\n The dependent Entropy H(Y/X)=H(X,Y)-H(X) is:%f",H-G);
printf("\n The dependent Entropy H(X/Y)=H(X,Y)-H(Y) is:%f",H-F);
//Calculation of Mutual Information I(X,Y)
printf("\n\n The mutual information I(X,Y)is:%f",G-(H-F));
//Calculation of Channel Capacity and Information Rate
printf("\n Enter the number of symbols per second:");
scanf("%d",&r);
R=r*H;
printf("\n The information rate R is:%f",R);
getch();
}








