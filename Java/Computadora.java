class Computadora extends ProductoElectronico {
    private String modelo;
    private int capacidad; 

    public Computadora(String nombre, double precio, int garantia, String modelo, int capacidad) {
        super(nombre, precio, garantia);   //Herencia constructor clase padre
        this.modelo = modelo;
        this.capacidad=capacidad;
    }

    public String getModelo() {
        return modelo;
    }
    
    public void setModelo(String modelo){
        this.modelo=modelo; 
    }
    
    public int getCapacidad() {
        return capacidad;
    }
    
    public void setCapacidad (int capacidad){
        this.capacidad=capacidad; 
    }

    @Override   //Sobreescritura método cargar
    public void cargar(int cargaInicial) {
        System.out.println("La computadora modelo " + modelo + " tiene una carga inicial de " + cargaInicial + " horas.");
        
}

}