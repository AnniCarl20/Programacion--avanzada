public class Areas {
    public static void main (String[] args){
        Figura f = new Figura (10,10);
        Rectangulo r = new Rectangulo (9,5);
        System.out.println("Area es: " + f.area());
        System.out.println("Area es: " + r.area());
    }
}

class Figura {
    double dim1;
    double dim2;
    Figura (double a, double b){
        dim1=a;
        dim2=b;

    }

    Double area (){
        System.out.println("Area dentro de la figura. ");
        return (dim1*dim2);
    }
}


class Rectangulo extends Figura {
    Rectangulo (double a, double b){
        super(a,b);
    }
    Double area(){
        System.out.println("Area dentro del triangulo");
        return (dim1*dim2);
    }

}