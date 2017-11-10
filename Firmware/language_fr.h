/**
 * French
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 * "Do not change length" comment means:
 * Do not change the length this is max. due values before and/or behind or needs to fit on the LCD
 */

#define(length=20) WELCOME_MSG              CUSTOM_MENDEL_NAME " prete."
#define MSG_SD_INSERTED						"Carte inseree"
#define MSG_SD_REMOVED						"Carte retiree "
#define MSG_MAIN							"Menu principal"
#define MSG_DISABLE_STEPPERS				"Arreter moteurs"
#define MSG_AUTO_HOME						"Origine auto."
#define MSG_SET_HOME_OFFSETS				"Regl. decal. origine"
#define MSG_SET_ORIGIN						"Ajuster origine"
#define MSG_COOLDOWN						"Refroidir"
#define MSG_SWITCH_PS_ON					"Allumer alim."
#define MSG_SWITCH_PS_OFF					"Eteindre alim."
#define MSG_MOVE_AXIS						"Deplacer un axe"
#define MSG_MOVE_X							"Deplacer X"
#define MSG_MOVE_Y							"Deplacer Y"
#define MSG_MOVE_Z							"Deplacer Z"
#define MSG_MOVE_E							"Extruder"
#define MSG_SPEED							"Vitesse"
#define MSG_NOZZLE							"Buse"
#define MSG_NOZZLE1							"Buse2"
#define MSG_NOZZLE2							"Buse3"
#define MSG_BED								"Plateau"
#define MSG_FAN_SPEED						"Vitesse ventil."
#define MSG_FLOW							"Flux"
#define MSG_FLOW0							"Flux 0"
#define MSG_FLOW1							"Flux 1"
#define MSG_FLOW2							"Flux 2"
#define MSG_CONTROL							"Controler"
#define MSG_MIN								" \002 Min"
#define MSG_MAX								" \002 Max"
#define MSG_FACTOR							" \002 Fact"
#define MSG_TEMPERATURE						"Temperature"
#define MSG_MOTION							"Mouvement"
#define MSG_VOLUMETRIC						"Filament"
#define MSG_VOLUMETRIC_ENABLED				"E en mm3"
#define MSG_STORE_EPROM						"Sauver config"
#define MSG_LOAD_EPROM						"Lire config"
#define MSG_RESTORE_FAILSAFE				"Restaurer defauts"
#define MSG_REFRESH                         "\xF8" "Actualiser"
#define MSG_WATCH                           "ecran info"
#define MSG_TUNE							"Regler"
#define MSG_PAUSE_PRINT						"Suspendre impr."
#define MSG_RESUME_PRINT					"Reprendre impr."
#define MSG_STOP_PRINT						"Arreter impr."
#define MSG_CARD_MENU						"Impr. depuis SD"
#define MSG_NO_CARD							"Pas de carte"
#define MSG_DWELL							"Repos..."
#define MSG_USERWAIT						"Atten. de l'util."
#define MSG_RESUMING						"Reprise impr."
#define MSG_PRINT_ABORTED					"Impr. Annulee"
#define MSG_NO_MOVE							"Moteurs bloques."
#define MSG_KILLED							"INCIDENT."
#define MSG_STOPPED							"INTERRUPTION."
#define MSG_FILAMENTCHANGE					"Changer filament"
#define MSG_INIT_SDCARD						"Init. la carte SD"
#define MSG_CNG_SDCARD						"Changer de carte"
#define MSG_BABYSTEP_X						"Babystep X"
#define MSG_BABYSTEP_Y						"Babystep Y"
#define MSG_BABYSTEP_Z						"Ajuster axe Z"
#define MSG_ADJUSTZ							"Reglage auto Z?"
#define MSG_PICK_Z							"Choisir impression"

#define MSG_SETTINGS						"Reglage"
#define MSG_PREHEAT							"Prechauffage"
#define(length=17) MSG_UNLOAD_FILAMENT					"Ejecter filam."
#define(length=17) MSG_LOAD_FILAMENT					"Charger filament" //Do not change length
#define(length=17) MSG_LOAD_FILAMENT_1					"Charger filam. 1" //Do not change length
#define(length=17) MSG_LOAD_FILAMENT_2					"Charger filam. 2" //Do not change length
#define(length=17) MSG_LOAD_FILAMENT_3					"Charger filam. 3" //Do not change length
#define(length=17) MSG_LOAD_FILAMENT_4					"Charger filam. 4" //Do not change length
#define(length=17) MSG_UNLOAD_FILAMENT_1				"Ejecter filam. 1" //Do not change length
#define(length=17) MSG_UNLOAD_FILAMENT_2				"Ejecter filam. 2" //Do not change length
#define(length=17) MSG_UNLOAD_FILAMENT_3				"Ejecter filam. 3" //Do not change length
#define(length=17) MSG_UNLOAD_FILAMENT_4				"Ejecter filam. 4" //Do not change length
#define MSG_UNLOAD_ALL						"Ejecter tout"
#define MSG_LOAD_ALL						"Charger tout"

#define MSG_RECTRACT                        "Retraction"
#define MSG_ERROR                        	"ERREUR:"
#define(length=20) MSG_PREHEAT_NOZZLE       "Prechauff. buse!" //Do not change length
#define MSG_SUPPORT 						"Support"
#define(length=20) MSG_CORRECTLY			"Changement correct?" //Do not change length
#define MSG_YES								"Oui"
#define MSG_NO								"Non"
#define(length=19) MSG_NOT_LOADED 			"Filament non charge" //Do not change length
#define MSG_NOT_COLOR 						"Couleurs melange"
#define(length=20) MSG_LOADING_FILAMENT		"Chargement filament" //Do not change length
#define(length=20) MSG_PLEASE_WAIT			"Attendre svp" //Do not change length
#define MSG_LOADING_COLOR					"Chargement couleur"
#define MSG_CHANGE_SUCCESS					"Changement correct!"
#define(length=20) MSG_PRESS				"Presser bouton" //Do not change length
#define(length=20) MSG_INSERT_FILAMENT		"Inserer filament" //Do not change length
#define(length=20) MSG_CHANGING_FILAMENT	"Changement filament!" //Do not change length

#define MSG_SILENT_MODE_ON					"Mode [silencieux]"
#define MSG_SILENT_MODE_OFF					"Mode [puissance]"
#define MSG_AUTO_MODE_ON					"Mode[automatique]"
#define(length=20) MSG_REBOOT				"Redemarrer imprim." //Do not change length
#define(length=20) MSG_TAKE_EFFECT			" pour prendre effet" //Do not change length											

#define MSG_Enqueing                        "mise en file \""
#define MSG_POWERUP                         "Allumage"
#define MSG_CONFIGURATION_VER               " Mise a jour: "
#define MSG_FREE_MEMORY                     " Memoire libre: "
#define MSG_PLANNER_BUFFER_BYTES            "  PlannerBufferBytes: "
#define MSG_OK                              "ok"
#define MSG_ERR_CHECKSUM_MISMATCH           "Mauvais checksum, derniere ligne: "
#define MSG_ERR_NO_CHECKSUM                 "Absence Checksum avec numero ligne, derniere ligne: "
#define MSG_BEGIN_FILE_LIST                 "Debut liste fichiers"
#define MSG_END_FILE_LIST                   "Fin liste fichiers"
#define MSG_M104_INVALID_EXTRUDER           "M104 Extrudeur inval."
#define MSG_M105_INVALID_EXTRUDER           "M105 Extrudeur inval."
#define MSG_M200_INVALID_EXTRUDER           "M200 Extrudeur inval."
#define MSG_M218_INVALID_EXTRUDER           "M218 Extrudeur inval."
#define MSG_M221_INVALID_EXTRUDER           "M221 Extrudeur inval."
#define MSG_ERR_NO_THERMISTORS              "Pas de thermistances - pas de temperature"
#define MSG_M109_INVALID_EXTRUDER           "M109 Extrudeur inval."
#define MSG_HEATING                         "Prechauffage"
#define(length=20) MSG_HEATING_COMPLETE     "Prechauffage OK" //Do not change length
#define MSG_BED_HEATING                     "Prechauffage Plat."
#define MSG_BED_DONE                        "Plateau chaud"
#define MSG_M115_REPORT                     "FIRMWARE_NAME:Marlin V1.0.2; Sprinter/grbl adaptation pour gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" CUSTOM_MENDEL_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
#define MSG_ERR_KILLED                      "Imprimante arretee. appel kill()!"
#define MSG_ERR_STOPPED						"Imprimante arretee en raison d'erreurs. Corrigez l'erreur et utilisez M999 pour redemarrer. (La temperature est reinitialisee, reglez-la apres le redemarrage)"
#define MSG_RESEND                          "Re-envoyer: "
#define MSG_M119_REPORT                     "Envoi etat butee"
#define MSG_ENDSTOP_HIT                     "CONTACT"
#define MSG_ENDSTOP_OPEN                    "ouvert"

#define MSG_SD_CANT_OPEN_SUBDIR             "Erreur ouverture Rep"
#define MSG_SD_INIT_FAIL                    "Erreur init SD"
#define MSG_SD_VOL_INIT_FAIL                "Erreur volume.init"
#define MSG_SD_OPENROOT_FAIL                "Erreur openRoot"
#define MSG_SD_CARD_OK                      "SD card ok"
#define MSG_SD_WORKDIR_FAIL                 "erreur access workDir"
#define MSG_SD_OPEN_FILE_FAIL               "Erreur fichier: "
#define MSG_SD_FILE_OPENED                  "Fichier ouvert: "
#define MSG_SD_FILE_SELECTED                "Fichier choisi"
#define MSG_SD_WRITE_TO_FILE                "Ecriture fichier: "
#define MSG_SD_PRINTING_BYTE                "SD printing byte "
#define MSG_SD_NOT_PRINTING                 "Pas d'impression SD"
#define MSG_SD_ERR_WRITE_TO_FILE            "Erreur ecrit. fichier"
#define MSG_SD_CANT_ENTER_SUBDIR            "Erreur acces Rep"

#define MSG_STEPPER_TOO_HIGH                "Pas moteur trop haut: "
#define MSG_ENDSTOPS_HIT                    "contact butee: "
#define MSG_ERR_COLD_EXTRUDE_STOP           "Stop, extrusion a froid"
#define MSG_BABYSTEPPING_X                  "Babystepping X"
#define MSG_BABYSTEPPING_Y                  "Babystepping Y"
#define MSG_BABYSTEPPING_Z                  "Adjusting Z"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE     "Erreur structure menu"

#define MSG_LANGUAGE_NAME					"Francais"
#define MSG_LANGUAGE_SELECT					"Selection langue"
#define MSG_PRUSA3D							"prusa3d.com"
#define MSG_PRUSA3D_FORUM					"forum.prusa3d.com"
#define MSG_PRUSA3D_HOWTO					"howto.prusa3d.com"

#define MSG_SELFTEST_ERROR					"Error diagnostic!"
#define MSG_SELFTEST_PLEASECHECK			"Verifier SVP:"	
#define MSG_SELFTEST_NOTCONNECTED			"Non connecte"
#define MSG_SELFTEST_HEATERTHERMISTOR		"Chauf./Thermistance"
#define MSG_SELFTEST_BEDHEATER				"Plateau/Chauf."
#define MSG_SELFTEST_WIRINGERROR			"Erreur cablage"
#define MSG_SELFTEST_ENDSTOPS				"Butees"
#define MSG_SELFTEST_MOTOR					"Moteur"
#define MSG_SELFTEST_ENDSTOP				"Butee"
#define(length=20,lines=1) MSG_SELFTEST_ENDSTOP_NOTHIT			"Butee non atteinte" //Do not change length
#define MSG_SELFTEST_OK						"Diagnostic OK"
#define(length=20,lines=1) MSG_LOOSE_PULLEY	"Poulie desseree" //Do not change length

#define(length=20) MSG_SELFTEST_FAN			"Test ventilateurs" //Do not change length
#define(length=20) MSG_SELFTEST_COOLING_FAN		"Ventilateur avant?" //Do not change length;
#define(length=20) MSG_SELFTEST_EXTRUDER_FAN	"Ventilateur gauche?" //Do not change length
#define MSG_SELFTEST_FAN_YES				"En rotation"
#define MSG_SELFTEST_FAN_NO					"Immobile"

#define(length=20) MSG_STATS_TOTALFILAMENT	"Total filament :" //Do not change length
#define(length=20) MSG_STATS_TOTALPRINTTIME "Total print time :" //Do not change length
#define(length=20) MSG_STATS_FILAMENTUSED	"Filament used:  " //Do not change length
#define(length=20) MSG_STATS_PRINTTIME		"Print time:  " //Do not change length
#define(length=20) MSG_SELFTEST_START				"Debut diagnostic " //Do not change length
#define(length=20) MSG_SELFTEST_CHECK_ENDSTOPS		"Test butees      " //Do not change length
#define(length=20) MSG_SELFTEST_CHECK_HOTEND		"Test hotend  " //Do not change length  
#define(length=20) MSG_SELFTEST_CHECK_X				"Test axe X       " //Do not change length
#define(length=20) MSG_SELFTEST_CHECK_Y				"Test axe Y axis  " //Do not change length
#define(length=20) MSG_SELFTEST_CHECK_Z				"Test axe Z axis  " //Do not change length
#define(length=20) MSG_SELFTEST_CHECK_BED			"Test Chauf. Plat." //Do not change length
#define(length=20) MSG_SELFTEST_CHECK_ALLCORRECT	"Diagnostic reussi" //Do not change length
#define MSG_SELFTEST						"Diagnostic       "
#define(length=20) MSG_SELFTEST_FAILED		"Echec Diagnostic " //Do not change length
#define MSG_STATISTICS						"Statistiques"
#define MSG_USB_PRINTING					"Impression USB "
#define MSG_HOMEYZ                          "Calibration Z"
#define MSG_HOMEYZ_PROGRESS                 "Calib. Z en cours"
#define MSG_HOMEYZ_DONE		                "Calibration done"

#define(length=17,lines=1) MSG_SHOW_END_STOPS	"Montre butees " //Do not change length
#define MSG_CALIBRATE_BED					"Calibration XYZ"
#define MSG_CALIBRATE_BED_RESET				"RAZ XYZ calibr."

#define(length=20,lines=8) MSG_MOVE_CARRIAGE_TO_THE_TOP 	"Calibration XYZ. Tourner le bouton pour monter axe Z jusque la butee. Presser bouton pour poursuivre."
#define(length=20,lines=8) MSG_MOVE_CARRIAGE_TO_THE_TOP_Z 	"Calibration Z. Tourner le bouton pour monter axe Z jusque la butee. Presser bouton pour poursuivre."

#define(length=20,lines=8) MSG_CONFIRM_NOZZLE_CLEAN			"Nettoyer la buse avant la calibration. Presser bouton pour poursuivre."
#define(length=20,lines=2) MSG_CONFIRM_CARRIAGE_AT_THE_TOP	"Axe Z droit et gauche tout en haut?" //Do not change length

#define(length=60) MSG_FIND_BED_OFFSET_AND_SKEW_LINE1		"Recherche points calibration plateau"
#define(length=14) MSG_FIND_BED_OFFSET_AND_SKEW_LINE2		" sur 4" //Do not change length
#define(length=60) MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1	"Affinage points calibration plateau"
#define(length=14) MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2	" sur 9" //Do not change length
#define(length=60) MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1	"Mesure hauteur de reference points calibration"
#define(length=14) MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2	" sur 9" //Do not change length
#define(length=20) MSG_FIND_BED_OFFSET_AND_SKEW_ITERATION	"Iteration "

#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND			"Echec calibration XYZ. Point de calibration non trouve."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED				"Echec calibration XYZ. SVP consulter le manuel."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_PERFECT					"Calibration XYZ parfaite. Axes X/Y perpendiculaires. Felicitations!"
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD					"Calibration XYZ correcte. Axes X/Y faiblement obliques. Bien joue!"
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME				"Calibration XYZ ecceptable. Les axes X/Y obliques seront compenses automatiquement."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR		"Echec calibration XYZ. Point calibration avant gauche introuvable."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR		"Echec calibration XYZ. Point calibration avant droit introuvable."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR		"Echec calibration XYZ. 2 Points calibration avant introuvables."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR		"Calibration XYZ defaillante. Point calibration avant gauche introuvable."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR	"Calibration XYZ defaillante. Point calibration avant droit introuvable."
#define(length=20,lines=8) MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR		"Calibration XYZ defaillante. 2 Points calibration avant introuvables."

#define(length=20,lines=6) MSG_BED_LEVELING_FAILED_POINT_LOW			"Echec mesure hauteur plateau. Debris sur buse ? Attente de Reset."
#define(length=20,lines=6) MSG_BED_LEVELING_FAILED_POINT_HIGH			"Echec mesure hauteur plateau. Declenchement senseur trop haut. Attente de Reset."
#define(length=20,lines=6) MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED	"Echec mesure hauteur plateau. Senseur deconnecte ou cable endommage. Attente de Reset."

#define(length=20,lines=2) MSG_NEW_FIRMWARE_AVAILABLE		"Nouveau firmware disponible:" //Do not change length
#define(length=20) MSG_NEW_FIRMWARE_PLEASE_UPGRADE			"Mettre a jour SVP." //Do not change length

#define(length=20,lines=8) MSG_FOLLOW_CALIBRATION_FLOW		"Imprimante non calibree. SVP Consulter le manuel, chapitre premiers pas, section gestion de la calibration."
#define(length=20,lines=12) MSG_BABYSTEP_Z_NOT_SET			"Distance entre la pointe de la buse pas encore mesuree. SVP Consulter le manuel, chapitre premiers pas, section mesure de la premiere couche."

#define(length=20, lines=4) MSG_FILAMENT_LOADING_T0			"Inserer filament dans extrudeur 1, puis presser bouton."
#define(length=20, lines=4) MSG_FILAMENT_LOADING_T1			"Inserer filament dans extrudeur 2, puis presser bouton."
#define(length=20, lines=4) MSG_FILAMENT_LOADING_T2			"Inserer filament dans extrudeur 3, puis presser bouton."
#define(length=20, lines=4) MSG_FILAMENT_LOADING_T3			"Inserer filament dans extrudeur 4, puis presser bouton."
#define(length=20, lines=1) MSG_CHANGE_EXTR					"Changer extrudeur" //Do not change length

#define(length=20, lines=4) MSG_FIL_ADJUSTING				"Ajustement filaments. Attendre SVP."
#define(length=20,lines=8) MSG_CONFIRM_NOZZLE_CLEAN_FIL_ADJ	"Filaments ajustes. are now adjusted. Please clean the nozzle for calibration. Click when done."
#define(length=20, lines=4) MSG_STACK_ERROR					"Erreur - memoire statique ecrasee"
#define(length=20, lines=1) MSG_CALIBRATE_E					"Calibrer E" //Do not change length
//#define(length=20, lines=1) MSG_RESET_CALIBRATE_E			"Reset E Cal."  //Do not change length
#define(length=20, lines=8) MSG_E_CAL_KNOB					"Tourner le bouton pour que la marque atteigne le corps de l extruder, puis presser bouton."

//#define(length=20, lines=1) MSG_FARM_CARD_MENU			"Farm mode print"  //Do not change length
#define(length=20, lines=8) MSG_MARK_FIL					"Mark filament 100mm from extruder body. Click when done."
#define(length=20, lines=8) MSG_CLEAN_NOZZLE_E				"E calibration finished. Please clean the nozzle. Click when done."
#define(length=20, lines=3) MSG_WAITING_TEMP				"Attente refroidissement buse et plateau"
#define(length=20, lines=2) MSG_FILAMENT_CLEAN				"Couleur nette?" //Do not change length
#define(length=20, lines=1) MSG_UNLOADING_FILAMENT			"Ejection filament" //Do not change length
#define(length=20, lines=10) MSG_PAPER						"Placer une feuille de papier sous la buse durant la calibration des 4 premiers points. Si la buse deplace la feuille, eteindre immediatement l imprimante."

#define(length=18) MSG_BED_CORRECTION_MENU					"Correction Plat." //Do not change length
#define(length=14,lines=1) MSG_BED_CORRECTION_LEFT			"Gauche    [um]" //Do not change length
#define(length=14,lines=1) MSG_BED_CORRECTION_RIGHT			"Droit     [um]" //Do not change length
#define(length=14,lines=1) MSG_BED_CORRECTION_FRONT			"Avant     [um]" //Do not change length
#define(length=14,lines=1) MSG_BED_CORRECTION_REAR			"Arriere   [um]" //Do not change length
#define MSG_BED_CORRECTION_RESET							"RAZ"

#define MSG_MESH_BED_LEVELING								"Mesh Bed Leveling"
#define MSG_MENU_CALIBRATION								"Calibration"
#define(length=19, lines=1) MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF		"SD card [normal]" //Do not change length
#define(length=19, lines=1) MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON		"SD card [FlshAir]" //Do not change length
#define(length=20, lines=1) MSG_PRINTER_DISCONNECTED		"Impr. deconnectee" //Do not change length
#define(length=20, lines=1) MSG_FINISHING_MOVEMENTS			"Termine mouvements" //Do not change length
#define(length=20, lines=1) MSG_PRINT_PAUSED				"Impr en pause" //Do not change length
#define(length=20, lines=1) MSG_RESUMING_PRINT				"Reprise Impr." //Do not change length
#define(length=17, lines=1) MSG_PID_EXTRUDER				"Calibration PID " //Do not change length
#define(length=19, lines=1) MSG_SET_TEMPERATURE				"Def. temperature:" //Do not change length
#define(length=20, lines=1) MSG_PID_FINISHED				"PID cal. effectue" //Do not change length
#define(length=20, lines=1) MSG_PID_RUNNING					"PID cal.         " //Do not change length

#define(length=17, lines=1) MSG_CALIBRATE_PINDA				"Calibrate" //Do not change length
#define(length=17, lines=1) MSG_CALIBRATION_PINDA_MENU		"Temp. calibration" //Do not change length
#define(length=20, lines=4) MSG_PINDA_NOT_CALIBRATED		"Temperature calibration has not been run yet"
#define(length=20, lines=1) MSG_PINDA_PREHEAT				"PINDA Heating" //Do not change length
#define(length=20, lines=1) MSG_TEMP_CALIBRATION			"Temp. cal.          " //Do not change length
#define(length=20, lines=5) MSG_TEMP_CALIBRATION_DONE		"Temperature calibration is finished. Click to continue."
#define(length=20, lines=1) MSG_TEMP_CALIBRATION_ON			"Temp. cal. [ON]" //Do not change length
#define(length=20, lines=1) MSG_TEMP_CALIBRATION_OFF		"Temp. cal. [OFF]" //Do not change length

<<<<<<< HEAD
#define(length=20, lines=1) MSG_PREPARE_FILAMENT			"Preparer nouv. filam." //Do not change length
#define(length=19, lines=1) MSG_ALL							"Tous" //Do not change length
#define(length=19, lines=1) MSG_USED						"Used during print" //Do not change length
#define(length=19, lines=1) MSG_CURRENT						"Actuel" //Do not change length
#define(length=20, lines=1)	MSG_CHOOSE_EXTRUDER				"Choisir extrudeur:" //Do not change length
#define(length=17, lines=1) MSG_EXTRUDER					"Extrudeur" //Do not change length
#define(length=17, lines=1) MSG_EXTRUDER_1					"Extrudeur 1" //Do not change length
#define(length=17, lines=1) MSG_EXTRUDER_2					"Extrudeur 2" //Do not change length
#define(length=17, lines=1) MSG_EXTRUDER_3					"Extrudeur 3" //Do not change length
#define(length=17, lines=1) MSG_EXTRUDER_4					"Extrudeur 4" //Do not change length
#define(length=17, lines=1) MSG_DATE						"Date:" //Do not change length
#define(length=19, lines=1) MSG_XYZ_DETAILS					"XYZ cal. details" //Do not change length
#define(length=20, lines=1)	MSG_Y_DISTANCE_FROM_MIN			"Y distance from min:" //Do not change length
#define(length=12, lines=1)	MSG_LEFT						"Left:" //Do not change length
#define(length=12, lines=1) MSG_CENTER						"Center:" //Do not change length
#define(length=12, lines=1) MSG_RIGHT						"Right:" //Do not change length
#define(length=15, lines=1) MSG_MEASURED_SKEW				"Measured skew:" //Do not change length
#define(length=15, lines=1) MSG_SLIGHT_SKEW					"Slight skew:" //Do not change length
#define(length=15, lines=1) MSG_SEVERE_SKEW					"Severe skew:" //Do not change length
#define(length=20, lines=4) MSG_DEFAULT_SETTINGS_LOADED		"Default settings loaded"
#define(length=17, lines=1) MSG_SORT_TIME					"Sort: [Time]" //Do not change length
#define(length=17, lines=1) MSG_SORT_ALPHA					"Sort: [Alphabet]" //Do not change length
#define(length=17, lines=1) MSG_SORT_NONE					"Sort: [None]" //Do not change length
#define(length=20, lines=1) MSG_SORTING						"Sorting files" //Do not change length
#define(length=20, lines=2) MSG_FILE_INCOMPLETE				"File incomplete. Continue anyway?" //Do not change length
#define(length=17, lines=1) MSG_WIZARD						"Wizard" //Do not change length
#define(length=20, lines=7)	MSG_WIZARD_WELCOME				"Hi, I am your Original Prusa i3 printer. Would you like me to guide you through the setup process?"
#define(length=20, lines=8) MSG_WIZARD_QUIT					"You can always resume the Wizard from Calibration -> Wizard."
#define(length=20, lines=8) MSG_WIZARD_SELFTEST				"First, I will run the selftest to check most common assembly problems."
#define(length=20, lines=8) MSG_WIZARD_CALIBRATION_FAILED	"Please check our handbook and fix the problem. Then resume the Wizard by rebooting the printer."
#define(length=20, lines=8) MSG_WIZARD_XYZ_CAL				"I will run xyz calibration now. It will take approx. 12 mins."
#define(length=20, lines=2) MSG_WIZARD_FILAMENT_LOADED		"Is filament loaded?" //Do not change length
#define(length=20, lines=8) MSG_WIZARD_Z_CAL				"I will run z calibration now."
#define(length=20, lines=4) MSG_WIZARD_WILL_PREHEAT			"Now I will preheat nozzle for PLA."
#define(length=20, lines=3) MSG_WIZARD_HEATING				"Preheating nozzle. Please wait."
#define(length=20, lines=8) MSG_WIZARD_V2_CAL				"Now I will calibrate distance between tip of the nozzle and heatbed surface."
#define(lenght=20, lines=14) MSG_WIZARD_V2_CAL_2			"I will start to print line and you will gradually lower the nozzle by rotating the knob, until you reach optimal height. Check the pictures in our handbook in chapter Calibration."
#define(lenght=17, lines=1) MSG_V2_CALIBRATION				"First layer cal." //Do not change length
#define(length=20, lines=8) MSG_WIZARD_DONE					"All is done. Happy printing!"
#define(length=20, lines=8) MSG_WIZARD_LOAD_FILAMENT		"Please insert PLA filament to the extruder, then press knob to load it."
#define(length=20, lines=7) MSG_WIZARD_RERUN				"Running Wizard will delete current calibration results and start from the beginning. Continue?"
#define(length=20, lines=7) MSG_WIZARD_REPEAT_V2_CAL		"Do you want to repeat last step to readjust distance between nozzle and heatbed?"
#define(length=20, lines=7) MSG_WIZARD_CLEAN_HEATBED		"Please clean heatbed and then press the knob."
#define(length=20, lines=2) MSG_WIZARD_PLA_FILAMENT			"Is it PLA filament?" //Do not change length
#define(length=20, lines=8) MSG_WIZARD_INSERT_CORRECT_FILAMENT	"Please load PLA filament and then resume Wizard by rebooting the printer."
#define(length=20, lines=2) MSG_PLA_FILAMENT_LOADED			"Is PLA filament loaded?" //Do not change length
#define(length=20, lines=4) MSG_PLEASE_LOAD_PLA				"Please load PLA filament first."
#define(length=20, lines=8) MSG_FILE_CNT					"Some files will not be sorted. Max. No. of files in 1 folder for sorting is 100."
=======
#define(length=17, lines=1) MSG_CALIBRATE_PINDA					"Calibrate"
#define(length=17, lines=1) MSG_CALIBRATION_PINDA_MENU			"Temp. calibration"
#define(length=20, lines=4) MSG_PINDA_NOT_CALIBRATED			"Temperature calibration has not been run yet"
#define(length=20, lines=1) MSG_PINDA_PREHEAT					"PINDA Heating"
#define(length=20, lines=1) MSG_TEMP_CALIBRATION				"Temp. cal.          "
#define(length=20, lines=4) MSG_TEMP_CALIBRATION_DONE			"Temperature calibration is finished. Click to continue."
#define(length=20, lines=1) MSG_TEMP_CALIBRATION_ON				"Temp. cal. [ON]"
#define(length=20, lines=1) MSG_TEMP_CALIBRATION_OFF			"Temp. cal. [OFF]"
#define(length=20, lines=1) MSG_PREPARE_FILAMENT				"Prepare new filament"
#define(length=19, lines=1) MSG_ALL								"All"
#define(length=19, lines=1) MSG_USED							"Used during print"
#define(length=19, lines=1) MSG_CURRENT							"Current"
#define(length=20, lines=1)	MSG_CHOOSE_EXTRUDER					"Choose extruder:"
#define(length=17, lines=1) MSG_EXTRUDER						"Extruder"
#define(length=17, lines=1) MSG_EXTRUDER_1						"Extruder 1"
#define(length=17, lines=1) MSG_EXTRUDER_2						"Extruder 2"
#define(length=17, lines=1) MSG_EXTRUDER_3						"Extruder 3"
#define(length=17, lines=1) MSG_EXTRUDER_4						"Extruder 4"
#define(length=17, lines=1) MSG_DATE							"Date:"
#define(length=19, lines=1) MSG_XYZ_DETAILS						"XYZ cal. details"
#define(length=20, lines=1)	MSG_Y_DISTANCE_FROM_MIN				"Y distance from min:"
#define(length=12, lines=1)	MSG_LEFT							"Left:"
#define(length=12, lines=1) MSG_CENTER							"Center:"
#define(length=12, lines=1) MSG_RIGHT							"Right:"
#define(length=15, lines=1) MSG_MEASURED_SKEW					"Measured skew:"
#define(length=15, lines=1) MSG_SLIGHT_SKEW						"Slight skew:"
#define(length=15, lines=1) MSG_SEVERE_SKEW						"Severe skew:"
#define(length=20, lines=4) MSG_DEFAULT_SETTINGS_LOADED			"Default settings loaded"
#define(length=17, lines=1) MSG_SORT_TIME						"Sort: [Time]"
#define(length=17, lines=1) MSG_SORT_ALPHA						"Sort: [Alphabet]"
#define(length=17, lines=1) MSG_SORT_NONE						"Sort: [None]"
#define(length=20, lines=1) MSG_SORTING							"Sorting files"
#define(length=20, lines=2) MSG_FILE_INCOMPLETE					"File incomplete. Continue anyway?"
#define(length=17, lines=1) MSG_WIZARD							"Wizard"
#define(length=20, lines=7)	MSG_WIZARD_WELCOME					"Hi, I am your Original Prusa i3 printer. Would you like me to guide you through the setup process?"
#define(length=20, lines=8) MSG_WIZARD_QUIT						"You can always resume the Wizard from Calibration -> Wizard."
#define(length=20, lines=8) MSG_WIZARD_SELFTEST					"First, I will run the selftest to check most common assembly problems."
#define(length=20, lines=8) MSG_WIZARD_CALIBRATION_FAILED		"Please check our handbook and fix the problem. Then resume the Wizard by rebooting the printer."
#define(length=20, lines=8) MSG_WIZARD_XYZ_CAL					"I will run xyz calibration now. It will take approx. 12 mins."
#define(length=20, lines=2) MSG_WIZARD_FILAMENT_LOADED			"Is filament loaded?"
#define(length=20, lines=8) MSG_WIZARD_Z_CAL					"I will run z calibration now."
#define(length=20, lines=4) MSG_WIZARD_WILL_PREHEAT				"Now I will preheat nozzle for PLA."
#define(length=20, lines=3) MSG_WIZARD_HEATING					"Preheating nozzle. Please wait."
#define(lenght=20, lines=8) MSG_WIZARD_V2_CAL					"Now I will calibrate distance between tip of the nozzle and heatbed surface."
#define(lenght=20, lines=12) MSG_WIZARD_V2_CAL_2				"I will start to print line and you will gradually lower the nozzle by rotating the knob, until you reach optimal height. Check the pictures in our handbook in chapter Calibration."
#define(lenght=17, lines=1) MSG_V2_CALIBRATION					"First layer cal."
#define(lenght=20, lines=8) MSG_WIZARD_DONE						"All is done. Happy printing!"
#define(lenght=20, lines=8) MSG_WIZARD_LOAD_FILAMENT			"Please insert PLA filament to the extruder, then press knob to load it."
#define(lenght=20, lines=7) MSG_WIZARD_RERUN					"Running Wizard will delete current calibration results and start from the beginning. Continue?"
#define(lenght=20, lines=7) MSG_WIZARD_REPEAT_V2_CAL			"Do you want to repeat last step to readjust distance between nozzle and heatbed?"
#define(lenght=20, lines=8) MSG_WIZARD_CLEAN_HEATBED			"Please clean heatbed and then press the knob."
#define(lenght=20, lines=2) MSG_WIZARD_PLA_FILAMENT				"Is it PLA filament?"
#define(lenght=20, lines=8) MSG_WIZARD_INSERT_CORRECT_FILAMENT	"Please load PLA filament and then resume Wizard by rebooting the printer."
#define(lenght=20, lines=2) MSG_PLA_FILAMENT_LOADED				"Is PLA filament loaded?"
#define(lenght=20, lines=4) MSG_PLEASE_LOAD_PLA					"Please load PLA filament first."
#define(length=20, lines=8) MSG_FILE_CNT						"Some files will not be sorted. Max. No. of files in 1 folder for sorting is 100."
#define(length=20) MSG_FIL_RUNOUT_SETTINGS						"Fil.Runout S "
#define(length=20) MSG_FIL_RUNOUT_ACTIVE_ON						"Fil.Runout S [ON]"
#define(length=20) MSG_FIL_RUNOUT_ACTIVE_OFF					"Fil.Runout S[OFF]"
#define(length=20) MSG_ENDSTOPPULLUP_FIL_RUNOUT_ON              "Fil.RSPullup [ON]"
#define(length=20) MSG_ENDSTOPPULLUP_FIL_RUNOUT_OFF             "Fil.RSPullup[OFF]"
#define(length=20) MSG_FIL_RUNOUT_INVERTING_OFF					"Fil.RS [S to VCC]"
#define(length=20) MSG_FIL_RUNOUT_INVERTING_ON					"Fil.RS [S to GND]"
>>>>>>> MK2
