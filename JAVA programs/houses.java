package Endsems;
public class houses extends Buildings
{
    int baths,beds;
    public houses(double sqf,int st,int baths,int beds)
    {
        super(sqf,st);
        this.baths=baths;
        this.beds=beds;
    }
    public void display()
    {
        System.out.println("--- DISPLAYING THE DETAILS OF THE BUILDING ----\n");
        System.out.println("The Square foot of the Building is : "+sqf+"\nThe number of Stories present is  "+st+"\nThe number of Bathroom present are "+baths+"\nThe number of Bedrooms are  "+beds);
    }
}