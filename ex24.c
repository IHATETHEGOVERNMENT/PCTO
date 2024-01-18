float ft_sqrt (double d){
    double temp, sqrt;
    sqrt = d / 2;
    temp = 0;
    while (sqrt!=temp){
        temp = sqrt;
        sqrt = (d/temp + temp)/2;
    }
    return sqrt;
}
int main(){
    double a;
    double b;
    double c;
    double delta;
    double x1;
    double x2;
    printf("bella fra inserisci i valori dei coefficienti \n");
    scanf("%lf %lf %lf", &a , &b , &c);
    delta = b * b - 4 * a * c;
    if (delta>=0){
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("i riaultati sono x1=%lf e x2=%lf\n" , x1 , x2);
    }
        if (delta==0){
            x1 = x2 = -b / 2 * a;
            printf("i risultati coincidono e sono x1=%lf e x2=%lf\n", x1 , x2);
        }
            if (delta<=0) {
                printf("l'equazione non ammette numeri reali\n");
            }
        return(0);
    }
