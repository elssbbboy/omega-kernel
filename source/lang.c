#include "lang.h"

char* gl_init_error;
char* gl_power_off;
char* gl_init_ok;
char* gl_Loading;
char* gl_file_overflow;

char* gl_menu_btn;
char* gl_lastest_game;

char* gl_writing;

char* gl_time;
char* gl_Mon;
char* gl_Tues;
char* gl_Wed;
char* gl_Thur;
char* gl_Fri;
char* gl_Sat;
char* gl_Sun;

char* gl_addon;
char* gl_reset;
char* gl_rts;
char* gl_sleep;
char* gl_cheat;

char* gl_hot_key;
char* gl_hot_key2;

char* gl_language;
char* gl_en_lang;
char* gl_zh_lang;
char* gl_es_lang;
char* gl_set_btn;
char* gl_ok_btn;

char* gl_formatnor_info;

char* gl_check_sav;
char* gl_make_sav;

char* gl_check_RTS;
char* gl_make_RTS;

char* gl_check_pat;
char* gl_make_pat;

char* gl_loading_game;

char* gl_engine;
char* gl_use_engine;

char*  gl_recently_play;

char* gl_START_help;
char* gl_SELECT_help;
char* gl_L_A_help;
char* gl_LSTART_help;
char* gl_online_manual;

char* gl_no_game_played;

char* gl_ingameRTC;
char* gl_offRTC_powersave;
//--
char**  gl_rom_menu;
char**  gl_nor_op;


//����
const char zh_init_error[]="TF����ʼ��ʧ��";
const char zh_power_off[]="�ػ�";
const char zh_init_ok[]="TF����ʼ���ɹ�";
const char zh_Loading[]="������...";
const char zh_file_overflow[]="�ļ�̫��,���ܼ���";

const char zh_menu_btn[]=" [B]ȡ��    [A]ȷ��";
const char zh_writing[]="����д...";
const char zh_lastest_game[]="��ѡ������һ����Ϸ";

const char zh_time[] ="     ʱ��";
const char zh_Mon[]="һ";
const char zh_Tues[]="��";
const char zh_Wed[]="��";
const char zh_Thur[]="��";
const char zh_Fri[]="��";
const char zh_Sat[]="��";
const char zh_Sun[]="��";

const char zh_addon[]="     ����";
const char zh_reset[]="����λ";
const char zh_rts[]="��ʱ�浵";
const char zh_sleep[]="˯��";
const char zh_cheat[]="����ָ";

const char zh_hot_key[]=" ˯���ȼ�";
const char zh_hot_key2[]=" �˵��ȼ�";

const char zh_language[]=" LANGUAGE";
const char zh_lang[]=" ����";

const char zh_set_btn[]="����";
const char zh_ok_btn[]="����";
const char zh_formatnor_info[]="ȷ��?��Լ4����";

const char zh_check_sav[]="����SAV�ļ�";
const char zh_make_sav[]="����SAV�ļ�";

const char zh_check_RTS[]="����RTS�ļ�";
const char zh_make_RTS[]="����RTS�ļ�";

const char zh_check_pat[]="����PAT�ļ�";
const char zh_make_pat[]="����PAT�ļ�";

const char zh_loading_game[]="������Ϸ";

const char zh_engine[]="     ����";
const char zh_use_engine[]="���ٲ�������";

const char zh_recently_play[]="������Ϸ�б�";

const char zh_START_help[]="����������Ϸ�б�";
const char zh_SELECT_help[]="����ͼ����";
const char zh_L_A_help[]="������";
const char zh_LSTART_help[]="ɾ���ļ�";
const char zh_online_manual[]="  ����˵����";

const char zh_no_game_played[]="��û������Ϸ";

const char zh_ingameRTC[]=" ��Ϸʱ��";
const char zh_offRTC_powersave[]="�رտ��Խ���";


const char *zh_rom_menu[]={
	"ֱ������",
	"����������",
	"��¼��NOR",
	"��¼��NOR������",
	"�浵����",
	"����ָ",
};
const char *zh_nor_op[3]={
	"ֱ������",
	"ɾ��",
	"ȫ����ʽ��",
};



//Ӣ��
const char en_init_error[]="Micro SD card initial error";
const char en_power_off[]="Power off";
const char en_init_ok[]="Micro SD card initial OK";
const char en_Loading[]="Loading...";
const char en_file_overflow[]="The file overflow";

const char en_menu_btn[]="[B]CANCEL    [A]OK";
const char en_writing[]="WRITING...";
const char en_lastest_game[]="SELECT THE LASTEST";

const char en_time[]="     TIME";
const char en_Mon[]="MON";
const char en_Tues[]="TUE";
const char en_Wed[]="WED";
const char en_Thur[]="THU";
const char en_Fri[]="FRI";
const char en_Sat[]="SAT";
const char en_Sun[]="SUN";

const char en_addon[]="    ADDON";
const char en_reset[]="RESET";
const char en_rts[]="SAVESTATE";
const char en_sleep[]="SLEEP";
const char en_cheat[]="CHEAT";

const char en_hot_key[] ="SLEEP KEY";
const char en_hot_key2[]=" MENU KEY";

const char en_language[]=" LANGUAGE";
const char en_lang[]="ENGLISH";
const char en_set_btn[]="SET";
const char en_ok_btn[]=" OK";

const char en_formatnor_info[]="SURE?about 4 mins";

const char en_check_sav[]="CHECKING SAV FILE";
const char en_make_sav[] ="CREATING SAV FILE";

const char en_check_RTS[]="CHECKING RTS FILE";
const char en_make_RTS[] ="CREATING RTS FILE";

const char en_check_pat[]="CHECKING PAT FILE";
const char en_make_pat[] ="CREATING PAT FILE";

const char en_loading_game[]="LOADING GAME";

const char en_engine[]=" ENGINE";
const char en_use_engine[]="FAST PATCH ENGINE";

const char en_recently_play[]="RECENT PLAYED";

const char en_START_help[]="Open recently played list";
const char en_SELECT_help[]="Thumbnail toggle";
const char en_L_A_help[]="Multiboot";
const char en_LSTART_help[]="Delete file";
const char en_online_manual[]="Online manual";

const char en_no_game_played[]="No game played yet";

const char en_ingameRTC[]=" RTC";
const char en_offRTC_powersave[]="TURNOFF TO POWER SAVE";

const char *en_rom_menu[] = {
	"CLEAN BOOT",
	"BOOT WITH ADDON",
	"WRITE TO NOR CLEAN",
	"WRITE TO NOR ADDON",
	"SAVE TYPE",
	"CHEAT",
};
const char *en_nor_op[3]={
	"DIRECT BOOT",
	"DELETE",
	"FORMAT ALL",
};

//Ӣ��
const char es_init_error[]="Error inicializacion MicroSD";
const char es_power_off[]="Apagar";
const char es_init_ok[]="Inicializacion MicroSD OK";
const char es_Loading[]="Cargando";
const char es_file_overflow[]="Desbordamiento de archivo";

const char es_menu_btn[]="[B]ATRAS     [A]OK";
const char es_writing[]="Escribiendo";
const char es_lastest_game[]="Selecciona el ultimo";

const char es_time[]="     HORA";
const char es_Mon[]="LUN";
const char es_Tues[]="TUE";
const char es_Wed[]="MIE";
const char es_Thur[]="JUE";
const char es_Fri[]="VIE";
const char es_Sat[]="SAB";
const char es_Sun[]="DOM";

const char es_addon[]="    ADDON";
const char es_reset[]="RESET";
const char es_rts[]="SAVESTATE";
const char es_sleep[]="SLEEP";
const char es_cheat[]="CHEAT";

const char es_hot_key[] ="TECLA SLEEP";
const char es_hot_key2[]=" TECLA MENU";

const char es_language[]=" LENGUAJE";
const char es_lang[]="CASTELLANO";
const char es_set_btn[]="FIJAR";
const char es_ok_btn[]=" OK";

const char es_formatnor_info[]="SEGURO? 4 min aprox";

const char es_check_sav[]="COMPROBANDO SAV";
const char es_make_sav[] ="CREANDO SAV";

const char es_check_RTS[]="COMPROBANDO RTS";
const char es_make_RTS[] ="CREANDO RTS";

const char es_check_pat[]="CHECKING PAT";
const char es_make_pat[] ="CREANDO PAT";

const char es_loading_game[]="CARGANDO ROM";

const char es_engine[]=" MOTOR";
const char es_use_engine[]="MOTOR DE PARCHEO RAPIDO";

const char es_recently_play[]="JUEGOS RECIENTES";

const char es_START_help[]="Lista de ultimas roms usadas";
const char es_SELECT_help[]="Mostrar/Ocultar miniaturas";
const char es_L_A_help[]="Multiboot";
const char es_LSTART_help[]="Eliminar archivo";
const char es_online_manual[]="Manual online";

const char es_no_game_played[]="Juegos no utilizados";

const char es_ingameRTC[]=" RTC";
const char es_offRTC_powersave[]="Apagar para ahorrar energia";

const char *es_rom_menu[] = {
	"Arranque limpio",
	"Arranque con addon",
	"Escribir a NOR limpio",
	"Escribir a NOR con addon",
	"TIPO SAV",
	"CHEAT",
};
const char *es_nor_op[3]={
	"INICIO DIRECTO",
	"ELIMINAR",
	"FORMATEAR TODO",
};


//---------------------------------------------------------------------------------
void LoadChinese(void)
{
	gl_init_error = (char*)zh_init_error;
	gl_power_off = (char*)zh_power_off;
	gl_init_ok = (char*)zh_init_ok;
	gl_Loading = (char*)zh_Loading;
	gl_file_overflow = (char*)zh_file_overflow;

	gl_menu_btn = (char*)zh_menu_btn;
	gl_writing = (char*)zh_writing;
	gl_lastest_game = (char*)zh_lastest_game;


	gl_time = (char*)zh_time;
	gl_Mon = (char*)zh_Mon;
	gl_Tues = (char*)zh_Tues;
	gl_Wed = (char*)zh_Wed;
	gl_Thur = (char*)zh_Thur;
	gl_Fri = (char*)zh_Fri;
	gl_Sat = (char*)zh_Sat;
	gl_Sun = (char*)zh_Sun;

	gl_addon = (char*)zh_addon;
	gl_reset = (char*)zh_reset;
	gl_rts = (char*)zh_rts;
	gl_sleep = (char*)zh_sleep;
	gl_cheat = (char*)zh_cheat;

	gl_hot_key = (char*)zh_hot_key;
	gl_hot_key2 = (char*)zh_hot_key2;

	gl_language =  (char*)zh_language;
	gl_en_lang = (char*)en_lang;
	gl_zh_lang = (char*)zh_lang;
	gl_es_lang = (char*)es_lang;
	gl_set_btn = (char*)zh_set_btn;
	gl_ok_btn = (char*)zh_ok_btn;
	gl_formatnor_info = (char*)zh_formatnor_info;

	gl_check_sav = (char*)zh_check_sav;
	gl_make_sav = (char*)zh_make_sav;

	gl_check_RTS = (char*)zh_check_RTS;
	gl_make_RTS = (char*)zh_make_RTS;

	gl_check_pat = (char*)zh_check_pat;
	gl_make_pat = (char*)zh_make_pat;

	gl_loading_game = (char*)zh_loading_game;
	gl_engine = (char*)zh_engine;
	gl_use_engine = (char*)zh_use_engine;

	gl_recently_play = (char*)zh_recently_play;

	gl_START_help = (char*)zh_START_help;
	gl_SELECT_help = (char*)zh_SELECT_help;
	gl_L_A_help = (char*)zh_L_A_help;
	gl_LSTART_help = (char*)zh_LSTART_help;
	gl_online_manual = (char*)zh_online_manual;

	gl_no_game_played = (char*)zh_no_game_played;

	gl_ingameRTC = (char*)zh_ingameRTC;
	gl_offRTC_powersave = (char*)zh_offRTC_powersave;
	//
	gl_rom_menu = (char**)zh_rom_menu;
	gl_nor_op = (char**)zh_nor_op;

}
//---------------------------------------------------------------------------------
void LoadEnglish(void)
{
	gl_init_error = (char*)en_init_error;
	gl_power_off = (char*)en_power_off;
	gl_init_ok = (char*)en_init_ok;
	gl_Loading = (char*)en_Loading;
	gl_file_overflow = (char*)en_file_overflow;

	gl_menu_btn = (char*)en_menu_btn;
	gl_writing = (char*)en_writing;
	gl_lastest_game = (char*)en_lastest_game;

	gl_time = (char*)en_time;
	gl_Mon = (char*)en_Mon;
	gl_Tues = (char*)en_Tues;
	gl_Wed = (char*)en_Wed;
	gl_Thur = (char*)en_Thur;
	gl_Fri = (char*)en_Fri;
	gl_Sat = (char*)en_Sat;
	gl_Sun = (char*)en_Sun;
	gl_addon = (char*)en_addon;
	gl_reset = (char*)en_reset;
	gl_rts = (char*)en_rts;
	gl_sleep = (char*)en_sleep;
	gl_cheat = (char*)en_cheat;

	gl_hot_key = (char*)en_hot_key;
	gl_hot_key2 = (char*)en_hot_key2;

	gl_language =  (char*)en_language;
	gl_en_lang = (char*)en_lang;
	gl_zh_lang = (char*)zh_lang;
	gl_es_lang = (char*)es_lang;
	gl_set_btn = (char*)en_set_btn;
	gl_ok_btn = (char*)en_ok_btn;
	gl_formatnor_info = (char*)en_formatnor_info;

	gl_check_sav = (char*)en_check_sav;
	gl_make_sav = (char*)en_make_sav;

	gl_check_RTS = (char*)en_check_RTS;
	gl_make_RTS = (char*)en_make_RTS;

	gl_check_pat = (char*)en_check_pat;
	gl_make_pat = (char*)en_make_pat;

	gl_loading_game = (char*)en_loading_game;

	gl_engine = (char*)en_engine;
	gl_use_engine = (char*)en_use_engine;

	gl_recently_play = (char*)en_recently_play;

	gl_START_help = (char*)en_START_help;
	gl_SELECT_help = (char*)en_SELECT_help;
	gl_L_A_help = (char*)en_L_A_help;
	gl_LSTART_help = (char*)en_LSTART_help;
	gl_online_manual = (char*)en_online_manual;

	gl_no_game_played = (char*)en_no_game_played;

	gl_ingameRTC = (char*)en_ingameRTC;
	gl_offRTC_powersave = (char*)en_offRTC_powersave;
	//
	gl_rom_menu = (char**)en_rom_menu;
	gl_nor_op = (char**)en_nor_op;
}



void LoadSpanish(void)
{
	gl_init_error = (char*)es_init_error;
	gl_power_off = (char*)es_power_off;
	gl_init_ok = (char*)es_init_ok;
	gl_Loading = (char*)es_Loading;
	gl_file_overflow = (char*)es_file_overflow;

	gl_menu_btn = (char*)es_menu_btn;
	gl_writing = (char*)es_writing;
	gl_lastest_game = (char*)es_lastest_game;

	gl_time = (char*)es_time;
	gl_Mon = (char*)es_Mon;
	gl_Tues = (char*)es_Tues;
	gl_Wed = (char*)es_Wed;
	gl_Thur = (char*)es_Thur;
	gl_Fri = (char*)es_Fri;
	gl_Sat = (char*)es_Sat;
	gl_Sun = (char*)es_Sun;
	gl_addon = (char*)es_addon;
	gl_reset = (char*)es_reset;
	gl_rts = (char*)es_rts;
	gl_sleep = (char*)es_sleep;
	gl_cheat = (char*)es_cheat;

	gl_hot_key = (char*)es_hot_key;
	gl_hot_key2 = (char*)es_hot_key2;

	gl_language =  (char*)es_language;
	gl_en_lang = (char*)en_lang;
	gl_zh_lang = (char*)zh_lang;
	gl_es_lang = (char*)es_lang;
	gl_set_btn = (char*)es_set_btn;
	gl_ok_btn = (char*)es_ok_btn;
	gl_formatnor_info = (char*)es_formatnor_info;

	gl_check_sav = (char*)es_check_sav;
	gl_make_sav = (char*)es_make_sav;

	gl_check_RTS = (char*)es_check_RTS;
	gl_make_RTS = (char*)es_make_RTS;

	gl_check_pat = (char*)es_check_pat;
	gl_make_pat = (char*)es_make_pat;

	gl_loading_game = (char*)es_loading_game;

	gl_engine = (char*)es_engine;
	gl_use_engine = (char*)es_use_engine;

	gl_recently_play = (char*)es_recently_play;

	gl_START_help = (char*)es_START_help;
	gl_SELECT_help = (char*)es_SELECT_help;
	gl_L_A_help = (char*)es_L_A_help;
	gl_LSTART_help = (char*)es_LSTART_help;
	gl_online_manual = (char*)es_online_manual;

	gl_no_game_played = (char*)es_no_game_played;

	gl_ingameRTC = (char*)es_ingameRTC;
	gl_offRTC_powersave = (char*)es_offRTC_powersave;
	//
	gl_rom_menu = (char**)es_rom_menu;
	gl_nor_op = (char**)es_nor_op;
}
