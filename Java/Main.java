import java.util.Arrays;  //para poder utilizar el sort

class OrdenarArreglos {
    public static void imprimirArreglo (String mensaje, int arreglo[]) {    //método 1

        System.out.println (mensaje + ": [longitud: " + arreglo.length + "]");

        for (int i=0; i < arreglo.length; i++){
            System.out.println (" " + arreglo[i]);
        }

        System.out.println();
    }



    public static void main (String[] args){ //método principal
        int ejemplo_arreglo[] = {2,-5,3,0,-2,-3,9,-18,4,5};
        Arrays.sort (ejemplo_arreglo);

        //Llamando la funcion imprimirArreglo, con lo que quiero que imprima
        imprimirArreglo("Arreglo ordenado", ejemplo_arreglo);

        //Se busca el indice del valor -2
        int indice = Arrays.binarySearch(ejemplo_arreglo, -2);

        System.out.println("Se encontro el -2@ " + indice);
    }
}