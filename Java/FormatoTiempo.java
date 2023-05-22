import java.util.Calendar;
import java.util.Formatter;
import java.text.SimpleDateFormat;
import java.util.Date;




class FormatoTiempo{
  public static void main(String[] args) {
  //formato fecha;
    Formatter fecha = new Formatter();
    Calendar cal = Calendar.getInstance();
    //fecha = new Formatter();
    fecha.format("%tB %tb %tm",cal,cal,cal);
    //Formato hora:
    Date hora = new Date();
      String strFormatoHora = "HH:mm:ss a";
    SimpleDateFormat forma = new SimpleDateFormat(strFormatoHora);
    //Se imprime
    System.out.println("Presentacion 1 de Fecha y hora:");
    System.out.println(fecha + " "+ forma.format(hora)+"\n");
    //Otra forma
    fecha.format("%tc",cal);
    System.out.println("Presentacion 2 de fecha y hora:");
    System.out.println(fecha + "\n");
    //Otra Forma
    Date d = new Date();
    System.out.println("Presentacion 3 de fecha y hora:");
    System.out.println(d.toString());
  }
}