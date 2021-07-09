import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class main {
    public static void main(String[] args) {
		List<Integer> list = new ArrayList<>();
		while ( list.size() < 6 ) {
			int random = (int)(Math.random() * 46); 
			if ( !list.contains(random) ) list.add( random );
		}
		
		Collections.sort(list);
		
		System.out.println("JAVA => [ " + list.get(0) + ", " + list.get(1) + ", " + list.get(2) + ", " + list.get(3) + ", " + list.get(4) + ", " + list.get(5) + " ]");
	}
}