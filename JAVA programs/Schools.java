package Endsems;
public class Schools extends Buildings
{
    int rooms,gl;
    public Schools(double sqf,int st,int rooms,int gl)
    {
        super(sqf,st);
        this.gl=gl;
        this.rooms=rooms;
    }
    public void display()
    {
        System.out.println("--- DISPLAYING THE DETAILS OF THE SCHOOL ----\n");
        System.out.println("Square foot of the School is "+sqf+"\nThe number of Stories present in the School is  "+st+"\nThe Number of Rooms are "+rooms+"\nThe Number of Grade level are "+gl);
    }
}
