
import java.util.Scanner;

class Student  {
    Student() {
    Scanner scan=new Scanner(System.in);
    System.out.print("Enter the number of students: ");
    int num=scan.nextInt();
    int M=0,F=0;
    int[] Bmarks;
    int[] Gmarks;
    Bmarks=new int[5];
    Gmarks=new int[5];

    for(int i=0;i<num;i++) {
        System.out.println("-------->"+(i+1)+"<--------");
        String name;
        scan.nextLine();
        char gender;
        int[] marks;
        marks=new int[5];
        int total=0;
        byte age;

        System.out.println("");

        System.out.print("1.Name   : ");
        name=scan.nextLine();

        System.out.print("2.Gender : ");
        gender=scan.next().charAt(0);
        if(gender=='M'||gender=='m') {
            M++;
        }
        if(gender=='F'||gender=='f') {
            F++;
        }

        System.out.print("3.Age    : ");
        age=scan.nextByte();

        System.out.print("4.Marks  ");
        System.out.print("\n    i.Tam: ");
        marks[0]=scan.nextInt();
        System.out.print("\n   ii.Eng: ");
        marks[1]=scan.nextInt();
        System.out.print("\n  iii.Mat: ");
        marks[2]=scan.nextInt();
        System.out.print("\n   iv.Soc: ");
        marks[3]=scan.nextInt();
        System.out.print("\n    v.Sci: ");
        marks[4]=scan.nextInt();
        for(int t=0;t<5;t++) {
            total+=marks[t];
        }
        System.out.println("\n    Total: " + total);

        for(int j=0;j<5;j++) {
            if(gender=='M'||gender=='m') {
                Bmarks[j]+=marks[j];
            }
            if(gender=='F'||gender=='f') {
                Gmarks[j]+=marks[j];
            }
        }
        System.out.println("-----------------\n");

    }
    char gend;
    System.out.print("\nEnter the gender to find average: ");
    gend=scan.next().charAt(0);
    if(gend=='M'||gend=='m') {
        int TOTAL=0;;
        System.out.println("\nThere are " + M + " males.");
        System.out.println("Their average is ");
        System.out.println("  i.Tam : " + Bmarks[0]/M);
        System.out.println(" ii.Eng : " + Bmarks[1]/M);
        System.out.println("iii.Mat : " + Bmarks[2]/M);
        System.out.println(" iv.Soc : " + Bmarks[3]/M);
        System.out.println("  v.Sci : " + Bmarks[4]/M);
        for(int n=0;n<5;n++) {
            TOTAL+=Bmarks[n];
        }
        System.out.println(" TOTAL  :" + TOTAL/M);
    }
    if(gend=='F'||gend=='f') {
        int ToTAL=0;
        System.out.println("\nThere are "+ F + " females.");
        System.out.println("Their average is ");
        System.out.println("  i.Tam : " + Gmarks[0]/F);
        System.out.println(" ii.Eng : " + Gmarks[1]/F);
        System.out.println("iii.Mat : " + Gmarks[2]/F);
        System.out.println(" iv.Soc : " + Gmarks[3]/F);
        System.out.println("  v.Sci : " + Gmarks[4]/F);
        for(int m=0;m<5;m++) {
            ToTAL+=Gmarks[m];
        }
        System.out.println(" TOTAL  : " + ToTAL/F);
    }
    
  }

}

class Details extends Student {
    public static void main(String [] args) {
        System.out.println("\n\tWELCOME");
        System.out.println("Please Enter the details.\n");
        Student obj=new Student();

    }
}
