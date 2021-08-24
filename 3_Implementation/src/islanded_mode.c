#include<stdio.h>
#include"header.h"


int EARNINGG=0;

int islanded_mode(int pv_power, int load_demand,int PROFITGRID)
{

    printf("Currently islanded mode is operating.\n\n");
    
    if(pv_power > load_demand)
    {
      int extra_power = pv_power - load_demand;
      printf("Power delivered from PV to grid is %d Wh.\n\n",extra_power); // Net metering

      // earn Rs3 per kWh of power to grid.
      //int power_Wh_to_kWh = extra_power * 0.001;   // net metering, extra power from pv to grid
      EARNINGG = extra_power * 0.001 *3;
      printf("Power Used for charging EV is %d Wh.\n\n",load_demand);

    }
    printf("\n\nToday's total profit is Rs %d",EARNINGG+PROFITGRID);
    return EARNINGG;
}
