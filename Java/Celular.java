class Celular extends ProductoElectronico {
    private String marca;
    

    public Celular(String nombre, double precio, int garantia, String marca) {
        super(nombre, precio, garantia);    //Hereda el constructor de productosElectronicos
        this.marca = marca;
    }

    public String getMarca() {
        return marca;
    }
    
    public void setMarca(String marca){
        this.marca=marca; 
    }
    
    
    @Override     //Sobreescribe el método cargar 
    public void cargar(int cargaInicial) {
        System.out.println("El celular de marca " + marca + " tiene una carga inicial de " + cargaInicial + " horas.");
    }
}