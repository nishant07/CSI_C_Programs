                              /* Chapter 3 - Program 10 - STYLE1.C */
/* STYLE1.C - Style illustration file                              */
/* copyright - Coronado Enterprises - 1996                         */

/* This program does nothing useful as far as being an executable  */
/*  program.  It is intended to be simply a guide to style.  Since */
/*  style is realy a matter of personal taste, there are many      */
/*  possible styles that a C programmer could adopt.  Since it is  */
/*  assumed that the student is a relatively new C programmer, he  */
/*  has not yet developed a good style.  This program is intended  */
/*  to help with that task.  This header block is intended to give */
/*  a good illustration of a title block to begin a program.       */

#include <stdio.h>

int main()
{
int index;
int count = 5;
int loop_count;

      /* The following control statements illustrate one way to    */
      /*  format your control statements.  You will notice that    */
      /*  the beginning brace used as a block delimiter is placed  */
      /*  at the end of the control statement.  The end brace is   */
      /*  lined up under the control word when the block is term-  */
      /*  inated.  This style appears in some of the literature    */
      /*  which contains C source code.                            */
      /* Note also that the block format for these comments is     */
      /*  only one of many possible styles also.                   */
      
   for (index = 0 ; index < 7 ; index = index + 1) {
      printf("The value of ");
      printf("index is %d\n", index);
      if (count < 5) {
         printf("The value of count is %d ", count);
         printf(" this is less than 5\n");
      } else {                          
         loop_count = 0;
         do {
            printf("The value of loop_count is %d\n", loop_count);
            loop_count = loop_count + 1;
         } while (loop_count < 3);
         printf("The value of count is %d ", count);
         printf(" this is not less than 5\n");
      }
   }
      
      /*************************************************************/
      /* The following style is another very popular wy to format  */
      /*  control statements.  In this style, the opening brace    */
      /*  for a control block is placed on a line of its own but   */
      /*  still lined up under the keyword for the control block.  */
      /*  This is still very clear, and quite popular.             */
      /* Note the slight change in the comment block.  This style  */
      /*  is very popular.                                         */
      /*************************************************************/
   for (index = 0 ; index < 7 ; index = index + 1)
   {
      printf("The value of ");
      printf("index is %d\n", index);
      if (count < 5)
      {
         printf("The value of count is %d ", count);
         printf(" this is less than 5\n");
      }
      else 
      {
         loop_count = 0;
         do 
         {
            printf("The value of loop_count is %d\n", loop_count);
            loop_count = loop_count + 1;
         } while (loop_count < 3);
         printf("The value of count is %d ", count);
         printf(" this is not less than 5\n");
      }
   }

      /* The following block formatting style is used quite often
       *  in the literature, but it is not very clear to this 
       *  author, so it is never the style method of choice by him.
       *  Some programmers swear by it and think it is the only 
       *  valid way to format control statements.
       * This form of comment block is very common, but there seems
       *  to be no end to the slight variations of this style.  You
       *  should pick a style, and use it until you find something
       *  else that appeals to you.
       */
   for (index = 0 ; index < 7 ; index = index + 1)
      {
      printf("The value of ");
      printf("index is %d\n", index);
      if (count < 5)
         {
         printf("The value of count is %d ", count);
         printf(" this is less than 5\n");
         }
      else 
         {
         loop_count = 0;
         do 
            {
            printf("The value of loop_count is %d\n", loop_count);
            loop_count = loop_count + 1;
            } while (loop_count < 3);
         printf("The value of count is %d ", count);
         printf(" this is not less than 5\n");
         }
      } 
   
   return 0;  
/* 
   Considerable effort has been put into the source code for the
    example programs in this tutorial.  As you work your way through
    the example programs pay attention to the formatting style used
    throughout.  You have a lot to gain by choosing and using a very
    consistent programming style.
    
   This is yet one more way to format comments.  You will develop a
    style of your own fairly quickly.
*/
}



/* Result of execution

(There is a lot of meaningless printout, but the output is not of
much concern with this program.)
 
*/
