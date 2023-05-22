import java.util.ArrayList;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        ArrayList<ProductoElectronico> listaProductos = new ArrayList();   //Lista con los productos
        
        //Algunos productos predeterminados
        listaProductos.add(new Celular("iPhone 14", 5000000, 2, "Apple"));   
        listaProductos.add(new Celular("Galaxy", 3500000, 1, "Samsung"));
        listaProductos.add(new Computadora("Laptop", 5500000, 4, "modelo1", 128));
        listaProductos.add(new Computadora("PC de escritorio", 4000000, 2, "HP", 64));
        
        
        Scanner scanner = new Scanner(System.in);
        int opcion;
        
        //Do while para el menu

        do {                     
            System.out.println("----- MENÚ -----");
            System.out.println("1. Crear celular");
            System.out.println("2. Crear computadora");
            System.out.println("3. Recorrer lista de productos");
            System.out.println("4. Salir");
            System.out.print("Seleccione una opcion: ");
            opcion = scanner.nextInt();
            scanner.nextLine(); 

            switch (opcion) {
                case 1:
                    System.out.println("CREAR CELULAR");
                    System.out.print("Ingrese el nombre: ");
                    String nombreCelular = scanner.nextLine();
                    System.out.print("Ingrese el precio: ");
                    double precioCelular = scanner.nextDouble();
                    System.out.print("Ingrese la garantía: ");
                    int garantiaCelular = scanner.nextInt();
                    scanner.nextLine(); 
                    System.out.print("Ingrese la marca: ");
                    String marcaCelular = scanner.nextLine();

                    Celular celular = new Celular(nombreCelular, precioCelular, garantiaCelular, marcaCelular);
                    listaProductos.add(celular);
                    System.out.println("Celular creado exitosamente.");
                    System.out.println();
                    break;
                    
                case 2:
                    System.out.println("CREAR COMPUTADORA");
                    System.out.print("Ingrese el nombre: ");
                    String nombreComputadora = scanner.nextLine();
                    System.out.print("Ingrese el precio: ");
                    double precioComputadora = scanner.nextDouble();
                    System.out.print("Ingrese la garantía: ");
                    int garantiaComputadora = scanner.nextInt();
                    scanner.nextLine(); 
                    System.out.print("Ingrese el modelo: ");
                    String modeloComputadora = scanner.nextLine();
                    System.out.print("Ingrese la capacidad: ");
                    int capacidadComputadora = scanner.nextInt();

                    Computadora computadora = new Computadora(nombreComputadora, precioComputadora, garantiaComputadora, modeloComputadora, capacidadComputadora );
                    listaProductos.add(computadora);
                    System.out.println("Computadora creada exitosamente.");
                    System.out.println();
                    break;
                    
                    
                case 3:
                    System.out.println("RECORRER LISTA DE PRODUCTOS");
                    for (ProductoElectronico producto : listaProductos) {
                        System.out.println("Nombre: " + producto.getNombre());
                        System.out.println("Precio: " + producto.getPrecio());
                        System.out.println("Garantía: " + producto.getGarantia());

                        producto.cargar(2); 

                        System.out.println();
                    }
                    break;
                    
                    
                case 4:
                    System.out.println("Saliendo del programa...");
                    break;
                    
                    
                default:
                    System.out.println("Opción inválida. Por favor, seleccione una opción válida.");
                    System.out.println();
            }
            
        } while (opcion != 4);
    }
}






