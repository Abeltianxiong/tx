public class test {//
	public void pupage(){
		int age=0;
		age=age+7;
		System.out.println("the dog's age:"+age);//直接
	}
    public static void main(String []args) {
		test t=new test();//默认的构造方法，与C++里边的构造函数一样
		t.pupage();
        System.out.println("Hello World");
    }
}