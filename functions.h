typedef struct {
    char date[10];
    char UID[25];
    int problem_code;
    float test_time;
    char note_guasto[60];
    int IMU;
    int LT_GK;
    int elaborated;
}device_entry;

device_entry parser (char file_buf[]) {          //Function to parse server dump
   device_entry device;
   //printf("DEBUG: file_buf: %s", file_buf);
   int buf_pointer = 0;
   int pointer = 0;
   do{
      device.date[pointer] = file_buf[buf_pointer];
      buf_pointer++;
      pointer++;
   } while (file_buf[buf_pointer] != ';');
   device.date[pointer] = '\0';
   buf_pointer++;
   pointer = 0;
   do{
      device.UID[pointer] = file_buf[buf_pointer];
      buf_pointer++;
      pointer++;
   } while (file_buf[buf_pointer] != ';');
   device.UID[pointer] = '\0';
   buf_pointer++;
   pointer = 0;
   do{
      device.UID[pointer] = file_buf[buf_pointer];
      buf_pointer++;
      pointer++;
   } while (file_buf[buf_pointer] != ';');
   device.UID[pointer] = '\0';
   buf_pointer++;
   pointer = 0;
   do{
      device.problem_code = (int)file_buf[buf_pointer];
      buf_pointer++;
      pointer++;
   } while (file_buf[buf_pointer] != ';');
   buf_pointer++;
   pointer = 0;
   do{
      device.test_time = (float)file_buf[buf_pointer];
      buf_pointer++;
      pointer++;
   } while (file_buf[buf_pointer] != '\0');
   buf_pointer++;
   pointer = 0;
   do{
      device.note_guasto[pointer] = (int)file_buf[buf_pointer];
      buf_pointer++;
      pointer++;
   } while (file_buf[buf_pointer] != ';');
   buf_pointer++;
   pointer = 0;
   do{
      device.IMU = (int)file_buf[buf_pointer];
      buf_pointer++;
      pointer++;
   } while (file_buf[buf_pointer] != '\0');
   buf_pointer++;
   pointer = 0;
   do{
      device.LT_GK = (int)file_buf[buf_pointer];
      buf_pointer++;
      pointer++;
   } while (file_buf[buf_pointer] != '\0');
   buf_pointer++;
   pointer = 0;
   do{
      device.elaborated = (int)file_buf[buf_pointer];
      buf_pointer++;
      pointer++;
   } while (file_buf[buf_pointer] != '\0');
   return device;
}