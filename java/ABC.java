class A {
    int rollno;
    String barcode;
}

class B {
    String student_name;
}

class C {
    public static void main(String args[]) {

        // create objects
        A obj1 = new A();
        B obj2 = new B();

        // assign values
        obj1.rollno = 8;
        obj1.barcode = "IMSEC148";

        obj2.student_name = "CSE";

        // print values
        System.out.println("Roll No: " + obj1.rollno);
        System.out.println("Bar Code: " + obj1.barcode);
        System.out.println("Student Name: " + obj2.student_name);
    }
}