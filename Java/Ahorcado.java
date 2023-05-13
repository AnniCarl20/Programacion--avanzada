import java.util.Random;
import java.util.Scanner;

public class Ahorcado {

    static String[] palabras = {"HOLA PROFE", "PROGRAMACION", "COMPUTADOR", "JAVERIANA", "UNIVERSIDAD", "VOY POR ESE CINCO"};  //Creo mi arreglo de palabras posibles para el juego

    static String dibujo[] = {"   __________",
                              "   |         |",
                              "   |         O",
                              "   |        /|\\",
                              "   |        / \\",
                              "___|___"
        
    };   //Se permiten hasta 6 errores
    

    public static void main (String[] args) {
        
        Random r = new Random();                                         //Creo un objeto "r" que me permitirá seleccionar una palabra al azar
        String palabraElegida = palabras[r.nextInt(palabras.length)];   //nextInt es una función de la librería Random. Permite generar un numero entre 0 a n. 
                                                                        // en este caso n = palabras.length, es decir, el tamaño de mi arreglo de palabras
                                                                        //Así, accedo a un elemento aleatorio de palabras[] y la guardo en palabraElegida

        StringBuilder Guiones = new StringBuilder();                    //Creo objeto Guiones
        for (int i = 0; i < palabraElegida.length(); i++) {             //Recorro la palabra elegida arriba. 
            Guiones.append("_");                                        //Por cada letra, coloco un guión bajo
        }


        Scanner scanner = new Scanner(System.in);                       
        int errores = 0;

        while (!Guiones.toString().equals(palabraElegida)) {             //Mientras el numero de guiones sea diferente de la palabra elegida, seguir el bucle
            
            System.out.println(Guiones);
            System.out.println("Adivina una letra (Escríbelas en mayuscula):");
            String letra = scanner.next();                                         //Usuario ingresa una letra
            
            boolean letraAdivinada = false;   
            
            for (int i = 0; i < palabraElegida.length(); i++) {                    //Recorro la palabra elegida
                if (palabraElegida.charAt(i) == letra.charAt(0)) {                 //charAt(i) es una función de la librería String. Se usa para acceder al valor i de la cadena
                                                                                   //Si esa letra es igual a la ingresada por el usuario
                    Guiones.setCharAt(i, letra.charAt(0));                         //Entonces el setChatAt reemplaza el guion bajo de la posicion i, por la letra
                    letraAdivinada = true;                                         //y la letra es adivinada
                }
            }
            
            
            if (!letraAdivinada) {                        //Si la letra adivinada=false
                errores++;                                //Sumar contador de errores
                dibujar(errores);                         //Se llama el método (está más abajo)
                
                System.out.println("¡La letra " + letra + " no está en la palabra!");
            }
            
            
            if (errores == dibujo.length - 1) {          //Si el numero de errores es igual al tamaño del dibujo (menos 1 porque es este caso va desde 0)
                
                System.out.println("¡Has perdido! La palabra era " + palabraElegida);    //El usuario pierde
                break;
            }
        }
        
        
        if (Guiones.toString().equals(palabraElegida)) {                       //Si toda la palabra eligida ocupa el numero de guiones
            System.out.println("¡Felicidades, has adivinado la palabra!");     //El usuario gana
        }
    }


    static void dibujar(int errores) {              //Método que permite dibujar el muñequito
        System.out.println();
        for (int i = 0; i < errores; i++) {
            System.out.println(dibujo[i]);      //Por ejemplo, si el usuario ha cometido 2 errores, se imprimen las dos primeras lineas de dibujo []
        }
        System.out.println();
    }
}
