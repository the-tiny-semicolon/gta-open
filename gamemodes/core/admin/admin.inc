#include <YSI_Coding\y_hooks>

#if SETUP_TABLE
    #include <admin_setup-bans-table>
    #include <admin_setup-admins-table>
#endif

#include <admin_account>
#include <admin_ban>

#include <admin_cmd_lvl1>

#include <admin_cmd_lvl2>

#include <admin_cmd_lvl4>

#include <admin_cmd_lvl5>

#include <rcon_cmd>

hook OnGameModeInit() {

    Admin_AddCommandToList(1, "/acmds - list of admin commands");

    Admin_AddCommandToList(2, "/unjail - unjail a player");

    Admin_AddCommandToList(3, "/ban");
    Admin_AddCommandToList(3, "/unban");

    Admin_AddCommandToList(4, "/setvip");

    Admin_AddCommandToList(5, "/setadmin");
}
