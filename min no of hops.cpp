public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int c[] = new int[n];
    for(int i=0; i < n; i++){
        c[i] = in.nextInt();
    }

    int hops=0,i;
    for(i=0;i<n-2;i++){
        if (c[i+2]==0){
            i++;
            hops++;
            continue;
        }
        hops++;
        }
    if(i<n-1)
        hops++;
    System.out.println(hops);
}
