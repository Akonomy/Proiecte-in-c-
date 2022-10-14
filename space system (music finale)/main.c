#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define box(x,y,z,string) printf("Transform{ children[ Shape { geometry Box { size  "); printf(#x"  ");printf(#y" ");printf(#z"  "); printf("} appearance USE   ");printf(#string"  ");printf( "}}]}\n");
#define sphere(x,string) printf("Transform{ children[ Shape { geometry Sphere { radius  "); printf(#x"  ");  printf("} appearance USE   ");printf(#string"  ");printf( "}}]}\n");
 //#define color_blue    printf ("  Shape { appearance DEF App Appearance { material Material { diffuseColor 0 0 1 }}} \n");


float x,y,z,xa,a1,ya,xb,a0,yb,xc,a1=5,yc,xd,a0=-1,a2=-1,a3=5,yd,adder,adderdens;
int pas=0,az=0,ad;
float x=0,y=1,z=0,upl,upd,dwl,dwd,cateta1,cateta2,degrees,degreesb=0,cadran=0;
  float cat1,cat2,cat3,cat4,cat10,cat20,cat30,cat40,dega,degb,dega0,degb0,red=0,green=0,blue=0,dim0=1,dim1=4,dim2=1,dim3=0;
  int i,cp0=0,cp1=0,cp2=0,cp3=0,cp4=0,css=0,random,yrand=0,ysemn_a=0,ysemn_b=0,ysemn_citire,inner_generatori=0;


int main()
{
    char animatebool='1';
    float timp_animatie,timmer=20;
    int memory=0;
        box(5,4,6,app2);
        sphere(.3,app4);



       //Shape { appearance DEF App Appearance { material Material { diffuseColor 0 .23 .31 }}}
    //Transform {children	[Shape {geometry IndexedLineSet	{coord Coordinate {point [ 0 0 0 1 1 1 2 2 2 ] } coordIndex	[ 0 1 2 ] } appearance USE App }]}
   printf("#Alege te rog raza cercului: \n # ");
  scanf("%f",&adder);
   printf("#Acum alege densitatea obiectelor , TIP: pentru cercuri mici <15 poti alege 1 pentru cercuri mai mari alege  un numar mai mic \n #   ");
  scanf("%f",&adderdens);


  system("cls");

   printf("#VRML V2.0 utf8 \n  ");
   printf ("  Shape { appearance DEF App Appearance { material Material { diffuseColor 0 .23 .31 }}} \n");
    printf ("  Shape { appearance DEF App1 Appearance { material Material { diffuseColor 1 .23 .31 }}} \n");
     printf ("  Shape { appearance DEF App2 Appearance { material Material { diffuseColor 0 .1 .31 }}} \n");
      printf ("  Shape { appearance DEF App3 Appearance { material Material { diffuseColor 0 .45 .50 }}} \n");

    printf ("  Shape { appearance DEF App4 Appearance { material Material { diffuseColor 1 1 .31 }}} \n");
    printf ("  Shape { appearance DEF App5 Appearance { material Material { diffuseColor 1 .1 .1 }}} \n");
     printf ("  Shape { appearance DEF App6 Appearance { material Material { diffuseColor 0 1 .31 }}} \n");
      printf ("  Shape { appearance DEF App7 Appearance { material Material { diffuseColor 0 0 .9 }}} \n");

     ///  printf (" Transform {children	[Shape {geometry Sphere{ radius 1 } appearance USE App }]}\n ");

        COORD();
        ///spatiu pt animatii , states inners;
        inner_generatori=1;


        inner_generatori=2;

        inner_generatori=3;

        /*
          ///ANIMATOR ZONE

            ///ADD FOR FUNTION FOR SMOOTH ROTATION *****
           printf("DEF	accs CoordinateInterpolator	{ key	[0 .05 .1 .15 .2 .25  .3 .35 .4 .45 .5 .55 .6 .65 .7 .75  .8 .85  .90 .95 1 ] \n keyValue [  ");
            ///ADD SPECIAL NUMBER BASED ON TOP FUNCTION **
        for(int ad=0;ad<=20; ad++)
        {
            degreesb=0;
            cadran=0;

            //calculare coordonate  , 4 points *
            COORD();
            printf(" \n ") ;
        }

         //ending

	printf("]} DEF	time TimeSensor	{ cycleInterval %f loop TRUE } ROUTE time.fraction_changed	TO accs.set_fraction ROUTE accs.value_changed TO	az.set_point \n Viewpoint{ position 0 0 0} ",timmer);

           */
     printf("\n#fisierul tip .wrl a fost generat cu succes , va multumim ca ati folosit acest program \n# valori  %d %d %d %d %d // a1 %f a0 %f dim0 %f dim1 %f",cp0,cp1,cp2,cp3,cp4,a1,a0,dim0,dim1) ;

  //se scaneaza ceva random pentru a putea da copy in consola cu tasta control
  scanf("%d",&adder);
    return 0;
}

//END OF PRINCIPAL MAIN
///Coords generator
  void COORD ()

  {
      srand(time(NULL));
      degreesb=0;
       for (int i=0;i<=360/adderdens;i++)
  {
        red=red+0.0009;
        if(red>=1)
        {
            red=1;
          blue=blue+0.0009;
        }
        if(blue>=1)
        {
            blue=1;
            red=0;
           green=green+0.0009;
        }

        if(green>=1.6)
        {
            red=red+0.005;
            blue=0.999;
            green=1.7;
        }


           /*
           upl=rand()%10;
           if(upl==0)
           {
               red=red+0.005;
           }
            if(upl==1)
           {
               blue=blue+0.008;
           }
            if(upl==2)
           {
               green=green+0.005;
           }
           if(upl==3)
           {
               red=red+0.01;
           }
            if(upl==4)
           {
               blue=blue-0.009;
           }
            if(upl==5)
           {
               green=green+0.01;
           } */
          /* red=rand()%2;
           blue=rand()%2;
           green=rand()%2;
            */



       upd=rand()%2;
       dega=adder-1;
       degb=adder+5;
      degrees=degreesb*3.14/180;
      yrand=50;
      ysemn_a=1;
      ysemn_b=-1;



       if(upd==0)
      {
         a1=((float)rand()/(float)(RAND_MAX)) * (rand()%yrand)*(ysemn_a);
      }
      if(upd==1)
      {
        a3=((float)rand()/(float)(RAND_MAX)) * (rand()%yrand)*(ysemn_b);

      }

       //y=1;
       //a1=50;
       //a3=50;

       ///+1 -2 +3 -4
       //another thing
       int appi=1,lever=0;


         if(degreesb==lever)
      {
          appi=appi+1;

          if (appi=1)
          {
              lever=90;
              appi=0;
              degreesb=0;
          }
          if(appi=0)
          {
              lever=0;
              appi=1;
              degreesb=90;
          }

        cadran=cadran+1;
      }


       //something important
       if(1)
       {
           if(cadran==0)
           {
              degreesb=degreesb-adderdens;
           }
           if(cadran==1)
           {
               degreesb=degreesb+adderdens;
           }
           if(cadran==2)
           {
              degreesb=degreesb-adderdens;
           }
           if(cadran==3)
           {
               degreesb=degreesb+adderdens;
           }

       }

       /**so, c1++,c2--,c2++,c4--   **/






           ///change for dega and degb *4!

         if(cadran==0)
         {
     cateta1=adder*sin(degrees);
     cat1=dega*sin(degrees);
     cat2=dega*sin(degrees);
     cat3= degb*sin(degrees);
     cat4= degb*sin(degrees);
     degrees=90-degreesb;
     cat10= dega*cos(degreesb*3.14/180);
     cat20= dega*cos(degreesb*3.14/180);
     cat30= degb*cos(degreesb*3.14/180);
     cat40= degb*cos(degreesb*3.14/180);
     cateta2=adder*cos(degreesb*3.14/180);
     x=cateta1;
     z=cateta2;
     xa=cat1;
     ya=cat10;
     xb=cat2;
     yb=cat20;
     xc=cat3;
     yc=cat30;
     xd=cat4;
     yd=cat40;


          if( ya==dega || yb==dega || yc==dega || yd==dega || ya==dega*(-1) || yb==dega*(-1) || yc==dega*(-1) || yd==dega*(-1)  )
       {
           printf(" \n");
       }
       if(ya!=dega && yb!=dega && yc!=dega && xd!=dega && ya!=dega*(-1) && yb!=dega*(-1) && yc!=dega*(-1) && yd!=dega*(-1) )
        {
            if(inner_generatori==0)
            {
           // printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xa,a0,ya,red,green,blue);
         printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xb,a1,yb,green,red,blue);
          // printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xc,a2,yc,blue,green,red);
             printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xd,a3,yd,red,green,blue);

  printf("\n");
            }
          cp1=cp1+1;
       }

         cp2=cp1;
         }

          if(cadran==1)
         {
     cateta1=adder*sin(degrees);
     cat1=dega*sin(degrees);
     cat2=dega*sin(degrees);
     cat3= degb*sin(degrees);
     cat4= degb*sin(degrees);
     degrees=degreesb-90;
     cat10= dega*cos(degreesb*3.14/180);
     cat20= dega*cos(degreesb*3.14/180);
     cat30= degb*cos(degreesb*3.14/180);
     cat40= degb*cos(degreesb*3.14/180);
     cateta2=adder*cos(degreesb*3.14/180);
      x=cateta1*(-1);
     z=cateta2*(-1);
     xa=cat1*(-1);
     ya=cat10*(-1);
     xb=cat2*(-1);
     yb=cat20*(-1);
     xc=cat3*(-1);
     yc=cat30*(-1);
     xd=cat4*(-1);
     yd=cat40*(-1);

      if( ya==dega || yb==dega || yc==dega || yd==dega || ya==dega*(-1) || yb==dega*(-1) || yc==dega*(-1) || yd==dega*(-1)  )
       {
           printf(" \n");
       }
       if(ya!=dega && yb!=dega && yc!=dega && xd!=dega && ya!=dega*(-1) && yb!=dega*(-1) && yc!=dega*(-1) && yd!=dega*(-1) )
        {
         if(inner_generatori==0)
        {
        //   printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xa,a0,ya,red,green,blue);
         printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xb,a1,yb,red,green,blue);
          // printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xc,a2,yc,red,green,blue);
             printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xd,a3,yd,red,green,blue);

  printf("\n");
        }
        if (inner_generatori==1)
        {

        }
          cp2=cp2+1;

       }
       cp3=cp2;

         }
          if(cadran==2)
         {
     cateta1=adder*sin(degrees);
     cat1=dega*sin(degrees);
     cat2=dega*sin(degrees);
     cat3= degb*sin(degrees);
     cat4= degb*sin(degrees);
     degrees=90-degreesb;
     cat10= dega*cos(degreesb*3.14/180);
     cat20= dega*cos(degreesb*3.14/180);
     cat30= degb*cos(degreesb*3.14/180);
     cat40= degb*cos(degreesb*3.14/180);
     cateta2=adder*cos(degreesb*3.14/180);
      x=cateta1;
     z=cateta2*(-1);
     xa=cat1;
     ya=cat10*(-1);
     xb=cat2;
     yb=cat20*(-1);
     xc=cat3;
     yc=cat30*(-1);
     xd=cat4;
     yd=cat40*(-1);

      if( ya==dega || yb==dega || yc==dega || yd==dega || ya==dega*(-1) || yb==dega*(-1) || yc==dega*(-1) || yd==dega*(-1)  )
       {
           printf(" \n");
       }
       if(ya!=dega && yb!=dega && yc!=dega && xd!=dega && ya!=dega*(-1) && yb!=dega*(-1) && yc!=dega*(-1) && yd!=dega*(-1) )
        {
           if(inner_generatori==0)
        {
        //   printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xa,a0,ya,red,green,blue);
         printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xb,a1,yb,red,green,blue);
          // printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xc,a2,yc,red,green,blue);
             printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xd,a3,yd,red,green,blue);

  printf("\n");
        }
           cp3=cp3+1;

       }
           cp4=cp3-1;

         }
          if(cadran==3)
         {
     cateta1=adder*sin(degrees);
     cat1=dega*sin(degrees);
     cat2=dega*sin(degrees);
     cat3= degb*sin(degrees);
     cat4= degb*sin(degrees);
     degrees=90-degreesb;
     cat10= dega*cos(degreesb*3.14/180);
     cat20= dega*cos(degreesb*3.14/180);
     cat30= degb*cos(degreesb*3.14/180);
     cat40= degb*cos(degreesb*3.14/180);
     cateta2=adder*cos(degreesb*3.14/180);
      x=cateta1*(-1);
     z=cateta2;
     xa=cat1*(-1);
     ya=cat10;
     xb=cat2*(-1);
     yb=cat20;
     xc=cat3*(-1);
     yc=cat30;
     xd=cat4*(-1);
     yd=cat40;

          if( ya==dega || yb==dega || yc==dega || yd==dega || ya==dega*(-1) || yb==dega*(-1) || yc==dega*(-1) || yd==dega*(-1)  )
       {
           printf(" \n");
       }
       if(ya!=dega && yb!=dega && yc!=dega && xd!=dega && ya!=dega*(-1) && yb!=dega*(-1) && yc!=dega*(-1) && yd!=dega*(-1) )
        {   if(inner_generatori==0)
        {
        //   printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xa,a0,ya,red,green,blue);
         printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xb,a1,yb,red,green,blue);
          // printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xc,a2,yc,red,green,blue);
             printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 }  appearance Appearance { material Material { diffuseColor %f %f %f }}}]}   ",xd,a3,yd,red,green,blue);

  printf("\n");
        }
           cp4=cp4+1;

       }


         }



         degreesb=degreesb;

}
  }




  ///printf(" Transform { translation %f %f %f  children[ Shape { geometry Sphere{ radius .3 } appearance USE App}]}   ",xb,a0,yb,xa,a1,ya,xc,a2,yc,xd,a3,yd);


