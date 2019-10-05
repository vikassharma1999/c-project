/*This project has been completely written in C.
About:-
This Project is related to Municipal corporation. */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>
void SetPosition(int X, int Y)
{
HANDLE Screen;
Screen = GetStdHandle(STD_OUTPUT_HANDLE);
COORD Position={X, Y};

SetConsoleCursorPosition(Screen, Position);
}
int ii;
struct detail{
char Z[30];
char L[20];
char q[20];
char N[20];
char r[20];
char s[20];
char A[20];
char R[20];
char D[20];
char E[20];
char F[20];
char G[20];
char H[20];
char C[20];

int u;
}dd;
static int i=0;
 struct web
        {

            char name[45];
            char password[20];
            char mob[10];
            char email[30];
        }w[99];
        int n;
        void login(void);
        void reg(void);
void space();
void gap();
void main()
{int a,e,f,g,h,i,j,k,M,m,p,t,u,v,aa,choose;
  char B[20],C[20],D[20],E[20],ch,F[20],G[20],H[20],I[20],J[20],Z[20],L[20],P[20],V[20],U[20],q[20],r[20],s[20],username[15],password[15],N[20],O[20],str[20],filename[15],vi;;
  start:
 system("COLOR 4E");
    printf("\n\n\n\n\n");
   printf("\t\t\t\t\t\t****************WELCOME TO AHMEDABAD MUNICIPAL CORPORATION****************\n");
 space();
  Jio:
 printf("1:login\t\n");
 scanf("%d",&aa);
 switch(aa){



  {case 1:system("COLOR 4E");


      {



       printf("\n\n\n\n\n\t\t\t\tWELCOME TO Ahemadabad Muncipal Corportaion");
        printf("\n\t\t\t\t==========================================");
        printf("\n\n\n\n\t\t\tPress Enter to proceed...!!");
        if(getch()==13)

        XY:
        printf("\n\n\n\t\t\t1. LOGIN\t\t2. REGISTER");
        printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");

        scanf("%d",&n);
        system("cls");
        switch(n)
          {
            case 1:
                login();
                break;
            case 2:
                reg();
                break;
            default: printf("\n\n\t\t\t\tNO MATCH FOUND");
                printf("\n\n\t\t\tPress Enter to re-Enter the choice");
                if(getch()==13)

                goto XY;}







vikas:
printf("select the choice\n\n\n\t\t1.REGISTER YOUR COMPLAIN\t\t2.PREVIOUS COMPLAIN RECORDS\t3 MAIN MENU\n");
scanf("%d",&choose);
switch(choose)
{
case 1:

    space();
    printf("***Complain category***\n");
    gap();
    printf("select department code\n");
    gap();
    printf("1.Tax Department(1)\n");
    gap();
    printf("2.water Department(2)\n");
    gap();
    printf("3.garbage and cleaniness(3)\n");
    gap();
    printf("4.Roads and footpaths(4)\n");
    gap();
    printf("5.street light(5)\n");
    gap();
    printf("6.public toilet(6)\n");
    gap();

    scanf("%s",dd.D);



printf("Complain-");
scanf("%s",dd.E);
printf("Area and house number- ");
scanf("%s",dd.F);
printf("Date- ");
scanf("%s",dd.G);



FILE *fm;
             fm=fopen("complain.txt","a");
             fprintf(fm," department code=%s\n complain=%s\n area and house no=%s\ndate=%s\n  \n",dd.D,dd.E,dd.F,dd.G);
             fclose(fm);
             goto vikas;
             goto start;
break;
case 2:
    {
 FILE *fptr;

printf("Enter the filename to be opened \n");

    scanf("%s", filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL)
        {
     printf("Cannot open file \n");
     goto vikas;
     exit(0);
    }
    vi = fgetc(fptr);
    while (vi != EOF)

    {

        printf ("%c", vi);

        vi = fgetc(fptr);

    }

    fclose(fptr);

    goto vikas;
    break;
    }
case 3:system("cls");
    goto jai;
    break;






}}
jai:
   printf("enter your choice\n");

     space();
   printf("1.THE CITY\n");
    space();
   printf("2.CITIZEN FACILITIES\n");
   space();
   printf("3.PUBLIC INFORMATION\n");
   space();
   printf("4.HELP\n");
   space();
   printf("5.SBM\n");
   space();
   printf("6.exit\n");
   space();
   printf("7.main page\n");
   space();
   printf("8.Goto Login Page\n");
   scanf("%d",&a);
   switch(a)
   {

case 1:system("cls");
     muncipal:
     {system("COLOR 9F");
   space();
   printf("enter your choice\n");
   space();
   printf("1.About Ahemdabad\n");
   space();
   printf("2.Tourism\n");
   scanf("%d",&e);
   switch(e)
   {
    case 1:system("cls");
    {system("COLOR 5E");
   printf("Ahmedabad, in western India, is the largest city in the state of Gujarat.\n");
   printf(" The Sabarmati River runs through its center.\n");
   printf(" On the western bank is the Gandhi Ashram at Sabarmati, which displays the spiritual leader’s living quarters and artifacts. Across the river, the Calico Museum of Textiles, once a cloth merchant's mansion, has a significant collection of antique and modern fabrics\n");
   goto muncipal;
   break;}
   case 2:system("cls");
    v:{
            space();
            printf("Enter Your Choice\n");
            space();
            printf("1:INTRODUCTION\n");
            space();
            printf("2:FESTIVALS\n");
            space();
            printf("3:LAKES\n");
            space();
            printf("4:RELIGIOUS PLACES\n");
            space();
            printf("5:RESTAURANTS\n");
            scanf("%d",&f);
            switch(f)
            {
                case 1:system("cls");
                system("COLOR 1E");
{printf("Amdavad is a perfect destination for those who love to visit great tourist attractions, with having number of exciting places to see in and around the city. Some of the features that perfectly describe the Amdavad city are splendid monuments, wonderful museums and gorgeous lakes. There is an abundance of sightseeing places in Amdavad that are truly worth visiting. Adalaj is one of the most excellent step wells or baolis of Gujarat. It serves as a fabulous retreat during the months of scorching heat.\n");

goto v;
break;}
case 2:system("cls");
m:
{ system("COLOR B8 ");
space();
printf("Enter Your Choice\n");
space();
printf("1.KITE FESTIVAL\n");
space();
printf("2.NAVRATRI\n");
scanf("%d",&g);
                        switch(g)
                        {
                        case 1:system("cls");
                            {system("COLOR D2");
                                printf("The festival of Uttarayan is a uniquely Gujarati phenomenon, when the skies over most cities of the state fill with kites from before dawn until well after dark. The festival marks the days in the Hindu calendar when winter begins turning to summer, known as Makar Sankranti or Uttarayan. On what is usually a bright warm sunny day with brisk breezes to lift the kites aloft, across the state almost all normal activity is shut down and everyone takes to the rooftops and roadways to fly kites and compete with their neighbors.\n");


                           goto m;
                            break;}
                        case 2:system("cls");
                            {system("COLOR C0");
                                printf("Devoted to Goddess Shakti, the Navratri festival in Ahmedabad is celebrated with gaiety and fervor. The main highlight of the festivity of nine nights is the folk dance of Gujarat called Garba. Each day of the fiesta begins with the performance of aarti. The entire state of Ahmedabad gets energized with the thought of celebrating the Navratri festival. Well, in this article, we will provide you with information on the Navratri festival in Ahmedabad, India.\n");
                                break;
                            }

                        }break;

                    }
                        case 3:system("cls");
                        p:
                            { system("COLOR E4");
                                space();
                             printf("Enter your choice\n");
                             space();
                             printf("1.Kankaria Lake\n");
                             space();
                             printf("2.Vastrapur Lake\n");
                             scanf("%d",&h);
                             switch(h)
                             {case 1:system("cls");
                                 {system("COLOR 3A");
                                     printf("A polygonal lake almost a mile in circumference, it was constructed in 1451 by Sultan Qutb-ud-Din.It is a 34 sided polygon with a 1.25 km circuit and steps leading down to the water level.On the eastern side is an elaborately carved water inlet with three circular openings.This feature,common to several reservoirs in Gujarat, is a monument in its own right. In the center of the lake, on an artificial island, is the pleasure pavalion known as Naginavadi. The promenade around Kankaria is one of the few places in Ahmedabad to enjoy a walk without the fear of being hit by a vehicle.In the evening it fills with crowd, food stalls and informal entertainment. There is also a water and light show. A zoo, a natural history museum, a toy train, a special garden for children called Bal Vatika, and an open air theatre are placed around the lake.\n");

                                    goto p;
                                     break;
                                 }
                             case 2:system("cls");
                                {system("COLOR C0");
                                    printf("Vastrapur Lake is situated in western part of Ahmedabad. It is officially named after Narsinh Mehta. The lake was beautified by the AMC after 2002 and has since become a popular spot in the city\n");
                                    break;
                                }

                             }break;
                            }
                             case 4:system("cls");
                             system("COLOR E4");

                                {space();
                                    printf("1.akshardham temple\n");
                                    space();
                                    printf("2.jama masjid\n");
                                    space();
                                    printf("3.kalupur temple\n");

                                    break;
                                }
                                case 5: system("cls");


                                {system("COLOR D0");
                                    space();
                                    printf("choose restaurant\n");
                                    space();
                                    printf("1:Best South Indian\n");
                                    space("cls");
                                    printf("2:Best Rajasthani\n");
                                    space("cls");
                                    printf("3:Best Gujarti\n");
                                    space("cls");
                                    printf("4:Italian\n");

                                    break;
                                }

                                break;



            }



        }

   }
printf("enter 1 to go home page\n");
scanf("%d",&M);
        system("cls");
         goto jai; break;
     }
      case 2:system("cls");
system("COLOR F8");

{ space();
bg:
    printf("enter your choice\n") ;
    space();
    printf("1.Health Facilities\n");
    space();
    printf("2.education\n");
    space();
    printf("3.goto back\n");
    space();
    printf("4.exit");
    scanf("%d",&i);
    switch(i)
    {case 1:system("cls");
    system("COLOR C7");


            {space();
            as:
            printf("enter your choice\n");

            space();
            printf("1muncipal hospitals\n");
            space();
            printf("2. urban health centers \n");
            space();
            printf("3.goto back\n");
            space();
            printf("4.exit\n");


            scanf("%d",&j);
            switch(j)
            {

            case 1:system("cls");
            {system("COLOR 64");
                space();
                printf("1.sheth vs general hospital,ellisbridge,Ahmedabad\n");
         space();       printf("2.smt.shardaben hospital,saraspur,ahmedabad\n");
         space();
         printf("3. city eye hospital,mithakali,ahmedabad\n\n");

        goto as;


         break;
            }
            case 2:system("cls");
                {system("COLOR 64");
                    space();
                    printf("1.arthur medical center\n");
                    space();
                    printf("2. JP medical center\n\n\n");

                    goto as;
                    break;




                }
            case 3:
                system("cls");
                goto bg;
                break;
            case 4:
                exit(0);
                break;
            }break;
        }
            case 2:system("cls");

                {system("COLOR F5");
                ad:
                    space();
                    printf("1. medical colleges \n");
                    space();
                    printf("2. engineering colleges\n");
                    space();
                    printf("3.goto back\n");
                    space();
                    printf("4.exit\n");
                    scanf("%d",&k);
                    switch(k)
                    {

                    case 1:system("cls");
                    {system("COLOR F5");
                         space();

                        printf("1. bj medical college\n");
                        space();
                        printf("2. ms university\n");
                        goto ad;
                        break;

                    }
                    case 2:system("cls");
                    {system("COLOR F5");
                    space();
                    printf("1. sal institute of technology\n");
                    space();
                    printf("2. indus university\n");
                    space();
                    printf("3.ahmedabad institue of technology\n");

                    goto ad;
                    break;}
                    case 3:
                        system("cls");
                        goto as;
                    case 4:
                        exit(0);
                        break;
                    }


               break;
                }
                    case 3:
                        system("cls");
                        goto bg;
                    case 4:
                        exit(0);
   break;
    }

goto jai;
break;
}
     case 3:system("cls");
{
    system("COLOR F0");
    space();
    mp:
     printf("PUBLIC INFORMATION\n");
    gap();
    printf("1.Important Telephone No\n");
    gap();
    printf("2.AMC OFFICER'S CONTECT NO:\n");
    gap();
    printf("3:RTI\n");
    gap();
    printf("4:go back\n");
    gap();
    printf("5:exit\n");
    scanf("%d",&u);
    switch(u)
    {
        case 1: system("cls");
        system("COLOR F5");
        {   space();
            printf("##  IMPORTANT TELEPHONE NO.  ##\n\n\n\n");
            space();
            printf("***Institute Name***\n\n\n");
            gap();
            printf("1:Police:-\t\t\t\t100\n\n");
            gap();
            printf("2:Fire Station:-\t\t\t101\n\n");
            gap();
            printf("3:Ambulance:-\t\t\t\t108102\n\n");
            gap();
            printf("4:Weather News:-\t\t\t22865012\n\n");
            space();
            printf("***Indian Railway***\n\n\n");
            gap();
            printf("1:Reservation Enquiry and General Enquiry:-\t\t139\n\n\n");
            space();
            printf("***Airlines***\n\n\n");
            gap();
            printf("1:Indian  Airlines:-\t\t\t22869233-34-44\n\n");
            gap();
            printf("2:Spice Jet:-\t\t\t\t18001803333\n\n");
            gap();
            printf("3:Jet Airways:-\t\t\t\t27543304 to 10, 22866240,540\n\n");
            space();
            printf("***ST Bus Service***\n\n");

            gap();
            printf("1:Central Bus Stand Enquiry:-\t25463409, 25463382, 25433396\n\n");
            gap();
            printf("2:Bapunagar Enquiry:-\t\t22779683\n\n");
            gap();
            printf("3:R.T.O:-\t\t\t27559695\n\n");
            space();
            printf("***Blood Bank***\n\n");
            gap();
            printf("1:Indian Red Cross Society:-\t26650855/26651833\n\n");
            gap();
            printf("2:Red Cross:-\t\t\t26651833\n\n");
            gap();
            printf("3:Green Cross:-\t\t\t26577588/26588824/2658824\n\n");
            gap();
            printf("4:Prathama Blood Bank:-\t\t26611863/26607762/63/64\n\n");
            space();
            printf("***Mobile Phone Services***\n\n");
            gap();
            printf("1:B.S.N.L:-\t\t\t1503\n\n");
            gap();
            printf("2:Airtel:-\t\t\t9898012345\n\n");
            gap();
            printf("3:Jio:-\t\t\t\t7486884827\n\n");
            gap();
            printf("4:Vodaphone:-\t\t\t98250-98250\n\n");
            space();
            printf("***Light***\n\n");
            gap();
            printf("1:Torrent Power, Shahpur:-\t\t25502843 to 48\n\n");
            gap();
            printf("2:Torrent Power:-\t\t\t25502881 to 87\n\n");
            space();
            printf("***Gas Agency***\n");
            gap();
            printf("22:Bharat Gas:-\t\t\t26460510\n\n");
            gap();
            printf("23:Indian Gas:-\t\t\t26422978\n\n\n");
            space();
            printf("**********************************\n\n\n");

            goto mp;
            break;
        }
        case 2:system("cls");
        {system("COLOR F8");
           space();
           printf("$$AMC OFFICER'S CONTECT NO$$\n\n\n");
           gap();
           printf(" Sr. No.\t\tName\t\t\t\tDesignation\t\t\tOffice\t\t\tMobile\n\n");
           gap();
           printf("    1   \t\tShri Mukesh Kumar, IAS\t\tMunicipal Commissioner\t\t25352828\t\t-\n\n");
           gap();
           printf("    2   \t\tShri Rahul Shah       \t\tAssistant Manager/PS to MC\t 2539181\t\t9327554897\n\n");
           gap();
           printf("    3   \t\tShri Nainesh Doshi    \t\tExecutive Assistant to MC \t 25352828\t\t9374514290\n\n");
           gap();
           printf("             *************<<<<<Health Department>>>>>*************\n\n");
           gap();
           printf("    4   \t\tDr. Bhavin Solanki     \t\tMedical Officer of Health(I/C)\t 25391811\t\t9327038841\n\n");
           gap();
           printf("    5   \t\tDr. Tejas Shah         \t\tDeputy Health Officer-South Zone 25465255\t\t9327555231\n\n");
           gap();
           printf("    6   \t\tDr. Govindbhai Makwana \t\tDeputy Health Officer-North Zone 22821676\t\t9327038814\n\n");
           gap();
           printf("             *************<<<<<Tax Department>>>>>****************\n\n");
           gap();
           printf("    7    \t\tDebashish Banerjee  \t\tAssessor and Tax Collector(I/C)\t 25391811\t\t9327038845\n\n");
           gap();
           printf("    8    \t\tKanaksinh Rohadiya   \t\tDeputy Assessor andTax Collector 22970422\t\t9327038826\n\n");
           gap();
           printf("             *************<<<<<Engineering Department>>>>>*************\n\n");
           gap();
           printf("    9    \t\tFalgun P Mistri      \t\tAddl. City Engineer , East Zone\t22970355\t\t9328385526\n\n");
           gap();
           printf("    10   \t\tH T Mehta             \t\tAddl.City Engineer,South Zone+SWM 25465255\t\t9327038749\n\n");

           goto mp;
           break;


        }
        case 3:system("cls");
        {
              system("COLOR B6");
             space();
            printf("RIGHT TO INFORMATION\n\n\n");
            printf("Right To Information Act 2005 (Govt. of India)\n");
            printf("Right To Information Act 2005 (In Gujarati)\n");
            printf("Right to information Act, 2005 under the Central Acts.\n");
            printf("G A D Notification\n");
            printf("The Guj. Govt. Gazette on Rules And Orders(In English)\n");
            printf("The Guj. Govt. Gazette on Rules And Orders (In Gujarati)\n");
            printf("(A). The Guj. Govt. Gazette on Rules And Orders(In English)\n");
            printf("(B). The Guj. Govt. Gazette on Rules And Orders (In Gujarati)\n");
            printf("4. List of the P.I.O. & Applet Officer\n");
            printf("4.1 List of the P.I.O. & Applet Officer (NEW)\n");
            printf("\n(Applicant has to submit his application in prescribed form to the concerned Asstt. Pub. Information Officer OR Pub. Information Officer) \n\n");
            printf("5 (A). Application Form ( In English) \n");
            printf("5 (B). Application Form ( In Gujarati)\n");
            printf("6 (A). Fee Structure (In English)\n");
            printf("6 (B). Fee Structure (In Gujarati)\n");
            printf("7. List of City Civic centers \n");
            printf("8. RTI Annual Report\n\n");

            goto mp;
            break;
        }
        case 4:
            system("cls");
            goto jai;
            break;
        case 5:
            exit(0);
    }
    break;
}
                    case 4:system("cls");
                        {system("COLOR E4");
                        manan:
                          printf("FAQs\n");
                          space();
                          printf("1. property tax \n");
                          space();
                          printf("2.professional tax\n");
                          space();

                           printf("3 election department\n");
                           space();
                           printf("4 go back\n");
                           space();
                           printf("5 exit");
                           scanf("%d",&m);
                           switch(m)
                           {
                           case 1:system("cls");
                               {  system("COLOR F5");
                                    space();
                                   printf("\nFAQs\n\n");

                                   printf("1.How is my property tax calculated?\n");
                                   printf("A.Property  tax  is  calculated  as  per  the  carpet  area  of  the  property  and \n");
                                   printf("4factors   namely   location   factor,   age   factor,   type   of   use   factor   andoccupancy factor as per formula given below");
                                   printf("Gen. Tax=Carpet Area (Sq.mtr) X F1 X F2 X F3 XF4\n");
                                   printf("where F1= Location factor\n");
                                   printf("F2=Age factor\n");
                                   printf("F3=Usage factor\nF4=Occupancy factor\n");
                                   printf("Property   tax   payable   is   calculated   after   addition   of   water   tax,conservancy tax and education cess payable.\n");
                                   printf("\n\n2case my  arpet  area  or  any  factor  shown  in  tax  bill  is  incorrect,  howshould I submit application?\n");
                                   printf("A.In  case  of  change  in  carpet  area  or  any  factor,  application  should  besubmtted as performrule 485/1\n\n");
                                   printf("\n3.What is the procedure for having one bill instead of 2 seperate bills?\n");
                                   printf("A.For  this  purpose  one  should  fill  form  of  kami  of  Duplicate  bill.  Furtherdetails are shown in the form.\n\n\n");

                                    goto manan;
                                    break;



                           }

                           case 2:system("cls");
                           {system("COLOR E8");

                               printf("Q:1 What is the Designated Authority?\n");
                               printf("A:Designated   Authority   is   the   authoritywhich  levies  and  collects  the  tax  from  aperson liable to pay professional tax.\n\n\n");
                               printf("Q:2 Do you have to enroll for each place of branch separately?\n");
                               printf("A:Yes,   Each   branch   is   deemed   as   separate assessee under the Act.\n\n\n");
                               printf("Q:3 What  if  enrolment  is  not  obtainedwithin time limit?\n ");
                               printf("A:You  are  liable  to  pay  penalty  at  the  rate  of Rs.10/- per day.\n\n\n");
                               break;


goto manan;


                           }
                           case 3:system("cls");
                           {system("COLOR E7");
                               printf("Q -1:How the Election Voter Rolls of A.M.C.can be obtained?\n");
                               printf("Ans.:In person on the payment of sale price of respective Ele.Ward's Voter Rollat Election  Dept.  Office,  Sanskar  Kendra  (Museum),  2nd  Floor, Paldi,  Ahmedabad380007  between  the  office  hours 11.00  am  to2.00 pm and 3.00 pm and 5.00 pm you can get the A.M.C's Election Voter Roll.\n\n\n");
                               printf("Q -2:How the wardwise C.D.'s of A.M.C.'s Election Voter Rolls without photo can be obtained?\n");
                               printf("Ans.:In  person  on  the  payment  of  sale  price  ofRs.500/-per  C.D./per Ele.Ward's  Voter  Roll  C.D.s  without  photoat  Election  Dept.  Office, Sanskar  Kendra  (Museum),  2nd  Floor,  Paldi,  Ahmedabad-380007 between  the  office  hours  11.00  am  to2.00  pm  and  3.00pm  and  5.00 pm you can get the C.D.s.\n\n\n");


                               break;

                               goto manan;}
                           case 4:

                                   printf("Go back");
                                   system("cls");
                                   goto jai;
                           case 5:
                            exit(0);


                               }break;}
                           case 5:system("cls");
                                {system("COLOR 3F");
                                space();
                                printf("SWACH BHARAT MISSION\n");
                                printf("On the occasion of the world environment day ministry of urban development, Government of India and Swachh Bharat Mission planning to declare India as a country with 100% segregation at source in all urban areas. As appropriate segregation at source/secondary storage is essential and to achieve this objective, Ahmedabad Municipal Corporation along with CII launched a unique competition based social awareness drive and conference on My Waste My Responsibility amongst which any office, school and hotel from the city of Ahmedabad can take active participation.\n\n");
                                goto vikas;
                            }
                           case 6:
                            exit(0);
                           case 7:system("cls");
                            goto vikas;
                           case 8:system("cls");
                            goto start;
                            }
                                break;}
                           default :
                            printf("error\n");
                            goto Jio;}}
void space()
 {int d;
            for(d=1;d<=75;d++)
            printf(" ");
           }
void gap()

    {    int d;
    for(d=1;d<=40;d++)
    printf(" ");
}




 void login()
{
    FILE *fp;
	SetPosition(50,4);
	printf("LOGIN");
	SetPosition(50,5);
	printf("=====");
	fp=fopen("vikas123.txt","a+");

	char iname[50];
	char ipass[20];
	SetPosition(43,7);
	printf("USER NAME :   ");
	scanf("%s",iname);
	ii=0;
	int count=0;
	while(!feof(fp))
        {
          fread(&w[ii],sizeof(w[ii]),1,fp);
          if(strcmp(iname,w[ii].name)==0)
            {
            	count=1;
           		break;
        	}
        	i++;
        }
    if(count==1)
	{
		SetPosition(43,9);
		printf("PASSWORD  :   ");
		scanf("%s",ipass);
		if(strcmp(w[ii].password,ipass)==0)
            {   SetPosition(50,11);
                printf("YOU HAVE BEEN SUCCESSFULLY LOGIN");
                SetPosition(39,14);
                system("pause");

            }
        else
        {
            SetPosition(50,11);
            printf("WRONG PASSWORD");
            SetPosition(54,12);
            printf("TRY AGAIN");
            SetPosition(39,14);
            system("pause");
            system("cls");
            login();
        }


	}
	else
    {
        SetPosition(43,9);
        printf("!!! USERNAME NOT FOUND !!!");
        SetPosition(43,10);
        printf("**************************");
        SetPosition(43,15);
        printf("Press ENTER to TRY AGAIN");
         SetPosition(43,16);
         printf("________________________");
        SetPosition(43,19);
        system("pause");
        system("cls");
        login();
    }
      fclose(fp);
}

void reg()
{
	FILE *fp;
	char iname[50];
	char c;
	char ipass[20];
	char imob[10];
	char iemail[50];

	fp=fopen("vikas123.txt","a+");

	printf("\n\n\t\t\t REGISTRATION\n");
	printf("\t\t\t ============\n\n\n");
	printf("USER NAME :   ");
	scanf("%s",iname);
	ii=0;
	int count=0;
	while(!feof(fp))
        {
          fread(&w[ii],sizeof(w[ii]),1,fp);
          if(strcmp(iname,w[ii].name)==0)
            {
            	count=1;
           		printf("\n\n\t\t\tUSERNAME ALREDY EXISTS\n\n");
        	    system("pause");
            	system("cls");
           		reg();
        	}
        	ii++;
        }
        int z=0;
    if(count==0)
	{
	    strcpy(w[ii].name,iname);
		printf("\nPASSWORD  :   ");
		while((c=getch())!=13)
        {
          ipass[z]=c;
          z++;
          printf("%c",'*');
        }
        ipass[z]='\0';

        strcpy(w[ii].password,ipass);
        amp:
		printf("\n\nMOBILE NO. : (+91)");
		scanf("%s",imob);
		if(strlen(imob)==10)
 printf("%s",imob);
            else{
                    printf("error\ncontact no.must contain 10 digit\n");
                    goto amp;}
		printf("\nMAIL ID :   ");
		scanf("%s",iemail);
		strcpy(w[ii].mob,imob);
		strcpy(w[ii].email,iemail);

		fwrite(&w[ii],sizeof(w[ii]),1,fp);
    fclose(fp);
		system("cls");
		printf("\n\n\n\tCONGRATULATION !!  YOU HAVE BEEN SUCCESSFULLY REGISTERED\n\n");

        system("pause");
        system("cls");
	}


}








