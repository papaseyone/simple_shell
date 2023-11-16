#include "shell.h"


int main(void)
{
char cmd[132];

while (true)
{
safnt_display_prompt();
read_cmd(cmd, sizeof(cmd));
exec_cmd(cmd);
} 

return 0;
}
