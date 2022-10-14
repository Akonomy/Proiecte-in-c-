#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,z,cpy=0,cpX,adder,salter,upper=0, LeftX,LeftY,RightX,RightY,b=1,breaking,color,semn;
    int indexAnimate=-1,indexNull=0,inner;
    float y, sinus=0 ,xu,zu,yu;
    //float vv;
    //((float)rand()/(float)(RAND_MAX)) * 1.5
    printf("#Alege lungimea si latimea \t");
    scanf("%d%d",&x,&z);
    LeftX=x*(-1);
    RightX=x;
    LeftY=z*(-1);
    RightY=z;
    cpX=LeftX;
    cpy=LeftX;
    salter=RightX+1;
    srand(time(NULL));


    x=x*(-1);


    printf(" \n    Shape { appearance  DEF C0 Appearance {	material Material {	diffuseColor .8 .8 .0	specularColor 0 0 0	ambientIntensity .0533	shininess .06	}}}   ");
printf("   Shape {	appearance DEF C1 Appearance {	material Material {	diffuseColor .56 .24 .14	specularColor 0 0 0	ambientIntensity .0467 shininess .06	}}}   ");
printf("  Shape {	appearance DEF C2 Appearance {	material Material {	diffuseColor .8 .9 .9	specularColor 0 0 0 	ambientIntensity .0633	shininess .09}}}   ");
printf("  Shape {	appearance DEF C3 Appearance {	material Material {	diffuseColor .0 .0 .9	specularColor 0 0 0 	ambientIntensity .0733	shininess .07}}}  ");
printf("  Shape {	appearance DEF C4 Appearance {	material Material {	diffuseColor 1 .0 0	specularColor 0 0 0 	emissiveColor .1 .12 .11	ambientIntensity .01	shininess .08}}}   ");
printf("  Shape {	appearance DEF C5 Appearance {	material Material {	diffuseColor .0 .9 .0	specularColor 0 0 0 	emissiveColor .1 .1 .1	ambientIntensity .0433	shininess .13}}}  ");
printf("  DEF timmer TimeSensor{ cycleInterval 20 loop TRUE}  ");

    for(upper=-1;upper<=RightY*4*RightX*4;upper++)
    {





        for(adder=0;adder<=RightX;adder++)
        {
               cpy=cpy+1;
               //pentru semn - sau +
               //genereaza random 0 sau 1 si se alege semnul

               /*semn=rand()%2;
               if (semn==1)
               {
                 y=rand()%10;
               }
               if (semn==0)
               {
                 y=rand()%10*(-1);
               }
               */


               //se atribuie o culoare random

               color=rand()%6;

               //se face trecerea de la z pana la -z dupa ce se numara x
        if(cpy==salter)
        {

            cpy=LeftX;
            z=z-1;
            //b=0;
        }








            cpX=cpX+1;
            upper=upper+1;
            //se reia scaderea lui x de z ori
            if(cpX==RightX+1)
            {

                cpX=LeftX;
                x=LeftX-1;
                //sinus=0;
            }

                 x=x+1;
                 upper=upper+1;
                  sinus=sinus+0.01;
               y=0;

            printf("  DEF q%d Transform {  translation %d %f %d rotation 0 0 0 0 children [ Shape { geometry Box { size 1 1 1 } appearance	USE C%d } ] }  ",upper,x-b,y,z,color);
            printf ("   DEF	axaY%d PositionInterpolator	{key [0 .10 .20 .30  .40 .50  .60 .70  .80 .90  1 ] keyValue [ %d %f %d  ",upper,x,y,z);

            for(int rapid=0;rapid<9;rapid++)

            {
                //indexNull=rand()*10

                //pentru semn - sau +
               //genereaza random 0 sau 1 si se alege semnul

               semn=rand()%2;
               sinus=sinus+0.9;



               if (semn==1)
               {
                yu=0.01*sinus;
               xu=0.01*sinus*cos(sinus);
              zu=0.01*sinus*sin(sinus);
               }
               if (semn==0)
               {
                 yu=0.01*sinus;
               xu=0.01*sinus*cos(sinus);
              zu=0.01*sinus*sin(sinus);
               }
                if (rapid>4)
               {
                 yu=0.002*sinus;
               xu=30*cos(sinus);
              zu=30*sin(sinus);
               }

                 if (rapid>6)
               {
                 yu=0.002*sinus;
               xu=30*cos(sinus);
              zu=30*sin(sinus);
               }



               //semn evidenta

              // inner=10*inner*sin(sinus);
              //yu=0.01*sinus;
              // xu=20*cos(sinus);
             // zu=20*sin(sinus);




                    printf("  %f %f %f ",xu,yu,zu);

            }
            printf("  %d %f %d ] }  ",x,y,z); //stop
            printf("  ROUTE timmer.fraction_changed TO axaY%d.set_fraction  ",upper); //anim1 2
		printf("  ROUTE axaY%d.value_changed TO q%d.set_translation  ",upper,upper);




       //NULL
            if (b==1)
            {
                //exista o problema in care linia 2 nu este printata asa ca am adaugat un pas suplimentar
                upper=upper+1;
                printf("  DEF q%d Transform {  translation %d %f %d rotation 0 0 0 0 children [ Shape { geometry Box { size	 1 1 1 } appearance	USE C%d } ] }    ",upper,x,y,z,color);
            //se repeta cod de sus pana la urmatorul comment ++
              printf("	DEF	axaY%d PositionInterpolator	{key [0 .10 .20 .30  .40 .50  .60 .70  .80 .90  1 ] keyValue [ %d %d %d      ",upper,x,y,z);



            for(int rapid=0;rapid<9;rapid++)

            {
                //indexNull=rand()*10

                //pentru semn - sau +
               //genereaza random 0 sau 1 si se alege semnul

               semn=rand()%2;
               if (semn==1)
               {
                 inner=rand()%10;
               }
               if (semn==0)
               {
                 inner=rand()%10*(-1);
               }

               //semn evidenta
                printf("  %d  %d  %d  ",x,inner,z);  //1
            }

            printf("  %d %d %d ] }  ",x,y,z);  //stop

                  printf("   ROUTE timmer.fraction_changed TO axaY%d.set_fraction ",upper); //anim1 2
		printf("  ROUTE axaY%d.value_changed TO q%d.set_center ",upper,upper);

            //++se incheie codu


            }
            //END OF NULL
            b=0;

             if(x==RightX&&z==LeftY)
        {
            printf("\n");
            breaking=1;


        }
        //inchide loopul
        if(breaking==1)
        {
            break;
        }

    }
    //aceeasi chestie ca sus
    if(breaking==1)
        {
            break;
        }

    }
    scanf("%d",&x);



    return 0;
}
