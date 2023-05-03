class CompararCadenas {
    public static void main (String[] args){
        String cadena1 = "Los Amigos";
        String cadena2 = "Los Amigos";

        //Son iguales?

        //orden lexico de la cadena
        System.out.println (cadena1.compareTo(cadena2));

        //orden lexico sin importar mayusculas
        System.out.println (cadena1.compareToIgnoreCase(cadena2));

        //Son iguales? imprime true o false
        System.out.println (cadena1.equals(cadena2));
        System.out.println (cadena1 == cadena2);
    }
}