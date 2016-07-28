#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	float reported_in_equipment_delay_DL_in_pt_01chips_m = 5268;
	int result0 = 0;
	int result1 = 0;
	int temp = 0;
	temp = reported_in_equipment_delay_DL_in_pt_01chips_m/100 + 1;
	result0 = (reported_in_equipment_delay_DL_in_pt_01chips_m/100 + 1)*100;
	result1 = temp*100;

	cout<<"result0:"<<result0<<endl;
	cout<<"result1:"<<result1<<endl;
	return 0;
}
