public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int r=n-1;
    int row=r/3;
    int c=n-1;
    int col=c%3;
    System.out.println(""+row+" "+col);

    
}
