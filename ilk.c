#include <stdio.h>
#include <string.h>
void main(){
	float a,b,c,ort;
	
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	ort=(a+b+c)/3;
		printf("ortalam %3.1f\n",ort);
	
	return 5;
}








/*#include <stdio.h>
int main(){
	int a,b,toplam,fark,carpim;
	float bolum;
	
	scanf("%d",&a);
	scanf("%d",&b);
		bolum= (float)a/b;
		printf("bolme %3.1f\n",bolum);
		
		printf("carpma %d\n",a*b);
		printf("arti %d\n",a+b);
	
		printf("eksi %d\n ",a-b);
	
	
	
	
		return 0;
	}

*/







/*#include <stdio.h>
#include <string.h>
int main(){
	float a,b,toplam,fark,carpim,bolum;
	
	scanf("%f",&a);
	scanf("%f",&b);
	
		printf("bolme %3.1f\n",a/b);
		
		printf("carpma %3.1f\n",a*b);
		printf("arti %3.1f\n",a+b);
	
		printf("eksi %3.1f\n ",a-b);
	
	
	
	
		return 0;	
	
}
*/
/*
#include <stdio.h>
#include <string.h>
int main(){
	int a,b;
	char o;
	
	scanf("%d",&a);
	scanf("%d",&b);
	printf("char gir");
	scanf(" %c",&o);
	if(o=='/'){
		printf("bolme %d ",a/b);
	}
	else if(o=='*'){
		printf("carpma %d ",a*b);
	}
	else if(o=='+'){
		printf("arti %d ",a+b);
	}
	else if(o=='-'){
		printf("eksi %d ",a-b);
	}
	else {
		printf("hicbirsey girmedn tevekel");
	}
	
	
		return 0;	
	
}
*/


/*#include <stdio.h>
int main(){
	int t1=-1;
	int t2=1;
	int i;
	int j;
	for(i=-5;i<=5;i=i+6){
		t1=t1+2*i;
		for(j=5;j<=1;j=j-3){
			t1=t1-2*j;
			t2=t2-j;
		}
		t2=t2+i;
	}
	printf("%d\n",t1);
	printf("%d",t2);
	
	
		return 0;	
	
}
*/
/*
//konum_gostergeci.c - 06.03.2014 - Okan BILKE -www.elektroarge.com
  
#include <stdio.h>

int main()
{
    FILE *ptDosya;
    char satir[200];
    float say_veri;
    
    // dosyayi aç:
    if((ptDosya = fopen("C:\\konum_gostergeci_ornek.txt", "r")) == NULL) 
    {
    	printf("dosya acilamadi!");
    	return 0;
    }
    
    // konum gostergecinin ilk yeri:
    printf("konum gostergecinin yeri: %d\n\n", ftell(ptDosya));
    
    // bir karakter oku:
    printf("bir karakter okunuyor...\n");
    fgetc(ptDosya);
    
    // konum göstergecinin simdiki yeri:
    printf("konum gostergecinin yeri: %d\n\n", ftell(ptDosya));
    
    // konum göstergecini ikinci satirin basina gönder:
    printf("konumu ikinci satirin basina gotur:\n");
    fseek(ptDosya, 40, SEEK_SET);
    
    // konum göstergecinin simdiki yeri:
    printf("konum gostergecinin yeri: %d\n\n", ftell(ptDosya));
    
    printf("bu satiri oku ve ekrana yazdir:\n");
    fgets(satir, 200, ptDosya);
    printf("%s", satir);
    
    // konum göstergecinin simdiki yeri:
    printf("konum gostergecinin yeri: %d\n\n", ftell(ptDosya));
    
    // konum göstergecini dosya basina götür:
    printf("konum gostericisi dosya basina gidiyor...\n");
    rewind(ptDosya);
    printf("konum gostergecinin yeri: %d\n", ftell(ptDosya));
    
    fclose(ptDosya);
    return 0;
}
//bu dosya elektroarge.com'dan indirilmistir.
*/

/*
// Program to calculate the sum and average of maximum of 5 numbers
// If user enters negative number, the sum and average of previously entered positive number is displayed
// https://www.programiz.com/c-programming/c-goto-statement <<<< Link >>>>
# include <stdio.h>

int main()
{

    const int maxInput = 5;
    int i;
    double number, average, sum=0.0;
    
    for(i=1; i<=maxInput; ++i)
    {
        printf("%d. Enter a number: ", i);
        scanf("%lf",&number);

    // If user enters negative number, flow of program moves to label jump
        if(number < 0.0)
            goto jump;

        sum += number; // sum = sum+number;
    }

    jump:

    average=sum/(i-1);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f", average);

    return 0;
}
*/

/*
// Fig. 8.19: fig08_19.c
//Using strcat and strncat 
 #include <stdio.h>
 #include <string.h>

 int main( void )
 {
 char s1[ 20 ] = "Happy "; // initialize char array s1 
 char s2[] = "New Year "; // initialize char array s2 
 char s3[ 40 ] = ""; // initialize char array s3 to empty 

 printf( "s1 = %s\ns2 = %s\n", s1, s2 );

 // concatenate s2 to s1 
 printf( "strcat( s1, s2 ) = %s\n", strcat( s1, s2 ));
// concatenate first 6 characters of s1 to s3. Place '\0' after last character 
printf( "strncat( s3, s1, 6 ) = %s\n", strncat( s3, s1, 6 ) );
// concatenate s1 to s3 
 printf( "strcat( s3, s1 ) = %s\n",strcat( s3, s1 ) );
 return 0; // indicates successful termination 
 } // end main 
*/

/*
// Fig. 8.18: fig08_18.c
// Using strcpy and strncpy 
 #include <stdio.h>
 #include <string.h>

 int main( void )
 {
 char x[] = "Happy Birthday to You"; // initialize char array x 
 char y[ 25 ]; // create char array y 
 char z[ 15 ]; // create char array z 

 // copy contents of x into y 
 printf( "%s%s\n%s%s\n",
 "The string in array x is: ", x,
 "The string in array y is: ", strcpy( y, x ) );
// copy first 14 characters of x into z. Does not copy null character 
strncpy( z, x, 14 );

z[ 14 ] = '\0'; // terminate string in z 
printf( "The string in array z is: %s\n", z );
 return 0; // indicates successful termination 
 } // end main 
*/

/*
// Fig. 8.16: fig08_16.c
// Using sscanf
 #include <stdio.h>

 int main( void )
 {
 char s[] = "31298 87.375"; // initialize array s 
 int x; // x value to be input 
 double y; // y value to be input 
sscanf( s, "%d%lf", &x, &y );
printf( "%s\n%s%6d\n%s%8.3f\n","The values stored in character array s are:","integer:", x, "double:", y );
return 0; // indicates successful termination 
 } // end main 
*/

/*
// Fig. 8.15: fig08_15.c
//Using sprintf 
 #include <stdio.h>

 int main( void )
 {
 char s[ 80 ]; // create char array 
 int x; // x value to be input 
 double y; // y value to be input 

 printf( "Enter an integer and a double:\n" );
 scanf( "%d%lf", &x, &y );

sprintf( s, "integer:%6d\ndouble:%8.2f", x, y );
printf( "%s\n%s\n",
 "The formatted output stored in array s is:", s );
 return 0; 
}
*/

/*
// ex07_19.c 
 // What does this program do? 
 #include <stdio.h>

 void mystery1( char *s1, const char *s2 ); // prototype 

 int main( void )
 {
 char string1[ 80 ]; // create char array
 char string2[ 80 ]; // create char array 

 printf( "Enter two strings: " );
 scanf( "%s%s" , string1, string2 );
 mystery1( string1, string2 );
 printf("%s", string1 );
 return 0; // indicates successful termination 
 } // end main 

 // What does this function do? 
 void mystery1( char *s1, const char *s2 )
 {
 while ( *s1 != '\0' ) {
 s1++;
 } // end while 

 for ( ; *s1 = *s2; s1++, s2++ ) {
 ; // empty statement 
 } // end for 
 } // end function mystery1 
*/

/*
//Fig. 7.28: fig07_28.c
//Demonstrating an array of pointers to functions 
 #include <stdio.h>

 // prototypes 
void function1( int a );
void function2( int b );
void function3( int c );
int main( void )
 {
// initialize array of 3 pointers to functions that each take an int argument and return void 
void (*f[ 3 ])( int ) = { function1, function2, function3 }; 
int choice; // variable to hold user's choice 

 printf( "Enter a number between 0 and 2, 3 to end: " );
 scanf( "%d", &choice );

 // process user's choice 
 while ( choice >= 0 && choice < 3 ) {
// invoke function at location choice in array f and pass choice as an argument 
(*f[ choice ])( choice );
printf( "Enter a number between 0 and 2, 3 to end: ");
 scanf( "%d", &choice );
 } // end while 

 printf( "Program execution completed.\n" );
 return 0; // indicates successful termination 
 } // end main 
void function1( int a )
{
 printf( "You entered %d so function1 was called\n\n", a );
 } // end function1 
void function2( int b )
{
 printf( "You entered %d so function2 was called\n\n", b );
 } // end function2 
void function3( int c )
{
 printf( "You entered %d so function3 was called\n\n", c );
 } // end  function3 
*/

/*
//http://index-of.es/C++/C%20How%20to%20Program.pdf 311.ci sayfada
// Fig. 7.21: fig07_21.c
//Copying a string using array notation and pointer notation. 
 #include <stdio.h>

 void copy1( char * const s1, const char * const s2 ); // prototype 
  void copy2( char *s1, const char *s2 ); // prototype 

 int main( void )
 {
 char string1[ 10 ]; // create array string1 
 char *string2 = "Hello"; // create a pointer to a string 
 char string3[ 10 ]; // create array string3 
 char *string4= "Good Bye"; // create a pointer to a string 

 copy1( string1, string2 );
 printf( "string1 = %s\n", string1 );

 copy2( string3, string4 );
 printf( "string3 = %s\n", string3 );
 return 0; // indicates successful termination 
 } // end main 
// copy s2 to s1 using array notation 
void copy1( char * const s1, const char * const s2 )
 {
int i; // counter 
// loop through strings 
for ( i = 0; ( s1[ i ] = s2[ i ] ) != '\0'; i++ ) {
 ; // do nothing in body 
} // end for
} // end function copy1 
// copy s2 to s1 using pointer notation 
void copy2( char *s1, const char *s2 )
 {
 // loop through strings 
for ( ; ( *s1 = *s2 ) != '\0'; s1++, s2++ ) {
 ; // do nothing in body 
} // end for 
} // end function copy2 
*/

/*
// Fig. 7.20: fig07_20.cpp
// Using subscripting and pointer notations with arrays 
//http://index-of.es/C++/C%20How%20to%20Program.pdf 310.ci sayfa
 #include <stdio.h>

 int main( void )
 {
 int b[] = { 10, 20, 30, 40 }; // initialize array b 
 int *bPtr = b; // set bPtr to point to array b 
 int i; // counter 
 int offset; // counter 

 // output array b using array subscript notation 
 printf( "Array b printed with:\nArray subscript notation\n" );

 // loop through array b 
 for ( i = 0; i < 4; i++ ) {
 printf( "b[ %d ] = %d\n", i, b[ i ]);
 } // end for 

 // output array b using array name and pointer/offset notation 
 printf( "\nPointer/offset notation where\n"
 "the pointer is the array name\n" );

 // loop through array b 
 for ( offset = 0; offset < 4; offset++ ) {
 printf( "*( b + %d ) = %d\n", offset, *( b + offset) );
 } // end for 

 // output array b using bPtr and array subscript notation 
 printf( "\nPointer subscript notation\n" );

 // loop through array b 
 for ( i = 0; i < 4; i++ ) {
 printf( "bPtr[ %d ] = %d\n", i, bPtr[ i ]);
 } // end for 

 // output array b using bPtr and pointer/offset notation 
 printf( "\nPointer/offset notation\n" );

 // loop through array b 
 for ( offset = 0; offset < 4; offset++ ) {
 printf( "*( bPtr + %d ) = %d\n", offset, *( bPtr + offset) );
 } // end for 

 return 0; // indicates successful termination 
 } // end main 
*/

/*
// Fig. 7.17: fig07_17.c
//Demonstrating the sizeof operator 
 #include <stdio.h>

 int main( void )
 {
 char c;
 short s;
 int i;
 long l;
 float f;
 double d;
 long double ld;
 int array[ 20 ]; // create array of 20 int elements 
 int *ptr = array; // create pointer to array 

 printf( " sizeof c = %d\tsizeof(char) = %d"
 "\n sizeof s = %d\tsizeof(short) = %d"
 "\n sizeof i = %d\tsizeof(int) = %d"
 "\n sizeof l = %d\tsizeof(long) = %d"
 "\n sizeof f = %d\tsizeof(float) = %d"
 "\n sizeof d = %d\tsizeof(double) = %d"
 "\n sizeof ld = %d\tsizeof(long double) = %d"
 "\n sizeof array = %d"
 "\n sizeof ptr = %d\n",
 sizeof c, sizeof( char ), sizeof s, sizeof( short ), sizeof i,
sizeof( int ), sizeof l, sizeof( long ), sizeof f,
sizeof( float ), sizeof d, sizeof( double ), sizeof ld,
sizeof( long double ), sizeof array, sizeof ptr[0] ); 


 return 0; // indicates successful termination 
 } // end main 
 
 */
 
/*
 // Fig. 7.16: fig07_16.c
 // Applying sizeof to an array name returns
 // the number of bytes in the array. 

#include <stdio.h>

size_t getSize(float *ptr ); // prototype 

int main( void )
{
	float array[ 20 ]; // create array 
 	float *y=array;
 	printf( "The number of bytes in the array is %d"
 	"\nThe number of bytes returned by getSize is %d\n",
	 sizeof( array ), getSize( y ) ); 

 return 0; // indicates successful termination 
} // end main 

size_t getSize(float *ptr){
	return sizeof( ptr[0] );
} // end function getSize 
*/

/*
//http://index-of.es/C++/C%20How%20to%20Program.pdf 
//Ornekler C-HOW TO PROGRAM --DEITEL
// Fig. 6.22: fig06_22.c
// 2 Double-subscripted array example 
 #include <stdio.h>
 #define STUDENTS 3
 #define EXAMS 4

 // function prototypes 
 int minimum( const int grades[][ EXAMS ], int pupils, int tests );
 int maximum( const int grades[][ EXAMS ], int pupils, int tests );
 double average( const int setOfGrades[], int tests );
 void printArray( const int grades[][ EXAMS ], int pupils, int tests );

// function main begins program execution 
 int main( void ){
 int student; // student counter 


 // initialize student grades for three students (rows) 
 const int studentGrades[ STUDENTS ][ EXAMS ] ={ { 77, 68, 86, 73 },{ 96, 87, 89, 78 },{ 70, 90, 86, 81 } };
 //{ { 77, 68, 86, 73 },
 //	 { 96, 87, 89, 78 },
 //  { 70, 90, 86, 81 } };


 // output array studentGrades 
 printf( "The array is:\n" );
 printArray( studentGrades, STUDENTS, EXAMS );


 // determine smallest and largest grade values 
 printf( "\n\nLowest grade: %d\nHighest grade: %d\n",minimum( studentGrades, STUDENTS, EXAMS ),maximum( studentGrades, STUDENTS, EXAMS ) );


 // calculate average grade for each student 
 for ( student = 0; student < STUDENTS; student++ ) {
 	printf( "The average grade for student %d is %.2f\n",student, average( studentGrades[ student ], EXAMS ) );
 	} // end for 

 return 0; // indicates successful termination 
 } // end main 



// ************************************************************
 // Find the minimum grade 
 int minimum( const int grades[][ EXAMS ], int pupils, int tests )
 {
 int i; // student counter 
 int j; // exam counter 
 int lowGrade = 100; // initialize to highest possible grade 

 // loop through rows of grades 
 for ( i = 0; i < pupils; i++ ) {

 // loop through columns of grades 
 for ( j = 0; j < tests; j++ ) {

 if ( grades[ i ][ j ] < lowGrade ) {
 lowGrade = grades[ i ][ j ];
 } // end if 
 } // end inner for 
 } // end outer for 

 return lowGrade; // return minimum grade 
 } // end function minimum 



// ************************************************************
// Find the maximum grade 
 int maximum( const int grades[][ EXAMS ], int pupils, int tests )
 {
 int i; // student counter 
 int j; // exam counter 
 int highGrade = 0; // initialize to lowest possible grade 

 // loop through rows of grades 
 for ( i = 0; i < pupils; i++ ) {

 // loop through columns of grades 
 for ( j = 0; j < tests; j++ ) {

 if ( grades[ i ][ j ] > highGrade ) {
 highGrade = grades[ i ][ j ];
 		} // end if 
 	} // end inner for 
} // end outer for 

 return highGrade; // return maximum grade 
 } // end function maximum 



// ************************************************************
// Determine the average grade for a particular student
double average( const int setOfGrades[], int tests )
{
 int i; // exam counter 
 int total = 0; // sum of test grades 

 // total all grades for one student 
 
 for ( i = 0; i < tests; i++ ) {
 total += setOfGrades[ i ];
 } // end for 

 return ( double ) total / tests; // average 
} // end function average 



// ************************************************************
// Print the array 
 void printArray( const int grades[][ EXAMS ], int pupils, int tests )
 {
 int i; // student counter 
 int j; // exam counter 

 // output column heads 
 printf( " 		 [0]  [1]  [2]  [3]" );

 // output grades in tabular format 
 for ( i = 0; i < pupils; i++ ) {

 // output label for row 
 printf( "\nstudentGrades[%d] ", i );

// output grades for one student 
 for ( j = 0; j < tests; j++ ) {
 printf( "%-5d", grades[ i ][ j ] );
 	} // end inner for 
 } // end outer for 
} // end function printArray 
*/

/*
 // C Program to find the First Capital Letter in a String without using Recursion
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
char caps_check(char *);
 
int main()
{
    char string[20], letter;
 
    printf("Enter a string to find it's first capital letter: ");
    scanf("%s", string);
    letter = caps_check(string);
    if (letter == 0)
    {
        printf("No capital letter is present in %s.\n", string);
    }
    else
    {
        printf("The first capital letter in %s is %c.\n", string, letter);    }
        return 0;
    }
    char caps_check(char *string)
    {
        int i = 0;
        while (string[i] != '\0')
        {
            if (isupper(string[i]))
            {
                return string[i];
            }
            i++;
        }
        return 0;
    }
*/

/*
 // C Program to Reverse a Stack without using Recursion
 // https://www.sanfoundry.com/c-program-reverse-stack-without-recursion/ <<<< Link >>>>
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *next;
};
 
void generate(struct node **);
void display(struct node *);
void stack_reverse(struct node **);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
 
    generate(&head);
    printf("\nThe sequence of contents in stack\n");
    display(head);
    printf("\nInversing the contents of the stack\n");
    stack_reverse(&head);
    printf("\nThe contents in stack after reversal\n");
    display(head);
    delete(&head);
    return 0;
}
 
void stack_reverse(struct node **head)
{
    struct node *temp, *prev;
 
    if (*head == NULL)
    {
        printf("Stack does not exist\n");
    }
    else if ((*head)->next == NULL)
    {
        printf("Single node stack reversal brings no difference\n");
    }
    else if ((*head)->next->next == NULL)
    {
        (*head)->next->next = *head;
        *head = (*head)->next;
        (*head)->next->next = NULL;
    }+
    else
    {
        prev = *head;
        temp = (*head)->next;
        *head = (*head)->next->next;
        prev->next = NULL;
        while ((*head)->next != NULL)
        {
            temp->next = prev;
            prev = temp;
            temp = *head;
            *head = (*head)->next;
        }
        temp->next = prev;
        (*head)->next = temp;
    }
}
 
void display(struct node *head)
{
    if (head != NULL)
    {
        printf("%d  ", head->a);
        display(head->next);
    }
}
 
void generate(struct node **head)
{
    int num, i;
    struct node *temp;
 
    printf("Enter length of list: ");
    scanf("%d", &num);
    for (i = num; i > 0; i--)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = i;
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
    }
}

void delete(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
*/

/*
// Pointer boylede kullanilabilir
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a=(int*)malloc(sizeof(int)*5);
    a[3]=8;
    printf("%d",a[3]);
    return 0;
}
*/

/*
 // C Program to Display all the Nodes in a Linked List without using Recursion
 // https://www.sanfoundry.com/c-program-display-linked-list-without-recursion/ <<<< Link >>>>
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *next;
};
 
void generate(struct node **);
void display(struct node*);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
 
    generate(&head);
    display(head);
    delete(&head);
    display(head);
    return 0;
}
 
void generate(struct node **head)
{
    int num = 10, i;
    struct node *temp;
 
    for (i = 0; i < num; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = i;
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
    }
}
 
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d   ", head->a);
        head = head->next;
    }
    if(head == NULL)
    	printf("Bos");
    printf("\n");
}
 
void delete(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
*/

/*
 // C Program Count the Number of Occurrences of an Element in the Linked List without using Recursion
 // https://www.sanfoundry.com/c-program-count-number-occurrences-element-linked-list-without-recursion/ <<<< Link >>>>
#include <stdio.h>
#include <stdlib.h>
 
int occur(int [], int, int);
 
int main()
{
    int size, key, count;
    int list[20];
    int i;
 
    printf("Listin boyutunu girin: ");
    scanf("%d", &size);
    printf("Liste basiliyor:\n");
    for (i = 0; i < size; i++)
    {
        list[i] = rand() % size;
        printf("%d    ", list[i]);
    }
    printf("\nListede kontrol etmek istediginiz bir sayiyi giriniz: ");
    scanf("%d", &key);
    count = occur(list, size, key);
    if(count)
    	printf("%d sayisindan Listede %d tane bulunuyor .\n", key, count);
    else
    	printf("Girdiginiz sayi Listede yok ");
    return 0;
}
 
int occur(int list[], int size, int key)
{
    int i, count = 0;
 
    for (i = 0; i < size; i++)
    {
        if (list[i] == key)
        {
            count += 1;
        }
    }
    return count;
}
*/

/*
 // C Program find the Length of the Linked List without using Recursion
 // https://www.sanfoundry.com/c-program-linked-list-length-without-recursion/ <<<< Link >>>>
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *next;
};
 
 
void generate(struct node **);
int length(struct node*);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
    int count;
 
    generate(&head);
    count = length(head);
    printf("The number of nodes are: %d\n", count);
    delete(&head);
 
    return 0;
}
 
void generate(struct node **head)
{
    // for unknown number of nodes use num = rand() % 20; 
    int num = 10, i;
    struct node *temp;
 
    for (i = 0; i < num; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = i;
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
    }
}
 
int length(struct node *head)
{
    int num = 0;
    while (head != NULL)
    {
        num += 1;
        head = head->next;
    }
    return num;
}
 
void delete(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
*/

/*
 // C Program to Print the Alternate Nodes in a Linked List without using Recursion
 // https://www.sanfoundry.com/c-program-alternate-nodes-without-recursion/ <<<<< Link >>>>>
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *next;
};
 
void generate(struct node **);
void display(struct node *);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
 
    generate(&head);
    printf("\nDisplaying the alternate nodes\n");
    display(head);
    delete(&head);
 
    return 0;
}
 
void display(struct node *head)
{
    int flag = 0;
 
    while(head != NULL)
    {
        if (!(flag % 2))
        {
           printf("%d  ", head->a);
           printf("\n%d Flag\n  ", flag % 2);
        }
        flag++;
        head = head->next;
    }
}
 
void generate(struct node **head)
{
    int num, i;
    struct node *temp;
 
    printf("Enter length of list: ");
    scanf("%d", &num);
    for (i = num; i > 0; i--)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = i;
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
    }
}
 
void delete(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
*/

/*
 // C Program to find Product of 2 Numbers without using Recursion
 // https://www.sanfoundry.com/c-program-product-without-recursion/ <<<< Link >>>>
#include <stdio.h>
 
int product(int, int);
 
int main()
{
    int a, b, result;
 
    printf("Enter two numbers to find their product: ");
    scanf("%d%d", &a, &b);
    result = product(a, b);
    printf("Product of %d and %d is %d\n", a, b, result);
    return 0;
}
 
int product(int a, int b)
{
    int temp = 0;
 
    while (b != 0)
    {
        temp += a;
        b--;
    }
    return temp;
}
*/

/*
 // C Program to Convert Binary Code of a Number into its Equivalent Gray's Code without using Recursion
 // https://www.sanfoundry.com/c-program-binary-to-grays-code-without-recursion/ <<< Link >>>
#include <stdio.h>
#include <math.h>
 
int bintogray(int);
 
int main ()
{
    int bin, gray;
 
    printf("Enter a binary number: ");
    scanf("%d", &bin);
    gray = bintogray(bin);
    printf("The gray code of %d is %d\n", bin, gray);
    return 0;
}
 
int bintogray(int bin)
{
    int a, b, result = 0, i = 0;
 
    while (bin != 0)
    {
        a = bin % 10;
        bin = bin / 10;
        b = bin % 10;
        if ((a && !b) || (!a && b))
        {
            result = result + pow(10, i);
        }
        i++;
    }
    return result;
}
*/

/*
 // C Program to Solve the Magic Squares Puzzle without using Recursion
 // https://www.sanfoundry.com/c-program-magic-squares-without-recursion/ <<< Link >>>
 // n X n bir dizi tanimlar ve n sayiya kadar ki sayilari icine bastirir ama n=tek sayi olmasi lazim
#include <stdio.h>
 
void magicsq(int, int [][10]);
 
int main( )
{
    int size;
    int a[10][10];
 
    printf("Enter the size: ");
    scanf("%d", &size);
    if (size % 2 == 0)
    {
        printf("Magic square works for an odd numbered size\n");
    }
    else
    {
        magicsq(size, a);
    }
    return 0;
}
 
void magicsq(int size, int a[][10])
{
    int sqr = size * size;
    int i = 0, j = size / 2, k;
 
    for (k = 1; k <= sqr; ++k) 
    {
        a[i][j] = k;
        i--;
        j++;
 
        if (k % size == 0) 
        { 
            i += 2; 
            --j; 
        }
        else 
        {
            if (j == size) 
            {
                j -= size;
            }
            else if (i < 0)
            {
                i += size;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
*/

/*
 // C Program to find HCF of a given Number without using Recursion
 // https://www.sanfoundry.com/c-program-hcf-without-recursion/ <<< Link >>>
 
#include <stdio.h>
 
int hcf(int, int);
 
int main()
{
    int a, b, result;
 
    printf("Enter the two numbers to find their HCF: ");
    scanf("%d%d", &a, &b);
    result = hcf(a, b);
    printf("The HCF of %d and %d is %d.\n", a, b, result);
 
    return 0;
}
 
int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
*/

/*
 // C Program to Traverse the Tree Non-Recursively
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *left;
    struct node *right;
};
 
void generate(struct node **, int);
int search(struct node *, int);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
    int choice = 0, num, flag = 0, key;
 	int secim=0,bayrak=0,anahtar;
    do
    {
        printf("\nEnter your choice:\n1. Insert\n2. Search\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1: 
            printf("Enter element to insert: ");
            scanf("%d", &num);
            generate(&head, num);
            break;
        case 2: 
            printf("Enter key to search: ");
            scanf("%d", &key);
            flag = search(head, key);
            if (flag)
            {
                printf("Key found in tree\n");
            }
            else
            {
                printf("Key not found\n");
            }
            break;
        case 3: 
            delete(&head);
            printf("Memory Cleared\nPROGRAM TERMINATED\n");
            break;
        default: printf("Not a valid input, try again\n");
        }
    } while (choice != 3);
    printf("Gir da bikere\n");
    scanf("%d", &secim);
    if(secim)
    {
        printf("Enter key to search: ");
        scanf("%d", &anahtar);
        bayrak = search(head, anahtar);
		if (bayrak==1)
        {
			printf("Key found in tree\n");
		}
        else
        {
            printf("BOSSS Linked list\n");
        }
    }
    return 0;
}
 
void generate(struct node **head, int num)
{
    struct node *temp = *head, *prev = *head;
 
    if (*head == NULL)
    {
        *head = (struct node *)malloc(sizeof(struct node));
        (*head)->a = num;
        (*head)->left = (*head)->right = NULL;
    }
    else
    {
        while (temp != NULL)
        {
            if (num > temp->a)
            {
                prev = temp;
                temp = temp->right;
            }
            else
            {
                prev = temp;
                temp = temp->left;
            }
        }
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = num;
        if (num >= prev->a)
        {
            prev->right = temp;
        }
        else
        {
            prev->left = temp;
        }
    }
}
 
int search(struct node *head, int key)
{
    while (head != NULL)
    {
    	
        if (key > head->a)
        {
            head = head->right;
        }
        else if (key < head->a)
        {
            head = head->left;
        }
        else
        {
            return 1;
        }
    }
	return 0;
}
 
void delete(struct node **head)
{
    if (*head != NULL)
    {
        if ((*head)->left)
        {
            delete(&(*head)->left);
        }
        if ((*head)->right)
        {
            delete(&(*head)->right);
        }
        free(*head);
    }
}
*/

/*
 // C Program to find the first capital letter in a string using Recursion
 // https://www.sanfoundry.com/c-program-first-capital-letter-using-recursion/ <<< Link >>>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
char caps_check(char *);
static int i = 0;
int main()
{
    char string[20], letter;
 
    printf("Enter a string to find it's first capital letter: ");
    scanf("%s", string);
    letter = caps_check(string);
    if (letter == 0)
    {
        printf("No capital letter is present in %s.\n", string);
    }
    else
    {
        printf("%s String'indeki ilk buyuk harf %c.\n", string, letter);
		printf("Ve o da %d.ci harf \n", i+1);
	}
        return 0;
    }
    char caps_check(char *string)
    {
        //static int i = 0;
        if (i < strlen(string))
        {
            if (isupper(string[i]))
            {
            	
                return string[i];
            }
            else
            {
                i = i + 1;
                return caps_check(string);
            }
        }
        else return 0;
    }
*/

/*
 // C Program to Print the Alternate Nodes in a Linked List using Recursion
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *next;
};
 
void generate(struct node **);
void display(struct node *);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
 
    generate(&head);
    printf("\nDisplaying the alternate nodes\n");
    display(head);
    delete(&head);
 
    return 0;
}
 
void display(struct node *head)
{
    static flag = 0;
    if(head != NULL)
    {
        if (!(flag % 2))
        {
           printf("%d  ", head->a);
        }
        flag++;
        display(head->next);
    }
}
 
void generate(struct node **head)
{
    int num, i;
    struct node *temp;
 
    printf("Enter length of list: ");
    scanf("%d", &num);
    for (i = num; i > 0; i--)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = i;
        printf("%d  ", i);
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
    }
}
 
void delete(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
*/

/*
 // C Program to Print Binary Equivalent of an Integer using Recursion
 // 7/24/2018 screenshot vardir laptopta
#include <stdio.h>
 
int binary_conversion(int);
 
int main()
{
   int num, bin;
 
   printf("Enter a decimal number: ");
   scanf("%d", &num);
   bin = binary_conversion(num);
   printf("The binary equivalent of %d is %d\n", num, bin);
}
 
int binary_conversion(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 2) + 10 * binary_conversion(num / 2);
    }
}
*/

/*
 // C Program to find Power of a Number using Recursion
#include <stdio.h>
 
long power (int, int);
 
int main()
{
    int pow, num;
    long result;
 
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter it's power: ");
    scanf("%d", &pow);
    result = power(num, pow);
    printf("%d^%d is %ld", num, pow, result);
    return 0;
}
 
long power (int num, int pow)
{
    if (pow)
    {
        return (num * power(num, pow - 1));
    }
    return 1;
}
*/

/*
 // C Program to find GCD of given Numbers using Recursion
#include <stdio.h>
 
int gcd(int, int);
 
int main()
{
    int a, b, result;
 
    printf("Enter the two numbers to find their GCD: ");
    scanf("%d%d", &a, &b);
    result = gcd(a, b);
    printf("The GCD of %d and %d is %d.\n", a, b, result);
}
 
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}
*/

/*
 // C Program to Find LCM of a Number using Recursion
 // https://www.sanfoundry.com/c-program-lcm-using-recursion/ << Link >>
#include <stdio.h>
 
int lcm(int, int);
 
int main()
{
    int a, b, result;
    int prime[100];// buni galiba tevekeli kullanmistir
 
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);
    return 0;
}
 
int lcm(int a, int b)
{ 
    static int common = 1;
 
    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    printf("COMMON %d \n",common);
    common++;
    lcm(a, b);
    return common;
}
*/

/*
 // C Program to find factorial of a given number using recursion
#include <stdio.h>
 
int factorial(int);
 
int main()
{
    int num;
    int result;
 
    printf("Enter a number to find it's Factorial: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial of negative number not possible\n");
    }
    else
    {
        result = factorial(num);
        printf("The Factorial of %d is %d.\n", num, result);
    }
    return 0;
}
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return(num * factorial(num - 1));
    }
}
*/

/*
 // C Program to find whether a Number is Prime or Not using Recursion
#include <stdio.h>
 
int primeno(int, int);
 
int main()
{
    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);
    check = primeno(num, num / 2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
 
int primeno(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
       	printf("%d iiiiiiii\n", i);
         return primeno(num, i - 1);
       }       
    }
}
*/

/*
 // C Program to Check whether a given String is Palindrome or not using Recursion
 // 7/24/2018 var screenshot laptopta
 // https://www.sanfoundry.com/c-program-string-palindrome-using-recursion/ <<<< Link >>>>
#include <stdio.h>
#include <string.h>
 
void check(char [], int);
 
int main()
{
    char word[15];
 
    printf("Enter a word to check if it is a palindrome\n");
    scanf("%s", word);
    check(word, 0);
 
    return 0;
}
 
void check(char word[], int index)
{
    int len = strlen(word) - (index + 1);
    if (word[index] == word[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("The entered word is a palindrome\n");
            return;
        }
        check(word, index + 1);
    }
    else
    {
        printf("The entered word is not a palindrome\n");
    }
}
*/

/*
 // C Program to Copy One String to Another using Recursion
#include <stdio.h>
 
void copy(char [], char [], int);
 
int main()
{
    char str1[20], str2[20];
 
    printf("Enter string to copy: ");
    scanf("%s", str1);
    copy(str1, str2, 0);
    printf("Copying success.\n");
    printf("The first string is: %s\n", str1);
    printf("The second string is: %s\n", str2);
    return 0;
}
 
void copy(char str1[], char str2[], int index)
{
    str2[index] = str1[index];
    if (str1[index] == '\0')
        return;
    copy(str1, str2, index + 1);
}
*/

/*
 // C Program to Reverse the String using Recursion
 //  7/24/2018 screenshot var laptopta
#include <stdio.h>
#include <string.h>
 
void reverse(char [], int, int);
int main()
{
    char str1[20];
    int size;
 
    printf("Enter a string to reverse: ");
    scanf("%s", str1);
    size = strlen(str1);
    reverse(str1, 0, size - 1);
    printf("The string after reversing is: %s\n", str1);
    return 0;
}
 
void reverse(char str1[], int index, int size)
{
    char temp;
    temp = str1[index];
    str1[index] = str1[size - index];
    str1[size - index] = temp;
    if (index == size / 2)
    {
        return;
    }
    reverse(str1, index + 1, size);
}
*/

/*
 // C Program to Perform Binary Search using Recursion
#include <stdio.h>
 
void binary_search(int [], int, int, int);
void bubble_sort(int [], int);
 
int main()
{
    int key, size, i;
    int list[25];
 
    printf("Enter size of a list: ");
    scanf("%d", &size);
    printf("Generating random numbers\n");
    for(i = 0; i < size; i++)
    {
        list[i] = rand() % 100;
        printf("%d  ", list[i]);
    }
    bubble_sort(list, size);
    printf("\n\n");
    for (i = 0; i < size; i++)
    {
    	printf("%d ",list[i]);
    }
    printf("\nEnter key to search\n");
    scanf("%d", &key);
    binary_search(list, 0, size, key);
 
}
 
void bubble_sort(int list[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}
 
void binary_search(int list[], int lo, int hi, int key)
{
    int mid;
 
    if (lo > hi)
    {
        printf("Key not found\n");
        return;
    }
    mid = (lo + hi) / 2;
    if (list[mid] == key)
    {
        printf("Key found %d.ci yerde\n",mid+1);
    }
    else if (list[mid] > key)
    {
        binary_search(list, lo, mid - 1, key);
    }
    else if (list[mid] < key)
    {
        binary_search(list, mid + 1, hi, key);
    }
}
*/

/*
 // C program to find the length of a string
 // https://www.sanfoundry.com/c-program-linked-list-length-using-recursion/ <<< Link >>>>
#include <stdio.h>
 
int length(char [], int);
int main()
{
    char word[20];
    int count;
 
    printf("Enter a word to count it's length: ");
    scanf("%s", word);
    count = length(word, 0);
    printf("The number of characters in %s are %d.\n", word, count);
    return 0;
}
 
int length(char word[], int index)
{
    if (word[index] == '\0')
    {
        return 0;
    }
    return (1 + length(word, index + 1));
}
*/

/*
 // C program to find the number of occurences of a given number in a list
 // https://www.sanfoundry.com/c-program-count-linked-list-using-recursion/ <<< Link >>>
#include <stdio.h>
 
void occur(int [], int, int, int, int *);
 
int main()
{
    int size, key, count = 0;
    int list[20];
    int i;
 
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    printf("Printing the list:\n");
    for (i = 0; i < size; i++)
    {
        list[i] = rand() % size;
        printf("%d    ", list[i]);
    }
    printf("\nEnter the key to find it's occurence: ");
    scanf("%d", &key);
    occur(list, size, 0, key, &count);
    printf("%d occurs for %d times.\n", key, count);
    return 0;
}
 
void occur(int list[], int size, int index, int key, int *count)
{
    if (size == index)
    {
        return;
    }
    if (list[index] == key)
    {
        *count += 1;
    }
    occur(list, size, index + 1, key, count);
}
*/

/*
 // Recursive C program to display members of a linked list
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *next;
};
 
void generate(struct node **);
void display(struct node*);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
 
    generate(&head);
    display(head);
    delete(&head);
    return 0;
}
 
void generate(struct node **head)
{
    int num = 10, i;
    struct node *temp;
 
    for (i = 0; i < num; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = i;
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
    }
}
 
void display(struct node *head)
{
    printf("%d    ", head->a);
    if (head->next == NULL)
    {
        return;
    }
    display(head->next);
}
 
void delete(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
*/

/*
 // Recursive C program to reverse nodes of a linked list and display them
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node *next;
};
 
void print_reverse_recursive (struct node *);
void print (struct node *);
void create_new_node (struct node *, int );
 
//Driver Function
int main ()
{
    struct node *head = NULL;
    insert_new_node (&head, 1);
    insert_new_node (&head, 2);
    insert_new_node (&head, 3);
    insert_new_node (&head, 4);
    insert_new_node (&head, 5);
    printf ("LinkedList : ");
    print (head);
    printf ("\nLinkedList in reverse order : ");
    print_reverse_recursive (head);
    printf ("\n");
    return 0;
}
 
//Recursive Reverse
void print_reverse_recursive (struct node *head)
{
    if (head == NULL)
    {
        return;
    }
 
    //Recursive call first
    print_reverse_recursive (head -> next);
    //Print later
    printf ("%d ", head -> data);
}
 
//Print the linkedlist normal
void print (struct node *head)
{
    if (head == NULL)
    {
        return;
    }
    printf ("%d ", head -> data);
    print (head -> next);
}
 
//New data added in the start
void insert_new_node (struct node ** head_ref, int new_data)
{
    struct node * new_node = (struct node *) malloc (sizeof (struct node));
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}
*/

/*
 // C Program to find Sum of N Numbers using Recursion
#include <stdio.h>
 
void display(int);
int i = 1;// Buni
int main()
{
    int num, result;
 	
    printf("Enter the Nth number: ");
    scanf("%d", &num);
    display(num);
    return 0;
}
 
void display(int num)
{
    static int i = 1;//Buni yazabilersik a yokari o i yi silebilersik

 	printf("%d  \n ", i);
    if (num == i)
    {
        printf("%d   \n", num);
        return;
    }
    else
    {
        printf("%d   \n", i);
        i++;
        display(num);
    }
}
*/

/*
  //C Program to find Sum of Digits of a Number using Recursion
#include <stdio.h>
 
int sum (int a);
 
int main()
{
    int num, result;
 
    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}
 
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
*/

/*
     //C Program to find the Biggest Number in an Array of Numbers using Recursion
     
 
    #include <stdio.h>
    int large(int[], int, int);
 
    int main()
    {
 
        int size;
        int largest;
        int list[20];
        int i;
 
        printf("Enter size of the list:");
        scanf("%d", &size);
 
        printf("Printing the list:\n");
        for (i = 0; i < size ; i++) 
        {
            list[i] = rand() % size;
            printf("%d \t", list[i]);
        }
 
        if (size == 0) 
        {
            printf("Empty list\n");
        }
 
        else 
        {
            largest = list[0];
            largest = large(list, size - 1, largest);
            printf("\nThe largest number in the list is: %d\n", largest);
        }
 
    }
 
    int large(int list[], int position, int largest)
    {
 
        if (position == 0)
            return largest;
 
        if (position > 0) 
        {
            if (list[position] > largest)
            {
                largest = list[position];
            }
            return large(list, position - 1, largest);
        }
 
    }
*/

/*
 // C Program to find the nth number in Fibonacci series using recursion
#include <stdio.h>
int fibo(int);
 
int main()
{
    int num;
    int result;
 
    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {
        result = fibo(num);
        printf("The %d number in fibonacci series is %d\n", num, result);
    }
    return 0;
}
int fibo(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibo(num - 1) + fibo(num - 2));
    }
}
*/

/*
 // C Program to Implement Selection Sort Recursively
#include <stdio.h>
 
void selection(int [], int, int, int, int);
 
int main()
{
    int list[30], size, temp, i, j;
 
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    printf("Enter the elements in list:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
    selection(list, 0, 0, size, 1);
    printf("The sorted list in ascending order is\n");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", list[i]);
    }
 
    return 0;
}
 
void selection(int list[], int i, int j, int size, int flag)
{
    int temp;
 
    if (i < size - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < size)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
            selection(list, i, j + 1, size, 0);
        }
        selection(list, i + 1, 0, size, 1);
    }
}
*/

/*
 // Recursive C program to find length of a linked list
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *next;
};
 
void generate(struct node **);
int length(struct node*);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
    int count;
 
    generate(&head);
    count = length(head);
    printf("The number of nodes are: %d\n", count);
    delete(&head);
    return 0;
}
 
void generate(struct node **head)
{
    // for unknown number of nodes use num = rand() % 20; 
    int num = 10, i;
    struct node *temp;
 
    for (i = 0; i < num; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = i;
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
    }
}
 
int length(struct node *head)
{
    if (head->next == NULL)
    {
        return 1;
    }
    return (1 + length(head->next));
}
 
void delete(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
*/

/*
 // C Program to Reverse a Stack using Recursion
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *next;
};
 
void generate(struct node **);
void display(struct node *);
void stack_reverse(struct node **, struct node **);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
 
    generate(&head);
    printf("\nThe sequence of contents in stack\n");
    display(head);
    printf("\nInversing the contents of the stack\n");
    if (head != NULL)
    {
        stack_reverse(&head, &(head->next));
    }
    printf("\nThe contents in stack after reversal\n");
    display(head);
    delete(&head);
 
    return 0;
}
 
void stack_reverse(struct node **head, struct node **head_next)
{
    struct node *temp;
 
    if (*head_next != NULL)
    {
         temp = (*head_next)->next;
        (*head_next)->next = (*head);
        *head = *head_next;
        *head_next = temp;
        stack_reverse(head, head_next);
    }
}
 
void display(struct node *head)
{
    if (head != NULL)
    {
        printf("%d  ", head->a);
        display(head->next);
    }
}
 
void generate(struct node **head)
{
    int num, i;
    struct node *temp;
 
    printf("Enter length of list: ");
    scanf("%d", &num);
    for (i = num; i > 0; i--)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = i;
        if (*head == NULL)
        {
            *head = temp;
            (*head)->next = NULL;
        }
        else
        {
            temp->next = *head;
            *head = temp;
        }
    }
}
 
void delete(struct node **head)
{
    struct node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}
*/

/*
 // C Program for Depth First Binary Tree Search using Recursion
 // 1 sayidan fazla hacin girirsin karisir program
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int a;
    struct node *left;
    struct node *right;
};
 
void generate(struct node **, int);
void DFS(struct node *);
void delete(struct node **);
 
int main()
{
    struct node *head = NULL;
    int choice = 0, num, flag = 0, key;
 
    do
    {
        printf("\nEnter your choice:\n1. Insert\n2. Perform DFS Traversal\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1: 
            printf("Enter element to insert: ");
            scanf("%d", &num);
            generate(&head, num);
            break;
        case 2: 
            DFS(head);
            break;
        case 3: 
            delete(&head);
            printf("Memory Cleared\nPROGRAM TERMINATED\n");
            break;
        default: 
            printf("Not a valid input, try again\n");
        }
    } while (choice != 3);
    return 0;
}
 
void generate(struct node **head, int num)
{
    struct node *temp = *head, *prev = *head;
 
    if (*head == NULL)
    {
        *head = (struct node *)malloc(sizeof(struct node));
        (*head)->a = num;
        (*head)->left = (*head)->right = NULL;
    }
    else
    {
        while (temp != NULL)
        {
            if (num > temp->a)
            {
                prev = temp;
                temp = temp->right;
            }
            else
            {
                prev = temp;
                temp = temp->left;
            }
        }
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = num;
        if (num >= prev->a)
        {
            prev->right = temp;
        }
        else
        {
            prev->left = temp;
        }
    }
}
 
void DFS(struct node *head)
{
    if (head)
    {
        if (head->left)
        {
            DFS(head->left);
        }
        if (head->right)
        {
            DFS(head->right);
        }
        printf("%d  ", head->a);
    }
}
 
void delete(struct node **head)
{
    if (*head != NULL)
    {
        if ((*head)->left)
        {
            delete(&(*head)->left);
        }
        if ((*head)->right)
        {
            delete(&(*head)->right);
        }
        free(*head);
    }
}
*/

/*
 // C Program to Solve the Magic Squares Puzzle without using Recursion
 // 22/07/2018 screenshot var laptopta bu programin cozumu
#include <stdio.h>
 
void magicsq(int, int [][10]);
 
int main( )
{
    int size;
    int a[10][10];
 
    printf("Enter the size: ");
    scanf("%d", &size);
    if (size % 2 == 0)
    {
        printf("Magic square works for an odd numbered size\n");
    }
    else
    {
        magicsq(size, a);
    }
    return 0;
}
 
void magicsq(int size, int a[][10])
{
    int sqr = size * size;
    int i = 0, j = size / 2, k;
 
    for (k = 1; k <= sqr; ++k) 
    {
        a[i][j] = k;
        i--;
        j++;
 
        if (k % size == 0) 
        { 
            i += 2; 
            --j; 
        }
        else 
        {
            if (j == size) 
            {
                j -= size;
            }
            else if (i < 0)
            {
                i += size;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
*/

/*
 // C program to Calculate the Value of nPr
 // 22/7/2018 screenshot vardir laptopta cozumu bu programin
#include <stdio.h>
 
void main(void)
{
   printf("%d\n", fact(8));//40320 bu yazar kote kot
   int n, r;
   printf("Enter value for n and r\n");
   scanf("%d%d", &n, &r);
   int npr = fact(n) / fact(n - r);
   printf("\n Permutation values is = %d", npr);
}
 
int fact(int x)
{
   if (x <= 1)
       return 1;
   return x * fact(x - 1);
}
*/

/*
 // C Program to Display Pascal triangle
#include <stdio.h>
 
void main()
{
    int array[15][15], i, j, rows, num = 25, k;
 
    printf("\n enter the number of rows:");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (k = num - 2 * i; k >= 0; k--)
            printf(" ");
	    for (j = 0; j <= i; j++)
	    {
                if (j == 0 || i == j)
		{
                    array[i][j] = 1;
                }
                else
                {
                    array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
		}
		printf("%4d", array[i][j]);
            }
            printf("\n");
    }
}
*/

/*
 // C Program to Display Floyd’s triangle
#include <stdio.h>
 
main( )
{
    int i, j, k = 1;
 
    printf("floyds triangle is\n");
    for( i = 1; k <= 20; ++i )
    {
        for( j = 1; j <= i; ++j )
	    printf( "%d ", k++ );
	    printf( "\n\n" );
    }
    return 0;
}
*/

/*
 // C Program to Find the Perimeter of a Circle, Rectangle and Triangle
#include <stdio.h>
#include <math.h>
 
int main()
{
    float radius, length, width, a, b, c, height;
    int n;
    float perimeter;
 
    //Perimeter of rectangle
    printf(" \n Perimeter of rectangle \n");
    printf("---------------------------\n");
    printf("\n Enter width and length of the rectangle : ");
    scanf("%f%f", &width,& length);
    perimeter = 2 * (width + length);
    printf("Perimeter of rectangle is: %.3f", perimeter);
 
    //Perimeter of triangle
    printf("\n Perimeter of triangle n");
    printf("---------------------------n");
    printf("\n Enter the size of all sides of the triangle : ");
    scanf("%f%f%f", &a, &b, &c);
    perimeter = a + b + c;
    printf("Perimeter of triangle is: %.3f", perimeter);
 
    //Perimeter of circle
    printf(" \n Perimeter of circle \n");
    printf("---------------------------\n");
    printf("\n Enter the radius of the circle : ");
    scanf("%f", &radius);
    perimeter = 2 * (22 / 7) * radius;
    printf("Perimeter of circle is: %.3f", perimeter);
 
    //Perimeter of equilateral triangle
    printf(" \n Perimeter of equilateral triangle \n");
    printf("---------------------------\n");
    printf("\n Enter any side of the equilateral triangle : ");
    scanf("%f", &a);
    perimeter = 3 * a;
    printf("Perimeter of equilateral triangle is: %.3f", perimeter);
 
    //Perimeter of right angled triangle
    printf(" \n Perimeter of right angled triangle \n");
    printf("---------------------------\n");
    printf("\n Enter the width and height of the right angled triangle : ");
    scanf("%f%f", &width, &height);
    perimeter = width + height + sqrt(width * width + height * height);
    printf("Perimeter of right angled triangle is: %.3f", perimeter);
    return 0;
}
*/

/*
 // C program to find the areas of different geometrical shapes such as circle, square, rectangle etc using switch statements.
#include <stdio.h>
 
void main()
{
    int fig_code;
    float side, base, length, breadth, height, area, radius;
 
    printf("-------------------------\n");
    printf(" 1 --> Circle\n");
    printf(" 2 --> Rectangle\n");
    printf(" 3 --> Triangle\n");
    printf(" 4 --> Square\n");
    printf("-------------------------\n");
    printf("Enter the Figure code\n");
    scanf("%d", &fig_code);
    switch(fig_code)
    {
    case 1:
        printf("Enter the radius\n");
        scanf("%f", &radius);
        area = 3.142 * radius * radius;
        printf("Area of a circle = %.2f\n", area);
        break;
    case 2:
        printf("Enter the breadth and length\n");
        scanf("%f %f", &breadth, &length);
        area = breadth * length;
        printf("Area of a Reactangle = %.2f\n", area);
        break;
    case 3:
        printf("Enter the base and height\n");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of a Triangle = %.2f\n", area);
        break;
    case 4:
        printf("Enter the side\n");
        scanf("%f", &side);
        area = side * side;
        printf("Area of a Square=%.2f\n", area);
        break;
    default:
        printf("Error in figure code\n");
        break;
    }
}
*/

/*
 // C program to compute the surface area and volume of a cube
#include <stdio.h>
#include <math.h>
 
void main()
{
    float side, surfacearea, volume;
 
    printf("Enter the length of a side \n");
    scanf("%f", &side);
    surfacearea = 6.0 * side * side;
    volume = pow(side, 3);
    printf("Surface area = %6.2f and Volume = %6.2f \n", surfacearea,
     volume);
}
*/

/*
 // C Program to Find Area of Trapezium
#include <stdio.h>
 
int main()
{
    float a, b, h;
    float area;
 
    printf("Enter the value for two bases & height of the trapezium: \n");
    scanf("%f%f%f", &a, &b, &h);
    area = 0.5 * (a + b) * h ;
    printf("Area of the trapezium is: %.1f", area);
    return 0;
}
*/

/*
 // C Program to Find Area of a Right Angled Triangle
#include <stdio.h>
 
int main()
{
    float height, width;
    float area;
 
    printf("Enter height and width of the given triangle:\n ");
    scanf("%f%f", &height, &width);
    area = 0.5 * height * width;
    printf("Area of right angled triangle is: %.3f\n", area);
    return 0;
}
*/

/*
 // C program to find the area of a circle, given the radius
#include <stdio.h>
#include <math.h>
#define PI 3.142
 
void main()
{
    float radius, area;
 
    printf("Enter the radius of a circle \n");
    scanf("%f", &radius);
    area = PI * pow(radius, 2);
    printf("Area of a circle = %5.2f\n", area);
}
*/

/*
 // C Program to Find the Sum of H.P Series
#include <stdio.h>
 
void main()
{
    int n;
    float i, sum, term;
 
    printf("1 + 1 / 2 + 1 / 3 + ..... 1 / n \n");
    printf("Enter the value of n \n");
    scanf("%d", &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        term = 1 / i;
        sum = sum + term;
    }
    printf("the Sum of H.P Series is = %f", sum);
}
*/

/*
 // C Program to Find the Sum of A.P Series
 
#include <stdio.h>
#include <math.h>
 
int main()
{
     int a, d, n, i, tn;
     int sum = 0;
 
     printf("Enter the first term value of the A.P. series: ");
     scanf("%d", &a);
     printf("Enter the total numbers in the A.P. series: ");
     scanf("%d", &n);
     printf("Enter the common difference of A.P. series: ");
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn = a + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (i = a; i <= tn; i = i + d )
     {
          if (i != tn)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
*/

/*
 //C Program to find the Sum of Series 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
 
#include <stdio.h>
 
void main()
{
    double number, sum = 0, i;
 
    printf("\n enter the number ");
    scanf("%lf", &number);
    for (i = 1; i <= number; i++)
    {
        sum = sum + (1 / i);
        if (i == 1)
            printf("\n 1 +");
        else if (i == number)
            printf(" (1 / %lf)", i);
        else
            printf(" (1 / %lf) + ", i);
    }
    printf("\n The sum of the given series is %.2lf", sum);
}
*/

/*
 // C Program to Find find Sum of the Series 1/1! + 2/2! + 3/3! + ……1/N!
 
#include <stdio.h>
 
double sumseries(double);
 
main()
{
    double number,sum;
    printf("\n Enter the value:  ");
    scanf("%lf", &number);
    sum = sumseries(number);
    printf("\n Sum of the above series = %lf ", sum);
}
 
double sumseries(double m)
{
    double sum2 = 0, f = 1, i;
    for (i = 1; i <= m; i++)
    {
        f = f * i;
        sum2 = sum2 +(i / f);
    }
    return(sum2);
}
*/

/*
 // C Program to find the Sum of Series 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
 
#include <stdio.h>
 
void main()
{
    double number, sum = 0, i;
 
    printf("\n enter the number ");
    scanf("%lf", &number);
    for (i = 1; i <= number; i++)
    {
        sum = sum + (1 / i);
        if (i == 1)
            printf("\n 1 +");
        else if (i == number)
            printf(" (1 / %lf)", i);
        else
            printf(" (1 / %lf) + ", i);
    }
    printf("\n The sum of the given series is %.2lf", sum);
}
*/

/*
 // C Program to find the sum of series 1^2 + 2^2 + …. + n^2.
 
#include <stdio.h>
 
int main()
{
    int number, i;
    int sum = 0;
 
    printf("Enter maximum values of series number: ");
    scanf("%d", &number);
    sum = (number * (number + 1) * (2 * number + 1 )) / 6;
    printf("Sum of the above given series : ");
    for (i = 1; i <= number; i++)
    {
        if (i != number)
            printf("%d^2 + ", i);
        else
            printf("%d^2 = %d ", i, sum);
    }
    return 0;
}
*/

/*
 // C Program to Find & Display Multiplication table
 
#include <stdio.h>
 
int main()
{
    int number, i = 1;
 
    printf(" Enter the Number:");
    scanf("%d", &number);
    printf("Multiplication table of %d:\n ", number);
    printf("--------------------------\n");
    while (i <= 10)
    {
        printf(" %d x %d = %d \n ", number, i, number * i);
        i++;
    }
    return 0;
}
*/

/*
 // C program to find the factorial of a given number
 
#include <stdio.h>
void main()
{
    int i, fact = 1, num;
 
    printf("Enter the number \n");
    scanf("%d", &num);
    if (num <= 0)
        fact = 1;
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
    }
    printf("Factorial of %d = %5d\n", num, fact);
}
*/

/*
 // C Program to find factorial of a given number using recursion
 // https://www.sanfoundry.com/c-program-factorial-using-recursion/ <<< Link >>>
#include <stdio.h>
 
int factorial(int);
 
int main()
{
    int num;
    int result;
 
    printf("Enter a number to find it's Factorial: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial of negative number not possible\n");
    }
    else
    {
        result = factorial(num);
        printf("The Factorial of %d is %d.\n", num, result);
    }
    return 0;
}
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return(num * factorial(num - 1));
    }
}
*/

/*
 // C Program to find Power of a Number using Recursion
 // RECURSION kullanimi sayinin girilen ussunu bulan program
#include <stdio.h>
 
long power (int, int);
 
int main()
{
    int pow, num;
    long result;
 
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter it's power: ");
    scanf("%d", &pow);
    result = power(num, pow);
    printf("%d^%d is %ld", num, pow, result);
    return 0;
}
 
long power (int num, int pow)
{
    if (pow)
    {
        return (num * power(num, pow - 1));
    }
    return 1;
}
*/

/*
 // C program to accept a coordinate point in a XY coordinate system and determine its quadrant
#include <stdio.h>
 
void main()
{
    int x, y;
 
    printf("Enter the values for X and Y\n");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
        printf("point (%d, %d) lies in the First quandrant\n");
    else if (x < 0 && y > 0)
        printf("point (%d, %d) lies in the Second quandrant\n");
    else if (x < 0 && y < 0)
        printf("point (%d, %d) lies in the Third quandrant\n");
    else if (x > 0 && y < 0)
        printf("point (%d, %d) lies in the Fourth quandrant\n");
    else if (x == 0 && y == 0)
        printf("point (%d, %d) lies at the origin\n");
}
*/
/*
 // C program to evaluate a given polynomial by reading its coefficients
 // in an array.
 // P(x) = AnXn + An-1Xn-1 + An-2Xn-2+... +A1X + A0

 // The polynomial can be written as:
 // P(x) = A0 + X(A1 + X(A2 + X(A3 + X(Q4 + X(...X(An-1 + XAn))))
 // and evaluated starting from the inner loop
 
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
 
void main()
{
    int array[MAXSIZE];
    int i, num, power;
    float x, polySum;
 
    printf("Enter the order of the polynomial \n");
    scanf("%d", &num);
    printf("Enter the value of x \n");
    scanf("%f", &x);
    //  Read the coefficients into an array 
    printf("Enter %d coefficients \n", num + 1);
    for (i = 0; i <= num; i++)
    {
        scanf("%d", &array[i]);
    }
    polySum = array[0];
    for (i = 1; i <= num; i++)
    {
        polySum = polySum * x + array[i];
    }
    power = num;
 
    printf("Given polynomial is: \n");
    for (i = 0; i <= num; i++)
    {
        if (power < 0)
        {
            break;
        }
        //  printing proper polynomial function 
        if (array[i] > 0)
            printf(" + ");
        else if (array[i] < 0)
            printf(" - ");
        else
            printf(" ");
        printf("%dx^%d  ", abs(array[i]), power--);
    }
    printf("\n Sum of the polynomial = %6.2f \n", polySum);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
    int num1, num2, i, j, flag, temp, count = 0;
 
    printf("Enter the value of num1 and num2 \n");
    scanf("%d %d", &num1, &num2);
    if (num2 < 2)
    {
        printf("There are no primes upto %d\n", num2);
        exit(0);
    }
    printf("Prime numbers are \n");
    temp = num1;
    if ( num1 % 2 == 0)
    {
        num1++;
    }
    for (i = num1; i <= num2; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    printf("Number of primes between %d & %d = %d\n", temp, num2, count);
}
*/

/*
 // C program to check whether a given number is prime or not and output the given number with suitable message.
 // Asal Sayi oldugunu sinayan program
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
    int num, j, flag;
 
    printf("Enter a number \n");
    scanf("%d", &num);
 
    if (num <= 1)
    {
        printf("%d is not a prime numbers \n", num);
        exit(1);
    }
    flag = 0;
    for (j = 2; j <= num / 2; j++)
    {
        if ((num % j) == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a prime number \n", num);
     else
        printf("%d is not a prime number \n", num);
}
*/

/*
 // C program to find the sum of 'N' natural numbers
 // https://www.sanfoundry.com/c-program-find-sum-first-n-natural-numbers/ <<< Link >>>
#include <stdio.h>
 
void main()
{
    int i, num, sum = 0;
 
    printf("Enter an integer number \n");
    scanf ("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf ("Sum of first %d natural numbers = %d\n", num, sum);
}
*/

/*
//fputc() fonksiyonu
#include<stdio.h>
int main()
{
    int i = 0;
    FILE *fp = fopen("output.txt","w");
 
    // Return if could not open file
    if (fp == NULL)
      return 0;
 
    char string[] = "good bye", received_string[20];
 
    for (i = 0; string[i]!='\0'; i++)
 
        // Input string into the file
        // single character at a time
        fputc(string[i], fp);
 
    fclose(fp);
    fp = fopen("output.txt","r");
 
    // Reading the string from file
    fgets(received_string,20,fp);
 
    printf("%s", received_string);
 
    fclose(fp);
    return 0;
}
*/

/*
// fgetc() fonksiyonu Butun dosyadaki karakterleri teker teker ekrana basar
#include <stdio.h>
 
int main ()
{
    // open the file
    FILE *fp = fopen("deneme.txt","r");
 
    // Return if could not open file
    if (fp == NULL)
      return 0;
 
    do
    {
        // Taking input single character at a time
        char c = fgetc(fp);
 
        // Checking for end of file
        if (feof(fp))
            break ;
 
        printf("%c", c);
    }  while(1);
 
    fclose(fp);
    return(0);
}
*/

/*
// fputs() kullanimi dosya
#include<stdio.h>
void main(){
	
	FILE *dosya;
	dosya=fopen ("deneme.txt","a");
	fputs("\nMerhaba Yasin Bey",dosya);
	if(fputs)
		printf("Basariyla yazdirildi");
    else
    	printf("Sictin sivadin");
	fclose(dosya);
}
*/
/*
// Dosyaya fprintf ile veri aktarma
#include<stdio.h>
void main(){
	
	FILE *dosya;
	char isim[]="Yasin";
	dosya=fopen ("deneme.txt","a");
	fprintf(dosya,"\nBu dosya %s'in dosyasidir",isim);
    fclose(dosya);
}
*/
/*
//Bu programa basar dosyanin sonuna gelinceye kadar ekrana basar 
#include<stdio.h>
void main(){
	
	FILE *dosya;
	char karakter;
	if((dosya=fopen ("deneme.txt","r"))!=NULL){
		karakter=fgetc(dosya);
		while(karakter != EOF){
			printf("%c",karakter);
			karakter=fgetc(dosya);
		}
	}
	else
		printf("Dosya bulunamadi");
    fclose(dosya);
}
*/ 

/*
// Bu programam dosyada ne varise hep  bastirir ekrana
#include<stdio.h>
void main(){
	
	FILE *dosya;
	char kelime[50][20];
	int i=0;
	if((dosya=fopen ("deneme.txt","r"))!=NULL){
		while(!feof(dosya)){
		
			fscanf(dosya,"%s",&kelime[i]);
			printf("%s ",kelime[i]);
			i++;
		}
	}
	else
		printf("Dosya bulunamadi");
    fclose(dosya);
}
*/
/*
#include<stdio.h>
//bu programa alir dosyadan bir karakteri yada ne istersek em basar ekranda
//fgetc(); --> Dosyadan tek bir karakter okur
//fscanf(); --> Dosyadan bicimlendirilmis karakter dizisi okur
void main(){
	
	FILE *dosya;
	char karakter[10];
	int i;
	dosya=fopen ("deneme.txt","r");
	if(dosya!=NULL){
			karakter[0]=fgetc(dosya);
			printf("%s",karakter);
		
	}
	else
		printf("Dosya bulunamadi");
    fclose(dosya);
}
*/

/*
#include<stdio.h>
//bu programa alir bir karakteri yada ne istersek em koyar dosyaya(not defterine)
//fgetc(); --> Dosyadan tek bir karakter okur
//fscanf(); --> Dosyadan bicimlendirilmis karakter dizisi okur
void main(){
	
	FILE *dosya;
	char karakter='A';
	dosya=fopen ("deneme.txt","w");
		
    fprintf(dosya, "%c", karakter);
    fclose(dosya);
}
*/

/*
 // C Program to Collect Statistics of a Source File like Total Lines, Total no. of Blank Lines, Total no. of Lines ending with Semicolon
 
#include <stdio.h>
#include <stdlib.h>
 
void main(int argc, char *argv[])    // Command line Arguments 
{
    int ncount = 0, ccount = 0, scount = 0, blank = 0;
    char ch;
    FILE *fp;
    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        perror("Error Occured");
    }
    else
    {
        while(1)
        {
            ch = fgetc(fp);
            if (ch == EOF)
            {
                break;
            }
            if (ch == 10)
            {
                ncount++;
                if (ch = fgetc(fp) == '\n')
                {
                    fseek(fp, -1, 1);        // shifting offset of the file to previous position 
                    blank++;
                }
            }        
            else if (ch == 59)
            {
                scount++;
            }
            else if (ch == '/' || ch == '*')
            { 
                ccount++;
            }
        }
    }
    printf("\nThe Total number of lines are %d", ncount);
    printf("\nThe Total number of Commented lines are %d", ccount);
    printf("\nThe Total number of blank lines are %d", blank);
    printf("\nThe total number of lines that end with Semicolon %d", scount);
    printf("\nThe length of Actual code is %d ", ncount-blank-ccount);
    fclose(fp);
}
*/

/*
 // C Program to Join Lines of Two given Files and Store them in a New file
 // 2 programi (dosyay) birlestirir
#include <stdio.h>
#include <stdlib.h>
 
// Function Prototype 
int joinfiles(FILE *, FILE *, FILE *);
 
char ch;
int flag;
 
void main(int argc, char *argv[])
{
    FILE *file1, *file2, *target;
 
    file1 = fopen(argv[1], "r");
    if (file1 == NULL)
    {
        perror("Error Occured!");
    }
    file2 = fopen(argv[2], "r");
    if (file2 == NULL)
    {
        perror("Error Occured!");
    }
    target = fopen(argv[3], "a");
    if (target == NULL)
    {
        perror("Error Occured!");
    }
 
    joinfiles(file1, file2, target);        // Calling Function 
 
    if (flag == 1)
    {
        printf("The files have been successfully concatenated\n");
    }
}
 
// Code join the two given files line by line into a new file 
 
int joinfiles(FILE *file1, FILE *file2, FILE *target)
{
    while ((fgetc(file1) != EOF) || (fgetc(file2) != EOF))
    {
        fseek(file1, -1, 1);
        while ((ch = fgetc(file1)) != '\n')
        {
            if (ch == EOF)
            {
                break;
            }
            else
            {
                fputc(ch, target);
            }
        }
        while ((ch = fgetc(file2)) != '\n')
        {
            if (ch == EOF)
            {
                break;
            }
            else
            {
                fputc(ch, target);
            }
        }
        fputc('\n', target);
    }
    fclose(file1);
    fclose(file2);
    fclose(target);
    return flag = 1;
}
*/

/*
 // Buyuk harflarle bir dosyayi full Kucuk harflere cevirir
#include <stdio.h>
#include <errno.h>
 
int to_lower_file(FILE *);
 
void main(int argc, char * argv[])
{
    int op = -1;
    char ch;
    FILE *fp;
    if (fp = fopen("gel.txt", "r+"))
    {
        printf("FILE has been opened..!!!\n");
        op = to_lower_file(fp);
        printf(" %d \n", op);
        fclose(fp);
    }
    else
    {
        perror("Error Occured");
        printf(" %d\n ", op);
    }
}
 
int to_lower_file(FILE *f)
{
    int c;
    char ch;
    while ((ch = fgetc(f))!= EOF)
    {    
        c = (int)ch;
        if (c >= 65 && c <= 90)
        {
            ch = ch + 32;
            fseek(f, -1L, 1);
            fputc(ch, f);
        }
    }
    return 0;
}
*/

/* 
 // C Program to Reverse the Contents of a File and Print it
 // Bu program yazar bir dosyay diger dosyaya ters kelimeleri
#include <stdio.h>
#include <errno.h>
 
long count_characters(FILE *);
 
void main(int argc, char * argv[])
{
    int i;
    long cnt;
    char ch, ch1;
    FILE *fp1, *fp2;
 
    if (fp1 = fopen("gel.txt", "r"))    
    {
        printf("The FILE has been opened...\n");
        fp2 = fopen("git.txt", "w");
        cnt = count_characters(fp1); // to count the total number of characters inside the source file
        fseek(fp1, -1L, 2);     // makes the pointer fp1 to point at the last character of the file
        printf("Number of characters to be copied %d\n", ftell(fp1));
 
        while (cnt)
        {
            ch = fgetc(fp1);
            fputc(ch, fp2);
            fseek(fp1, -2L, 1);     // shifts the pointer to the previous character
            cnt--;
        }
        printf("\n**File copied successfully in reverse order**\n");
    }
    else
    {
        perror("Error occured\n");
    }
    fclose(fp1);
    fclose(fp2);
}
// count the total number of characters in the file that *f points to
long count_characters(FILE *f) 
{
    fseek(f, -1L, 2);
    long last_pos = ftell(f); // returns the position of the last element of the file
    last_pos++;
    return last_pos;
}
*/

/*
 // C Program to replace first letter of every word with caps
 // ISLEMEZ BU PROGRAMA
#include <stdio.h>
#include <stdlib.h>
 
void main(int argc, char *argv[])
{
    FILE *fp1;
    int return_val;
 
    if (fp1 =fopen("gel.txt","r+")== NULL)
    {
        printf("file cant be opened");
        exit(0);
    }
    return_val = init_cap_file(fp1);
    if (return_val == 1)
    {
        printf("\nsuccess");
    }
    else
    {
        printf("\n failure");
    }
    FILE *fp;
    char k;
 
    fp = fopen("gel.txt", "r");
    do
    {
        k = getc(fp);
        putchar(k);
    }
    while (k != EOF);
	fclose(fp);
    return 1;
}
 
int init_cap_file(FILE *fp1)
{
    char ch;
 
    ch = fgetc(fp1);
    if (ch >= 97 && ch <= 122)
    {
        fseek(fp1, -1L, 1);
        fputc(ch - 32, fp1);
    }
    while (ch != EOF)
    {
        if (ch == ' '|| ch == '\n')
        {
            ch = fgetc(fp1);
            if (ch >= 97 && ch <= 122)
            {
                fseek(fp1, -1L, 1);
                fputc(ch - 32, fp1);
            }
        }
        else
            ch = fgetc(fp1);
    }
    return 1;
}
*/

/*
 // C Program to Convert the Content of File to UpperCase
 // https://www.sanfoundry.com/c-program-convert-file-uppercase/ <<< Link >>>
#include <stdio.h>
 
int to_upper_file(FILE *);
 
int main(int argc,char *argv[])
{
    FILE *fp;
    int status;
 
    if (argc == 1)
    {
        printf("Insufficient Arguments:");
        printf("No File name is provided at command line");
        return;
    }
    if (argc > 1)
    {
        fp = fopen(argv[1],"r+");
        status = to_upper_file(fp);
        
          //If the status returned is 0 then the coversion of file content was completed successfully
 
        if (status == 0)
        {
            printf("\n The content of \"%s\" file was successfully converted to upper case\n",argv[1]);
            fclose(fp);
            return;
        }
          //If the status returnes is -1 then the conversion of file content was not done
         
        if (status == -1)
        {
            printf("\n Failed to convert");
            fclose(fp);
            return;
        } 
   }
   fclose(fp);
}
 // convert the file content to uppercase
 
int to_upper_file(FILE *fp)
{
    char ch;
 
    if (fp == NULL)
    {
        perror("Unable to open file");
        return -1;
    }
    else
    {
          // Read the file content and convert to uppercase
          
        while (ch != EOF)// burda var yanlis
        {
            ch = fgetc(fp);
            if ((ch >= 'a') && (ch <= 'z'))
            {
                ch = ch - 32;
                fseek(fp,-1,SEEK_CUR);
                fputc(ch,fp);
            }    
        }
        return 0;
    }
}
*/

/*
 // C Program to Create Employee Record and Update it
 // https://www.sanfoundry.com/c-program-employee-record/ <<<< Link >>>>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 200
 
struct emp
{
    int id;
    char *name;
}*emp1, *emp3;
 
void display();
void create();
void update();
 
FILE *fp, *fp1;
int count = 0;
 
void main(int argc, char **argv)
{
    int i, n, ch;
 
    printf("1] Create a Record\n");
    printf("2] Display Records\n");
    printf("3] Update Records\n");
    printf("4] Exit");
    while (1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:    
            fp = fopen("git.txt", "a");
            create();
            break;
        case 2:    
            fp1 = fopen("git.txt","rb");
            display();
            break;
        case 3:    
            fp1 = fopen("git.txt", "r+");
            update();
            break;
        case 4: 
            exit(0);
        }
    }
}
 
// To create an employee record 
void create()
{
    int i;
    char *p;
 
    emp1 = (struct emp *)malloc(sizeof(struct emp));
    emp1->name = (char *)malloc((size)*(sizeof(char)));
    printf("Enter name of employee : ");
    scanf(" %[^\n]s", emp1->name);
    printf("Enter emp id : ");
    scanf(" %d", &emp1->id);
    fwrite(&emp1->id, sizeof(emp1->id), 1, fp);
    fwrite(emp1->name, size, 1, fp);
    count++;   // count to number of entries of records
    fclose(fp);
}
 
// Display the records in the file 
void display()
{    
    emp3=(struct emp *)malloc(1*sizeof(struct emp));    
    emp3->name=(char *)malloc(size*sizeof(char));
    int i = 1;
 
    if (fp1 == NULL)    
        printf("\nFile not opened for reading");
    while (i <= count)
    {
        fread(&emp3->id, sizeof(emp3->id), 1, fp1);
        fread(emp3->name, size, 1, fp1);
        printf("\n%d %s",emp3->id,emp3->name);
        i++;
    }
    fclose(fp1);
    free(emp3->name);
    free(emp3); 
}
 
void update()
{
    int id, flag = 0, i = 1;
    char s[size];
 
    if (fp1 == NULL)
    {
        printf("File cant be opened");
        return;
    }
    printf("Enter employee id to update : ");
    scanf("%d", &id);
    emp3 = (struct emp *)malloc(1*sizeof(struct emp));
        emp3->name=(char *)malloc(size*sizeof(char));
    while(i<=count)
    {    
        fread(&emp3->id, sizeof(emp3->id), 1, fp1);
        fread(emp3->name,size,1,fp1);
        if (id == emp3->id)
        {
            printf("Enter new name of emplyee to update : ");    
            scanf(" %[^\n]s", s);
            fseek(fp1, -204L, SEEK_CUR);
            fwrite(&emp3->id, sizeof(emp3->id), 1, fp1);
            fwrite(s, size, 1, fp1);
            flag = 1;
            break;
        }
        i++;
    }
    if (flag != 1)
    {
        printf("No employee record found");
        flag = 0;
    }
    fclose(fp1);
    free(emp3->name);        // to free allocated memory 
    free(emp3);
}
*/

/*
 // C Program Bir dosyadan baska dosyaya kopyalar icindeki herseyi
 // https://www.sanfoundry.com/c-program-copy-file/ <<<<< link >>>>>
 
#include <stdio.h>
 
void main(int argc,char **argv)
{
    FILE *fp1, *fp2;
    char ch;
    int pos;
 
    if ((fp1 = fopen(argv[1],"r")) == NULL)    
    {    
        printf("\nFile cannot be opened");
        return;
    }
    else     
    {
        printf("\nFile opened for copy...\n ");    
    }
    fp2 = fopen(argv[2], "w");  
    fseek(fp1, 0L, SEEK_END); // file pointer at end of file
    pos = ftell(fp1);
    fseek(fp1, 0L, SEEK_SET); // file pointer set at start
    while (pos--)
    {
        ch = fgetc(fp1);  // copying file character by character
        fputc(ch, fp2);
    }    
	fclose(fp1);
	fclose(fp2);  
}
*/

/*
 // C Program to Print Environment variables
 // https://www.sanfoundry.com/c-program-environment-variable/ << Link >>
#include <stdio.h>
 
void main(int argc, char *argv[], char * envp[])
{
    int i;
 
    for (i = 0; envp[i] != NULL; i++)
    {    
        printf("\n%s", envp[i]);
    }
}
*/

/*
 // C Program to Capitalize First Letter of every Word in a File
 // https://www.sanfoundry.com/c-program-capitalize-first-letter-word/ <<<< Link >>>>
 // bu islemezdi baygi (programa idi ki bir dosyada btun cumleleri buyuk harfle baslatsin
 
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
int to_initcap_file(FILE *); 
 
void main(int argc, char * argv[])
{
    FILE *fp1;
    char fp[10];
    int p;
 
    fp1 = fopen("gel.txt", "r+");
    if (fp1 == NULL)
    {
        printf("cannot open the file ");
        exit(0);
    }
    p = to_initcap_file(fp1);
    if (p == 1)    
    {    
        printf("success");
    }
    else 
    {
	
        printf("failure");
    }
    fclose(fp1);
}
 
// capitalizes first letter of every word 
int to_initcap_file(FILE *fp)
{
    char c;
 
    c = fgetc(fp);
    if (c >= 'a' && c <= 'z')
    {
        fseek(fp, 0, 0);
        fputc(c , fp);
    }
    while(c != EOF)    
    {
        if (c == ' ' || c == '\n')
        {
            c = fgetc(fp);
            if (c >= 'a' && c <= 'z')
            {
                fseek(fp, -1L, 1);
                fputc(c - 32, fp);
            }
        }
        else
        {
            c = fgetc(fp);
        }
    }
    return 1;
}
*/

/*
 // C Program to Find the Size of File using File Handling Function
 // 
#include <stdio.h>
 
void main(int argc, char **argv)
{
    FILE *fp;
    char ch;
    int size = 0;
 
    fp = fopen(argv[1], "r");
    if (fp == NULL)
        printf("\nFile unable to open ");
    else 
        printf("\nFile opened ");
    fseek(fp, 0, 2);    // file pointer at the end of file  boyle de kullanilir fseek(fp, 0,SEEK_END);   
    size = ftell(fp);   // take a position of file pointer un size variable 
    printf("The size of given file is : %d\n", size);    
    fclose(fp);
}
*/

/*
 // C program to Display the Function Names defined in C Source File
 // https://www.sanfoundry.com/c-program-display-function-name/ <<<< Link >>>>
#include <stdio.h>
#include <string.h>
 
void check(char *c,int p1, int p2);
void display(char *c, int p1);
 
void main(int argc, char **argv)
{
    FILE *fp;
    char ch[100];
    char *pos1, *pos2, *pos3;
 
    fp=fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("\nFile unable to open");
        return;
    }
    else
        printf("\nFile Opened to display function names :\n");
    while (1)
    {
        if ((fgets(ch, 100, fp)) != NULL)
        {
            if ((strstr(ch, "/*")) == NULL)
            {
                pos1 = strchr(ch, '(');                // check opening brace 
                if (pos1)
                {
                    pos2 = strchr(ch,')');            // check oclosing brace 
                    if (pos2)
                    {
                        pos3 = strchr(ch,';');        // check for semicolon
                        if ((pos1 < pos2) && (pos3 == NULL) || (pos3 < pos1))
                        {
                            check(ch, pos1 - ch, pos2 - ch);
                        }
                        else    continue;
                    }
                    else    continue;
                }
                else    continue;
            }
            else    continue;
        }
        else    break;
    }
    fclose(fp);
}
 
// To check if it is a function 
void check(char *c, int p1, int p2)
{
    int i, flag = 0, temp = p1;
 
    if ((c[p1 + 1] == ')'))
    {
        display(c, p1);
        return;
    }
    for (i = p1 + 1; i < p2; i++)
    {
        if ((c[i] != ' ') || (c[i] == ')'))
        {
            flag = 1;
 
        }
        if (flag == 0)
        {
            display(c, p1);
            return;
        }
        else
        {
            flag = 0;
            while (c[--temp] != ' ');
            for (i = 0; i < temp; i++)
                if (c[i]==' ')
                {
                    flag = 1;
                }
                if (flag == 0)
                {
                    display(c, p1);
                    return;
                 }
                 else
                     return;
          }
    }
}
 
// To display function name 
void display(char *c,int p1)
{
    int temp = p1, i;
 
    while (c[--temp] != ' ');
    for (i = temp + 1; i < p1; i++)            // Print name of function character by character 
        printf("%c", c[i]);
    printf("\n");
    return;
 
}
*/

/* 
 // C Program to Find Sum of Numbers given in Command Line Arguments Recursively
 // https://www.sanfoundry.com/c-program-sum-command-line-argument/ <<<< Link >>>>
 // Cmd da calisir 2ser 2ser girilen sayilari toplar ,Yani 2 sayi girilse isler 3 girilsa isler.
#include <stdio.h>
 
int count, s = 0;
void sum(int *, int *);
 
void main(int argc, char *argv[])
{
    int i, ar[argc];
    count = argc;
    for (i = 1; i < argc; i++)
    {
        ar[i - 1] = atoi(argv[i]);
    }
    sum(ar, ar + 1);
    printf("Son %d", s);
}
 
// computes sum of two numbers recursively 
void sum(int  *a, int  * b)
{
    if (count == 1)
        return;
    printf("Count %d\n", count);
    s = s + *a + *b;
    printf("%d\n", s);
    count -= 2;
    sum(a + 2, b + 2);
}
*/

/*
 // C Program to List Files in Directory
 // https://www.sanfoundry.com/c-program-list-files-directory/ <<<< Link >>>>
#include <dirent.h>
#include <stdio.h>
 
int main(void)
{
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
    return(0);
}
*/

/*
 // C Program that Merges Lines Alternatively from 2 Files & Print Result
 // https://www.sanfoundry.com/c-program-merge-alternate-lines/ <<<< Link >>>>
#include<stdio.h>
main()
{
    char file1[10], file2[10];
 
    
    FILE *fptr1, *fptr2, *fptr3;
    fptr1=fopen("gel.txt", "r");             //opening the files in read only mode
    fptr2=fopen("git.txt", "r");
    fptr3=fopen("merge2.txt", "w+");   //opening a new file in write,update mode
    char str1[200];
    char ch1, ch2;
    int n = 0, w = 0;
    while (((ch1=fgetc(fptr1)) != EOF) && ((ch2 = fgetc(fptr2)) != EOF))
    {
        if (ch1 != EOF)             //getting lines in alternately from two files
        {
            ungetc(ch1, fptr1);
            fgets(str1, 199, fptr1);
            fputs(str1, fptr3);
            if (str1[0] != 'n')
                n++;      //counting no. of lines
        }
        if (ch2 != EOF)
        {
            ungetc(ch2, fptr2);
            fgets(str1, 199, fptr2);
            fputs(str1, fptr3);
            if (str1[0] != 'n')
                n++;        //counting no.of lines
        }
    }
    rewind(fptr3);
    while ((ch1 = fgetc(fptr3)) != EOF)       //countig no.of words
    {
        ungetc(ch1, fptr3);
        fscanf(fptr3, "%s", str1);
        if (str1[0] != ' ' || str1[0] != 'n')
            w++;
    }
    fprintf(fptr3, "\n\n number of lines = %d n number of words is = %d\n", n, w - 1);
    //appendig comments in the concatenated file
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);

    FILE *fpp;
    char ch;
 
    fpp = fopen("merge2.txt", "r");
    do
    {
        ch = getc(fpp);
        putchar(ch);
     }
     while (ch != EOF);
     fclose(fpp);

}
*/

/*
 // C Program to Append the Content of File at the end of Another
 // https://www.sanfoundry.com/c-program-to-append-file/ <<< Link >>>
#include <stdio.h>
#include <stdlib.h>
 
main()
{
    FILE *fsring1, *fsring2, *ftemp;
    char ch, file1[20], file2[20], file3[20];
 
    printf("Enter name of first file ");
    gets(file1);
    printf("Enter name of second file ");
    gets(file2);
    printf("Enter name to store merged file ");
    gets(file3);
    fsring1 = fopen(file1, "r");
    fsring2 = fopen(file2, "r");
    if (fsring1 == NULL || fsring2 == NULL)
    {
        perror("Error has occured");
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }
    ftemp = fopen(file3, "w");
    if (ftemp == NULL)
    {
        perror("Error has occures");
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(fsring1)) != EOF)
        fputc(ch, ftemp);
    while ((ch = fgetc(fsring2) ) != EOF)
        fputc(ch, ftemp);
    printf("Two files merged  %s successfully.\n", file3);
    fclose(fsring1);
    fclose(fsring2);
    fclose(ftemp);
    return 0;
}
*/

/*
 // C Program to Find the Number of Lines in a Text File
 // https://www.sanfoundry.com/c-program-number-lines-text-file/ <<<<< Link >>>>>
 
#include <stdio.h>
 
int main()
{
    FILE *fileptr;
    int count_lines = 0;
    char filechar[40], chr;
 
    printf("Enter file name: ");
    scanf("%s", filechar);
    fileptr = fopen(filechar, "r");
   //extract character from file and store in chr
    chr = getc(fileptr);
    while (chr != EOF)
    {
        //Count whenever new line is encountered
        if (chr == 'n')//olur hem boyle if (chr == '\n') bu gusterir toplam neka var
        {
            count_lines = count_lines + 1;
        }
        //take next character from file.
        chr = getc(fileptr);
    }
    fclose(fileptr); //close file.
    printf("There are %d lines in %s  in a file\n", count_lines, filechar);
    return 0;
}
*/

/*
 // C Program Delete a specific Line from a Text File
 // 
#include <stdio.h>
 
int main()
{
    FILE *fileptr1, *fileptr2;
    char filename[40];
    char ch;
    int delete_line, temp = 1;
 
    printf("Enter file name: ");
    scanf("%s", filename);
    //open file in read mode
    fileptr1 = fopen(filename, "r");
    ch = getc(fileptr1);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fileptr1);
    }
    //rewind
    rewind(fileptr1);
    printf(" \n Enter line number of the line to be deleted:");
    scanf("%d", &delete_line);
    //open new file in write mode
    fileptr2 = fopen("replica.c", "w");
    ch = getc(fileptr1);
    while (ch != EOF)
    {
        ch = getc(fileptr1);
        if (ch == '\n')
            temp++;
            //except the line to be deleted
            if (temp != delete_line)
            {
                //copy all lines in file replica.c
                putc(ch, fileptr2);
            }
    }
    fclose(fileptr1);
    fclose(fileptr2);
    remove(filename);
    //rename the file replica.c to original name
    rename("replica.c", filename);
    printf("\n The contents of file after being modified are as follows:\n");
    fileptr1 = fopen(filename, "r");
    ch = getc(fileptr1);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fileptr1);
    }
    fclose(fileptr1);
    return 0;
}
*/

/*
 // C program to illustrate how a file stored on the disk is read
 // https://www.sanfoundry.com/c-program-illustrate-reading-datafile/ <<< Link >>>
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
    FILE *fptr;
    char filename[15];
    char ch;
 
    printf("Enter the filename to be opened \n");
    scanf("%s", filename);
    //  open the file for reading 
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);
}
*/

/*
 // C program to create a file called emp.rec and store information about a person, in terms of his name, age and salary.
 // https://www.sanfoundry.com/c-program-create-file-store-information/ <<<< Link >>>>
#include <stdio.h>
 
void main()
{
    FILE *fptr;
    char name[20];
    int age;
    float salary;
 
    //  open for writing 
    fptr = fopen("emp.rec", "w");
 
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("Enter the name \n");
    scanf("%s", name);
    fprintf(fptr, "Name    = %s\n", name);
    printf("Enter the age\n");
    scanf("%d", &age);
    fprintf(fptr, "Age     = %d\n", age);
    printf("Enter the salary\n");
    scanf("%f", &salary);
    fprintf(fptr, "Salary  = %.2f\n", salary);
    fclose(fptr);
    // burdan aseysine baska okur o dosyay
    FILE *fp;
    char ch;
 
    fp = fopen("emp.rec", "r");
    do
    {
        ch = getc(fp);
        putchar(ch);
     }
     while (ch != EOF);
     fclose(fp);
     return 1;
}
*/

/*
 // C Program to Implement Oddeven Sort 
 // https://www.sanfoundry.com/c-progam-oddeven-sort/ <<<<< Link >>>>>
#include <stdio.h>
#define MAX 7
 
void swap(int *,int *);
void oddeven_sort(int *);
 
void main()
{
    int a[MAX], i;
 
    printf("enter the elements in to the matrix :");
    for (i = 0;i < MAX;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("sorted elements are :\n");
    oddeven_sort(a);
    for (i = 0;i < MAX;i++)
    {
        printf(" %d", a[i]);
    }
}
 
// swaps the elements 
void swap(int * x, int * y)
{
    int temp;
 
    temp = *x;
    *x = *y;
    *y = temp; 
}
 
// sorts the array using oddeven algorithm 
void oddeven_sort(int * x)
{
    int sort = 0, i;
 
    while (!sort)
    {
        sort = 1;
        for (i = 1;i < MAX;i += 2)
        {
            if (x[i] > x[i+1])
            {
                swap(&x[i], &x[i+1]);
                sort = 0;
            }
        }
        for (i = 0;i < MAX - 1;i += 2)
        {
            if (x[i] > x[i + 1])
            {
                swap(&x[i], &x[i + 1]);
                sort = 0;
            }
        }
    }
}
*/

/*
 //  C Program to Implement Pigeonhole Sort
 // https://www.sanfoundry.com/c-program-pigeonhole-sort/ <<< Link >>>
#include <stdio.h>
 
#define MAX 7
 
void pigeonhole_sort(int, int, int *);
void main()
{
    int a[MAX], i, min, max;
    printf("enter the values into the matrix :");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (i = 1; i < MAX; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    pigeonhole_sort(min, max, a);
    printf("Sorted order is :\n");
    for (i = 0; i < MAX; i++)
    {
        printf("%d", a[i]);
    }
}
 
// sorts the array using pigeonhole algorithm 
void pigeonhole_sort(int mi, int ma, int * a)
{
 
    int size, count = 0, i;
    int *current;
    current = a;
    size = ma - mi + 1;
    int holes[size];
    for (i = 0; i < size; i++)
    {
        holes[i] = 0;
    }
    for (i = 0; i < size; i++, current++)
    {
        holes[*current-mi] += 1;
        printf("%d", holes[*current-mi]);
    }
    for (count = 0, current = &a[0]; count < size; count++)
    {
        while (holes[count]--> 0)
        {
            *current++ = count + mi;
        }
    }
}
*/

/*
 // C Program to Sort the Array Elements using Gnome Sort
 // https://www.sanfoundry.com/c-program-gnome-sort/ <<<< Link >>>>
#include <stdio.h>
 
void main()
{
    int i, temp, ar[10], n;
 
    printf("\nenter the elemts number u would like to enter:");
    scanf("%d", &n);
    printf("\nenter the elements to be sorted through gnome sort:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    i = 0;
    while (i < n)
    {
        if (i == 0 || ar[i - 1] <= ar[i])
            i++;
        else
        {
            temp = ar[i-1];
            ar[i - 1] = ar[i];
            ar[i] = temp;
            i = i - 1;
        }
    }
    for (i = 0;i < n;i++)
        printf("%d\t", ar[i]);
}
*/

/*
 // C Program to Implement Insertion Sort
 // https://www.sanfoundry.com/c-program-insertion-sort/ <<<< Link >>>>
#include <stdio.h>
#define MAX 7
 
void insertion_sort(int *);
 
void main()
{
    int a[MAX], i;
 
    printf("enter elements to be sorted:");
    for (i = 0;i < MAX;i++)
    {
        scanf("%d", &a[i]);
    }
    insertion_sort(a);
    printf("sorted elements:\n");
    for (i = 0;i < MAX; i++)
    {
        printf(" %d", a[i]);
    }
}
 
// sorts the input 
void insertion_sort(int * x)
{
    int temp, i, j;
 
    for (i = 1;i < MAX;i++)
    {
        temp = x[i];
        j = i - 1;
        while (temp < x[j] && j >= 0)
        {
            x[j + 1] = x[j];
            j = j - 1;
            printf(" %d ", x[i]);
        }
        x[j + 1] = temp;
    }
}
*/

/*
 // C program to input N numbers and store them in an array. Do a linear search for a given key and report success or failure.
 // https://www.sanfoundry.com/c-program-linear-search/ <<<<< Link >>>>>
#include <stdio.h>
 
void main()
{
    int array[10];
    int i, num, keynum, found = 0;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < num; i++)
    {
        printf("%dn", array[i]);
    }
    printf("Enter the element to be searched \n");
    scanf("%d", &keynum);
    //  Linear search begins 
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Element is present in the array\n");
    else
        printf("Element is not present in the array\n");
}
*/

/*
 // C Program to search for an element in a list using
 // https://www.sanfoundry.com/c-program-search-array-using-recursion/ <<<< Link >>>>
#include <stdio.h>
 
int search(int [], int, int);
int main()
{
    int size, index, key;
    int list[20];
    int count = 0;
    int i;
 
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    index = size;
    printf("Printing the list:\n");
    for (i = 0; i < size; i++)
    {
        list[i] = rand() % size;
        printf("%d\t", list[i]);
    }
    printf("\nEnter the key to search: ");
    scanf("%d", &key);
    while (index > 0)
    {
        index = search(list, index - 1, key);
        // In an array first position is indexed by 0 
        printf("Key found at position: %d\n", index + 1);
        count++;
    }
    if (!count)
        printf("Key not found.\n");
    return 0;
}
int search(int array[], int size, int key)
{
    int location;
    if (array[size] == key)
    {
        return size;
    }
    else if (size == -1)
    {
        return -1;
    }
    else
    {
        return (location = search(array, size - 1, key));
    }
}
*/

/*
 // C program to accept N numbers sorted in ascending order and to search for a given number using binary search. Report success or failure.
 // https://www.sanfoundry.com/c-program-accept-sorted-array-search-using-binary-search/ <<< Link >>>
#include <stdio.h>
 
void main()
{
    int array[10];
    int i, j, num, temp, keynum;
    int low, mid, high;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array elements \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    //  Bubble sorting begins 
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted array is...\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    printf("Enter the element to be searched \n");
    scanf("%d", &keynum);
    //  Binary searching begins 
    low = 1;
    high = num;
    do
    {
        mid = (low + high) / 2;
        if (keynum < array[mid])
            high = mid - 1;
        else if (keynum > array[mid])
            low = mid + 1;
    } while (keynum != array[mid] && low <= high);
    if (keynum == array[mid])
    {
        printf("SEARCH SUCCESSFUL \n");
        printf("%d sayisi %d sirada",keynum,mid+1);
        
    }
    else
    {
        printf("SEARCH FAILED \n");
    }
}
*/

/*
 // C program for SELECTION sort which uses following functions
 // a) To find maximum of elements
 // b) To swap two elements
 // https://www.sanfoundry.com/c-program-implement-selection-sort-method-using-functions/ <<<< Link >>>>
#include <stdio.h>
 
int findmax(int b[10], int k);
void exchang(int b[10], int k);
void main()
{
    int array[10];
    int i, j, n, temp;
 
    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("Enter the elements one by one \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array elements \n");
    for (i = 0; i < n ; i++)
    {
        printf("%d\n", array[i]);
    }
    //  Selection sorting begins 
    exchang(array, n);
    printf("Sorted array is...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
}
//  function to find the maximum value 
int findmax(int b[10], int k)
{
    int max = 0, j;
    for (j = 1; j <= k; j++)
    {
        if (b[j] > b[max])
        {
            max = j;
        }
    }
    return(max);
}
void exchang(int b[10], int k)
{
    int  temp, big, j;
    for (j = k - 1; j >= 1; j--)
    {
        big = findmax(b, j);
        temp = b[big];
        b[big] = b[j];
        b[j] = temp;
    }
    return;
}
*/

/*
 // C Program to Implement Selection Sort Recursively
 // https://www.sanfoundry.com/c-program-selection-sort-using-recursion/ <<<< Link >>>>
#include <stdio.h>
 
void selection(int [], int, int, int, int);
 
int main()
{
    int list[30], size, temp, i, j;
 
    printf("Enter the size of the list: ");
    scanf("%d", &size);
    printf("Enter the elements in list:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
    selection(list, 0, 0, size, 1);
    printf("The sorted list in ascending order is\n");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", list[i]);
    }
 
    return 0;
}
 
void selection(int list[], int i, int j, int size, int flag)
{
    int temp;
 
    if (i < size - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < size)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
            selection(list, i, j + 1, size, 0);
        }
        selection(list, i + 1, 0, size, 1);
    }
}
*/

/*
     // C program to read N names, store them in the form of an array
     // and sort them in alphabetical order. Output the given names and the sorted names in two columns side by side.
     // https://www.sanfoundry.com/c-program-sort-names-alphabetical-order/ <<< Link >>>
     // https://www.sanfoundry.com/c-programming-examples-searching-sorting/ <<< Bu link altinda >>>
 
    #include <stdio.h>
    #include <string.h>
    void main()
    {
 
        char name[10][8], tname[10][8], temp[8];
        int i, j, n;
 
        printf("Enter the value of n \n");
        scanf("%d", &n);
        printf("Enter %d names n", n);
 
        for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }
 
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
        //Bir sira alttan kasti yaptim bakajm ne cikacak
 		printf("%d\n", strcmp(name[i], name[j]));
        printf("\n----------------------------------------\n");
        printf("Input NamestSorted names\n");
        printf("------------------------------------------\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("%s\t\t%s\n", tname[i], name[i]);
        }
 
        printf("------------------------------------------\n");
 
    }
*/

/*
 // C program to sort N numbers in ascending order using Bubble sort and print both the given and the sorted array
 // https://www.sanfoundry.com/c-program-sorting-bubble-sort/ <<<< Link >>>>
#include <stdio.h>
#define MAXSIZE 10
 
void main()
{
    int array[MAXSIZE];
    int i, j, num, temp;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    //   Bubble sorting begins 
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted array is...\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
}
*/

/*
 // C Program To Find the Smallest and Largest Elements 
 // in the Binary Search Tree
 //                    40
 //                   /  \
 //                  20   60
 //                 /  \   \
 //                10  30   80
 //                         \
 //                         90    
 //            (Given Binary Search Tree)    
 //
#include <stdio.h>
#include <stdlib.h>
 
struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root  =  NULL;
 
typedef struct btnode N;
N* new(int);
void create();
void preorder(N *t);
void min_max(N *t);
 
void main()
{
    int choice;
 
    create();
    while (1)
    {
        printf("Enter the choice\n");
        printf("1-Display : 2-Min & Max element : 3-Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
 
        case 1:
            printf("preorder of tree elements\n");
            preorder(root);
            printf("\n");
            break;
        case 2:
            min_max(root);
            break;
        case 3:
            exit(0);
        default:
            printf("Enter the right choice\n");
        }
    }
}
 
// creating temporary node 
N* new(int data)
{
    N* temp = (N*)malloc(sizeof(N));
    temp->value = data;
    temp->l = NULL;
    temp->r = NULL;
 
    return(temp);
}
 
// Creating the binary search tree 
void create()
{
    root = new(40);
    root->l = new(20);
    root->r = new(60);
    root->l->l = new(10);
    root->l->r = new(30);
    root->r->r = new(80);
    root->r->r->r = new(90);
}
 
// To display preorder traversal of the tree 
void preorder(N *temp)
{
        printf("%d->", temp->value);
        if (temp->l != NULL)
        preorder(temp->l);
        if (temp->r != NULL)
        preorder(temp->r);
}
 
// TO find the minimum and maximum values in the given tree 
void min_max(N *temp)
{
    while (temp->l != NULL)
        temp = temp->l;
    printf("Minimum value  = %d\n", temp->value);
    temp = root;
    while (temp->r != NULL)
        temp = temp->r;
    printf("Maximum value  = %d\n", temp->value);
}
*/

/*
//This is a C Program to Implement two Stacks using a Single Array & Check for Overflow & Underflow
#include <stdio.h>
#define SIZE 10
 
 
int ar[SIZE];
int top1 = -1;
int top2 = SIZE;
 
//Functions to push data
void push_stack1 (int data)
{
  if (top1 < top2 - 1)
  {
    ar[++top1] = data;
  }
  else
  {
    printf ("Stack Full! Cannot Push\n");
  }
}
void push_stack2 (int data)
{
  if (top1 < top2 - 1)
  {
    ar[--top2] = data; 
  }
  else
  {
    printf ("Stack Full! Cannot Push\n");
  }
}
 
//Functions to pop data
void pop_stack1 ()
{
  if (top1 >= 0)
  {
    int popped_value = ar[top1--];
    printf ("%d is being popped from Stack 1\n", popped_value);
  }
  else
  {
    printf ("Stack Empty! Cannot Pop\n");
  }
}
void pop_stack2 ()
{
  if (top2 < SIZE)
  {
    int popped_value = ar[top2++];
    printf ("%d is being popped from Stack 2\n", popped_value);
  }
  else
  {
    printf ("Stack Empty! Cannot Pop\n");
  }
}
 
//Functions to Print Stack 1 and Stack 2
void print_stack1 ()
{
  int i;
  for (i = top1; i >= 0; --i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}
void print_stack2 ()
{
  int i;
  for (i = top2; i < SIZE; ++i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}
 
int main()
{
  int ar[SIZE];
  int i;
  int num_of_ele;
 
  printf ("We can push a total of 10 values\n");
 
  //Number of elements pushed in stack 1 is 6
  //Number of elements pushed in stack 2 is 4
 
  for (i = 1; i <= 6; ++i)
  {
    push_stack1 (i);
    printf ("Value Pushed in Stack 1 is %d\n", i);
  }
  for (i = 1; i <= 4; ++i)
  {
    push_stack2 (i);
    printf ("Value Pushed in Stack 2 is %d\n", i);
  }
 
  //Print Both Stacks
  print_stack1 ();
  print_stack2 ();
 
  //Pushing on Stack Full
  printf ("Pushing Value in Stack 1 is %d\n", 11);
  push_stack1 (11);
 
  //Popping All Elements From Stack 1
  num_of_ele = top1 + 1;
  while (num_of_ele)
  {
    pop_stack1 ();
    --num_of_ele;
  }
 
  //Trying to Pop From Empty Stack
  pop_stack1 ();
 
  return 0;
}
*/

/*
 // C program to implement stack. Stack is a LIFO data structure. Stack operations: PUSH(insert operation), POP(Delete operation) and Display stack.
 // https://www.sanfoundry.com/c-program-stack-implementation/ <<<< Link >>>>
#include <stdio.h>
#define MAXSIZE 5
 
struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;
 
void push(void);
int  pop(void);
void display(void);
 
void main ()
{
    int choice;
    int option = 1;
    s.top = -1;
 
    printf ("STACK OPERATION\n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    EXIT           \n");
        printf ("------------------------------------------\n");
 
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }
        fflush (stdin);
        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf    ("%d", &option);
    }
}
//  Function to add an element to the stack 
void push ()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}
//  Function to delete an element from the stack 
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Stack is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("poped element is = %dn", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}
//  Function to display the status of the stack 
void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Stack is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}
*/

/*
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct lnode{
        int data;
        struct lnode * next;        
};
struct lnode *iter=NULL;

void push(int data){
     if(iter==NULL){
                   // printf("yeni node bos stack");
                    iter = (struct lnode * ) malloc(sizeof(struct lnode));
                    iter->next=NULL;
     }
    // printf("yeni node dolu stack");
     iter->data = data;
     struct lnode * yeni = (struct lnode * )malloc(sizeof(struct lnode));
     yeni->next = iter;
     iter=yeni;
}
int pop(){
    if(iter->next==NULL)
                  return -1;
 int result = iter->next->data;
 struct lnode *temp = iter;
 iter=iter->next;
 free(temp);
 return result;   
}
void printStack(){
     printf("\n");
     struct lnode *temp = iter;
     while(temp!=NULL){
                       printf("%d _ ",temp->data);
                       temp=temp->next;
     }
}
int main(){
 push(10);
 printStack();
 push(20);
  printStack();
  push(30);
   printStack();
   printf("\npop> %d",pop());
     printStack();
      printf("\npop> %d",pop());
        printStack();
       // push(50);
        printStack();
         printf("\npop> %d",pop());
           printStack();
            printf("\npop> %d",pop());
              printStack();
  getch();
  
  return 0;
    
    
}
*/

/*
// https://www.youtube.com/watch?v=xQYc2jqYq7s&t=19s <<<<<< Link >>>>>>
// 																	**************************************************************************************************************************
#include <stdio.h>
#include <stdlib.h>

struct n{
	int x;
	struct n * next;
	struct n * prev;
};
typedef struct n node;

void bastir(node *r){
	while(r!=NULL){
		printf("%d ",r->x);
		r=r->next;
	}
	printf("\n");
}
node * ekleSirali(node * r, int x){
	if(r==NULL){//linklist bossa
		r=(node*)malloc(sizeof(node));
		r->next= NULL;
		r->prev= NULL;
		r->x = x;
		return r;
	}
	if(r->x > x){ // ilk elemandan kucuk durumu
	// r degisiyor
		node * temp = (node*)malloc(sizeof(node));
		temp -> x = x;
		temp -> next = r;
		r->prev= temp;
		return temp;
	}
	node * iter = r;
	while (iter -> next != NULL && iter ->next-> x < x){
		iter= iter -> next;
	}
	node * temp = (node*)malloc(sizeof(node));
	temp -> next = iter -> next;
	iter -> next = temp;
	temp -> prev = iter;
	if(temp->next != NULL)
		temp->next->prev = temp;
	temp -> x = x;
	return r;
}
node * sil(node *r,int x){
	node *temp;
	node *iter =r;
	if(r->x == x){
		temp = r;
		r = r->next;
		free(temp);
		return r;
	}
	while (iter -> next != NULL && iter ->next-> x != x){
		iter= iter -> next;
	}
	if(iter->next == NULL){
		printf("sayi bulunamadi\n");
		return r;
	}
	temp = iter->next;
	iter->next = iter ->next->next;
	free (temp);
	if (iter->next != NULL)
		iter->next->prev = iter;
	return r;
}
int main(){
	node * root;
	root = NULL;
	int y,a,s,i,n;
	int basSoru;
	printf("Sayilari giriniz\n");
	scanf("%d",&y);//4
	scanf("%d",&a);
	scanf("%d",&s);
	scanf("%d",&i);
	scanf("%d",&n);
	root = ekleSirali(root,y);
	root = ekleSirali(root,a);
	root = ekleSirali(root,s);
	root = ekleSirali(root,i);
	root = ekleSirali(root,n);
	bastir(root);
	printf("Silmek istiyormusunuz\n1 Evet 2 Hayir\n");
	scanf("%d",&basSoru);
	if (basSoru==1){
		root = sil(root,n);
		bastir(root);
		root = sil(root,9);
		bastir(root);
		root = sil(root,s);
		bastir(root);
		root = sil(root,i);
		bastir(root);
		printf("Prijatno,Se gledame.\n");
	}
	else
		printf("Gorusmek uzere.\n");
		
}
*/
/*
// https://www.youtube.com/watch?v=P976s2Qbpc4&t=11s <<<< Link >>>>
#include <stdio.h>
#include <stdlib.h>

struct n{
 int x;
 struct n * next;
};

typedef struct n node;

void bastir( node * r){
 while (r != NULL){
  printf("%d ", r->x);
  r = r -> next;
 }
 printf("\n");
}

void ekle( node * r, int x){
 while( r -> next != NULL){
  r =r -> next;
 }
 r -> next = ( node *) malloc (sizeof (node ) );
 r -> next -> x = x;
 r -> next -> next = NULL;
 
}

node * ekleSirali ( node * r, int x){
 if( r == NULL){ //link list božsa
  r = (node *) malloc ( sizeof ( node) );
  r -> next = NULL;
  r -> x = x;
  return r;
 }
 if(r -> x > x){ // ilk elemandan küeük durumu
  // root dešižiyor
  node * temp = ( node * ) malloc ( sizeof ( node ) );
  temp -> x = x;
  temp -> next = r;
  r = temp;
  return temp;
 }
 node * iter = r;
 while( iter -> next != NULL && iter -> next -> x < x ){
  iter = iter -> next;
 }

 node * temp = (node*)malloc(sizeof(node));
 temp->next = iter->next;
 iter->next = temp;
 temp->x = x;
 return r;
 
}

node * sil(node *r, int x){
 node *temp;
 node *iter = r;
 if( r->x == x){
  temp = r;
  r = r->next;
  free (temp);
  return r;
 }
 
 while ( iter->next != NULL && iter->next->x != x){
  iter = iter->next;
 }
 if ( iter->next == NULL){
  printf( "Sayi bulunamadi!\n" );
  return r;
 }
 temp = iter->next;
 iter->next = iter->next->next; // ya da iter->next = temp->next
 free (temp);
 return r;
}

int main ()
{
 
 node * root;
 root = NULL;
 
 root = ekleSirali( root, 400);
 root = ekleSirali( root, 40);
 root = ekleSirali( root, 4);
 root = ekleSirali( root, 450);
 root = ekleSirali( root, 50);
 bastir(root);
 root = sil( root, 50);
 bastir(root);
 root = sil( root, 999);
 bastir(root);
 root = sil( root, 4);
 bastir(root);
 root = sil( root, 450);
 bastir(root);
}
*/


/*
 // C Program to Interchange the two Adjacent Nodes given a circular Linked List 
 // https://www.sanfoundry.com/c-program-interchange-two-adjacent-nodes-given-circular-linked-list/ <<<<< Link >>>>>
 
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int num;
    struct node *next;
};
 
void create(struct node **);
void tocircular(struct node **);
void release(struct node **);
void change(struct node **, int);
void display(struct node *);
 
int main()
{
    struct node *p = NULL;
    int num;
 
    printf("Enter data into the list\n");
    create(&p);
    tocircular(&p);
    printf("Circular list generated\n");
    display(p);
    printf("Enter node position to interchange with it's adjacent: ");
    scanf("%d", &num);
    change(&p, num - 2);
    printf("After interchanging, ");
    display(p);
    release (&p);
 
    return 0;
}
 
void tocircular(struct node **p)
{
    struct node *rear;
 
    rear = *p;
    while (rear->next != NULL)
    {
        rear = rear->next;
    }
    rear->next = *p;
    //After this the singly linked list is now circular
}
 
void change(struct node **head, int num)
{
    struct node *p, *q, *r;
 
    p = q = r = *head;
    p = p->next->next;
    q = q->next;
    while (num != 0)
    {
        r = q;
        q = p;
        p = p->next;
        num--;
    }
    r->next = p;
    q->next = p->next;
    p->next = q;   
}
 
void create(struct node **head)
{
    int c, ch;
    struct node *temp, *rear;
 
    do
    {
        printf("Enter number: ");
        scanf("%d", &c);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = c;
        temp->next = NULL;
        if (*head == NULL)
        {
            *head = temp;
        }
        else
        {
            rear->next = temp;
        }
        rear = temp;
        printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}
 
void display(struct node *head)
{
    struct node *temp = head;
    printf("Displaying the list elements\n");
    printf("%d\t", temp->num);
    temp = temp->next;
    while (head != temp)
    {
        printf("%d\t", temp->num);
        temp = temp->next;
    }
    printf("\n");
}
 
void release(struct node **head)
{
    struct node *temp = *head;
    temp = temp->next;
    (*head)->next = NULL;
    (*head) = temp->next;
    while ((*head) != NULL)
    {
        free(temp);
        temp = *head;
        (*head) = (*head)->next;
    }
}
*/

/*
 // C Program to Print Middle most Node of a Linked List 
 // https://www.sanfoundry.com/c-program-print-middle-node-linked-list/ <<<<< Link >>>>>
 
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
};
 
void create(struct node **);
void middlenode(struct node *);
void release(struct node **);
 
int main()
{
    struct node *p = NULL;
 
    printf("Enter data into the list\n");
    create(&p);
    middlenode(p);
    release (&p);
 
    return 0;
}
 
void middlenode(struct node *head)
{
    struct node *p, *q;
    int flag = 0;
 
    q = p = head;
    // for every two hops of q, one hop for p
    while (q->next != NULL)
    {
        q = q->next;
        if (flag)
        {
            p = p->next;
        }
        flag = !flag;
        printf("!flag %d\n", !flag);
    }
    printf("flag %d\n", flag);
    if (flag)
    {
        printf("List contains even number of nodes\nThe middle two node's values are: %d  %d\n", p->next->num, p->num);
    }
    else
    {
        printf("The middle node of the list is: %d\n", p->num);
    }
}
 
void create(struct node **head)
{
    int c, ch;
    struct node *temp;
 
    do
    {
        printf("Enter number: ");
        scanf("%d", &c);
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = c;
        temp->next = *head;
        *head = temp;
        printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("\n");
}
 
void release(struct node **head)
{
    struct node *temp = *head;
    *head = (*head)->next;
    while ((*head) != NULL)
    {
        free(temp);
        temp = *head;
        (*head) = (*head)->next;
    }
}
*/

/*
 // C Program to Check whether a Singly Linked List is a Palindrome 
 
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int num;
    struct node *next;
};
 
int create(struct node **);
int palin_check (struct node *, int);
void release(struct node **);
 
int main()
{
    struct node *p = NULL;
    int result, count;
 
    printf("Enter data into the list\n");
    count = create(&p);
    result = palin_check(p, count);
    if (result == 1)
    {
        printf("The linked list is a palindrome.\n");
    }
    else
    {
        printf("The linked list is not a palindrome.\n");
    }
    release (&p);
 
    return 0;
}
 
int palin_check (struct node *p, int count)
{
    int i = 0, j;
    struct node *front, *rear;
 
    while (i != count / 2)
    {
        front = rear = p;
        for (j = 0; j < i; j++)
        {
            front = front->next;
        }
        for (j = 0; j < count - (i + 1); j++)
        {
            rear = rear->next;
        }
        if (front->num != rear->num)
        {
            return 0;
        }
        else
        {
            i++;
        }
    }
 
    return 1;
}
 
int create (struct node **head)
{
    int c, ch, count = 0;
    struct node *temp;
 
    do
    {
        printf("Enter number: ");
        scanf("%d", &c);
        count++;
        temp = (struct node *)malloc(sizeof(struct node));
        temp->num = c;
        temp->next = *head;
        *head = temp;
        printf("Do you wish to continue [1/0]: ");
        scanf("%d", &ch);
    }while (ch != 0);
    printf("\n");
 
    return count;
}
 
void release (struct node **head)
{
    struct node *temp = *head;
 
    while ((*head) != NULL)
    {
        (*head) = (*head)->next;
        free(temp);
        temp = *head;
    }
}
*/

/*
// https://www.youtube.com/watch?v=wDAf9Er6Qq8 <<<<< Link >>>>>

#include <stdio.h>
#include <stdlib.h>
struct n{
	int x;
	struct n * next;
};
typedef struct n node;

void bastir(node *r){
	while(r!=NULL){
		printf("%d ",r->x);
		r=r->next;
	}
}
void ekle(node *r, int x){
	while(r->next!=NULL){
		r = r -> next;
	}
	r->next = (node*)malloc(sizeof(node));
	r->next->x = x;
	r->next->next = NULL;
}
node * ekleSirali(node * r, int x){
	if(r==NULL){//linklist bossa
		r=(node*)malloc(sizeof(node));
		r->next= NULL;
		r->x = x;
		return r;
	}
	if(r->x > x){ // ilk elemandan kucuk durumu
	// r degisiyor
		node * temp = (node*)malloc(sizeof(node));
		temp -> x = x;
		temp -> next = r;
		return temp;
	}
	node * iter = r;
	while (iter -> next != NULL && iter ->next-> x < x){
		iter= iter -> next;
	}
	node * temp = (node*)malloc(sizeof(node));
	temp -> next = iter -> next;
	iter -> next = temp;
	temp -> x = x;
	return r;
}
int main(){
	node * root;
	root = NULL;
	int y;
	int a;
	int s;
	int i;
	int n;
	scanf("%d",&y);
	scanf("%d",&a);
	scanf("%d",&s);
	scanf("%d",&i);
	scanf("%d",&n);
	root = ekleSirali(root,y);
	root = ekleSirali(root,a);
	root = ekleSirali(root,s);
	root = ekleSirali(root,i);
	root = ekleSirali(root,n);
	bastir(root);
}
*/

/*
 // C program to create a linked list and display the elements in the list
 // https://www.sanfoundry.com/c-program-create-linked-list-display-elements/ <<<<< link >>>>>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
 
void main()
{
    struct node
    {
        int num;
        struct node *ptr;
    };
    typedef struct node NODE;
 
    NODE *head, *first, *temp = 0;
    int count = 0;
    int choice = 1;
    first = 0;
 
    while (choice)
    {
        head  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &head-> num);
        if (first != 0)
        {
            temp->ptr = head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &choice);
 
    }
    temp->ptr = 0;
    //  reset temp to the beginning 
    temp = first;
    printf("\n status of the linked list is\n");
    while (temp != 0)
    {
        printf("%d=>", temp->num);
        count++;
        temp = temp -> ptr;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);
}
*/

/*
 // C Program to Count Number of bits set to 0 in a Integer x
 // https://www.sanfoundry.com/c-program-count-bits-set-0/ <<< Link >>>
#include <stdio.h>
#define NUM_BITS_INT (8*sizeof(int))
 
// Budur tevekeli galiba (bir sira alttan)
//int count_unset(int);
 
int main()
{
    int i, num, snum, res, count = 0;
 
    printf("\nEnter the number");
    scanf("%d", &num);
     // Check each bit whether the bit is set or unset Uses >> and & operator for checking individual bits
     
    for (i = 0;i <= NUM_BITS_INT;i++)
    {
        snum = num >> i;
        printf("snum  -------- %d\n", snum);
        res = snum & 1;
        printf("res  -------- %d\n", res);
        if (res == 0)
            count++;
    }
    printf("%d", count);
}
*/

/*
 // C Program to find the Highest Bit Set for any given Integer
 // https://www.sanfoundry.com/c-program-highest-bit-set-integer/
#include <stdio.h>
#define NUM_BITS sizeof(int)*8
 
int highest_bit_set(int);
void display(int);
int i = NUM_BITS;
 
void main()
{
    int num, pos;
 
    printf("enter the number:");
    scanf("%d", &num);
 
    display(num);
    pos = highest_bit_set(num);
    printf("\nthe position of the highest bit set is %d", pos);
}
// RETURNS THE POSITION 
int highest_bit_set(int num)
{
    int count = 0;
    while (num >> 1 != 0)
    {
        count++;
        num = num >> 1;
    }
    return(count);
}
// DISPLAYS THE NUMBER IN BINARY REPRESENTATION 
void display(int num)
{
    int c;
    c = num & 1;
    if (i > 0)
    {
        i--;
        display(num >> 1);
    }
    printf("%d", c);
}
*/

/*
 // C Program to Count the Number of Trailing Zeroes in Integer
 // https://www.sanfoundry.com/c-program-count-trailing-zeroes/ <<< Link >>>
#include <stdio.h>
 
void main()
{
    int j = 31, i, count = 0;
    unsigned int num;
    int b[32] = {0};
 
    printf("enter the number:");
    scanf("%d", &num);
    while (num != 0)
    {
        if (num & 1 == 1)
        {
            break;
        }
        else
        {
            count++;
            num = num >> 1;
 
        }
    }
    printf("\n%d", count);
}
*/

/* 
 // C Program to next higher value of n with same 1's
 // https://www.sanfoundry.com/c-program-next-higher-value-1s/
#define NUM_BITS_INT 32
#include <stdio.h>
int newcount(int);
 
void main()
{
    int count1 = 0, k = 0, j, t, n, bit, i = 1, count = 0;
 
    printf("Enter a number : ");
    scanf("%d", &n);
    t = n;
    while(t != 0)
    {
        bit = t & 0x80000000;
        if (bit == -0x80000000) 
        {
            bit = 1;  
        }
        if (bit == 1) 
            count++;
        t = t << 1;
 
    }
    for (k = n + 1;;k++)
    {
        count1 = newcount(k);    
        if (count1 == count)
        {
            printf("The next highest number is : %d ", k);
            break;
        }
    }
}
 
// To count the no. of 1's in the no. 
int newcount(int k)
{
    int bit, count = 0;
    while (k != 0)
    {
        bit = k & 0x80000000;
        if (bit == -0x80000000)
        {
            bit = 1;
        }
        if (bit == 1)    
            count++;
        k = k << 1;
    }
    return(count);
}
*/

/*
 // C Program to check if all the bits of a given integer is one(1)
 // https://www.sanfoundry.com/c-program-all-bits-one/
#include <stdio.h>
 
int all_bits_one(int);
int count = 0;
 
void main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    num++;
    all_bits_one(num);
    if (count)
    {
        printf("false");
    }
    else
    {
        printf("true");
    }
}
 
// checks whether all bits are 1 
int all_bits_one(int x)
{    
    if (x == 1)
        return 0;
    if (x % 2 != 0)
    {
        count++;
    }
    else
    {
        x = x / 2;
        all_bits_one(x);
    }
}
*/

/*
 // C Program to Print the Range 
 // https://www.sanfoundry.com/c-program-print-range/ <<< Link >>>
#include <stdio.h>
#define SIZE(x) sizeof(x)*8
 
void signed_one(int);
void unsigned_one(int);
 
void main()
{
    printf("\nrange of int");
    signed_one(SIZE(int));    
    printf("\nrange of unsigned int");
    unsigned_one(SIZE(unsigned int));
    printf("\nrange of char");
    signed_one(SIZE(char));
    printf("\nrange of unsigned char");
    unsigned_one(SIZE(unsigned char));
    printf("\nrange of short");
    signed_one(SIZE(short));
    printf("\nrange of unsigned short");
    unsigned_one(SIZE(unsigned short));
    printf("\nsize %d",(SIZE(int)));
 	printf("\nsize %d",(SIZE(char)));
}
// RETURNS THE RANGE SIGNED
void signed_one(int count)
{
    int min, max, pro;
    pro = 1;
    while (count != 1)
    {
        pro = pro << 1;
        count--;
        printf("\npro ---- %d ", pro);
        
    }
    min = ~pro;
    min = min + 1;
    max = pro - 1;
    printf("\n%d to %d", min, max);
}    
// RETURNS THE RANGE UNSIGNED 
void unsigned_one(int count)
{
    unsigned int min, max, pro = 1;
 
    while (count != 0)
    {
        pro = pro << 1;
        count--;
    }
    min = 0;
    max = pro - 1;
    printf("\n%u to %u", min, max);
}
*/

/*
 // C Program that uses Function to return MSB position of unsigned Integer
 // https://www.sanfoundry.com/c-program-msb-position-unsigned-integer/ <<< Link >>>
#include <stdio.h>
#define NUM_BITS_INT 32
int int_msb_position(int n);
 
void main()
{
    int n, pos;
 
    printf("Enter a number : ");
    scanf("%d", &n);
    pos = int_msb_position(n);
    printf("Pos :%d  ",pos);
    printf("\nPosition of MSB bit = %d\n", NUM_BITS_INT - (pos + 1));
}
 
// Function to find the MSB bit position 
int int_msb_position(int n)
{
    int i = 0, bit;
    while (i < NUM_BITS_INT)
    {
        bit = n & 0x80000000;
        printf("Sayi : %d \n",bit);
        if (bit == -0x80000000)
           {
            bit = 1;
        }
           if (bit == 1) 
            break;
        n = n << 1;
        i++;
    }
    return i;
}
*/

/*
 // C Program to round floor of integer to next lower power of 2
 // https://www.sanfoundry.com/c-program-floor-lower-power-2/ <<< Link >>>
#include <stdio.h>
#define NUM_BITS_INT 32
int count = 0;
 
void main()
{
    int temp, n, bit, i = 0;
 
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    printf("%d\n", temp);
    printf("%d\n", temp<<1);
    printf("%d\n",  temp & 0x80000000);
    printf("%d\n", temp<<1);
    while (i < NUM_BITS_INT)
    {
        bit = temp & 0x80000000;
        if (bit == -0x80000000) 
        {
            bit = 1;
        }
        printf("%d", bit);
        temp = temp << 1;
        i++;
    }
}
*/

/*
 // C Program to Check whether the given Integer has an Alternate Pattern 
 // https://www.sanfoundry.com/c-program-integer-alternate-pattern/ <<< Link >>>
#include <stdio.h>
 
void main()
{
    int num, x, y, count = 0;
 
    printf("enter the number:");
    scanf("%d", &num);
    x = num << 1;
    printf("X %d \n",x);
    y = x ^ num;
    printf("Y1 %d \n",y);
    y = y + 1;
 	printf("Y %d \n",y);
 	printf("Y/2 %d \n",y/2);
    // Checks if the number is in powers of 2 
    while ((y / 2) != 0)
    {
        if (y % 2 != 0)
        {
            count++;
            break;
        }
        else
        {
            y = y / 2;
        }
    }
    printf("Y2 %d \n",y);
    printf("count %d \n",count);
    if (count)
    {
        printf("false");
    }
    else
    {
        printf("true");
    }
}
*/

/* 
 // C Program To Find the Sum of ASCII values of All Characters in a given String
 // https://www.sanfoundry.com/c-program-sum-ascii-string/ <<< Link >>>
#include <stdio.h>
#include <string.h>
 
void main()
{
    int sum = 0, i, len;
    char string1[100];
 
    printf("Enter the string : ");
    scanf("%[^\n]s", string1);
        len = strlen(string1);
    for (i = 0; i < len; i++)
    {
        sum = sum + string1[i];
    }
    printf("\nSum of all characters : %d ",sum);
}
*/
/*
 // C program that takes input as 2323 and gives output as 2332. ie.the new number should be greater than the previous number but should have the same digits
 // https://www.sanfoundry.com/c-program-greater-number-same-digit/ <<< Link >>>
#include <stdio.h>
#include <math.h>
 
int evaluate(int [], int);
int find(int);
 
int main()
{
    int num, result;
 
    printf("Enter a number: ");
    scanf("%d", &num);
    result = find(num);
    if (result)
    {
        printf("The number greater than %d and made of same digits is %d.\n", num, result);
    }
    else
    {
        printf("No higher value possible. Either all numbers are same or the digits of the numbers entered are in decreasing order.\n");
    }
 
    return 0;
}
 
int find(int num)
{
    int digit[20];
    int i = 0, len = 0, n, temp;
 
    n = num;
    while (n != 0)
    {
        digit[i] = n % 10;
        n = n / 10;
        i++;
    }
    len = i;
    for (i = 0; i < len - 1; i++)
    {
        if (digit[i] > digit[i + 1])
        {
            temp = digit[i];
            digit[i] = digit[i + 1];
            digit[i + 1] = temp;
 
            return (evaluate(digit, len));
        }
    }
 
    return 0;
}
 
int evaluate(int digit[], int len)
{
    int i, num = 0;
 
    for (i = 0; i < len; i++)
    {
        num += digit[i] * pow(10, i);
    }
 
    return num;
}
*/

/*
 // C Program which Converts an Integer to String & vice-versa
 // https://www.sanfoundry.com/c-program-integer-to-string-vice-versa/ <<< Link >>>
#include <stdio.h>
#include <string.h>
#include <math.h>
 
void tostring(char [], int);
int toint(char []);
 
int main()
{
    char str[10];
    int num, result;
 
    printf("Enter a number: ");
    scanf("%d", &num);
    tostring(str, num);
    printf("Number converted to string: %s\n", str);
    result = toint(str);
    printf("Number converted back to integer: %d\n", result);
 
    return 0;
}
 
void tostring(char str[], int num)
{
    int i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}
 
int toint(char str[])
{
    int len = strlen(str);
    int i, num = 0;
 
    for (i = 0; i < len; i++)
    {
        num = num + ((str[len - (i + 1)] - '0') * pow(10, i));
    }
 
   return num;
}
*/

/*
 // C Program to Input 2 Binary Strings and Print their Binary Sum 
 // https://www.sanfoundry.com/c-program-binary-sum-string/ <<< Link >>>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int bin_verify(char []);
void sum(char [], char [], char []);
 
int main()
{
    char bin1[33], bin2[33], result[33];
    int len1, len2, check;
 
    printf("Enter binary number 1: ");
    scanf("%s", bin1);
    printf("Enter binary number 2: ");
    scanf("%s", bin2);
    check = bin_verify(bin1);
    if (check)
    {
        printf("Invalid binary number %s.\n", bin1);
        exit(0);
    }
    check = bin_verify(bin2);
    if (check)
    {
        printf("Invalid binary number %s.\n", bin2);
        exit(0);
    }
    sum(bin1, bin2, result);
    printf("%s + %s = %s\n", bin1, bin2, result);
 
    return 0;
}
 
int bin_verify(char str[])
{
    int i;
 
    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] - '0' != 1 ) && (str[i] - '0' != 0))
        {
            return 1;
        }
    }
 
    return 0;
}
 
void sum(char bin1[], char bin2[], char result[])
{
    int i = strlen(bin1) - 1;
    int j = strlen(bin2) - 1;
    int carry = 0, temp, num1, num2;
 
    while (i > -1 && j > -1)
    {
        num1 = bin1[i] - '0';
        num2 = bin2[j] - '0';
        temp = num1 + num2 + carry;
        if (temp / 2 == 1)
        {
            carry = 1;
            temp %= 2;
        }
        if (i > j)
        {
            result[i + 1] = temp + '0';
            result[strlen(bin1) + 1] = '\0';
        }
        else
        {
            result[j +1] = temp + '0';
            result[strlen(bin2) + 1] = '\0';
        }
        i--;
        j--;
    }
    while (i > -1)
    {
        temp = bin1[i] + carry - '0';
        if (temp / 2 == 1)
        {
            carry = 1;
            temp %= 2;
        }
        result[i + 1] = temp + '0';
        i--;
    }
    while (j > -1)
    {
        temp = bin2[j] + carry - '0';
        if (temp / 2 == 1)
        {
            carry = 1;
            temp %= 2;
        }
        result[j + 1] = temp + '0';
        j--;
    }
    if (carry)
    {
        result[0] = '1';
    }
    else
    {
        result[0] = '0';
    }
}
*/

/*
 // C Program to Determine if One String is a Circular Permutation of Another String 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define CHAR_SIZE 26
 
void alphacheck(char *, int []);
void create(char [], char [], int[]);
 
int main()
{
    char str1[50], str2[50];
    int a1[CHAR_SIZE] = {0};
    char str2_rem[50];
 
    printf("Enter string1: ");
    scanf("%s", str1);
    printf("Enter string2: ");
    scanf("%s", str2);
    alphacheck(str1, a1);
    create(str2_rem, str2, a1);
    printf("On removing characters from second string we get: %s\n", str2_rem);
 
    return 0;
}
 
void alphacheck(char *str, int a[])
{
    int i, index;
 
    for (i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
        index = str[i] - 'a';
        printf("Index'in degeri %d ",index);
        if (!a[index])
        {
            a[index] = 1;
        }
    }
    printf("\n");
}
 
void create(char str_rem[], char str[], int list[])
{
    int i, j = 0, index;
 
    for (i = 0; i < strlen(str); i++)
    {
        index = str[i] - 'a';
        if (!list[index])
        {
            str_rem[j++] = str[i];
        }
    }
    str_rem[j] = '\0';
}
*/
/* 
 // C Program To Count the Occurrence of a Substring in String 
 // https://www.sanfoundry.com/c-program-count-occurence-substring/ <<< Link >>>
#include <stdio.h>
#include <string.h>
 
char str[100], sub[100];
int count = 0, count1 = 0;
 
void main()
{
    int i, j, l, l1, l2;
 
    printf("\nEnter a string : ");
    scanf("%[^\n]s", str);
 
    l1 = strlen(str);
 
    printf("\nEnter a substring : ");
    scanf(" %[^\n]s", sub);
 
    l2 = strlen(sub);
 
    for (i = 0; i <= l1;)
    {
        j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("%s occurs %d times in %s", sub, count1, str);
}
*/

/*
 // C Program to Find the Most/Least Repeated Character in the String
 // https://www.sanfoundry.com/c-program-most-least-character-string/ <<< Link >>>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
struct detail
{
    char c;
    int freq;
};
 
int main()
{
    struct detail s[26];
    char string[100], c;
    int max[26] = {0}, min[26] = {0};
    int i = 0, index, maxcount = 1, mincount = 1000, j;
 
    for (i = 0; i < 26; i++)
    {
       s[i].c = i + 'a';
       s[i].freq = 0;
    }
    printf("Enter string: ");
    i = 0;
    do
    {
        fflush(stdin);
        c = getchar();
        string[i++] = c;
        if (c == '\n')
        {
            break;
        }
        else if (!isalpha(c))
        {
            continue;
        }
        c = tolower(c);
        index = c - 'a';
        s[index].freq++;
    } while (1);
    string[i - 1] = '\0';
    printf("The string entered is: %s\n", string);
    for (i = 0; i < 26; i++)
    {
        if (s[i].freq)
        {
            if (maxcount < s[i].freq)
            {
                for (j = 0; j < 26; j++)
                {
                    max[j] = 0;
                }
                max[i] = 1;
                maxcount = s[i].freq;
            }
            else if (maxcount == s[i].freq)
            {
                max[i] = 1;
            }
            if (mincount >= s[i].freq)
            {
                if (mincount == s[i].freq)
                {
                    min[i] = 1;
                }
                else
                {
                    for (j = 0; j < 26; j++)
                    {
                        min[j] = 0;
                    }
                    min[i] = 1;
                    mincount = s[i].freq;
                }
            }
        }
    }
    printf("The most repeated characters are: ");
    for (i = 0; i < 26; i++)
    {
        if (max[i])
        {
            printf("%c ", i + 'a');
        }
    }
    printf("\nThe least repeated characters are: ");
    for (i = 0; i < 26; i++)
    {
        if (min[i])
        {
            printf("%c ", i + 'a');
        }
    }
    printf("\n");
 
    return 0;
}
*/

/* 
 // C Program to find First and Last Occurrence of given Character in a String
 // https://www.sanfoundry.com/c-program-first-and-last-occurrence-character-string/ <<<< Link >>>>
#include <stdio.h>
#include <string.h>
 
void main()
{
    int i, pos1=0;
    char str[50], key, a[10];
 
    printf("enter the string\n");
    scanf(" %[^\n]s", str);
    printf("enter character to be searched\n");
    scanf(" %c", &key);
    for (i = 0;i <= strlen(str);i++)
    {
        if (key == str[i])
        {
            
            printf("Girdiginiz harf %d sirada bulunuyor\n", i + 1);
            pos1++;
        }   
        }
        if (pos1==0) {
            printf("Gecerli harf degil ");
		}
}
*/   

/*
 // C Program to Find the First Occurence of the any Character of String2 in string1 & also its Position  
 // https://www.sanfoundry.com/c-program-first-occurence-character-string2-string1/ <<< Link >>>
 
#include <stdio.h>
 
void main()
{
    char s1[50], s2[10];
    int i, flag = 0;
    char *ptr1, *ptr2;
 
    printf("\nenter the string1:");
    scanf(" %[^\n]s", s1);    
    printf("\nenter the string2:");
    scanf(" %[^\n]s", s2);
 
    // COMPARING THE STRING1 CHARACTER BY CHARACTER WITH ALL CHARACTERS OF STRING1
    for (i = 0, ptr1 = s1;*ptr1 !=  '\0';ptr1++)
    {
        i++;
        for (ptr2 = s2; *ptr2 != '\0';ptr2++)
        {
            if (*ptr1  ==  *ptr2)
            {
                flag = 1;
                break;
            }
        }
        if (flag  ==  1)
            break;
    }
 
    if (flag  ==  1)
        printf("\nfirst occurance of character of string2 in string1 is at position:%d and character is %c", i, *ptr2);
    else
        printf("\nnone of the characters of string1 match with mone of characters of string2");
}
*/

/*
 // C Program to Check whether a given Character is present in a String, Find Frequency & Position of Occurrence 
 // https://www.sanfoundry.com/c-program-frequency-position-character-string/ <<< Link >>>
#include <stdio.h>
#include <string.h>
 
int main()
{
    char a, word[50];
    int i, freq = 0, flag = 0;
 
    printf("Enter character: ");
    scanf("%c", &a);
    printf("Now enter the word: ");
    scanf("%s", word);
    printf("Positions of '%c' in %s are: ", a, word);
    for (i = 0; i < strlen(word); i++)
    {
        if (word[i] == a)
        {
            flag = 1;
            printf("%d  ", i + 1);
            freq++;
        }
    }
    if (flag)
    {
        printf("\nCharacter '%c' occured for %d times.\n", a, freq);
    }
    else
    {
        printf("None\n");
    }
 
    return 0;
}
*/

/*
 // C Program to Display Every Possible Combination of Two Words from the given 2 String without Displaying Repeated Combinations
 // https://www.sanfoundry.com/c-program-display-possible-combination-of-two-words/ <<<< Link >>>>
#include <stdio.h>
#include <string.h>
 
void main()
{
    char str1[50],  str2[50], str3[100][100], str4[100][100];
    char str5[200][200], temp[200], str[200][200];
    int i, j = 0, k = 0, l = 0, m = 0, index = 0, n = 0;
    printf("Enter first string\n");
    scanf("%[^\n]s", str1);
    printf("Enter second string\n");
    scanf(" %[^\n]s", str2);    
 
// code to convert string in 2-D array 
    for (i = 0;str1[i] != '\0';i++)
    { 
        if ((str1[i] =  = ' ')
        {
            str3[j][k] = '\0';
            j++;
            k = 0;
        }
        else
        {
            str3[j][k] = str1[i];
            k++;
        }
        str3[j][k] = '\0';    
    }
    k = 0;
 
    for (i = 0;str2[i] != '\0';i++)
    {
        if ((str2[i] == ' ')
        {
            str4[l][k] = '\0';
            l++;
            k = 0;
        }
        else
        {
            str4[l][k] = str2[i];
            k++;
        }
        str4[l][k] = '\0';
    }
// Code to make the first string words combination with second 
    for (i = 0;i <= j;i++)
    {
        for (m = 0;m <= l;m++)
        {
            strcpy(temp, str3[i]);
            strcat(temp, str4[m]);
            strcpy(str5[index], temp);
            index++;
        }
    }    
 
// Code to make the second string words combination with first 
    for (i = 0;i <= l;i++)
    {
        for (m = 0;m <= j;m++)
        {
            strcpy(temp, str4[m]);
            strcat(temp, str3[i]);
            strcpy(str5[index], temp);
            index++;
        }
    }
 
// Code to remove the repetitions 
    for (i = 0;i <= index;i++)
    {
        for (j = i + 1;j <= index;j++)
        {
            if ((strcmp(str5[i], str5[j]) == 0)
            {
                for (k = j;k <= index;k++)
                {
                    strcpy(str5[k], str5[k + 1]);
                }
                index--;
            }
        }
    }
    for (i = 0;i <= index;i++)
    {
        printf("%s\n", str5[i]);
    }
}
*/

/*
 // C Program to Count Number of Words in a given Text Or Sentence
 //https://www.sanfoundry.com/c-program-count-words-in-sentence/ <<< Link >>>
#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, i;
 
    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
}
*/

/*
 // C Program to Display the Characters in Prime Position a given String
 // https://www.sanfoundry.com/c-program-display-characters-in-prime-position/ <<< Link >>>
#include <stdio.h>
#include <string.h>
 
void main()
{
    int i, j, k, count = 0;
    char str[50];
 
    printf("enter string\n");
    scanf("%[^\n]s", str);
    k = strlen(str);
    printf("prime characters in a string are\n");
    for (i = 2;i <= k;i++)
    {    
        count = 0;
        for (j = 2;j <= k;j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%c\n", str[i - 1]);
        }
    }
}
*/

/* 
 // C Program to Sort the String(ignore spaces) and Repeated Characters should be present only Once  
 // https://www.sanfoundry.com/c-program-sort-string-nonrepeated-characters/ <<<<< Link >>>>>
#include <stdio.h>
#include <string.h>
 
void main()
{
    int i, j = 0, k = 0;
    char str[100], str1[10][20], temp, min;
 
    printf("enter the string:");
    scanf("%[^\n]s", str);
 
// ignores spaces 
    for (i = 0; str[i]!= '\0';i++)
    {
        if (str[i] == ' ')
        {
            for (j = i;str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
        }
    }
 
// removes repeated characters 
    for (i = 0;str[i]!= '\0';i++)
    {
        for (j = i + 1;str[j] != '\0';j++)
        {
            if (str[i] == str[j])
            {
                for (k = j; str[k] != '\0'; k++)
                str[k] = str[k+1];
                j--;
            }
        }
    }
 
// sorts the string 
    for (i = 0; str[i] != '\0'; i++) 
    {
        for (j = 0; str[j] != '\0';j++)
        {
            if (str[j] > str[i])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s", str);
}
*/

/*
 // C Program to Implement a strpbrk() Function
 
#include <stdio.h>
 
char* strpbrk(char *, char *);
 
int main()
{
    char string1[50], string2[50];
    char *pos;
 
    printf("Enter the String:\n");
    scanf(" %[^\n]s", string1);
    printf("\nEnter the Character Set:\n");
    scanf(" %[^\n]s", string2);
    pos=strpbrk(string1, string2);
    printf("%s", pos);
}
 
//Locates First occurrence in string s1 of any character in string s2, 
//If a character from string s2 is found , 
 // a pointer to the character in string s1 is returned, 
// otherwise,  a NULL pointer is returned.
 
char* strpbrk(char *string1, char *string2)
{
    int i, j, pos, flag = 0;
    for (i = 0; string1[i] != '\0';i++);
    pos = i;
    for (i = 0;string2[i] != '\0';i++)
    {
        for (j = 0;string1[j] != '\0';j++)
        {
            if (string2[i] == string1[j])
            {
                if ( j <= pos)
                {
                    pos = j;    
                    flag = 1;    
                }
            }
         }        
    }
    if (flag == 1)
    {
        return &string1[pos];
    }
    else
    {
        return NULL;
    }
} 
*/

/*
 // C Program to Check whether two Strings are Anagrams
 // https://www.sanfoundry.com/c-program-checks-strings-anagrams/ <<< Link >>>
#include <stdio.h>
 
int find_anagram(char [], char []);
 
int main()
{
    char array1[100], array2[100];
    int flag;
 
    printf("Enter the string\n");
    gets(array1);
    printf("Enter another string\n");
    gets(array2);
    flag = find_anagram(array1, array2);
    if (flag == 1)
        printf("%s  and  %s  are anagrams.\n", array1, array2);
    else
        printf("%s and %s are not anagrams.\n", array1, array2);
    return 0;
}
 
int find_anagram(char array1[], char array2[])
{
    int num1[26] = {0}, num2[26] = {0}, i = 0;
 
    while (array1[i] != '\0')
    {
        num1[array1[i] - 'a']++;
        printf("ARRAY1.%d\n", array1[i] - 'a');
        i++;
    }
    i = 0;
    while (array2[i] != '\0')
    {
        num2[array2[i] -'a']++;
        printf("ARRAY2. %d\n", array2[i] - 'a');
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;
}
*/

/*
 // C Program to find the possible subsets of the String
 // https://www.sanfoundry.com/c-program-find-subsets-of-string/ <<< Link >>>
#include <stdio.h>
 
char string[50], n;
void subset(int, int, int);
 
int main()
{
    int i, len;
 
    printf("Enter the len of main set : ");
    scanf("%d", &len);
    printf("Enter the elements of main set : ");
    scanf("%s", string);
    n = len;
    printf("The subsets are :\n");
    for (i = 1;i <= n;i++)
        subset(0, 0, i);
}
 
//Function to find the number of subsets in the given string
 
void subset(int start, int index, int num_sub)
{
    int i, j;
    if (index - start + 1  ==  num_sub)
    {
        if (num_sub  ==  1)
        {
            for (i = 0;i < n;i++)
                printf("%c\n", string[i]);
        }
        else
        {
            for (j = index;j < n;j++)
            {
                for (i = start;i < index;i++)
                    printf("%c", string[i]);
                printf("%c\n", string[j]);
            }
            if (start != n - num_sub)
                subset(start + 1, start + 1, num_sub);
        }
    }
    else
    {
        subset(start, index + 1, num_sub);
    }
}
*/

/* 
 // C Program to Find the Frequency of Substring in the given String
 //https://www.sanfoundry.com/c-program-find-substring-frequency-string/ <<<<<<<< Link >>>>>>>>>>
#include <stdio.h>
#include <string.h>
 
void main()
{
    int count = 0, i, j = 0, k;
    char str[100], str1[20];
 
    printf("Enter the string\n");
    scanf(" %[^\n]s", str);
    printf("Enter the substring to be matched\n");
    scanf(" %[^\n]s", str1);
    k = strlen(str1);
    for (i = 0;str[i] != '\0';)
    {
        if (str[i] == ' ')
        {
            i++;
        }
        else
        {
            if (str[i] == str1[j])
            {
                j++;
                i++;
            }
            else if (j == k)
            {
                j = 0;
                count++;
                i--;
            }
            else
            {
                i++;
                j = 0;
            }
        }
    }
    printf("No of matches of substring in main string is %d\n", count);
}
*/

/*
 // C Program to find the first capital letter in a string using Recursion
 // https://www.sanfoundry.com/c-program-first-capital-letter-using-recursion/ <<<<< Link >>>>>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
char caps_check(char *);
 int sayac=1;
int main()
{
	
    char string[20], letter;
 
    printf("Enter a string to find it's first capital letter: ");
    scanf("%s", string);
    letter = caps_check(string);
    if (letter == 0)
    {
        printf("No capital letter is present in %s.\n", string);
    }
    else
    {
        printf("The first capital letter in %s is %c. %d\'ninci harf\n", string, letter, sayac);    }
        return 0;
    }
    char caps_check(char *string)
    {
        static int i = 0;
        
        if (i < strlen(string))
        {
            if (isupper(string[i]))
            {
                return string[i];
            }
            else
            {
                i = i + 1;
                sayac=sayac+1;
                return caps_check(string);
            }
        }
        else return 0;
    }
*/

/*
 // C program to find the sum of all digits present in the string
 //https://www.sanfoundry.com/c-program-sum-all-digits-string/ <<< Link >>>
#include <stdio.h>
void main()
{
    char string[80];
    int count, nc = 0, sum = 0;
 
    printf("Enter the string containing both digits and alphabet \n");
    scanf("%s", string);
    for (count = 0; string[count] != '\0'; count++)
    {
        if ((string[count] >= '0') && (string[count] <= '9'))
        {
            nc += 1;
            sum += (string[count] - '0');
            printf("String COunt= %d\n", string[count]);
        }
    }
    printf("NO. of Digits in the string = %d\n", nc);
    printf("Sum of all digits = %d\n", sum);
}
*/

/*
 // C program to accept a string and find the number of times the word 'the' appears in that string
 // https://www.sanfoundry.com/c-program-frequency-word-the-sentence/ <<<< Link >>>>
#include <stdio.h>
 
void main()
{
    int count = 0, i, times = 0, t, h, e, space;
    char string[100];
 
    puts("Enter a string:");
    gets(string);
   //  Traverse the string to count the number of characters 
    while (string[count] != '\0')
    {
        count++;
    }
    //   Finding the frequency of the word 'the' 
    for (i = 0; i <= count - 3; i++)
    {
        t =(string[i] == 't' || string[i] == 'T');
        h =(string[i + 1] == 'h' || string[i + 1] == 'H');
        e =(string[i + 2] == 'e'|| string[i + 2] == 'E');
        space =(string[i + 3] == ' ' || string[i + 3] == '\0');
        if ((t && h && e && space) == 1)
            times++;
    }
    printf("Frequency of the word 'the' is %d\n", times);
}
*/

/*
 // C Program to Count Number of Words in a given Text Or Sentence
 // https://www.sanfoundry.com/c-program-count-words-in-sentence/ <<<< Link >>>>
#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int count = 0, i;
 
    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
}
*/

/*
 //  C Program to Reverse the String using Both Recursion and Iteration
 //
#include <stdio.h>
#include <string.h>
 
// Function Prototype 
void disp_str1_rec(char *);
 
void main()
{
    char str1[100], *ptr;
    int len1 = 0, i;
    char ch;
    printf("Enter the string:\n");
    scanf("%[^\n]s", str1);
    ptr = str1;
    len1 = strlen(str1);
    printf("Using iteration:\n");
    for (i = len1 - 1; i >= 0;i--)        // Iterative loop 
    {
 
        ch = str1[i];
        printf("%c", ch);
    }
    printf("\nUsing recursion:\n");
    disp_str1_rec(ptr);
}
 
// Code to reverse the string using Recursion 
void disp_str1_rec(char *stng)
{
    char ch;
    if (*stng != '\0')
    {
        ch = *stng;
        stng++;
        disp_str1_rec(stng);
        printf("%c", ch);
    }
    else
    return;
}
*/

/*
 // C Program to Reverse the String using Recursion
 // https://www.sanfoundry.com/c-program-reverse-string-using-recursion-2/ <<<<< Link >>>>>
#include <stdio.h>
#include <string.h>
 
void reverse(char [], int, int);
int main()
{
    char str1[20];
    int size;
 
    printf("Enter a string to reverse: ");
    scanf("%s", str1);
    size = strlen(str1);
    reverse(str1, 0, size - 1);
    printf("The string after reversing is: %s\n", str1);
    return 0;
}
 
void reverse(char str1[], int index, int size)
{
    char temp;
    temp = str1[index];
    str1[index] = str1[size - index];
    str1[size - index] = temp;
    if (index == size / 2)
    {
        return;
    }
    reverse(str1, index + 1, size);
}
*/

/*
 // C Program to Replace all the Characters by Lowercase 
 // https://www.sanfoundry.com/c-program-replace-characters-lowercase/ <<<<< Link >>>>>
#include <stdio.h>
#include <string.h>
 
int main()
{
   char string[1000];
 
   printf("Input a string to convert to lower case\n");
   gets(string);
 
   printf("Input string in lower case: %s\n",strlwr(string));
 
   return  0;
}
*/


/*
 // C Program to Remove given Word from a String
 //https://www.sanfoundry.com/c-program-remove-word-from-string/ <<< Link >>>
#include <stdio.h>
#include <string.h>
 
void main()
{
    int i, j = 0, k = 0, count = 0;
    char str[100], key[20];
    char str1[10][20];
 
    printf("enter string:");
    scanf("%[^\n]s",str);
 
// Converts the string into 2D array *   
    for (i = 0; str[i]!= '\0'; i++)
    {
        if (str[i]==' ')
        {
            str1[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            str1[k][j] = str[i];
            j++;
        }
    }
    str1[k][j] = '\0';
    printf("enter key:");
    scanf("%s", key);
 
// Compares the string with given word   
    for (i = 0;i < k + 1; i++)
    {
        if (strcmp(str1[i], key) == 0)
        {
            for (j = i; j < k + 1; j++)
            strcpy(str1[j], str1[j + 1]);
            k--;
        }
 
    }
    for (i = 0;i < k + 1; i++)
    {
        printf("%s ", str1[i]);
    }
}
*/


/*
 // C program to read an English sentence and replace lowercase characters by uppercase and vice-versa. Output the given sentence as well as the converted sentence on two different lines.
 // https://www.sanfoundry.com/c-program-lowercase-uppercase/ <<<<< Link >>>>>
#include <stdio.h>
#include <ctype.h>
 
void main()
{
    char sentence[100];
    int count, ch, i;
 
    printf("Enter a sentence \n");
    for (i = 0;(sentence[i] = getchar()) != '\n'; i++)
    {
        ;
    }
    sentence[i] = '\0';
    //  shows the number of chars accepted in a sentence 
    count = i;
    printf("The given sentence is   : %s", sentence);
    printf("\n Case changed sentence is: ");
    for (i = 0; i < count; i++)
    {
        ch = islower(sentence[i])? toupper(sentence[i]) :
tolower(sentence[i]);
        putchar(ch);
    }
}
*/

/*
 // https://www.sanfoundry.com/c-program-length-string-without-built-in-function/ <<<<<< Link >>>>>>
#include <stdio.h>
 
void main()
{
    int count1 = 0, count2 = 0, flag = 0, i;
    char string1[10], string2[10];
 
    printf("Enter a string:");
    gets(string1);
    printf("Enter another string:");
    gets(string2);
    //  Count the number of characters in string1 
    while (string1[count1] != '\0')
        count1++;
    //  Count the number of characters in string2 
    while (string2[count2] != '\0')
        count2++;
    i = 0;
 
    while ((i < count1) && (i < count2))
    {
    	if (string1[i] < string2[i])
        {
            flag = -1;
            break;
        }
    	if (strlen(string1)== strlen(string2)){
            flag = 0;
            break;
        }
        
        if (string1[i] > string2[i])
        {
            flag = 1;
            break;
        }
    }
		
    
           
        
    
    if (flag == 0)
        printf("Both strings are equal \n");
    if (flag == 1)
        printf("String1 is greater than string2 \n");
    if (flag == -1)
        printf("String1 is less than string2 \n");
}
*/
/*
 // C program to accept a string and a substring and check if the substring is present in the given string
 // https://www.sanfoundry.com/c-program-substring-string/ <<<<<<<<< Link >>>>>>>>>>
#include<stdio.h>
 
void main()
{
    char str[80], search[10];
    int count1 = 0, count2 = 0, i, j, flag;
 
    printf("Enter a string:");
    gets(str);
    printf("Enter search substring:");
    gets(search);
    while (str[count1] != '\0')
        count1++;
    while (search[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    printf("%d\n",count1);
    printf("%d\n",count2);
    if (flag == 1)
        printf("SEARCH SUCCESSFUL!");
    else
        printf("SEARCH UNSUCCESSFUL!");
} 
*/
 
/*
 // C program to read two strings and concatenate them, without using
 // library functions. Display the concatenated string.
 // https://www.sanfoundry.com/c-program-concatenate-strings/ <<< Linkk >>>
#include <stdio.h>
#include <string.h>
 
void main()
{
    char string1[20], string2[20];
    int i, j, pos;
 
    //  Initialize the string to NULL values 
    memset(string1, 0, 20);
    memset(string2, 0, 20);
 
    printf("Enter the first string : ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
    printf("First string  = %s\n", string1);
    printf("Second string = %s\n", string2);
 
    //  Concate the second string to the end of the first string 
    for (i = 0; string1[i] != '\0'; i++)
    {
        //  null statement: simply traversing the string1 
        ;
    }
    pos = i;
    for (j = 0; string2[j] != '\0'; i++)
    {
        string1[i] = string2[j++];
    }
    //  set the last character of string1 to NULL 
    string1[i] = '\0';
    printf("Concatenated string = %s\n", string1);
}
*/

/*
// isalnum ornekkk kod <<<<<<
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int result;

    c = '5';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '+';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    return 0;
}
*/


/*
// isspace ornekkk kod <<<<<<<<<<<
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int result;

    printf("Enter a character: ");
    scanf("%c", &c);
    
    result = isspace(c);
	printf("Not a white-space character %d", result);
    if (result == 0)
    {
        printf("Not a white-space character.");
    }
    else
    {
        printf("White-space character.");
    }

    return 0;
}
*/

/*
 //C Program to Check whether a given String is Palindrome or not using Recursion
 //https://www.sanfoundry.com/c-program-string-palindrome-using-recursion/ <<<<<< link >>>>>>
#include <stdio.h>
#include <string.h>
 
void check(char [], int);
 
int main()
{
    char word[15];
 
    printf("Enter a word to check if it is a palindrome\n");
    scanf("%s", word);
    check(word, 0);
 
    return 0;
}
 
void check(char word[], int index)
{
    int len = strlen(word) - (index + 1);
    printf("palindrome LENNNNNN %d\n",len);
    printf("STRLENNNNNNNNNNNN %d\n",strlen(word));
    printf("INDEXXXXXXXXXXXXXXXXX %d\n",(index + 1));
    printf("word[index] %d\n",word[index]);
    printf("word[len] %d\n",word[len]);
    if (word[index] == word[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("The entered word is a palindrome\n");
            return;
        }
        check(word, index + 1);
    }
    else
    {
        printf("The entered word is not a palindrome\n");
    }
}
*/


/*
 // C program to read a string and check if it's a palindrome, without
 // using library functions. Display the result.
 // https://www.sanfoundry.com/c-program-string-palindrome/ <<<link>>>>
#include <stdio.h>
#include <string.h>
 
void main()
{
    char string[25], reverse_string[25] = {'\0'};
    int  i, length = 0, flag = 0;
 
    fflush(stdin);
    printf("Enter a string \n");
    gets(string);
    //  keep going through each character of the string till its end 
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0; i--)
    {
       reverse_string[length - i - 1] = string[i];
    }
    
     // Compare the input string and its reverse. If both are equal
     // then the input string is palindrome.
     
    for (i = 0; i < length; i++)
    {
        if (reverse_string[i] == string[i])
            flag = 1;
        else
            flag = 0;
    }
    if (flag == 1)
        printf("%s is a palindrome \n", string);
    else
        printf("%s is not a palindrome \n", string);
}
*/

/*
 // C Program to Display Lower Triangular Matrix
 //https://www.sanfoundry.com/c-program-display-lower-triangular-matrix/ <--------- Link -----------
#include <stdio.h>
 
void main()
{
    int array[3][3], i, j, flag = 0 ;
    printf("\n\t Enter the value of Matrix : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (array[i] < array[j] && array[i][j] == 0)
            {
                flag = flag + 1;
            }
        }
    }
    if (flag == 3)
        printf("\n\n Matrix is a Lower triangular matrix");
    else
        printf("\n\n Matrix is not a lower triangular matrix");
}
*/


/*
     // C Program to Display Upper Triangular Matrix
     //https://www.sanfoundry.com/c-program-display-upper-triangular-matrix/ <-------- Link ----------
 
    #include <stdio.h>
    void main()
    {
 
        int i, j, r, c, array[10][10];
        printf("Enter the r and c value:");
 
        scanf("%d%d", &r, &c);
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("array[%d][%d] = ", i, j);
                scanf("%d", &array[i][j]);
            }
        }
 
        printf("matrix is");
        for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= c; j++)
            {
                printf("%d", array[i][j]);
            }
            printf("\n");
        }
 
        for (i = 1; i <= r; i++)
        {
            printf("\n");
            for (j = 1; j <= c; j++)
            {
                if (i >= j)
                {
                    printf("%d", array[i][j]);
                }
                else
                {
                    printf("\t");
                }
            }
 
        }
 
        printf("\n\n");
        for (i = 1; i <= r; i++)
        {
            printf("\n");
            for (j = 1; j <= c; j++)
            {
	            if (j >= i)
                    {
                	printf("%d", array[i][j]);
            	    }
            	    else 
                    {
                	//printf("\t");
	            }
            // printf("\n");
 
        }
 
    }
}
*/

   /*
   	 //https://www.sanfoundry.com/c-program-trace-normal-matrix/ <----------- Link -------------
     // C program to find the trace and normal of a matrix
     // Trace is defined as the sum of main diagonal elements and
     // Normal is defined as square root of the sum of all the elements
     
 
    #include <stdio.h>
    #include <math.h>
 
    void main ()
    {
 
        static int array[10][10];
        int i, j, m, n, sum = 0, sum1 = 0, a = 0, normal;
 
        printf("Enter the order of the matrix\n");
        scanf("%d %d", &m, &n);
 
        printf("Enter the n coefficients of the matrix \n");
        for (i = 0; i < m; ++i) 
        {
            for (j = 0; j < n; ++j)
            {
                scanf("%d", &array[i][j]);
                a = array[i][j] * array[i][j];
                sum1 = sum1 + a;
            }
        }
 
        normal = sqrt(sum1);
        printf("The normal of the given matrix is = %d\n", normal);
        for (i = 0; i < m; ++i) 
        {
            sum = sum + array[i][i];
        }
 
        printf("Trace of the matrix is = %d\n", sum);
 
    }
*/


    /*
     // C program to find accept a matrix of order M x N and find
     // the sum of the  main diagonal and off diagonal elements
     // https://www.sanfoundry.com/c-program-sum-diagonal-elements-matrix/ <------- Link --------
 
    #include <stdio.h>
    void main ()
    {
 
        static int array[10][10];
        int i, j, m, n, a = 0, sum = 0;
 
        printf("Enetr the order of the matix \n");
        scanf("%d %d", &m, &n);
 
        if (m == n ) 
        {
 
            printf("Enter the co-efficients of the matrix\n");
            for (i = 0; i < m; ++i)
            {
                for (j = 0; j < n; ++j)
                {
                    scanf("%d", &array[i][j]);
                }
            }
 
            printf("The given matrix is \n");
            for (i = 0; i < m; ++i) 
            {
                for (j = 0; j < n; ++j)
                {
                    printf(" %d", array[i][j]);
                }
                printf("\n");
            }
 
            for (i = 0; i < m; ++i) 
            {
                sum = sum + array[i][i];
                a = a + array[i][m - i - 1];
            }
 
            printf("\nThe sum of the main diagonal elements is = %d\n", sum);
            printf("The sum of the off diagonal elements is   = %d\n", a);
 
        }
 
        else
            printf("The given order is not square matrix\n");
 
    }
*/

/*
 // C program to determine if a given matrix is a sparse matrix.
 // Sparse martix has more zero elements than nonzero elements.
 // https://www.sanfoundry.com/c-program-sparse-matrix/ <<<<<------ Link ---------
#include <stdio.h>
 
void main ()
{
    static int array[10][10];
    int i, j, m, n;
    int counter = 0;
 
    printf("Enter the order of the matix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the co-efficients of the matix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 0)
            {
                ++counter;
            }
        }
    }
    if (counter > ((m * n) / 2))
    {
        printf("The given matrix is sparse matrix \n");
    }
    else
        printf("The given matrix is not a sparse matrix \n");
    printf("There are %d number of zeros", counter);
}
*/

    /*
     // C Program to check if a given matrix is an identity matrix
     //https://www.sanfoundry.com/c-program-matrix-identity-matrix/<----Link------
 
    #include <stdio.h>
    void main()
    {
 
        int a[10][10];
        int i, j, row, column, flag = 1;
 
        printf("Enter the order of the matrix A \n");
        scanf("%d %d", &row, &column);
 
        printf("Enter the elements of matrix A \n");
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < column; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
 
        printf("MATRIX A is \n");
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < column; j++) 
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }
 
        //  Check for unit (or identity) matrix 
 
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < column; j++)
            {
                if (a[i][j] != 1 && a[j][i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
 
        if (flag == 1 )
            printf("It is identity matrix \n");
 
        else
            printf("It is not a identity matrix \n");
 
    }
*/


    /*
     // C Program to check if a given matrix is an identity matrix
     
 
    #include <stdio.h>
    void main()
    {
 
        int a[10][10];
        int i, j, row, column, flag = 1;
 
        printf("Enter the order of the matrix A \n");
        scanf("%d %d", &row, &column);
 
        printf("Enter the elements of matrix A \n");
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < column; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
 
        printf("MATRIX A is \n");
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < column; j++) 
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }
 
        //  Check for unit (or identity) matrix 
 
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < column; j++)
            {
                if (a[i][j] != 1 && a[j][i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
 
        if (flag == 1 )
            printf("It is identity matrix \n");
 
        else
            printf("It is not a identity matrix \n");
 
    }
 */
 
 
    /*
     // C Program to accept two matrices and check if they are equal
     //https://www.sanfoundry.com/c-program-check-2-matrices-equal/ <----- Link -------
 
    #include <stdio.h>
    #include <stdlib.h>
 
    void main() 
    {
 
        int a[10][10], b[10][10];
        int i, j, row1, column1, row2, column2, flag = 1;
 
        printf("Enter the order of the matrix A \n");
        scanf("%d %d", &row1, &column1);
 
        printf("Enter the order of the matrix B \n");
        scanf("%d %d", &row2, &column2);
 
        printf("Enter the elements of matrix A \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column1; j++) 
            {
                scanf("%d", &a[i][j]);
            }
        }
 
        printf("Enter the elements of matrix B \n");
        for (i = 0; i < row2; i++) 
        {
            for (j = 0; j < column2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
 
        printf("MATRIX A is \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column1; j++) 
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
 
        }
 
        printf("MATRIX B is \n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < column2; j++) 
            {
                printf("%3d", b[i][j]);
            }
            printf("\n");
 
        }
 
        //  Comparing two matrices for equality 
 
        if (row1 == row2 && column1 == column2)
        {
            printf("Matrices can be compared \n");
            for (i = 0; i < row1; i++) 
            {
                for (j = 0; j < column2; j++)
                {
                    if (a[i][j] != b[i][j])
                    {
                        flag = 0;
                        break;
                    }
                 }
            }
        }
 
        else 
        {
            printf(" Cannot be compared\n");
            exit(1);
        }
 
        if (flag == 1)
            printf("Two matrices are equal \n");
        else
            printf("But, two matrices are not equal \n");
 
    }
*/

/*
     // C program to accept two matrices and find the sum
     // and difference of the matrices
     //https://www.sanfoundry.com/c-program-sum-difference-matrices/ <-------- Link -------------
 
    #include <stdio.h>
    #include <stdlib.h>
 
    void readmatA();
    void printmatA();
    void readmatB();
    void printmatB();
 
    void sum();
    void diff();
 
    int a[10][10], b[10][10], sumarray[10][10], arraydiff[10][10];
    int i, j, row1, column1, row2, column2;
 
    void main()
    {
 
        printf("Enter the order of the matrix A \n");
        scanf("%d %d", &row1, &column1);
 
        printf("Enter the order of the matrix B \n");
        scanf("%d %d", &row2, &column2);
 
        if (row1 != row2 && column1 != column2)
        {
            printf("Addition and subtraction are possible \n");
            exit(1);
        }
 
        else 
        {
 
            printf("Enter the elements of matrix A \n");
            readmatA();
 
            printf("MATRIX A is \n");
            printmatA();
 
            printf("Enter the elements of matrix B \n");
            readmatB();
 
            printf("MATRIX B is \n");
            printmatB();
 
            sum();
            diff();
 
        }
 
    }
 
    // Function to read a matrix A 
 
    void readmatA() 
    {
        for (i = 0; i < row1; i++) 
        {
            for (j = 0; j < column1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        return;
    }
 
    //  Function to read a matrix B 
 
    void readmatB() 
    {
        for (i = 0; i < row2; i++) 
        {
            for (j = 0; j < column2; j++) 
            {
                scanf("%d", &b[i][j]);
            }
        }
    }
 
    //  Function to print a matrix A 
 
    void printmatA()
    {
        for (i = 0; i < row1; i++) 
        {
            for (j = 0; j < column1; j++)
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }
 
    }
 
    //  Function to print a matrix B 
 
    void printmatB() 
    {
        for (i = 0; i < row2; i++) 
        {
            for (j = 0; j < column2; j++)
            {
                printf("%3d", b[i][j]);
            }
            printf("\n");
        }
 
    }
 
    //  Function to do the sum of elements of matrix A and Matrix B 
 
    void sum() 
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++) 
            {
                sumarray[i][j] = a[i][j] + b[i][j];
            }
 
        }
 
        printf("Sum matrix is \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("%3d", sumarray[i][j]) ;
            }
            printf("\n");
 
        }
        return;
 
    }
 
    //  Function to do the difference of elements of matrix A and Matrix B 
 
    void diff()
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                arraydiff[i][j] = a[i][j] - b[i][j];
            }
 
        }
 
        printf("Difference matrix is \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("%3d", arraydiff[i][j]);
 
            }
            printf("\n");
 
        }
        return;
 
    }
*/


   /*
     // C program to read two matrices A(MxN) and B(MxN) and perform addition
     // OR subtraction of A and B. Also, find the trace of the resultant
     // matrix. Display the given matrices, their sum or differences and
     // the trace.
     
 
    #include <stdio.h>
    void trace(int arr[][10], int m, int n);
    void main()
    {
 
        int array1[10][10], array2[10][10], arraysum[10][10],
        arraydiff[10][10];
        int i, j, m, n, option;
 
        printf("Enter the order of the matrix array1 and array2 \n");
        scanf("%d %d", &m, &n);
 
        printf("Enter the elements of matrix array1 \n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &array1[i][j]);
            }
        }
 
        printf("MATRIX array1 is \n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                printf("%3d", array1[i][j]);
            }
            printf("\n");
        }
 
        printf("Enter the elements of matrix array2 \n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                scanf("%d", &array2[i][j]);
            }
        }
 
        printf("MATRIX array2 is \n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                printf("%3d", array2[i][j]);
            }
            printf("\n");
        }
 
        printf("Enter your option: 1 for Addition and 2 for Subtraction \n");
        scanf("%d", &option);
 
        switch (option)
        {
 
        case 1:
            for (i = 0; i < m; i++) 
            {
                for (j = 0; j < n; j++) 
                {
                    arraysum[i][j] = array1[i][j] + array2[i][j];
                }
            }
 
            printf("Sum matrix is \n");
            for (i = 0; i < m; i++) 
            {
                for (j = 0; j < n; j++) 
                {
                    printf("%3d", arraysum[i][j]) ;
                }
                printf("\n");
            }
 
            trace (arraysum, m, n);
            break;
 
        case 2:
            for (i = 0; i < m; i++) 
            {
                for (j = 0; j < n; j++) 
                {
                    arraydiff[i][j] = array1[i][j] - array2[i][j];
                }
            }
 
            printf("Difference matrix is \n");
            for (i = 0; i < m; i++) 
            {
                for (j = 0; j < n; j++) 
                {
                    printf("%3d", arraydiff[i][j]) ;
                }
                printf("\n");
            }
            trace (arraydiff, m, n);
            break;
        }
 
    }
 
      Function to find the trace of a given matrix and print it 
 
    void trace (int arr[][10], int m, int n) 
    {
 
        int i, j, trace = 0;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++) 
            {
                if (i == j)
                {
                    trace = trace + arr[i][j];
                }
            }
        }
        printf("Trace of the resultant matrix is = %d\n", trace);
    }
*/


/*
// C Program to Find the Summation of Node values at level/row and print it
// https://www.sanfoundry.com/c-program-summation-of-node-values/ <---------- Link ------------
#include <stdio.h>
#include <stdlib.h>
 
struct btnode
{
    int value;
    struct btnode *r,*l;
}*root = NULL, *temp = NULL;
 
void create();
void insert();
void add(struct btnode *t);
void computesum(struct btnode *t);
void display();
 
int count = 0, sum[100] = {0}, max = 0;
 
void main()
{
    int ch;
 
    printf("\n OPERATIONS ---");
    printf("\n 1] Insert an element into tree");
    printf("\n 2] Display the sum of the elements at the same level");
    printf("\n 3] Exit ");    
    while (1)
    {                        
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:    
            insert();
            break;
        case 2: 
            count = 0;
            max = 0;
            computesum(root);
            display();
            break;
        case 3: 
            exit(0);
        default :     
            printf("Wrong choice, Please enter correct choice  ");
            break;    
        }
    }
}
 
// To create a new node with the data from the user 
void create()
{
    int data;
 
    printf("Enter the data of node : ");
    scanf("%d", &data);
    temp = (struct btnode* ) malloc(1*(sizeof(struct btnode)));
    temp->value = data;
    temp->l = temp->r = NULL;
}
 
// To check for root node and then create it 
void insert()
{
    create();
 
    if (root == NULL)
        root = temp;
    else
        add(root);
}
 
// Search for the appropriate position to insert the new node *
void add(struct btnode *t)
{
    if ((temp->value > t->value) && (t->r != NULL))        // value more than root node value insert at right 
        add(t->r);
    else if ((temp->value > t->value) && (t->r == NULL))        
        t->r = temp;
    else if ((temp->value < t->value) && (t->l != NULL))        // value less than root node value insert at left 
        add(t->l);
    else if ((temp->value < t->value) && (t->l==NULL))
        t->l = temp;
}
 
// Function to find the sum of nodes at same distance 
void computesum(struct btnode *t)
{
    if (root == NULL)
    {    
        printf("Tree is empty ");
        return;
    }
    if (t->l != NULL)
    {
        count++;    
        computesum(t->l);
    }
    sum[count] = sum[count] + t->value;  // addition of elelment by row wise 
    if (max < count)
        max = count;
    if (t->r != NULL)
    {
        count++;        
        computesum(t->r);
    }
    count--;
}
 
// To display the sum of the nodes at the same distance 
void display()
{
    int i;
 
    printf("Sum of nodes : \n Level \t Sum ");
    for (i = 0; i <= max; i++)
       printf("\n %d \t: %d ", i, sum[i]);
}
*/

/*
 // C Program to Find if a given Integer X appears more than N/2 times in a Sorted Array of N Integers
 // https://www.sanfoundry.com/c-program-integer-appears-n2-times-sorted-array/ <----- Link 
# include <stdio.h>
# define bool int
 
bool Morenooftimes(int array[], int n, int x)
{
    int i;
    int y=1;
    int final_index = n % 2 ? n / 2 : (n / 2 + 1);
 
    for (i = 0; i < final_index; i++)
    {
        // check if x is presents more than n/2 times 
        if (array[i] == x ){
		
        	y++;
        	}
			
			if(y==3)return 1;
	
    }
    return 0;
}
 
int main()
{
    int array[] = {10, 10, 15, 12, 17 ,15};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 15;
    if (Morenooftimes(array, n, x))
        printf("The given no %d appears more than %d times in array[]", x, n/2);
    else
        printf("The given no %d does not appear more than %d times in array[]", x, n/2);
    getchar();
    return 0;
}
*/

/*
 // C Program to Find the two Elements such that their Sum is Closest to Zero
 // https://www.sanfoundry.com/c-program-two-elements-sum-closest-zero/ <-------------  Link  ------------------
 
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
 
void minabsvaluepair(int array[], int array_size)
{
    int count = 0;
    int l, r, min_sum, sum, min_l, min_r;
 
    // Array should have at least two elements
    if (array_size < 2)
    {
        printf("Invalid Input");
        return;
    }
 
    // Initialization of values 
    min_l = 0;
    min_r = 1;
    min_sum = array[0] + array[1];
    
	for (l = 0; l < array_size - 1; l++)
    {
        for (r = l + 1; r < array_size; r++)
        {
            sum = array[l] + array[r];
            //if (sum<0){
            //	continue;
			//} Bu kodi gendim koydum ki yazdirsin sum'i se yazdirmaz bunsuz ...........
            else if (min_sum > sum)
            {
                min_sum = sum;
                min_l = l;
                min_r = r;
            }
        }
    }
    printf(" The two elements whose sum is minimum are %d and %d\n", array[min_l], array[min_r]);
    printf("Ve toplami da %d", min_sum );
}
 
int main()
{
    int array[] = {42, 15, -25, 30, -10, 35};
    minabsvaluepair(array, 6);
    getchar();
    return 0;
}
*/


/*
     * C Program to Input a String & Store their Ascii Values in an Integer Array & Print the Array
     
 
    #include <stdio.h>
    void main()
    {
 
        char string[20];
        int n, count = 0;
 
        printf("Enter the no of characters present in an array \n ");
        scanf("%d", &n);
 
        printf(" Enter the string of %d characters \n" , n);
        scanf("%s", string);
 
        while (count < n)
        {
            printf(" %c = %d\n", string[count], string[count] );
            ++ count ;
        }
 
    }
 */
 
/*
     * C Program to Increment every Element of the Array by one & Print Incremented Array
    
 
    #include <stdio.h>
    void incrementArray(int[]);
    void main()
    {
 
        int i;
        int array[4] = {10, 20, 30, 40};
        incrementArray(array);
        for (i = 0; i < 4; i++)
           printf("%d\t", array[i]);   // Prints 2, 3, 4, 5
 
    }
 
    void incrementArray(int arr[])
    {
 
        int i;
        for (i = 0; i < 4; i++)
            arr[i]++;     // this alters values in array in main()
 
    }
*/


/*
     * C Program to Print the Alternate Elements in an Array
     
 
    #include <stdio.h>
    void main()
    {
 
        int array[10];
        int i;
        printf("enter the element of an array \n");
        for (i = 0; i < 10; i++)
            scanf("%d", &array[i]);
 
        printf("Alternate elements of a given array \n");
        for (i = 1; i < 10; i += 2)
            printf( "%d\n", array[i]) ;
    }
*/

/*
     * C Program to Check Array bounds while Inputing Elements into the Array
     
 
    #include <stdio.h>
    int main(void)
    {
 
        int array[5], b, c;
        for (b = 0; b < 10 && (scanf("%d", &c)); b++)
                array[b] = c;
 
        for (b = 0; b < 15; b++)
        	printf("%d ", array[b]);
 
        return 0;
    }
*/
 
/*
     * C Program to Find the Number of Elements in an Array
     
 
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
 
    int main()
    {
        int array[] = {15, 50, 34, 20, 10, 79, 100};
        int n; 
        n = sizeof(array);
        printf("Size of the given array is %d\n", sizeof(array));
        printf("Size of the given array is %d\n", sizeof(int));
        printf("Size of the given array is %d\n", n/sizeof(int));
        return 0;
    }
*/


/*
 * C Program to Print all the Repeated Numbers with Frequency in an Array
 //https://www.sanfoundry.com/c-program-repeated-numbers-frequency-array/
#include <stdio.h>
#include <malloc.h>
 
void duplicate(int array[], int num)
{
    int *count = (int *)calloc(sizeof(int), (num - 2));
    int i;
 
    printf("duplicate elements present in the given array are ");
    for (i = 0; i < num; i++)
    {
        if (count[array[i]] == 1)
            printf(" %d ", array[i]);
        else
            count[array[i]]++;
    }
}
 
int main()
{
    int array[] = {5, 10, 10, 2, 1, 4, 2};
    int array_freq = sizeof(array) / sizeof(array[0]);
    duplicate(array, array_freq);
    getchar();
    return 0;
}
*/


/*
// Link------> https://www.sanfoundry.com/c-program-two-stacks-single-array/
//This is a C Program to Implement two Stacks using a Single Array & Check for Overflow & Underflow
#include <stdio.h>
#define SIZE 10
 
 
int ar[SIZE];
int top1 = -1;
int top2 = SIZE;
 
//Functions to push data
void push_stack1 (int data)
{
  if (top1 < top2 - 1)
  {
    ar[++top1] = data;
  }
  else
  {
    printf ("Stack Full! Cannot Push\n");
  }
}
void push_stack2 (int data)
{
  if (top1 < top2 - 1)
  {
    ar[--top2] = data; 
  }
  else
  {
    printf ("Stack Full! Cannot Push\n");
  }
}
 
//Functions to pop data
void pop_stack1 ()
{
  if (top1 >= 0)
  {
    int popped_value = ar[top1--];
    printf ("%d is being popped from Stack 1\n", popped_value);
  }
  else
  {
    printf ("Stack Empty! Cannot Pop\n");
  }
}
void pop_stack2 ()
{
  if (top2 < SIZE)
  {
    int popped_value = ar[top2++];
    printf ("%d is being popped from Stack 2\n", popped_value);
  }
  else
  {
    printf ("Stack Empty! Cannot Pop\n");
  }
}
 
//Functions to Print Stack 1 and Stack 2
void print_stack1 ()
{
  int i;
  for (i = top1; i >= 0; --i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}
void print_stack2 ()
{
  int i;
  for (i = top2; i < SIZE; ++i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}
 
int main()
{
  int ar[SIZE];
  int i;
  int num_of_ele;
 
  printf ("We can push a total of 10 values\n");
 
  //Number of elements pushed in stack 1 is 6
  //Number of elements pushed in stack 2 is 4
 
  for (i = 1; i <= 6; ++i)
  {
    push_stack1 (i);
    printf ("Value Pushed in Stack 1 is %d\n", i);
  }
  for (i = 1; i <= 4; ++i)
  {
    push_stack2 (i);
    printf ("Value Pushed in Stack 2 is %d\n", i);
  }
 
  //Print Both Stacks
  print_stack1 ();
  print_stack2 ();
 
  //Pushing on Stack Full
  printf ("Pushing Value in Stack 1 is %d\n", 11);
  push_stack1 (11);
 
  //Popping All Elements From Stack 1
  num_of_ele = top1 + 1;
  while (num_of_ele)
  {
    pop_stack1 ();
    --num_of_ele;
  }
 
  //Trying to Pop From Empty Stack
  pop_stack1 ();
 
  return 0;
}
*/

/*
//C Program to Implement a Queue using an Array
// Link--------> https://www.sanfoundry.com/c-program-queue-using-array/
#include <stdio.h>
 
#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } //End of switch
    } //End of while
} //End of main()
insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        //If queue is initially empty 
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} //End of insert()
 
delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} //End of delete() 
display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} //End of display() 
*/



 
/*
     // C Program to find the Biggest Number in an Array of Numbers using 
     // Recursion
     // Web site linki https://www.sanfoundry.com/c-program-biggest-number-array-using-recursion/
     
 
    #include <stdio.h>
    int large(int[], int, int);
 
    int main()
    {
 
        int size;
        int largest;
        int list[20];
        int i;
 
        printf("Enter size of the list:");
        scanf("%d", &size);
 
        printf("Printing the list:\n");
        for (i = 0; i < size ; i++) 
        {
            list[i] = rand() % size;
            printf("%d \t", list[i]);
        }
 
        if (size == 0) 
        {
            printf("Empty list\n");
        }
 
        else 
        {
            largest = list[0];
            largest = large(list, size - 1, largest);
            printf("\nThe largest number in the list is: %d\n", largest);
        }
 
    }
 
    int large(int list[], int position, int largest)
    {
 
        if (position == 0)
            return largest;
 
        if (position > 0) 
        {
            if (list[position] > largest)
            {
                largest = list[position];
            }
            return large(list, position - 1, largest);
        }
 
    }
*/


/*
// Link aseye cozumu
// https://www.youtube.com/watch?v=lUDZLhceO-0

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double F(int n,int x){
	if (n<1) return 0.;//yand return 0. olur se double nicin dir fonksiyon lazim double dundursun.
	return n%3/pow(3,x+1)+F(n/3,++x);
}

int main(){
	int n=6,i;
	double x;
	for(i=1;i<=n;i++){
		x=F(i,0);
		printf("%d %lf\n",i,x);
	}
	return 0;
	
}

*/




/*
//*************************************************************************************
//     7/2/2018 screenshot bilgisayarda cozumu vardir yada altan link vardir..
// 		https://www.youtube.com/watch?v=-aniNrkisFk

#include<stdio.h>
#include<stdlib.h>

int F(int a,int b){
	int t;
	if(a==0) return b;
	printf("%d %d \n",a,b);
	t=a;
	a=b%t;
	return t+F(a,t);
}

int main(){
	int x=77,c,y=3;
	c=F(x,y);
	printf("%d\n",c);
	return 0;
}
*/
 
/*
     * C program accept an array of N elements and a key to search.
     * If the search is successful, it displays "SUCCESSFUL SEARCH".
     * Otherwise, a message "UNSUCCESSFUL SEARCH" is displayed.
     
 
    #include <stdio.h>
    void main()
    {
 
        int array[20];
        int i, low, mid, high, key, size;
 
        printf("Enter the size of an array\n");
        scanf("%d", &size);
 
        printf("Enter the array elements\n");
        for (i = 0; i < size; i++) 
        {
            scanf("%d", &array[i]);
        }
 
        printf("Enter the key\n");
        scanf("%d", &key);
 
        /*  search begins 
 
        low = 0;
        high = (size - 1);
 
        while (low <= high) 
        {
            mid = (low + high) / 2;
 
            if (key == array[mid]) 
            {
                printf("SUCCESSFUL SEARCH\n");
                return;
            }
 
            if (key < array[mid])
                high = mid - 1;
 
            else
                low = mid + 1;
 
        }
 
        printf("UNSUCCESSFUL SEARCH\n");
 
    }
*/


/*
#include <stdio.h>
    void main ()
    {
 
        int number[30];
        int i, n, a, j;
 
        printf("Enter the value of n\n");
        scanf("%d", &n);
 
        printf("enter the numbers\n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        printf("Enter the position of the element to split the array \n");
        scanf("%d", &a);
        for (i = 0; i < a; ++i) 
        {
 
            number[n] = number[0];
            for (j = 0; j < n; ++j) 
            {
                number[j] = number[j + 1];
            }
 
        }
 
        printf("The resultant array is\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", number[i]);
        }
 
    }
*/

/*
 * C Program to Merge and Sort Elements of 2 different arrays
 
#include <stdio.h>
 
void Merge(int * , int , int , int );
 
void MergeSort(int *array, int left, int right)
{
    int middle = (left+right)/2;
    /* We have to sort only when left<right because when left=right it is anyhow sorted
    if(left<right)
    {
        /* Sort the left part
        MergeSort(array, left, middle);
        /* Sort the right part 
        MergeSort(array, middle + 1, right);
        /* Merge the two sorted parts 
        Merge(array, left, middle, right);
    }
}
/* Merge functions merges the two sorted parts 
void Merge(int *array, int left, int middle, int right)
{
    /*to store sorted array
    int tmp[right - left + 1];
    int pos = 0, leftposition = left, rightposition = middle + 1;
    while (leftposition <= middle && rightposition <= right)
    {
        if (array[leftposition] < array[rightposition])
        {
            tmp[pos++] = array[leftposition++];
        }
        else
        {
            tmp[pos++] = array[rightposition++];
        }
    }
    while (leftposition <= middle)
        tmp[pos++] = array[leftposition++];
    while (rightposition <= right)
        tmp[pos++] = array[rightposition++];
    int i;
    /* Copy back the sorted array to the original array 
    for (i = 0; i < pos; i++)
    {
        array[i + left] = tmp[i];
    }
    return;
}
int main()
{
    int size;
    printf("\n enter the size of an array");
    scanf("%d", &size);
    int array[size];
    int i, j, k;
    printf("\n enter the array elements");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    /* Calling this functions sorts the array 
    MergeSort(array, 0, size - 1);
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
*/



/*
     * C program to read N names, store them in the form of an array
     * and sort them in alphabetical order. Output the given names and
     * the sorted names in two columns side by side.
     
 
    #include <stdio.h>
    #include <string.h>
    void main()
    {
 
        char name[10][8], tname[10][8], temp[8];
        int i, j, n;
 
        printf("Enter the value of n \n");
        scanf("%d", &n);
        printf("Enter %d names n", n);
 		
        for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }
 		printf("name[n] %s names n",name[n]);
		 printf("name[j] %s names n",name[j]);
 		printf("name[j] %d names n",strcmp(name[i], name[j]));
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
 
        printf("\n----------------------------------------\n");
        printf("Input Names\tSorted names\n");
        printf("------------------------------------------\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("%s\t\t%s\n", tname[i], name[i]);
        }
 
        printf("------------------------------------------\n");
 
    }
*/

/*
    /*
     * C program to accept N numbers and arrange them in an ascending order
     
 
    #include <stdio.h>
    void main()
    {
 
        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) //<-solda yapar kucukten buyuge ******** ->sagda yapar buyukten kucuge............. if (number[i] < number[j])
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }
*/


/*

#define BASLA  0  /* döngünün baslangiç noktasi 
#define BITIR  9  /* döngünün bitis noktasi     
#define MAX(A,B)  ((A)>(B)?(A):(B))  /* Max makro tanimlanmasi 
#define MIN(A,B)  ((A)>(B)?(B):(A))  /* Min makro tanimlanmasi 
main()
{
 int index,mn,mx;
 int sayac  = 5;
  for (index = BASLA;index <= BITIR;index++) {
    mx = MAX(index,sayac);
    mn = MIN(index,sayac);
    printf("Max simdi %d ve min de %d ..\n",mx,mn);
  }
}
*/



/* faktoriyel
#include <stdio.h>
unsigned long factorial(unsigned long);
int main()
{
        int num;
        printf("Faktoriyeli alinacak rakami yazin. \n");
        scanf("%d",&num);
        printf("%d nin faktoriyeli: %ld dir.\n", num, factorial((unsigned long) num));
}
unsigned long factorial(unsigned long i)
{		
		printf("Evvel %d nin faktoriyeli \n", i-1);
        if (i==0) return 1;
       	printf("%d nin faktoriyeli \n", i-1);
	    return (i * factorial(i-1));
        
}
*/


/*
//Recursion
#include <stdio.h>
int main()
{
   int index;
   index = 8;
   geri_say(index);
} 
geri_say(rakam) 
int rakam;
{
   rakam--;
   printf("rakam degeri %d dir.\n",rakam);
   if (rakam > 0)
   geri_say(rakam);
   printf("Simdi rakam %d oldu..\n",rakam);
}
*/


/*
#include <stdio.h>
int say;        /* Bu bir global degiskendir. 
int main()
{
   register int index; /* Bu degisken sadece "main" içinde kullanilabilir 
   baslik_1();
   baslik_2();
   baslik_3();
   /* bu programin ana "for" döngüsü  
   for (index = 8;index > 0;index--)
   {
       int birsey; /* Bu degisken sadece bu küme isaretleri arasinda tanimli 
       for (birsey = 0;birsey <= 6;birsey++)
           printf("%d ",birsey);
        printf(" index simdi: %d oldu.\n",index);
   }
}
int sayac;      /* Bu degisken bu noktadan sonra kullanilabilir.
baslik_1()
{
   int index;        /* Bu degisken sadece baslik_1 içinde tanimli 
   index = 23;
   printf("Baslik_1 deki degeri %d\n",index);
}
baslik_2()
{
   int say;    /* Bu degisken sadece baslik_2 içinde geçerli 
   /* ayni isimli global degiskenin yerini alir.. 
   say = 53;
   printf("Baslik_2 deki degeri %d\n",say);
   sayac = 77;
}
baslik_3()
{
   printf("Baslik_3 deki degeri ise %d\n",sayac);
}
*/



/*
main()
   {
   int kamyon;
   for (kamyon = 3; kamyon<13; kamyon = kamyon + 1)
   {
   	switch (kamyon)
   	{
   		case 3: printf("Degeri simdi uc.\n");
   			break;
   		case 4: printf("Degeri simdi dort.\n");
   			break;
   		case 5:
   		case 6:
   		case 7:
   		case 8: printf("Degeri simdi 5 le 8 arasinda.\n");
   			break;
   		case 11:printf("Degeri simdi onbir.\n");
   		break;
   		default:printf("tanimsiz degerlerden biri.\n");
   		break;
   	}  // switch komutu bitti
   } // for dongusu bitti
}  // aa, program bitti! :)
*/

/*
main()  /* Santigrad'dan Fahrenheite
{
  int count;      /* for degiskeni
  int fahr;       /* fahrenheit Degerini tutar
  int cen;        /* Santigrat Degerini tutar 
  printf("Santigrad -> Fahrenheit karsilik tablosu\n\n"); 
  for (count=-2;count<=12;count=count+1)
  {
     cen = 10 * count;
     fahr = 32 + (cen * 9) / 5;
     printf(" C = %4d  F = %4d  ",cen,fahr);
     if (cen == 0)
        printf(" Suyun donma noktasi");
     if (cen == 100)
        printf(" Suyun kaynama noktasi");
     printf("\n");
   }
  }
*/


/*
     * C Program to accept N integer number and store them in an array AR.
     * The odd elements in the AR are copied into OAR and other elements
     * are copied into EAR. Display the contents of OAR and EAR.
 
    #include <stdio.h>
    void main()
    {
 
        long int ARR[10], OAR[10], EAR[10];
        int i, j = 0, k = 0, n;
 
        printf("Enter the size of array AR \n");
        scanf("%d", &n);
 
        printf("Enter the elements of the array \n");
        for (i = 0; i < n; i++)
        {
            scanf("%ld", &ARR[i]);
            fflush(stdin);
        }
 
        /*  Copy odd and even elements into their respective arrays 
 
        for (i = 0; i < n; i++)
        {
            if (ARR[i] % 2 == 0)
            {
                EAR[j] = ARR[i];
                j++;
            }
            else
            {
                OAR[k] = ARR[i];
                k++;
            }
        }
 
        printf("The elements of OAR are \n");
        for (i = 0; i < k; i++)
        {
            printf("%ld\n", OAR[i]);
        }
 
        printf("The elements of EAR are \n");
        for (i = 0; i < j; i++)
        {
            printf("%ld\n", EAR[i]);
        }
 
    }
*/



/*
 * C Program to Find the Largest Number in an Array
 
#include <stdio.h>
 
int main()
{
 
        int array[50], size, i, largest;
 
        printf("\n Enter the size of the array: ");
	scanf("%d", &size);
 
        printf("\n Enter %d elements of  the array: ", size);
 
        for (i = 0; i < size; i++)
		scanf("%d", &array[i]);
 
        largest = array[0];
 
        for (i = 1; i < size; i++) 
        {
		if (largest < array[i])
			largest = array[i];
	}
 
        printf("\n largest element present in the given array is : %d", largest);
 		for (i = 0; i < size; i++)
		printf("\n%d\n", array[i]);
        return 0;
 
}

*/


/*
     * C program to read in four integer numbers into an array and find the
     * average of largest two of the given numbers without sorting the array.
     * The program should output the given four numbers and the average.
    
 
    #include <stdio.h>
    #define MAX 4
 
    void main()
    {
        int array[MAX], i, largest1, largest2, temp;
 
        printf("Enter %d integer numbers \n", MAX);
        for (i = 0; i < MAX; i++)
        {
            scanf("%d", &array[i]);
        }
 
        printf("Input integer are \n");
        for (i = 0; i < MAX; i++)
        {
            printf("%5d", array[i]);
        }
 
        printf("\n");
        /*  assume first element of array is the first larges t
 
        largest1 = array[0];
        /*  assume first element of array is the second largest 
 
        largest2 = array[1];
        if (largest1 < largest2)
        {
            temp = largest1;
            largest1 = largest2;
            largest2 = temp;
        }
 
        for (i = 2; i < 4; i++)
        {
            if (array[i] >= largest1)
            {
                largest2 = largest1;
                largest1 = array[i];
            }
            else if (array[i] > largest2)
            {
                largest2 = array[i];
            }
        }
 
        printf("n%d is the first largest \n", largest1);
 
        printf("%d is the second largest \n", largest2);
 
        printf("\n Average of %d and %d = %d \n", largest1, largest2,
 
        (largest1 + largest2) / 2);
 
    }
    
    */
    
    
    
/*
#include <stdio.h>
#include <stdlib.h>
 
int maxSubArraySum(int a[], int size, int *begin, int *end)
{
    int max_so_far = 0, max_end = 0;
    int i, current_index = 0;
 
    for (i = 0; i < size; i++)
    {
        max_end = max_end + a[i];
        if (max_end <= 0)
        {
            max_end = 0;
            current_index = i + 1;
        }		//56 = max_so_far in degeri //max_end = 51
        else if (max_so_far < max_end)
        {
            max_so_far = max_end;
            *begin = current_index;
            *end = i;
        }
   }
   return max_so_far;
}
 
int main()
{
    int arr[] = {10, -2, 15, 9, -8, 12, 20, -5};
    int start = 0, end = 0;
    int size = sizeof(arr) / sizeof(arr[1]);
 	printf(" The begin and ARR are %d \n"  ,sizeof(arr));
 	printf(" The begin and ARR0 are %d \n",  sizeof(arr[0]));
 	printf(" The begin and SIZE are %d \n",  size);
    printf(" The max sum is %d", maxSubArraySum(arr, size, &start, &end));
    printf(" The begin and End are %d & %d", start, end);
    getchar();
    return 0;
}
*/


/*
 * C program to find the sum of two one-dimensional arrays using
 * Dynamic Memory Allocation

 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
 
void main()
{
 
        int i, n;
	int *a, *b, *c;
 
        printf("How many Elements in each array...\n");
        scanf("%d", &n);
 
        a = (int *)malloc(n * sizeof(int));
        b = (int *)malloc(n * sizeof(int));
	c = (int *)malloc(n * sizeof(int));
 
        printf("Enter Elements of First List\n");
 
        for (i = 0; i < n; i++)
        {
  		scanf("%d", a + i);
	}
 
        printf("Enter Elements of Second List\n");
 
        for (i = 0; i < n; i++)
        {
 		scanf("%d", b + i);
	}
 
        for (i = 0; i < n; i++)
        {
		*(c + i) = *(a + i) + *(b + i);
	}
 
        printf("Resultant List is\n");
 
        for (i = 0; i < n; i++)
        {
		printf("%d\n", *(c + i));
	}
 
}
*/

/* Yorum satirina ne aldim 28 29 siradaki kodlari idiler denemek icin nicin cikardi 3000
    
     * C program to find the sum of all elements of an array using 
     * pointers as arguments.
     
    
 
#include <stdio.h>
 
void main()
{
	static int array[5] = { 200, 400, 600, 800, 1000 };
	int sum;
 
  	int addnum(int *ptr);
     	sum = addnum(array);
 
        printf("Sum of all array elements = %5d\n", sum);
 
}
 
int addnum(int *ptr)
{
	int index, total = 0;
	for (index = 0; index < 5; index++) 
        {
		total += *(ptr + index);
		//printf("Sum of all array elements = %5d\n", index);
		//printf("Sum of all array elements = %5d\n", total);
	}
	return(total);
 
}
*/

/*
    * C program to read N integers and store them in an array A.
    * Find the sum of all these elements using pointer.
   
#include <stdio.h>
#include <malloc.h>
 
void main()
{
	int i, n, sum = 0;
	int *a;
 
     	printf("Enter the size of array A \n");
	scanf("%d", &n);
 
        a = (int *) malloc(n * sizeof(int));
 
        printf("Enter Elements of First List \n");
	for (i = 0; i < n; i++) 
        {
		scanf("%d", a + i);
	}
 
        *  Compute the sum of all elements in the given array
 
        for (i = 0; i < n; i++)
        {
		sum = sum + *(a + i);
	}
 
        printf("Sum of all elements in array = %d\n", sum);
 
}

*/
    /*
     * C program to read N integers into an array A and
     * a) Find the sum of negative numbers
     * b) Find the sum of positive numbers
     * c) Find the average of all numbers
     * Display the results with suitable headings
    
 
#include  <stdio.h>
#define MAXSIZE 10
 
void main()
{
 
        int array[MAXSIZE];
	int i, num, negative_sum = 0, positive_sum = 0;
	float total = 0.0, average;
 
        printf ("Enter the value of N \n");
	scanf("%d", &num);
 
        printf("Enter %d numbers (-ve, +ve and zero) \n", num);
 
        for (i = 0; i < num; i++) 
        {
		scanf("%d", &array[i]);
	}
 
        printf("Input array elements \n");
 
        for (i = 0; i < num; i++) 
        {
		printf("%+3d\n", array[i]);
        }
 
        *  Summation starts 
 
        for (i = 0; i < num; i++) 
        {
 
		if (array[i] < 0) 
                {
			negative_sum = negative_sum + array[i];
		}
		else if (array[i] > 0)
                {
			positive_sum = positive_sum + array[i];
		}
		else if (array[i] == 0) 
                {
			;
		}
		total = total + array[i] ;
 
        }
 
        average = total / num;
 
        printf("\n Sum of all negative numbers =  %d\n", negative_sum);
 
        printf("Sum of all positive numbers =  %d\n", positive_sum);
 
        printf("\n Average of all input numbers =  %.2f\n", average);
 
}
*/

/*
 * C Program to Print the Program Name and All its Arguments
 
#include <stdio.h>
 
void main(int argc, char *argv[])    * command line Arguments 
{
    int i;
    for (i = 0;i < argc;i++)
    {
        printf("%s ", argv[i]);      * Printing the string 
    }
    printf("\n");
}
*/

/* 
 *int int char girirsin cmd komut penceresinde

#include <stdio.h>
 
void main(int argc, char * argv[])
{
    int a, b, result;
    char ch;
 
    printf("arguments entered: \n");
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    ch  = *argv[3];
    printf("%d %d %c", a, b, ch);
    switch (ch)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case 'x':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("Enter a valid choice");
    }
    printf("\nThe result of the operation is %d", result);
    printf("\n");    
}
*/


/*
 *Degerleri degistiren program
 
#include <stdio.h>
 
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
 
int main()
{
    int num1 = 10, num2 = 20;
 
    printf("Before swapping num1 = %d num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping num1 = %d num2 = %d \n", num1, num2);
    return 0;
}
*/

/*

* C Kendi Kaynak Kodunu Çiktisi Olarak Gösteren Program
#include <stdio.h>
 
int main()
{
    FILE *fp;
    char ch;
 
    fp = fopen("Parking Sensor.txt","r");
    do
    {
        ch = getc(fp);
        putchar(ch);
     }
     while (ch != EOF);
     fclose(fp);
     return 0;
}
*/

/*
* C Program to Print any Print Statement without using Semicolon
#include <stdio.h>
 
void main()
{
    if(printf("Hi.. Welcome to Gostivar"))
    {
    }
}
*/



/*
 * C Program to Print Diamond Pattern
 
#include <stdio.h>
 
int main()
{
    int number, i, k, count = 1;
 
    printf("Enter number of rows\n");
    scanf("%d", &number);
    count = number - 1;
    for (k = 1; k <= number; k++)
    {
        for (i = 1; i <= count; i++)
            printf(" ");
        count--;
        for (i = 1; i <= 2 * k - 1; i++)
            printf("*");
        printf("\n");
     }
     count = 1;
     for (k = 1; k <= number - 1; k++)
     {
         for (i = 1; i <= count; i++)
             printf(" ");
         count++;
         for (i = 1 ; i <= 2 *(number - k)-  1; i++)
             printf("*");
         printf("\n");
      }
      return 0;
}

*/

/* Main olmadan program calistirmak
#include <stdio.h>
#define decode(s,t,u,m,p,e,d) m##s##u##t
#define begin decode(a,n,i,m,a,t,e)
 
int begin()
{
    printf(" helloworld ");
}
*/


/*#include <stdio.h>
 
void main()
{
    union sample
    {
        int   m;
        float n;
        char  ch;
    };
    union sample u;
 
    printf("The size of union = %d\n", sizeof(u));
    *  initialization 
    u.m = 25;
    printf("%d %f %c\n", u.m, u.n, u.ch);
    u.n = 0.2;
    printf("%d %f %c\n", u.m, u.n, u.ch);
    u.ch = 'p';
    printf("%d %f %c\n", u.m, u.n, u.ch);
}
*/

/*UNION ORNEGI 

#include <stdio.h>
 
#define OTO 1
#define TEKNE 2
#define UCAK 3
#define GEMI 4
   
main()
{
   struct otomobil {  * bir otomobil icin structure        
     int tekerlekler;
     int camurluklar;
     int kapilar;
   };
   
   typedef struct {     * bir gemi yada tekne icin structure  
     int su_kesimi;
     char boyu;
   } TEKNEDEF;
   
   struct {
     char tasit;         * ne cins tasit                  
     int agirlik;        * tasitin gros agirligi             
     union {             * tipe-bagimli bilgi                
       struct otomobil oto;      * union'un birinci kismi  
       TEKNEDEF tekne;           * union'un ikinci kismi    
     struct {
       char motorlar;
       int kanat_acikligi;
     } ucak;                   * union'un 3uncu kismi      
     TEKNEDEF ship;            * union'un 4uncu kismi     
   } tasit_tip;
   int deger;            * tasitin bin TL olarak degeri  
   char sahibi[32];      * sahibinin ismi                
   } ford, sun_fish, piper_cub;   * 3 structure degiskeni   
   
   * birkac sahayi tanimlayalim                      
   
   ford.tasit = OTO;
   ford.agirlik = 2742;              * deposu dolu iken  
   ford.tasit_tip.oto.tekerlekler = 5;  * istepne dahil  
   ford.tasit_tip.oto.kapilar = 2;
   
   sun_fish.deger = 3742;           * trailer haric 
   sun_fish.tasit_tip.tekne.boyu = 5;
   
   piper_cub.tasit = UCAK;
   piper_cub.tasit_tip.ucak.kanat_acikligi = 9;
   
   if (ford.tasit == OTO)   * evet , oyle  
     printf("Ford'un %d tekerlegi var.\n",ford.tasit_tip.oto.tekerlekler);
   
   if (piper_cub.tasit == OTO) * hayir,degil 
     printf("Ucagin %d tekerlegi var.\n",piper_cub.tasit_tip.
        oto.tekerlekler);
}
*/

/*
IC ICE VE ISIMLI STRUCTURE'LAR

ICICE.C:
   ================================================================
main()
{
   struct insan {
      char isim[25];
      int yas;
      char durum;        * E = Evli , B = Bekar 
   } ;
   struct tumveri {
      int not;
      struct insan ozellikler;
      char yemek[25];
   } ogrenci[53];
 struct tumveri hoca,asistan; 
 hoca.not = 94; hoca.ozellikler.yas = 34; hoca.ozellikler.durum = 'E';
 strcpy(hoca.ozellikler.isim,"Mary Smith");
 strcpy(hoca.yemek,"Salamli sandvic"); asistan.ozellikler.yas = 87; 

 asistan.ozellikler.durum = 'E'; 
 strcpy(asistan.ozellikler.isim,"Old Lady Brown"); asistan.not = 73;
 strcpy(asistan.yemek,"Yogurt ve ekmek"); 
 ogrenci[1].ozellikler.yas = 15;  ogrenci[1].ozellikler.durum = 'B'; 
 strcpy(ogrenci[1].ozellikler.isim,"Billy  Boston"); 
 strcpy(ogrenci[1].yemek,"Findik ezmesi"); ogrenci[1].not = 77;
 ogrenci[7].ozellikler.yas = 14;
 ogrenci[12].not = 87;
}
================================================================
*/

/*
#include <stdio.h>
 
main()
{
   struct {
      char bas_harf;
      int yas;
      int not;
   } cocuklar[12],*point;
   int index;
   for (index = 0;index < 12;index++) {
      point = cocuklar + index;
      point->bas_harf = 'A' + index;
      point->yas = 16;
      point->not = 84;
   }
   cocuklar[3].yas = cocuklar[5].yas = 17;
   cocuklar[2].not = cocuklar[6].not = 92;
   cocuklar[4].not = 57;
   
   for (index = 0;index < 12;index++) {
      point = cocuklar + index;
      printf("%c , %d yasindadir ve notu %d dur.\n",
         (*point).bas_harf, cocuklar[index].yas,
         point->not);
   }
}
*/


/*
#include <stdio.h>
 
main()
{
   struct {
      char bas_harf;
      int yas;
      int not;
   } cocuklar[12];
   int indeks;
   
   for (indeks = 0;indeks < 12;indeks++) {
      cocuklar[indeks].bas_harf = 'A' + indeks;
      cocuklar[indeks].yas = 16;
      cocuklar[indeks].not = 84;
   }
   cocuklar[3].yas = cocuklar[5].yas = 17;
   cocuklar[2].not = cocuklar[6].not = 92;
   cocuklar[4].not = 57;
   for (indeks = 0;indeks < 12;indeks++)
       printf("%c , %d yasindadir ve  notu %d dur.\n",
          cocuklar[indeks].bas_harf, cocuklar[indeks].yas,
          cocuklar[indeks].not);
          char yasin='A'+1;
          printf("%c",yasin);
}
*/

/*
 * C Program to Display the ATM Transaction
 
#include <stdio.h>
 
unsigned long amount=1000, deposit, withdraw;
int choice, pin, k;
char transaction ='y';
 
void main()
{
	while (pin != 1520)
	{
		printf("ENTER YOUR SECRET PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != 1520)
		printf("PLEASE ENTER VALID PASSWORD\n");
	}
	do
	{
		printf("********Welcome to ATM Service**************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("******************?**************************?*\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n YOUR BALANCE IN Rs : %lu ", amount);
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdraw >(amount - 500))
			{
				printf("\n INSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n\n PLEASE COLLECT CASH");
				printf("\n YOUR CURRENT BALANCE IS%lu", amount);
			}
			break;
		case 3:
			printf("\n ENTER THE AMOUNT TO DEPOSIT");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("YOUR BALANCE IS %lu", amount);
			break;
		case 4:
			printf("\n THANK U USING ATM");
			break;
		default:
			printf("\n INVALID CHOICE");
		}
		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	} while (!k);
	printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}

*/

/*
#include <stdio.h>

main()

{

char ch,ch1,ch2;

printf("birinci karakteri girin...:");

ch=getch();

printf(" ikinci karakteri girin...:");

ch1=getch();

printf(" üçüncü karakteri girin...:");

ch2=getch();

printf(" girdiginiz karakterler...:%c %c %c",ch,ch1,ch2);

getch();

}

*/

/*
#include <stdio.h>
 
void main()
{
    struct date
    {
        int day;
        int month;
        int year;
    };
    struct details
    {
        char name[20];
        int price;
        int code;
        int qty;
        struct date mfg;
    };
    struct details item[50];
    int n, i;
 
    printf("Enter number of items:");
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Item name: \n");
        scanf("%s", item[i].name);
        fflush(stdin);
        printf("Item code: \n");
        scanf("%d", &item[i].code);
        fflush(stdin);
        printf("Quantity: \n");
        scanf("%d", &item[i].qty);
        fflush(stdin);
        printf("price: \n");
        scanf("%d",  &item[i].price);
        fflush(stdin);
        printf("Manufacturing date(dd-mm-yyyy): \n");
        scanf("%d-%d-%d", &item[i].mfg.day,
        &item[i].mfg.month, &item[i].mfg.year);
    }
    printf("             *****  INVENTORY ***** \n");
    printf("------------------------------------------------------------------\n");
    printf("S.N.|    NAME           |   CODE   |  QUANTITY |  PRICE| MFG.DATE \n");
    printf("------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
        printf("%d     %-15s        %-d          %-5d     %-5d  %d/%d/%-2d \n", i + 1, item[i].name, item[i].code, item[i].qty,item[i].price, item[i].mfg.day, item[i].mfg.month,item[i].mfg.year);
    printf("------------------------------------------------------------------\n");
}
*/


/*

#include <stdio.h>
#include<stdlib.h>
int main()
{
    char str[20];
    int i;
    for (i=0; i<2; i++)
    {
        scanf("%s", str);
        printf("%s\n", str);
        //fflush(stdin);
    }
    return 0;
}


*/

/*#include <stdio.h>
 
void main()
{
	char password[10], username[10], ch;
	int i;
 
	printf("Enter User name: ");
	gets(username);
	printf("Enter the password < any 8 characters>: ");
	for (i = 0; i < 8; i++)
	{
            ch = getchar();
            password[i] = ch;
            ch = '*' ;
            printf("%c", ch);
	}
        password[i] = '\0';
	*  Original password can be printed, if needed 
	printf("\n Your password is :");
	for (i = 0; i < 8; i++)
	{
            printf("%c", password[i]);
	}
}
*/

/*#include <stdio.h>
 
void main()
{
    long number, tempnum;
 
    printf("Enter an integer \n");
    scanf("%ld", &number);
    tempnum = number;
    *  left shift by two bits
    number = number << 2;
    printf("%ld x 4 = %ld\n", tempnum, number);
}
*/

/*
#include <stdio.h>
 
int primeno(int, int);
 
int main()
{
    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);
    check = primeno(num, num / 2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
 
int primeno(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primeno(num, i - 1);
       }       
    }
}
*/ 
/*
#include <stdio.h>
 
void main()
{
    long  num, reverse = 0, temp, remainder;
 
    printf("Enter the number\n");
    scanf("%ld", &num);
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Its reverse is = %ld\n", reverse);
}
*/
/*
 * C Program to find Product of 2 Numbers without using Recursion
 

#include <stdio.h>
 
int product(int, int);
 
int main()
{
    int a, b, result;
 
    printf("Enter two numbers to find their product: ");
    scanf("%d%d", &a, &b);
    result = product(a, b);
    printf("Product of %d and %d is %d\n", a, b, result);
    return 0;
}
 
int product(int a, int b)
{
    int temp = 0;
 
    while (b != 0)
    {
        temp += a;
        b--;
    }
    return temp;
}
*/

  /*C Program to Print Armstrong Number from 1 to 1000
  */
  
  
/*
#include<stdio.h>

#include<stdlib.h>

#include<time.h>
int sayisal();

int main()

{ int x;

do{

printf("Bu Haftanin Sansli Sayilari Siralamak icin 1 e basin");

scanf("%d",&x);

}while(x!=1);
sayisal();
getchar();getchar();
return 0;
}


int sayisal()

{


int i,a;


int degistir;


degistir=time(NULL);


srand(degistir);


for(i=0;i<6;++i)

{

a = (rand()%49)+1;

printf("Bu haftanin sansli %d. rakami: %d \n",i+1,a);
}
}
*/

/*
#include <stdio.h>
 
#define     MAX     100000
 
int get_sumf(int val)
{
    int sum = 1;
    int k;
 
    for (k = 2; k <= val / 2; ++k)
        if (val % k == 0)
            sum += k;
    return sum;
}
 
int main()
{
    int i, k;
 
    for (i = 2; i < MAX; ++i) { 
        int val = get_sumf(i);
        for (k = 0; k < i; ++k) 
            if (val == k && get_sumf(k) == i)
                printf("%d %d\n", i, k);
    }
    return 0;
}
*/

/* 
* CMD DA YAZSAK bayin numra oni cikarir


#include <stdio.h>

int main( int argc, char *argv[] )  {

   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
}
*/

/*#include <stdio.h>
 
void main()
{
    long i, k;
 
    printf("Enter two integers \n");
    scanf("%ld %ld", &i, &k);
    printf("\n Before swapping i= %ld and k = %ld", i, k);
    i = i ^ k;
    printf("\n Before swapping i= %ld"/*, i);
    k = i ^ k;
    printf("\n Before swapping k= %ld", k);
    i = i ^ k;
    printf("\n After swapping i= %ld and k = %ld", i, k);
}
*/
