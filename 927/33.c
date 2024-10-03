#include<stdio.h>
#include<stdlib.h>

    // 計算一天開車花費的函數
    double calculate_daily_cost(double mileage, double fuel_price, double fuel_efficiency, double parking_fee, double toll_fee) {
    // 計算燃油成本
    double fuel_cost = (mileage / fuel_efficiency) * fuel_price;

    // 計算一天的總成本
    double total_cost = fuel_cost + parking_fee + toll_fee;

    return total_cost;
}

int main() {
    double mileage, fuel_price, fuel_efficiency, parking_fee, toll_fee, daily_cost;

    // 輸入
    printf("請輸入一天的總里程數 (公里): ");
    scanf("%lf", &mileage);

    printf("請輸入汽油一公升/加侖的價格: ");
    scanf("%lf", &fuel_price);

    printf("請輸入每公升/加侖能行駛的公里數: ");
    scanf("%lf", &fuel_efficiency);

    printf("請輸入一天的停車費: ");
    scanf("%lf", &parking_fee);

    printf("請輸入一天的通行費/過路費: ");
    scanf("%lf", &toll_fee);

    // 計算一天的總花費
    daily_cost = calculate_daily_cost(mileage, fuel_price, fuel_efficiency, parking_fee, toll_fee);

    // 顯示結果
    printf("您一天的開車成本為: %.2f 元\n", daily_cost);

    system("pause");
    return 0;
}