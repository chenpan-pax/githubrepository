ckage com.study.jnilearn;
 
public class HelloWorld {
    
    public static native String sayHello(String name);    
 
    public static void main(String[] args) {
        String text = sayHello("yangxin"); 
        System.out.println(text);
    }
    
    static {
        System.loadLibrary("HelloWorld");    
    }
 
}
public class HelloWorld1 {
    
    public static native String sayHello1(String name);    
 
    public static void main(String[] args) {
        String text = sayHello1("yangxin"); 
        System.out.println(text);
    }
    
    static {
        System.loadLibrary("HelloWorld");    
    }
 
}
