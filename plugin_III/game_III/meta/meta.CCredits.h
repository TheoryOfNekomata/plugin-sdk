/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCredits::Render)
static int address;
static int global_address;
static const int id = 0x4FADF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FADF0, 0x4FAED0, 0x4FAE60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E6DF,100,0,0x48E480,1, 0x48E79F,110,0,0x48E540,1, 0x48E72F,120,0,0x48E4D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCredits::PrintCreditText)
static int address;
static int global_address;
static const int id = 0x4FE620;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FE620, 0x4FE700, 0x4FE690>;
// total references count: 10en (279), 11en (279), steam (279)
using refs_t = RefList<0x4FAEEC,100,0,0x4FADF0,1, 0x4FAF17,100,0,0x4FADF0,2, 0x4FAF53,100,0,0x4FADF0,3, 0x4FAF7E,100,0,0x4FADF0,4, 0x4FAFBA,100,0,0x4FADF0,5, 0x4FAFE5,100,0,0x4FADF0,6, 0x4FB010,100,0,0x4FADF0,7, 0x4FB05D,100,0,0x4FADF0,8, 0x4FB088,100,0,0x4FADF0,9, 0x4FB0B3,100,0,0x4FADF0,10, 0x4FB0DE,100,0,0x4FADF0,11, 0x4FB109,100,0,0x4FADF0,12, 0x4FB145,100,0,0x4FADF0,13, 0x4FB170,100,0,0x4FADF0,14, 0x4FB19B,100,0,0x4FADF0,15, 0x4FB1C6,100,0,0x4FADF0,16, 0x4FB213,100,0,0x4FADF0,17, 0x4FB23E,100,0,0x4FADF0,18, 0x4FB27A,100,0,0x4FADF0,19, 0x4FB2A5,100,0,0x4FADF0,20, 0x4FB2D0,100,0,0x4FADF0,21, 0x4FB2FB,100,0,0x4FADF0,22, 0x4FB337,100,0,0x4FADF0,23, 0x4FB362,100,0,0x4FADF0,24, 0x4FB39E,100,0,0x4FADF0,25, 0x4FB3C9,100,0,0x4FADF0,26, 0x4FB3F4,100,0,0x4FADF0,27, 0x4FB41F,100,0,0x4FADF0,28, 0x4FB44A,100,0,0x4FADF0,29, 0x4FB475,100,0,0x4FADF0,30, 0x4FB4A0,100,0,0x4FADF0,31, 0x4FB4CB,100,0,0x4FADF0,32, 0x4FB518,100,0,0x4FADF0,33, 0x4FB543,100,0,0x4FADF0,34, 0x4FB56E,100,0,0x4FADF0,35, 0x4FB599,100,0,0x4FADF0,36, 0x4FB5C4,100,0,0x4FADF0,37, 0x4FB5EF,100,0,0x4FADF0,38, 0x4FB61A,100,0,0x4FADF0,39, 0x4FB645,100,0,0x4FADF0,40, 0x4FB692,100,0,0x4FADF0,41, 0x4FB6BD,100,0,0x4FADF0,42, 0x4FB6E8,100,0,0x4FADF0,43, 0x4FB724,100,0,0x4FADF0,44, 0x4FB769,100,0,0x4FADF0,45, 0x4FB7A5,100,0,0x4FADF0,46, 0x4FB7EA,100,0,0x4FADF0,47, 0x4FB837,100,0,0x4FADF0,48, 0x4FB862,100,0,0x4FADF0,49, 0x4FB89E,100,0,0x4FADF0,50, 0x4FB8C9,100,0,0x4FADF0,51, 0x4FB8F4,100,0,0x4FADF0,52, 0x4FB91F,100,0,0x4FADF0,53, 0x4FB95B,100,0,0x4FADF0,54, 0x4FB986,100,0,0x4FADF0,55, 0x4FB9B1,100,0,0x4FADF0,56, 0x4FB9DC,100,0,0x4FADF0,57, 0x4FBA07,100,0,0x4FADF0,58, 0x4FBA32,100,0,0x4FADF0,59, 0x4FBA5D,100,0,0x4FADF0,60, 0x4FBA88,100,0,0x4FADF0,61, 0x4FBAB3,100,0,0x4FADF0,62, 0x4FBADE,100,0,0x4FADF0,63, 0x4FBB09,100,0,0x4FADF0,64, 0x4FBB34,100,0,0x4FADF0,65, 0x4FBB5F,100,0,0x4FADF0,66, 0x4FBBAC,100,0,0x4FADF0,67, 0x4FBBD7,100,0,0x4FADF0,68, 0x4FBC02,100,0,0x4FADF0,69, 0x4FBC4F,100,0,0x4FADF0,70, 0x4FBC7A,100,0,0x4FADF0,71, 0x4FBCE9,100,0,0x4FADF0,72, 0x4FBD36,100,0,0x4FADF0,73, 0x4FBD7B,100,0,0x4FADF0,74, 0x4FBDB7,100,0,0x4FADF0,75, 0x4FBDE2,100,0,0x4FADF0,76, 0x4FBE1E,100,0,0x4FADF0,77, 0x4FBE5A,100,0,0x4FADF0,78, 0x4FBE96,100,0,0x4FADF0,79, 0x4FBEC1,100,0,0x4FADF0,80, 0x4FBEFD,100,0,0x4FADF0,81, 0x4FBF42,100,0,0x4FADF0,82, 0x4FBF7E,100,0,0x4FADF0,83, 0x4FBFBA,100,0,0x4FADF0,84, 0x4FC007,100,0,0x4FADF0,85, 0x4FC043,100,0,0x4FADF0,86, 0x4FC06E,100,0,0x4FADF0,87, 0x4FC099,100,0,0x4FADF0,88, 0x4FC0C4,100,0,0x4FADF0,89, 0x4FC0EF,100,0,0x4FADF0,90, 0x4FC11A,100,0,0x4FADF0,91, 0x4FC145,100,0,0x4FADF0,92, 0x4FC170,100,0,0x4FADF0,93, 0x4FC19B,100,0,0x4FADF0,94, 0x4FC1C6,100,0,0x4FADF0,95, 0x4FC1F1,100,0,0x4FADF0,96, 0x4FC21C,100,0,0x4FADF0,97, 0x4FC247,100,0,0x4FADF0,98, 0x4FC272,100,0,0x4FADF0,99, 0x4FC29D,100,0,0x4FADF0,100, 0x4FC2C8,100,0,0x4FADF0,101, 0x4FC304,100,0,0x4FADF0,102, 0x4FC349,100,0,0x4FADF0,103, 0x4FC385,100,0,0x4FADF0,104, 0x4FC3C1,100,0,0x4FADF0,105, 0x4FC40E,100,0,0x4FADF0,106, 0x4FC44A,100,0,0x4FADF0,107, 0x4FC486,100,0,0x4FADF0,108, 0x4FC4B1,100,0,0x4FADF0,109, 0x4FC4ED,100,0,0x4FADF0,110, 0x4FC518,100,0,0x4FADF0,111, 0x4FC543,100,0,0x4FADF0,112, 0x4FC56E,100,0,0x4FADF0,113, 0x4FC599,100,0,0x4FADF0,114, 0x4FC5C4,100,0,0x4FADF0,115, 0x4FC5EF,100,0,0x4FADF0,116, 0x4FC61A,100,0,0x4FADF0,117, 0x4FC645,100,0,0x4FADF0,118, 0x4FC670,100,0,0x4FADF0,119, 0x4FC69B,100,0,0x4FADF0,120, 0x4FC6E8,100,0,0x4FADF0,121, 0x4FC724,100,0,0x4FADF0,122, 0x4FC74F,100,0,0x4FADF0,123, 0x4FC77A,100,0,0x4FADF0,124, 0x4FC7A5,100,0,0x4FADF0,125, 0x4FC7D0,100,0,0x4FADF0,126, 0x4FC7FB,100,0,0x4FADF0,127, 0x4FC826,100,0,0x4FADF0,128, 0x4FC851,100,0,0x4FADF0,129, 0x4FC88D,100,0,0x4FADF0,130, 0x4FC8C9,100,0,0x4FADF0,131, 0x4FC905,100,0,0x4FADF0,132, 0x4FC94A,100,0,0x4FADF0,133, 0x4FC986,100,0,0x4FADF0,134, 0x4FC9B1,100,0,0x4FADF0,135, 0x4FC9F6,100,0,0x4FADF0,136, 0x4FCA3B,100,0,0x4FADF0,137, 0x4FCA80,100,0,0x4FADF0,138, 0x4FCAC5,100,0,0x4FADF0,139, 0x4FCB0A,100,0,0x4FADF0,140, 0x4FCB4F,100,0,0x4FADF0,141, 0x4FCB94,100,0,0x4FADF0,142, 0x4FCBD9,100,0,0x4FADF0,143, 0x4FCC1E,100,0,0x4FADF0,144, 0x4FCC63,100,0,0x4FADF0,145, 0x4FCCA8,100,0,0x4FADF0,146, 0x4FCCED,100,0,0x4FADF0,147, 0x4FCD32,100,0,0x4FADF0,148, 0x4FCD77,100,0,0x4FADF0,149, 0x4FCDBC,100,0,0x4FADF0,150, 0x4FCE01,100,0,0x4FADF0,151, 0x4FCE46,100,0,0x4FADF0,152, 0x4FCE8B,100,0,0x4FADF0,153, 0x4FCED0,100,0,0x4FADF0,154, 0x4FCF15,100,0,0x4FADF0,155, 0x4FCF5A,100,0,0x4FADF0,156, 0x4FCF9F,100,0,0x4FADF0,157, 0x4FCFDB,100,0,0x4FADF0,158, 0x4FD006,100,0,0x4FADF0,159, 0x4FD031,100,0,0x4FADF0,160, 0x4FD06D,100,0,0x4FADF0,161, 0x4FD098,100,0,0x4FADF0,162, 0x4FD0D4,100,0,0x4FADF0,163, 0x4FD0FF,100,0,0x4FADF0,164, 0x4FD12A,100,0,0x4FADF0,165, 0x4FD166,100,0,0x4FADF0,166, 0x4FD1A2,100,0,0x4FADF0,167, 0x4FD1CD,100,0,0x4FADF0,168, 0x4FD1F8,100,0,0x4FADF0,169, 0x4FD223,100,0,0x4FADF0,170, 0x4FD24E,100,0,0x4FADF0,171, 0x4FD279,100,0,0x4FADF0,172, 0x4FD2B5,100,0,0x4FADF0,173, 0x4FD2E0,100,0,0x4FADF0,174, 0x4FD31C,100,0,0x4FADF0,175, 0x4FD358,100,0,0x4FADF0,176, 0x4FD3A5,100,0,0x4FADF0,177, 0x4FD3D0,100,0,0x4FADF0,178, 0x4FD3FB,100,0,0x4FADF0,179, 0x4FD426,100,0,0x4FADF0,180, 0x4FD451,100,0,0x4FADF0,181, 0x4FD47C,100,0,0x4FADF0,182, 0x4FD4A7,100,0,0x4FADF0,183, 0x4FD4D2,100,0,0x4FADF0,184, 0x4FD4FD,100,0,0x4FADF0,185, 0x4FD528,100,0,0x4FADF0,186, 0x4FD553,100,0,0x4FADF0,187, 0x4FD57E,100,0,0x4FADF0,188, 0x4FD5A9,100,0,0x4FADF0,189, 0x4FD5D4,100,0,0x4FADF0,190, 0x4FD5FF,100,0,0x4FADF0,191, 0x4FD62A,100,0,0x4FADF0,192, 0x4FD655,100,0,0x4FADF0,193, 0x4FD680,100,0,0x4FADF0,194, 0x4FD6AB,100,0,0x4FADF0,195, 0x4FD6D6,100,0,0x4FADF0,196, 0x4FD701,100,0,0x4FADF0,197, 0x4FD72C,100,0,0x4FADF0,198, 0x4FD757,100,0,0x4FADF0,199, 0x4FD782,100,0,0x4FADF0,200, 0x4FD7AD,100,0,0x4FADF0,201, 0x4FD7D8,100,0,0x4FADF0,202, 0x4FD803,100,0,0x4FADF0,203, 0x4FD82E,100,0,0x4FADF0,204, 0x4FD859,100,0,0x4FADF0,205, 0x4FD884,100,0,0x4FADF0,206, 0x4FD8AF,100,0,0x4FADF0,207, 0x4FD8DA,100,0,0x4FADF0,208, 0x4FD905,100,0,0x4FADF0,209, 0x4FD930,100,0,0x4FADF0,210, 0x4FD95B,100,0,0x4FADF0,211, 0x4FD986,100,0,0x4FADF0,212, 0x4FD9B1,100,0,0x4FADF0,213, 0x4FD9DC,100,0,0x4FADF0,214, 0x4FDA07,100,0,0x4FADF0,215, 0x4FDA32,100,0,0x4FADF0,216, 0x4FDA5D,100,0,0x4FADF0,217, 0x4FDA88,100,0,0x4FADF0,218, 0x4FDAB3,100,0,0x4FADF0,219, 0x4FDADE,100,0,0x4FADF0,220, 0x4FDB09,100,0,0x4FADF0,221, 0x4FDB34,100,0,0x4FADF0,222, 0x4FDB5F,100,0,0x4FADF0,223, 0x4FDB8A,100,0,0x4FADF0,224, 0x4FDBB5,100,0,0x4FADF0,225, 0x4FDBE0,100,0,0x4FADF0,226, 0x4FDC0B,100,0,0x4FADF0,227, 0x4FDC36,100,0,0x4FADF0,228, 0x4FDC61,100,0,0x4FADF0,229, 0x4FDC8C,100,0,0x4FADF0,230, 0x4FDCB7,100,0,0x4FADF0,231, 0x4FDCE2,100,0,0x4FADF0,232, 0x4FDD0D,100,0,0x4FADF0,233, 0x4FDD38,100,0,0x4FADF0,234, 0x4FDD63,100,0,0x4FADF0,235, 0x4FDD8E,100,0,0x4FADF0,236, 0x4FDDB9,100,0,0x4FADF0,237, 0x4FDDE4,100,0,0x4FADF0,238, 0x4FDE0F,100,0,0x4FADF0,239, 0x4FDE3A,100,0,0x4FADF0,240, 0x4FDE65,100,0,0x4FADF0,241, 0x4FDE90,100,0,0x4FADF0,242, 0x4FDEBB,100,0,0x4FADF0,243, 0x4FDEE6,100,0,0x4FADF0,244, 0x4FDF11,100,0,0x4FADF0,245, 0x4FDF3C,100,0,0x4FADF0,246, 0x4FDF67,100,0,0x4FADF0,247, 0x4FDF92,100,0,0x4FADF0,248, 0x4FDFBD,100,0,0x4FADF0,249, 0x4FDFF9,100,0,0x4FADF0,250, 0x4FE046,100,0,0x4FADF0,251, 0x4FE082,100,0,0x4FADF0,252, 0x4FE0AD,100,0,0x4FADF0,253, 0x4FE0E9,100,0,0x4FADF0,254, 0x4FE125,100,0,0x4FADF0,255, 0x4FE161,100,0,0x4FADF0,256, 0x4FE19D,100,0,0x4FADF0,257, 0x4FE1D9,100,0,0x4FADF0,258, 0x4FE204,100,0,0x4FADF0,259, 0x4FE22F,100,0,0x4FADF0,260, 0x4FE25A,100,0,0x4FADF0,261, 0x4FE296,100,0,0x4FADF0,262, 0x4FE2D2,100,0,0x4FADF0,263, 0x4FE2FD,100,0,0x4FADF0,264, 0x4FE339,100,0,0x4FADF0,265, 0x4FE364,100,0,0x4FADF0,266, 0x4FE38F,100,0,0x4FADF0,267, 0x4FE3BA,100,0,0x4FADF0,268, 0x4FE3E5,100,0,0x4FADF0,269, 0x4FE410,100,0,0x4FADF0,270, 0x4FE43B,100,0,0x4FADF0,271, 0x4FE466,100,0,0x4FADF0,272, 0x4FE491,100,0,0x4FADF0,273, 0x4FE4BC,100,0,0x4FADF0,274, 0x4FE4E7,100,0,0x4FADF0,275, 0x4FE512,100,0,0x4FADF0,276, 0x4FE53D,100,0,0x4FADF0,277, 0x4FE568,100,0,0x4FADF0,278, 0x4FE593,100,0,0x4FADF0,279, 0x4FAFCC,110,0,0x4FAED0,1, 0x4FAFF7,110,0,0x4FAED0,2, 0x4FB033,110,0,0x4FAED0,3, 0x4FB05E,110,0,0x4FAED0,4, 0x4FB09A,110,0,0x4FAED0,5, 0x4FB0C5,110,0,0x4FAED0,6, 0x4FB0F0,110,0,0x4FAED0,7, 0x4FB13D,110,0,0x4FAED0,8, 0x4FB168,110,0,0x4FAED0,9, 0x4FB193,110,0,0x4FAED0,10, 0x4FB1BE,110,0,0x4FAED0,11, 0x4FB1E9,110,0,0x4FAED0,12, 0x4FB225,110,0,0x4FAED0,13, 0x4FB250,110,0,0x4FAED0,14, 0x4FB27B,110,0,0x4FAED0,15, 0x4FB2A6,110,0,0x4FAED0,16, 0x4FB2F3,110,0,0x4FAED0,17, 0x4FB31E,110,0,0x4FAED0,18, 0x4FB35A,110,0,0x4FAED0,19, 0x4FB385,110,0,0x4FAED0,20, 0x4FB3B0,110,0,0x4FAED0,21, 0x4FB3DB,110,0,0x4FAED0,22, 0x4FB417,110,0,0x4FAED0,23, 0x4FB442,110,0,0x4FAED0,24, 0x4FB47E,110,0,0x4FAED0,25, 0x4FB4A9,110,0,0x4FAED0,26, 0x4FB4D4,110,0,0x4FAED0,27, 0x4FB4FF,110,0,0x4FAED0,28, 0x4FB52A,110,0,0x4FAED0,29, 0x4FB555,110,0,0x4FAED0,30, 0x4FB580,110,0,0x4FAED0,31, 0x4FB5AB,110,0,0x4FAED0,32, 0x4FB5F8,110,0,0x4FAED0,33, 0x4FB623,110,0,0x4FAED0,34, 0x4FB64E,110,0,0x4FAED0,35, 0x4FB679,110,0,0x4FAED0,36, 0x4FB6A4,110,0,0x4FAED0,37, 0x4FB6CF,110,0,0x4FAED0,38, 0x4FB6FA,110,0,0x4FAED0,39, 0x4FB725,110,0,0x4FAED0,40, 0x4FB772,110,0,0x4FAED0,41, 0x4FB79D,110,0,0x4FAED0,42, 0x4FB7C8,110,0,0x4FAED0,43, 0x4FB804,110,0,0x4FAED0,44, 0x4FB849,110,0,0x4FAED0,45, 0x4FB885,110,0,0x4FAED0,46, 0x4FB8CA,110,0,0x4FAED0,47, 0x4FB917,110,0,0x4FAED0,48, 0x4FB942,110,0,0x4FAED0,49, 0x4FB97E,110,0,0x4FAED0,50, 0x4FB9A9,110,0,0x4FAED0,51, 0x4FB9D4,110,0,0x4FAED0,52, 0x4FB9FF,110,0,0x4FAED0,53, 0x4FBA3B,110,0,0x4FAED0,54, 0x4FBA66,110,0,0x4FAED0,55, 0x4FBA91,110,0,0x4FAED0,56, 0x4FBABC,110,0,0x4FAED0,57, 0x4FBAE7,110,0,0x4FAED0,58, 0x4FBB12,110,0,0x4FAED0,59, 0x4FBB3D,110,0,0x4FAED0,60, 0x4FBB68,110,0,0x4FAED0,61, 0x4FBB93,110,0,0x4FAED0,62, 0x4FBBBE,110,0,0x4FAED0,63, 0x4FBBE9,110,0,0x4FAED0,64, 0x4FBC14,110,0,0x4FAED0,65, 0x4FBC3F,110,0,0x4FAED0,66, 0x4FBC8C,110,0,0x4FAED0,67, 0x4FBCB7,110,0,0x4FAED0,68, 0x4FBCE2,110,0,0x4FAED0,69, 0x4FBD2F,110,0,0x4FAED0,70, 0x4FBD5A,110,0,0x4FAED0,71, 0x4FBDC9,110,0,0x4FAED0,72, 0x4FBE16,110,0,0x4FAED0,73, 0x4FBE5B,110,0,0x4FAED0,74, 0x4FBE97,110,0,0x4FAED0,75, 0x4FBEC2,110,0,0x4FAED0,76, 0x4FBEFE,110,0,0x4FAED0,77, 0x4FBF3A,110,0,0x4FAED0,78, 0x4FBF76,110,0,0x4FAED0,79, 0x4FBFA1,110,0,0x4FAED0,80, 0x4FBFDD,110,0,0x4FAED0,81, 0x4FC022,110,0,0x4FAED0,82, 0x4FC05E,110,0,0x4FAED0,83, 0x4FC09A,110,0,0x4FAED0,84, 0x4FC0E7,110,0,0x4FAED0,85, 0x4FC123,110,0,0x4FAED0,86, 0x4FC14E,110,0,0x4FAED0,87, 0x4FC179,110,0,0x4FAED0,88, 0x4FC1A4,110,0,0x4FAED0,89, 0x4FC1CF,110,0,0x4FAED0,90, 0x4FC1FA,110,0,0x4FAED0,91, 0x4FC225,110,0,0x4FAED0,92, 0x4FC250,110,0,0x4FAED0,93, 0x4FC27B,110,0,0x4FAED0,94, 0x4FC2A6,110,0,0x4FAED0,95, 0x4FC2D1,110,0,0x4FAED0,96, 0x4FC2FC,110,0,0x4FAED0,97, 0x4FC327,110,0,0x4FAED0,98, 0x4FC352,110,0,0x4FAED0,99, 0x4FC37D,110,0,0x4FAED0,100, 0x4FC3A8,110,0,0x4FAED0,101, 0x4FC3E4,110,0,0x4FAED0,102, 0x4FC429,110,0,0x4FAED0,103, 0x4FC465,110,0,0x4FAED0,104, 0x4FC4A1,110,0,0x4FAED0,105, 0x4FC4EE,110,0,0x4FAED0,106, 0x4FC52A,110,0,0x4FAED0,107, 0x4FC566,110,0,0x4FAED0,108, 0x4FC591,110,0,0x4FAED0,109, 0x4FC5CD,110,0,0x4FAED0,110, 0x4FC5F8,110,0,0x4FAED0,111, 0x4FC623,110,0,0x4FAED0,112, 0x4FC64E,110,0,0x4FAED0,113, 0x4FC679,110,0,0x4FAED0,114, 0x4FC6A4,110,0,0x4FAED0,115, 0x4FC6CF,110,0,0x4FAED0,116, 0x4FC6FA,110,0,0x4FAED0,117, 0x4FC725,110,0,0x4FAED0,118, 0x4FC750,110,0,0x4FAED0,119, 0x4FC77B,110,0,0x4FAED0,120, 0x4FC7C8,110,0,0x4FAED0,121, 0x4FC804,110,0,0x4FAED0,122, 0x4FC82F,110,0,0x4FAED0,123, 0x4FC85A,110,0,0x4FAED0,124, 0x4FC885,110,0,0x4FAED0,125, 0x4FC8B0,110,0,0x4FAED0,126, 0x4FC8DB,110,0,0x4FAED0,127, 0x4FC906,110,0,0x4FAED0,128, 0x4FC931,110,0,0x4FAED0,129, 0x4FC96D,110,0,0x4FAED0,130, 0x4FC9A9,110,0,0x4FAED0,131, 0x4FC9E5,110,0,0x4FAED0,132, 0x4FCA2A,110,0,0x4FAED0,133, 0x4FCA66,110,0,0x4FAED0,134, 0x4FCA91,110,0,0x4FAED0,135, 0x4FCAD6,110,0,0x4FAED0,136, 0x4FCB1B,110,0,0x4FAED0,137, 0x4FCB60,110,0,0x4FAED0,138, 0x4FCBA5,110,0,0x4FAED0,139, 0x4FCBEA,110,0,0x4FAED0,140, 0x4FCC2F,110,0,0x4FAED0,141, 0x4FCC74,110,0,0x4FAED0,142, 0x4FCCB9,110,0,0x4FAED0,143, 0x4FCCFE,110,0,0x4FAED0,144, 0x4FCD43,110,0,0x4FAED0,145, 0x4FCD88,110,0,0x4FAED0,146, 0x4FCDCD,110,0,0x4FAED0,147, 0x4FCE12,110,0,0x4FAED0,148, 0x4FCE57,110,0,0x4FAED0,149, 0x4FCE9C,110,0,0x4FAED0,150, 0x4FCEE1,110,0,0x4FAED0,151, 0x4FCF26,110,0,0x4FAED0,152, 0x4FCF6B,110,0,0x4FAED0,153, 0x4FCFB0,110,0,0x4FAED0,154, 0x4FCFF5,110,0,0x4FAED0,155, 0x4FD03A,110,0,0x4FAED0,156, 0x4FD07F,110,0,0x4FAED0,157, 0x4FD0BB,110,0,0x4FAED0,158, 0x4FD0E6,110,0,0x4FAED0,159, 0x4FD111,110,0,0x4FAED0,160, 0x4FD14D,110,0,0x4FAED0,161, 0x4FD178,110,0,0x4FAED0,162, 0x4FD1B4,110,0,0x4FAED0,163, 0x4FD1DF,110,0,0x4FAED0,164, 0x4FD20A,110,0,0x4FAED0,165, 0x4FD246,110,0,0x4FAED0,166, 0x4FD282,110,0,0x4FAED0,167, 0x4FD2AD,110,0,0x4FAED0,168, 0x4FD2D8,110,0,0x4FAED0,169, 0x4FD303,110,0,0x4FAED0,170, 0x4FD32E,110,0,0x4FAED0,171, 0x4FD359,110,0,0x4FAED0,172, 0x4FD395,110,0,0x4FAED0,173, 0x4FD3C0,110,0,0x4FAED0,174, 0x4FD3FC,110,0,0x4FAED0,175, 0x4FD438,110,0,0x4FAED0,176, 0x4FD485,110,0,0x4FAED0,177, 0x4FD4B0,110,0,0x4FAED0,178, 0x4FD4DB,110,0,0x4FAED0,179, 0x4FD506,110,0,0x4FAED0,180, 0x4FD531,110,0,0x4FAED0,181, 0x4FD55C,110,0,0x4FAED0,182, 0x4FD587,110,0,0x4FAED0,183, 0x4FD5B2,110,0,0x4FAED0,184, 0x4FD5DD,110,0,0x4FAED0,185, 0x4FD608,110,0,0x4FAED0,186, 0x4FD633,110,0,0x4FAED0,187, 0x4FD65E,110,0,0x4FAED0,188, 0x4FD689,110,0,0x4FAED0,189, 0x4FD6B4,110,0,0x4FAED0,190, 0x4FD6DF,110,0,0x4FAED0,191, 0x4FD70A,110,0,0x4FAED0,192, 0x4FD735,110,0,0x4FAED0,193, 0x4FD760,110,0,0x4FAED0,194, 0x4FD78B,110,0,0x4FAED0,195, 0x4FD7B6,110,0,0x4FAED0,196, 0x4FD7E1,110,0,0x4FAED0,197, 0x4FD80C,110,0,0x4FAED0,198, 0x4FD837,110,0,0x4FAED0,199, 0x4FD862,110,0,0x4FAED0,200, 0x4FD88D,110,0,0x4FAED0,201, 0x4FD8B8,110,0,0x4FAED0,202, 0x4FD8E3,110,0,0x4FAED0,203, 0x4FD90E,110,0,0x4FAED0,204, 0x4FD939,110,0,0x4FAED0,205, 0x4FD964,110,0,0x4FAED0,206, 0x4FD98F,110,0,0x4FAED0,207, 0x4FD9BA,110,0,0x4FAED0,208, 0x4FD9E5,110,0,0x4FAED0,209, 0x4FDA10,110,0,0x4FAED0,210, 0x4FDA3B,110,0,0x4FAED0,211, 0x4FDA66,110,0,0x4FAED0,212, 0x4FDA91,110,0,0x4FAED0,213, 0x4FDABC,110,0,0x4FAED0,214, 0x4FDAE7,110,0,0x4FAED0,215, 0x4FDB12,110,0,0x4FAED0,216, 0x4FDB3D,110,0,0x4FAED0,217, 0x4FDB68,110,0,0x4FAED0,218, 0x4FDB93,110,0,0x4FAED0,219, 0x4FDBBE,110,0,0x4FAED0,220, 0x4FDBE9,110,0,0x4FAED0,221, 0x4FDC14,110,0,0x4FAED0,222, 0x4FDC3F,110,0,0x4FAED0,223, 0x4FDC6A,110,0,0x4FAED0,224, 0x4FDC95,110,0,0x4FAED0,225, 0x4FDCC0,110,0,0x4FAED0,226, 0x4FDCEB,110,0,0x4FAED0,227, 0x4FDD16,110,0,0x4FAED0,228, 0x4FDD41,110,0,0x4FAED0,229, 0x4FDD6C,110,0,0x4FAED0,230, 0x4FDD97,110,0,0x4FAED0,231, 0x4FDDC2,110,0,0x4FAED0,232, 0x4FDDED,110,0,0x4FAED0,233, 0x4FDE18,110,0,0x4FAED0,234, 0x4FDE43,110,0,0x4FAED0,235, 0x4FDE6E,110,0,0x4FAED0,236, 0x4FDE99,110,0,0x4FAED0,237, 0x4FDEC4,110,0,0x4FAED0,238, 0x4FDEEF,110,0,0x4FAED0,239, 0x4FDF1A,110,0,0x4FAED0,240, 0x4FDF45,110,0,0x4FAED0,241, 0x4FDF70,110,0,0x4FAED0,242, 0x4FDF9B,110,0,0x4FAED0,243, 0x4FDFC6,110,0,0x4FAED0,244, 0x4FDFF1,110,0,0x4FAED0,245, 0x4FE01C,110,0,0x4FAED0,246, 0x4FE047,110,0,0x4FAED0,247, 0x4FE072,110,0,0x4FAED0,248, 0x4FE09D,110,0,0x4FAED0,249, 0x4FE0D9,110,0,0x4FAED0,250, 0x4FE126,110,0,0x4FAED0,251, 0x4FE162,110,0,0x4FAED0,252, 0x4FE18D,110,0,0x4FAED0,253, 0x4FE1C9,110,0,0x4FAED0,254, 0x4FE205,110,0,0x4FAED0,255, 0x4FE241,110,0,0x4FAED0,256, 0x4FE27D,110,0,0x4FAED0,257, 0x4FE2B9,110,0,0x4FAED0,258, 0x4FE2E4,110,0,0x4FAED0,259, 0x4FE30F,110,0,0x4FAED0,260, 0x4FE33A,110,0,0x4FAED0,261, 0x4FE376,110,0,0x4FAED0,262, 0x4FE3B2,110,0,0x4FAED0,263, 0x4FE3DD,110,0,0x4FAED0,264, 0x4FE419,110,0,0x4FAED0,265, 0x4FE444,110,0,0x4FAED0,266, 0x4FE46F,110,0,0x4FAED0,267, 0x4FE49A,110,0,0x4FAED0,268, 0x4FE4C5,110,0,0x4FAED0,269, 0x4FE4F0,110,0,0x4FAED0,270, 0x4FE51B,110,0,0x4FAED0,271, 0x4FE546,110,0,0x4FAED0,272, 0x4FE571,110,0,0x4FAED0,273, 0x4FE59C,110,0,0x4FAED0,274, 0x4FE5C7,110,0,0x4FAED0,275, 0x4FE5F2,110,0,0x4FAED0,276, 0x4FE61D,110,0,0x4FAED0,277, 0x4FE648,110,0,0x4FAED0,278, 0x4FE673,110,0,0x4FAED0,279, 0x4FAF5C,120,0,0x4FAE60,1, 0x4FAF87,120,0,0x4FAE60,2, 0x4FAFC3,120,0,0x4FAE60,3, 0x4FAFEE,120,0,0x4FAE60,4, 0x4FB02A,120,0,0x4FAE60,5, 0x4FB055,120,0,0x4FAE60,6, 0x4FB080,120,0,0x4FAE60,7, 0x4FB0CD,120,0,0x4FAE60,8, 0x4FB0F8,120,0,0x4FAE60,9, 0x4FB123,120,0,0x4FAE60,10, 0x4FB14E,120,0,0x4FAE60,11, 0x4FB179,120,0,0x4FAE60,12, 0x4FB1B5,120,0,0x4FAE60,13, 0x4FB1E0,120,0,0x4FAE60,14, 0x4FB20B,120,0,0x4FAE60,15, 0x4FB236,120,0,0x4FAE60,16, 0x4FB283,120,0,0x4FAE60,17, 0x4FB2AE,120,0,0x4FAE60,18, 0x4FB2EA,120,0,0x4FAE60,19, 0x4FB315,120,0,0x4FAE60,20, 0x4FB340,120,0,0x4FAE60,21, 0x4FB36B,120,0,0x4FAE60,22, 0x4FB3A7,120,0,0x4FAE60,23, 0x4FB3D2,120,0,0x4FAE60,24, 0x4FB40E,120,0,0x4FAE60,25, 0x4FB439,120,0,0x4FAE60,26, 0x4FB464,120,0,0x4FAE60,27, 0x4FB48F,120,0,0x4FAE60,28, 0x4FB4BA,120,0,0x4FAE60,29, 0x4FB4E5,120,0,0x4FAE60,30, 0x4FB510,120,0,0x4FAE60,31, 0x4FB53B,120,0,0x4FAE60,32, 0x4FB588,120,0,0x4FAE60,33, 0x4FB5B3,120,0,0x4FAE60,34, 0x4FB5DE,120,0,0x4FAE60,35, 0x4FB609,120,0,0x4FAE60,36, 0x4FB634,120,0,0x4FAE60,37, 0x4FB65F,120,0,0x4FAE60,38, 0x4FB68A,120,0,0x4FAE60,39, 0x4FB6B5,120,0,0x4FAE60,40, 0x4FB702,120,0,0x4FAE60,41, 0x4FB72D,120,0,0x4FAE60,42, 0x4FB758,120,0,0x4FAE60,43, 0x4FB794,120,0,0x4FAE60,44, 0x4FB7D9,120,0,0x4FAE60,45, 0x4FB815,120,0,0x4FAE60,46, 0x4FB85A,120,0,0x4FAE60,47, 0x4FB8A7,120,0,0x4FAE60,48, 0x4FB8D2,120,0,0x4FAE60,49, 0x4FB90E,120,0,0x4FAE60,50, 0x4FB939,120,0,0x4FAE60,51, 0x4FB964,120,0,0x4FAE60,52, 0x4FB98F,120,0,0x4FAE60,53, 0x4FB9CB,120,0,0x4FAE60,54, 0x4FB9F6,120,0,0x4FAE60,55, 0x4FBA21,120,0,0x4FAE60,56, 0x4FBA4C,120,0,0x4FAE60,57, 0x4FBA77,120,0,0x4FAE60,58, 0x4FBAA2,120,0,0x4FAE60,59, 0x4FBACD,120,0,0x4FAE60,60, 0x4FBAF8,120,0,0x4FAE60,61, 0x4FBB23,120,0,0x4FAE60,62, 0x4FBB4E,120,0,0x4FAE60,63, 0x4FBB79,120,0,0x4FAE60,64, 0x4FBBA4,120,0,0x4FAE60,65, 0x4FBBCF,120,0,0x4FAE60,66, 0x4FBC1C,120,0,0x4FAE60,67, 0x4FBC47,120,0,0x4FAE60,68, 0x4FBC72,120,0,0x4FAE60,69, 0x4FBCBF,120,0,0x4FAE60,70, 0x4FBCEA,120,0,0x4FAE60,71, 0x4FBD59,120,0,0x4FAE60,72, 0x4FBDA6,120,0,0x4FAE60,73, 0x4FBDEB,120,0,0x4FAE60,74, 0x4FBE27,120,0,0x4FAE60,75, 0x4FBE52,120,0,0x4FAE60,76, 0x4FBE8E,120,0,0x4FAE60,77, 0x4FBECA,120,0,0x4FAE60,78, 0x4FBF06,120,0,0x4FAE60,79, 0x4FBF31,120,0,0x4FAE60,80, 0x4FBF6D,120,0,0x4FAE60,81, 0x4FBFB2,120,0,0x4FAE60,82, 0x4FBFEE,120,0,0x4FAE60,83, 0x4FC02A,120,0,0x4FAE60,84, 0x4FC077,120,0,0x4FAE60,85, 0x4FC0B3,120,0,0x4FAE60,86, 0x4FC0DE,120,0,0x4FAE60,87, 0x4FC109,120,0,0x4FAE60,88, 0x4FC134,120,0,0x4FAE60,89, 0x4FC15F,120,0,0x4FAE60,90, 0x4FC18A,120,0,0x4FAE60,91, 0x4FC1B5,120,0,0x4FAE60,92, 0x4FC1E0,120,0,0x4FAE60,93, 0x4FC20B,120,0,0x4FAE60,94, 0x4FC236,120,0,0x4FAE60,95, 0x4FC261,120,0,0x4FAE60,96, 0x4FC28C,120,0,0x4FAE60,97, 0x4FC2B7,120,0,0x4FAE60,98, 0x4FC2E2,120,0,0x4FAE60,99, 0x4FC30D,120,0,0x4FAE60,100, 0x4FC338,120,0,0x4FAE60,101, 0x4FC374,120,0,0x4FAE60,102, 0x4FC3B9,120,0,0x4FAE60,103, 0x4FC3F5,120,0,0x4FAE60,104, 0x4FC431,120,0,0x4FAE60,105, 0x4FC47E,120,0,0x4FAE60,106, 0x4FC4BA,120,0,0x4FAE60,107, 0x4FC4F6,120,0,0x4FAE60,108, 0x4FC521,120,0,0x4FAE60,109, 0x4FC55D,120,0,0x4FAE60,110, 0x4FC588,120,0,0x4FAE60,111, 0x4FC5B3,120,0,0x4FAE60,112, 0x4FC5DE,120,0,0x4FAE60,113, 0x4FC609,120,0,0x4FAE60,114, 0x4FC634,120,0,0x4FAE60,115, 0x4FC65F,120,0,0x4FAE60,116, 0x4FC68A,120,0,0x4FAE60,117, 0x4FC6B5,120,0,0x4FAE60,118, 0x4FC6E0,120,0,0x4FAE60,119, 0x4FC70B,120,0,0x4FAE60,120, 0x4FC758,120,0,0x4FAE60,121, 0x4FC794,120,0,0x4FAE60,122, 0x4FC7BF,120,0,0x4FAE60,123, 0x4FC7EA,120,0,0x4FAE60,124, 0x4FC815,120,0,0x4FAE60,125, 0x4FC840,120,0,0x4FAE60,126, 0x4FC86B,120,0,0x4FAE60,127, 0x4FC896,120,0,0x4FAE60,128, 0x4FC8C1,120,0,0x4FAE60,129, 0x4FC8FD,120,0,0x4FAE60,130, 0x4FC939,120,0,0x4FAE60,131, 0x4FC975,120,0,0x4FAE60,132, 0x4FC9BA,120,0,0x4FAE60,133, 0x4FC9F6,120,0,0x4FAE60,134, 0x4FCA21,120,0,0x4FAE60,135, 0x4FCA66,120,0,0x4FAE60,136, 0x4FCAAB,120,0,0x4FAE60,137, 0x4FCAF0,120,0,0x4FAE60,138, 0x4FCB35,120,0,0x4FAE60,139, 0x4FCB7A,120,0,0x4FAE60,140, 0x4FCBBF,120,0,0x4FAE60,141, 0x4FCC04,120,0,0x4FAE60,142, 0x4FCC49,120,0,0x4FAE60,143, 0x4FCC8E,120,0,0x4FAE60,144, 0x4FCCD3,120,0,0x4FAE60,145, 0x4FCD18,120,0,0x4FAE60,146, 0x4FCD5D,120,0,0x4FAE60,147, 0x4FCDA2,120,0,0x4FAE60,148, 0x4FCDE7,120,0,0x4FAE60,149, 0x4FCE2C,120,0,0x4FAE60,150, 0x4FCE71,120,0,0x4FAE60,151, 0x4FCEB6,120,0,0x4FAE60,152, 0x4FCEFB,120,0,0x4FAE60,153, 0x4FCF40,120,0,0x4FAE60,154, 0x4FCF85,120,0,0x4FAE60,155, 0x4FCFCA,120,0,0x4FAE60,156, 0x4FD00F,120,0,0x4FAE60,157, 0x4FD04B,120,0,0x4FAE60,158, 0x4FD076,120,0,0x4FAE60,159, 0x4FD0A1,120,0,0x4FAE60,160, 0x4FD0DD,120,0,0x4FAE60,161, 0x4FD108,120,0,0x4FAE60,162, 0x4FD144,120,0,0x4FAE60,163, 0x4FD16F,120,0,0x4FAE60,164, 0x4FD19A,120,0,0x4FAE60,165, 0x4FD1D6,120,0,0x4FAE60,166, 0x4FD212,120,0,0x4FAE60,167, 0x4FD23D,120,0,0x4FAE60,168, 0x4FD268,120,0,0x4FAE60,169, 0x4FD293,120,0,0x4FAE60,170, 0x4FD2BE,120,0,0x4FAE60,171, 0x4FD2E9,120,0,0x4FAE60,172, 0x4FD325,120,0,0x4FAE60,173, 0x4FD350,120,0,0x4FAE60,174, 0x4FD38C,120,0,0x4FAE60,175, 0x4FD3C8,120,0,0x4FAE60,176, 0x4FD415,120,0,0x4FAE60,177, 0x4FD440,120,0,0x4FAE60,178, 0x4FD46B,120,0,0x4FAE60,179, 0x4FD496,120,0,0x4FAE60,180, 0x4FD4C1,120,0,0x4FAE60,181, 0x4FD4EC,120,0,0x4FAE60,182, 0x4FD517,120,0,0x4FAE60,183, 0x4FD542,120,0,0x4FAE60,184, 0x4FD56D,120,0,0x4FAE60,185, 0x4FD598,120,0,0x4FAE60,186, 0x4FD5C3,120,0,0x4FAE60,187, 0x4FD5EE,120,0,0x4FAE60,188, 0x4FD619,120,0,0x4FAE60,189, 0x4FD644,120,0,0x4FAE60,190, 0x4FD66F,120,0,0x4FAE60,191, 0x4FD69A,120,0,0x4FAE60,192, 0x4FD6C5,120,0,0x4FAE60,193, 0x4FD6F0,120,0,0x4FAE60,194, 0x4FD71B,120,0,0x4FAE60,195, 0x4FD746,120,0,0x4FAE60,196, 0x4FD771,120,0,0x4FAE60,197, 0x4FD79C,120,0,0x4FAE60,198, 0x4FD7C7,120,0,0x4FAE60,199, 0x4FD7F2,120,0,0x4FAE60,200, 0x4FD81D,120,0,0x4FAE60,201, 0x4FD848,120,0,0x4FAE60,202, 0x4FD873,120,0,0x4FAE60,203, 0x4FD89E,120,0,0x4FAE60,204, 0x4FD8C9,120,0,0x4FAE60,205, 0x4FD8F4,120,0,0x4FAE60,206, 0x4FD91F,120,0,0x4FAE60,207, 0x4FD94A,120,0,0x4FAE60,208, 0x4FD975,120,0,0x4FAE60,209, 0x4FD9A0,120,0,0x4FAE60,210, 0x4FD9CB,120,0,0x4FAE60,211, 0x4FD9F6,120,0,0x4FAE60,212, 0x4FDA21,120,0,0x4FAE60,213, 0x4FDA4C,120,0,0x4FAE60,214, 0x4FDA77,120,0,0x4FAE60,215, 0x4FDAA2,120,0,0x4FAE60,216, 0x4FDACD,120,0,0x4FAE60,217, 0x4FDAF8,120,0,0x4FAE60,218, 0x4FDB23,120,0,0x4FAE60,219, 0x4FDB4E,120,0,0x4FAE60,220, 0x4FDB79,120,0,0x4FAE60,221, 0x4FDBA4,120,0,0x4FAE60,222, 0x4FDBCF,120,0,0x4FAE60,223, 0x4FDBFA,120,0,0x4FAE60,224, 0x4FDC25,120,0,0x4FAE60,225, 0x4FDC50,120,0,0x4FAE60,226, 0x4FDC7B,120,0,0x4FAE60,227, 0x4FDCA6,120,0,0x4FAE60,228, 0x4FDCD1,120,0,0x4FAE60,229, 0x4FDCFC,120,0,0x4FAE60,230, 0x4FDD27,120,0,0x4FAE60,231, 0x4FDD52,120,0,0x4FAE60,232, 0x4FDD7D,120,0,0x4FAE60,233, 0x4FDDA8,120,0,0x4FAE60,234, 0x4FDDD3,120,0,0x4FAE60,235, 0x4FDDFE,120,0,0x4FAE60,236, 0x4FDE29,120,0,0x4FAE60,237, 0x4FDE54,120,0,0x4FAE60,238, 0x4FDE7F,120,0,0x4FAE60,239, 0x4FDEAA,120,0,0x4FAE60,240, 0x4FDED5,120,0,0x4FAE60,241, 0x4FDF00,120,0,0x4FAE60,242, 0x4FDF2B,120,0,0x4FAE60,243, 0x4FDF56,120,0,0x4FAE60,244, 0x4FDF81,120,0,0x4FAE60,245, 0x4FDFAC,120,0,0x4FAE60,246, 0x4FDFD7,120,0,0x4FAE60,247, 0x4FE002,120,0,0x4FAE60,248, 0x4FE02D,120,0,0x4FAE60,249, 0x4FE069,120,0,0x4FAE60,250, 0x4FE0B6,120,0,0x4FAE60,251, 0x4FE0F2,120,0,0x4FAE60,252, 0x4FE11D,120,0,0x4FAE60,253, 0x4FE159,120,0,0x4FAE60,254, 0x4FE195,120,0,0x4FAE60,255, 0x4FE1D1,120,0,0x4FAE60,256, 0x4FE20D,120,0,0x4FAE60,257, 0x4FE249,120,0,0x4FAE60,258, 0x4FE274,120,0,0x4FAE60,259, 0x4FE29F,120,0,0x4FAE60,260, 0x4FE2CA,120,0,0x4FAE60,261, 0x4FE306,120,0,0x4FAE60,262, 0x4FE342,120,0,0x4FAE60,263, 0x4FE36D,120,0,0x4FAE60,264, 0x4FE3A9,120,0,0x4FAE60,265, 0x4FE3D4,120,0,0x4FAE60,266, 0x4FE3FF,120,0,0x4FAE60,267, 0x4FE42A,120,0,0x4FAE60,268, 0x4FE455,120,0,0x4FAE60,269, 0x4FE480,120,0,0x4FAE60,270, 0x4FE4AB,120,0,0x4FAE60,271, 0x4FE4D6,120,0,0x4FAE60,272, 0x4FE501,120,0,0x4FAE60,273, 0x4FE52C,120,0,0x4FAE60,274, 0x4FE557,120,0,0x4FAE60,275, 0x4FE582,120,0,0x4FAE60,276, 0x4FE5AD,120,0,0x4FAE60,277, 0x4FE5D8,120,0,0x4FAE60,278, 0x4FE603,120,0,0x4FAE60,279>;
using def_t = void(float, float, wchar_t *, unsigned int *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,wchar_t *,unsigned int *,float>, 0,1,2,3,4>;
META_END

META_BEGIN(CCredits::PrintCreditSpace)
static int address;
static int global_address;
static const int id = 0x4FE710;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FE710, 0x4FE7F0, 0x4FE780>;
// total references count: 10en (108), 11en (108), steam (108)
using refs_t = RefList<0x4FAEC2,100,0,0x4FADF0,1, 0x4FAF29,100,0,0x4FADF0,2, 0x4FAF90,100,0,0x4FADF0,3, 0x4FB022,100,0,0x4FADF0,4, 0x4FB033,100,0,0x4FADF0,5, 0x4FB11B,100,0,0x4FADF0,6, 0x4FB1D8,100,0,0x4FADF0,7, 0x4FB1E9,100,0,0x4FADF0,8, 0x4FB250,100,0,0x4FADF0,9, 0x4FB30D,100,0,0x4FADF0,10, 0x4FB374,100,0,0x4FADF0,11, 0x4FB4DD,100,0,0x4FADF0,12, 0x4FB4EE,100,0,0x4FADF0,13, 0x4FB657,100,0,0x4FADF0,14, 0x4FB668,100,0,0x4FADF0,15, 0x4FB6FA,100,0,0x4FADF0,16, 0x4FB73F,100,0,0x4FADF0,17, 0x4FB77B,100,0,0x4FADF0,18, 0x4FB7C0,100,0,0x4FADF0,19, 0x4FB7FC,100,0,0x4FADF0,20, 0x4FB80D,100,0,0x4FADF0,21, 0x4FB874,100,0,0x4FADF0,22, 0x4FB931,100,0,0x4FADF0,23, 0x4FBB71,100,0,0x4FADF0,24, 0x4FBB82,100,0,0x4FADF0,25, 0x4FBC14,100,0,0x4FADF0,26, 0x4FBC25,100,0,0x4FADF0,27, 0x4FBC8C,100,0,0x4FADF0,28, 0x4FBC9D,100,0,0x4FADF0,29, 0x4FBCAE,100,0,0x4FADF0,30, 0x4FBCBF,100,0,0x4FADF0,31, 0x4FBCFB,100,0,0x4FADF0,32, 0x4FBD0C,100,0,0x4FADF0,33, 0x4FBD51,100,0,0x4FADF0,34, 0x4FBD8D,100,0,0x4FADF0,35, 0x4FBDF4,100,0,0x4FADF0,36, 0x4FBE30,100,0,0x4FADF0,37, 0x4FBE6C,100,0,0x4FADF0,38, 0x4FBED3,100,0,0x4FADF0,39, 0x4FBF18,100,0,0x4FADF0,40, 0x4FBF54,100,0,0x4FADF0,41, 0x4FBF90,100,0,0x4FADF0,42, 0x4FBFCC,100,0,0x4FADF0,43, 0x4FBFDD,100,0,0x4FADF0,44, 0x4FC019,100,0,0x4FADF0,45, 0x4FC2DA,100,0,0x4FADF0,46, 0x4FC31F,100,0,0x4FADF0,47, 0x4FC35B,100,0,0x4FADF0,48, 0x4FC397,100,0,0x4FADF0,49, 0x4FC3D3,100,0,0x4FADF0,50, 0x4FC3E4,100,0,0x4FADF0,51, 0x4FC420,100,0,0x4FADF0,52, 0x4FC45C,100,0,0x4FADF0,53, 0x4FC4C3,100,0,0x4FADF0,54, 0x4FC6AD,100,0,0x4FADF0,55, 0x4FC6BE,100,0,0x4FADF0,56, 0x4FC6FA,100,0,0x4FADF0,57, 0x4FC863,100,0,0x4FADF0,58, 0x4FC89F,100,0,0x4FADF0,59, 0x4FC8DB,100,0,0x4FADF0,60, 0x4FC920,100,0,0x4FADF0,61, 0x4FC95C,100,0,0x4FADF0,62, 0x4FC9CC,100,0,0x4FADF0,63, 0x4FCA11,100,0,0x4FADF0,64, 0x4FCA56,100,0,0x4FADF0,65, 0x4FCA9B,100,0,0x4FADF0,66, 0x4FCAE0,100,0,0x4FADF0,67, 0x4FCB25,100,0,0x4FADF0,68, 0x4FCB6A,100,0,0x4FADF0,69, 0x4FCBAF,100,0,0x4FADF0,70, 0x4FCBF4,100,0,0x4FADF0,71, 0x4FCC39,100,0,0x4FADF0,72, 0x4FCC7E,100,0,0x4FADF0,73, 0x4FCCC3,100,0,0x4FADF0,74, 0x4FCD08,100,0,0x4FADF0,75, 0x4FCD4D,100,0,0x4FADF0,76, 0x4FCD92,100,0,0x4FADF0,77, 0x4FCDD7,100,0,0x4FADF0,78, 0x4FCE1C,100,0,0x4FADF0,79, 0x4FCE61,100,0,0x4FADF0,80, 0x4FCEA6,100,0,0x4FADF0,81, 0x4FCEEB,100,0,0x4FADF0,82, 0x4FCF30,100,0,0x4FADF0,83, 0x4FCF75,100,0,0x4FADF0,84, 0x4FCFB1,100,0,0x4FADF0,85, 0x4FD043,100,0,0x4FADF0,86, 0x4FD0AA,100,0,0x4FADF0,87, 0x4FD13C,100,0,0x4FADF0,88, 0x4FD178,100,0,0x4FADF0,89, 0x4FD28B,100,0,0x4FADF0,90, 0x4FD2F2,100,0,0x4FADF0,91, 0x4FD32E,100,0,0x4FADF0,92, 0x4FD36A,100,0,0x4FADF0,93, 0x4FD37B,100,0,0x4FADF0,94, 0x4FDFCF,100,0,0x4FADF0,95, 0x4FE00B,100,0,0x4FADF0,96, 0x4FE01C,100,0,0x4FADF0,97, 0x4FE058,100,0,0x4FADF0,98, 0x4FE0BF,100,0,0x4FADF0,99, 0x4FE0FB,100,0,0x4FADF0,100, 0x4FE137,100,0,0x4FADF0,101, 0x4FE173,100,0,0x4FADF0,102, 0x4FE1AF,100,0,0x4FADF0,103, 0x4FE26C,100,0,0x4FADF0,104, 0x4FE2A8,100,0,0x4FADF0,105, 0x4FE30F,100,0,0x4FADF0,106, 0x4FE5A5,100,0,0x4FADF0,107, 0x4FE5B6,100,0,0x4FADF0,108, 0x4FAFA2,110,0,0x4FAED0,1, 0x4FB009,110,0,0x4FAED0,2, 0x4FB070,110,0,0x4FAED0,3, 0x4FB102,110,0,0x4FAED0,4, 0x4FB113,110,0,0x4FAED0,5, 0x4FB1FB,110,0,0x4FAED0,6, 0x4FB2B8,110,0,0x4FAED0,7, 0x4FB2C9,110,0,0x4FAED0,8, 0x4FB330,110,0,0x4FAED0,9, 0x4FB3ED,110,0,0x4FAED0,10, 0x4FB454,110,0,0x4FAED0,11, 0x4FB5BD,110,0,0x4FAED0,12, 0x4FB5CE,110,0,0x4FAED0,13, 0x4FB737,110,0,0x4FAED0,14, 0x4FB748,110,0,0x4FAED0,15, 0x4FB7DA,110,0,0x4FAED0,16, 0x4FB81F,110,0,0x4FAED0,17, 0x4FB85B,110,0,0x4FAED0,18, 0x4FB8A0,110,0,0x4FAED0,19, 0x4FB8DC,110,0,0x4FAED0,20, 0x4FB8ED,110,0,0x4FAED0,21, 0x4FB954,110,0,0x4FAED0,22, 0x4FBA11,110,0,0x4FAED0,23, 0x4FBC51,110,0,0x4FAED0,24, 0x4FBC62,110,0,0x4FAED0,25, 0x4FBCF4,110,0,0x4FAED0,26, 0x4FBD05,110,0,0x4FAED0,27, 0x4FBD6C,110,0,0x4FAED0,28, 0x4FBD7D,110,0,0x4FAED0,29, 0x4FBD8E,110,0,0x4FAED0,30, 0x4FBD9F,110,0,0x4FAED0,31, 0x4FBDDB,110,0,0x4FAED0,32, 0x4FBDEC,110,0,0x4FAED0,33, 0x4FBE31,110,0,0x4FAED0,34, 0x4FBE6D,110,0,0x4FAED0,35, 0x4FBED4,110,0,0x4FAED0,36, 0x4FBF10,110,0,0x4FAED0,37, 0x4FBF4C,110,0,0x4FAED0,38, 0x4FBFB3,110,0,0x4FAED0,39, 0x4FBFF8,110,0,0x4FAED0,40, 0x4FC034,110,0,0x4FAED0,41, 0x4FC070,110,0,0x4FAED0,42, 0x4FC0AC,110,0,0x4FAED0,43, 0x4FC0BD,110,0,0x4FAED0,44, 0x4FC0F9,110,0,0x4FAED0,45, 0x4FC3BA,110,0,0x4FAED0,46, 0x4FC3FF,110,0,0x4FAED0,47, 0x4FC43B,110,0,0x4FAED0,48, 0x4FC477,110,0,0x4FAED0,49, 0x4FC4B3,110,0,0x4FAED0,50, 0x4FC4C4,110,0,0x4FAED0,51, 0x4FC500,110,0,0x4FAED0,52, 0x4FC53C,110,0,0x4FAED0,53, 0x4FC5A3,110,0,0x4FAED0,54, 0x4FC78D,110,0,0x4FAED0,55, 0x4FC79E,110,0,0x4FAED0,56, 0x4FC7DA,110,0,0x4FAED0,57, 0x4FC943,110,0,0x4FAED0,58, 0x4FC97F,110,0,0x4FAED0,59, 0x4FC9BB,110,0,0x4FAED0,60, 0x4FCA00,110,0,0x4FAED0,61, 0x4FCA3C,110,0,0x4FAED0,62, 0x4FCAAC,110,0,0x4FAED0,63, 0x4FCAF1,110,0,0x4FAED0,64, 0x4FCB36,110,0,0x4FAED0,65, 0x4FCB7B,110,0,0x4FAED0,66, 0x4FCBC0,110,0,0x4FAED0,67, 0x4FCC05,110,0,0x4FAED0,68, 0x4FCC4A,110,0,0x4FAED0,69, 0x4FCC8F,110,0,0x4FAED0,70, 0x4FCCD4,110,0,0x4FAED0,71, 0x4FCD19,110,0,0x4FAED0,72, 0x4FCD5E,110,0,0x4FAED0,73, 0x4FCDA3,110,0,0x4FAED0,74, 0x4FCDE8,110,0,0x4FAED0,75, 0x4FCE2D,110,0,0x4FAED0,76, 0x4FCE72,110,0,0x4FAED0,77, 0x4FCEB7,110,0,0x4FAED0,78, 0x4FCEFC,110,0,0x4FAED0,79, 0x4FCF41,110,0,0x4FAED0,80, 0x4FCF86,110,0,0x4FAED0,81, 0x4FCFCB,110,0,0x4FAED0,82, 0x4FD010,110,0,0x4FAED0,83, 0x4FD055,110,0,0x4FAED0,84, 0x4FD091,110,0,0x4FAED0,85, 0x4FD123,110,0,0x4FAED0,86, 0x4FD18A,110,0,0x4FAED0,87, 0x4FD21C,110,0,0x4FAED0,88, 0x4FD258,110,0,0x4FAED0,89, 0x4FD36B,110,0,0x4FAED0,90, 0x4FD3D2,110,0,0x4FAED0,91, 0x4FD40E,110,0,0x4FAED0,92, 0x4FD44A,110,0,0x4FAED0,93, 0x4FD45B,110,0,0x4FAED0,94, 0x4FE0AF,110,0,0x4FAED0,95, 0x4FE0EB,110,0,0x4FAED0,96, 0x4FE0FC,110,0,0x4FAED0,97, 0x4FE138,110,0,0x4FAED0,98, 0x4FE19F,110,0,0x4FAED0,99, 0x4FE1DB,110,0,0x4FAED0,100, 0x4FE217,110,0,0x4FAED0,101, 0x4FE253,110,0,0x4FAED0,102, 0x4FE28F,110,0,0x4FAED0,103, 0x4FE34C,110,0,0x4FAED0,104, 0x4FE388,110,0,0x4FAED0,105, 0x4FE3EF,110,0,0x4FAED0,106, 0x4FE685,110,0,0x4FAED0,107, 0x4FE696,110,0,0x4FAED0,108, 0x4FAF32,120,0,0x4FAE60,1, 0x4FAF99,120,0,0x4FAE60,2, 0x4FB000,120,0,0x4FAE60,3, 0x4FB092,120,0,0x4FAE60,4, 0x4FB0A3,120,0,0x4FAE60,5, 0x4FB18B,120,0,0x4FAE60,6, 0x4FB248,120,0,0x4FAE60,7, 0x4FB259,120,0,0x4FAE60,8, 0x4FB2C0,120,0,0x4FAE60,9, 0x4FB37D,120,0,0x4FAE60,10, 0x4FB3E4,120,0,0x4FAE60,11, 0x4FB54D,120,0,0x4FAE60,12, 0x4FB55E,120,0,0x4FAE60,13, 0x4FB6C7,120,0,0x4FAE60,14, 0x4FB6D8,120,0,0x4FAE60,15, 0x4FB76A,120,0,0x4FAE60,16, 0x4FB7AF,120,0,0x4FAE60,17, 0x4FB7EB,120,0,0x4FAE60,18, 0x4FB830,120,0,0x4FAE60,19, 0x4FB86C,120,0,0x4FAE60,20, 0x4FB87D,120,0,0x4FAE60,21, 0x4FB8E4,120,0,0x4FAE60,22, 0x4FB9A1,120,0,0x4FAE60,23, 0x4FBBE1,120,0,0x4FAE60,24, 0x4FBBF2,120,0,0x4FAE60,25, 0x4FBC84,120,0,0x4FAE60,26, 0x4FBC95,120,0,0x4FAE60,27, 0x4FBCFC,120,0,0x4FAE60,28, 0x4FBD0D,120,0,0x4FAE60,29, 0x4FBD1E,120,0,0x4FAE60,30, 0x4FBD2F,120,0,0x4FAE60,31, 0x4FBD6B,120,0,0x4FAE60,32, 0x4FBD7C,120,0,0x4FAE60,33, 0x4FBDC1,120,0,0x4FAE60,34, 0x4FBDFD,120,0,0x4FAE60,35, 0x4FBE64,120,0,0x4FAE60,36, 0x4FBEA0,120,0,0x4FAE60,37, 0x4FBEDC,120,0,0x4FAE60,38, 0x4FBF43,120,0,0x4FAE60,39, 0x4FBF88,120,0,0x4FAE60,40, 0x4FBFC4,120,0,0x4FAE60,41, 0x4FC000,120,0,0x4FAE60,42, 0x4FC03C,120,0,0x4FAE60,43, 0x4FC04D,120,0,0x4FAE60,44, 0x4FC089,120,0,0x4FAE60,45, 0x4FC34A,120,0,0x4FAE60,46, 0x4FC38F,120,0,0x4FAE60,47, 0x4FC3CB,120,0,0x4FAE60,48, 0x4FC407,120,0,0x4FAE60,49, 0x4FC443,120,0,0x4FAE60,50, 0x4FC454,120,0,0x4FAE60,51, 0x4FC490,120,0,0x4FAE60,52, 0x4FC4CC,120,0,0x4FAE60,53, 0x4FC533,120,0,0x4FAE60,54, 0x4FC71D,120,0,0x4FAE60,55, 0x4FC72E,120,0,0x4FAE60,56, 0x4FC76A,120,0,0x4FAE60,57, 0x4FC8D3,120,0,0x4FAE60,58, 0x4FC90F,120,0,0x4FAE60,59, 0x4FC94B,120,0,0x4FAE60,60, 0x4FC990,120,0,0x4FAE60,61, 0x4FC9CC,120,0,0x4FAE60,62, 0x4FCA3C,120,0,0x4FAE60,63, 0x4FCA81,120,0,0x4FAE60,64, 0x4FCAC6,120,0,0x4FAE60,65, 0x4FCB0B,120,0,0x4FAE60,66, 0x4FCB50,120,0,0x4FAE60,67, 0x4FCB95,120,0,0x4FAE60,68, 0x4FCBDA,120,0,0x4FAE60,69, 0x4FCC1F,120,0,0x4FAE60,70, 0x4FCC64,120,0,0x4FAE60,71, 0x4FCCA9,120,0,0x4FAE60,72, 0x4FCCEE,120,0,0x4FAE60,73, 0x4FCD33,120,0,0x4FAE60,74, 0x4FCD78,120,0,0x4FAE60,75, 0x4FCDBD,120,0,0x4FAE60,76, 0x4FCE02,120,0,0x4FAE60,77, 0x4FCE47,120,0,0x4FAE60,78, 0x4FCE8C,120,0,0x4FAE60,79, 0x4FCED1,120,0,0x4FAE60,80, 0x4FCF16,120,0,0x4FAE60,81, 0x4FCF5B,120,0,0x4FAE60,82, 0x4FCFA0,120,0,0x4FAE60,83, 0x4FCFE5,120,0,0x4FAE60,84, 0x4FD021,120,0,0x4FAE60,85, 0x4FD0B3,120,0,0x4FAE60,86, 0x4FD11A,120,0,0x4FAE60,87, 0x4FD1AC,120,0,0x4FAE60,88, 0x4FD1E8,120,0,0x4FAE60,89, 0x4FD2FB,120,0,0x4FAE60,90, 0x4FD362,120,0,0x4FAE60,91, 0x4FD39E,120,0,0x4FAE60,92, 0x4FD3DA,120,0,0x4FAE60,93, 0x4FD3EB,120,0,0x4FAE60,94, 0x4FE03F,120,0,0x4FAE60,95, 0x4FE07B,120,0,0x4FAE60,96, 0x4FE08C,120,0,0x4FAE60,97, 0x4FE0C8,120,0,0x4FAE60,98, 0x4FE12F,120,0,0x4FAE60,99, 0x4FE16B,120,0,0x4FAE60,100, 0x4FE1A7,120,0,0x4FAE60,101, 0x4FE1E3,120,0,0x4FAE60,102, 0x4FE21F,120,0,0x4FAE60,103, 0x4FE2DC,120,0,0x4FAE60,104, 0x4FE318,120,0,0x4FAE60,105, 0x4FE37F,120,0,0x4FAE60,106, 0x4FE615,120,0,0x4FAE60,107, 0x4FE626,120,0,0x4FAE60,108>;
using def_t = void(float, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,unsigned int *>, 0,1>;
META_END

META_BEGIN(CCredits::Start)
static int address;
static int global_address;
static const int id = 0x4FE760;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FE760, 0x4FE840, 0x4FE7D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5896AA,100,0,0x588490,1, 0x5899EA,110,0,0x5887D0,1, 0x5898DA,120,0,0x5886C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCredits::Stop)
static int address;
static int global_address;
static const int id = 0x4FE780;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FE780, 0x4FE860, 0x4FE7F0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4FE7A0,100,0,0x4FE7A0,1, 0x5896BA,100,0,0x588490,1, 0x4FE880,110,0,0x4FE880,1, 0x5899FA,110,0,0x5887D0,1, 0x4FE810,120,0,0x4FE810,1, 0x5898EA,120,0,0x5886C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCredits::AreCreditsDone)
static int address;
static int global_address;
static const int id = 0x4FE790;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FE790, 0x4FE870, 0x4FE800>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5896CC,100,0,0x588490,1, 0x589A0C,110,0,0x5887D0,1, 0x5898FC,120,0,0x5886C0,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCredits::Init)
static int address;
static int global_address;
static const int id = 0x4FE7A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FE7A0, 0x4FE880, 0x4FE810>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C30C,100,0,0x48BED0,1, 0x48C3FC,110,0,0x48BFC0,1, 0x48C38C,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}