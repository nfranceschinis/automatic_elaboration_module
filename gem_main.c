#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "functions.h"

int main (int argc, char* argv[]) {
   FILE *device_database = fopen(argv[1], "r");
   char inputUID[25];
   char devicedb[1024];
   device_entry device;
   strcpy(inputUID, argv[2]);                      //Acquisizione seriale da trovare
   printf("Seriale inserito: %s\n", inputUID);

    while (fgets(devicedb, 1024, device_database)) {
      device = parser(devicedb);                        //get next device from server_db
      printf("DEBUG: %s,%s,%d,%f,%s,%d,%d,%d\n", device.date, device.UID, device.problem_code, device.test_time, device.note_guasto, device.IMU, device.LT_GK, device.elaborated);
      /*
      //printf("DEBUG: %s,%s,%s,%s,%s,\n", gpexe_mod.club, gpexe_mod.devID, gpexe_mod.UID, gpexe_mod.SerialID, gpexe_mod.server);
      fseek(production_db, 0, SEEK_SET);
      gpexe_mod = finder(gpexe_mod, production_db);
      if(gpexe_mod.match == 1) {
         printer(gpexe, output_db);
      }*/
   }

   return 0;
}