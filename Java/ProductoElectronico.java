
public abstract class ProductoElectronico{
    private String nombre;   //Atributos
    private double precio;
    private int garantia;


public ProductoElectronico (String nombre, double precio, int garantia){  //Constructor
    this.nombre=nombre;
    this.precio=precio;
    this.garantia=garantia;
}

public String getNombre(){    //Propiedades
return nombre;
}

public void setNombre(String nombre){
    this.nombre=nombre;
}

public double getPrecio() {
        return precio;
    }
    
public void setPrecio(double precio){
    this.precio=precio;
}

public int getGarantia() {
    return garantia;
}


public void setGarantia(int garantia){
    this.garantia=garantia;
}



 public abstract void cargar(int cargaInicial);    //Método abstracto que sirve de plantilla
}
    
        
        
        
        
        
        
        
        