// generated from file '../src/plugins/cstb.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

#include "trany.h"
#include <string.h>

namespace pluginlib {
namespace cstb {

class Dsp: public PluginDef {
private:
	int fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	FAUSTFLOAT 	fslider0;
	double 	fRec0[2];
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	FAUSTFLOAT 	fslider1;
	double 	fRec1[2];
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	FAUSTFLOAT 	fslider2;
	double 	fRec2[2];
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fRec3[6];
	double 	fConst106;
	double 	fConst107;
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fConst111;
	double 	fConst112;
	double 	fConst113;
	double 	fConst114;
	double 	fConst115;
	double 	fConst116;
	double 	fConst117;
	double 	fConst118;
	double 	fConst119;
	double 	fConst120;
	double 	fConst121;
	double 	fConst122;
	double 	fConst123;
	double 	fConst124;
	double 	fConst125;
	double 	fConst126;
	double 	fConst127;
	double 	fConst128;
	double 	fConst129;
	double 	fConst130;
	double 	fConst131;
	double 	fConst132;
	double 	fConst133;
	double 	fConst134;
	double 	fConst135;
	double 	fConst136;
	double 	fConst137;
	double 	fConst138;
	double 	fConst139;
	double 	fConst140;
	double 	fConst141;
	double 	fConst142;
	double 	fConst143;
	double 	fConst144;
	double 	fConst145;
	double 	fConst146;
	double 	fConst147;
	double 	fConst148;
	double 	fConst149;
	double 	fConst150;
	double 	fConst151;
	double 	fConst152;
	double 	fConst153;
	double 	fConst154;
	double 	fConst155;
	double 	fConst156;
	double 	fConst157;
	double 	fConst158;
	double 	fConst159;
	double 	fConst160;
	double 	fConst161;
	double 	fConst162;
	double 	fConst163;
	double 	fConst164;
	double 	fConst165;
	double 	fConst166;
	double 	fConst167;
	double 	fConst168;
	double 	fConst169;
	double 	fConst170;
	double 	fConst171;
	double 	fConst172;
	double 	fConst173;
	double 	fConst174;
	double 	fConst175;
	double 	fConst176;
	double 	fConst177;
	double 	fConst178;
	double 	fConst179;
	double 	fConst180;
	double 	fConst181;
	double 	fConst182;
	double 	fConst183;
	double 	fConst184;
	double 	fConst185;
	double 	fConst186;
	double 	fConst187;
	double 	fConst188;
	double 	fConst189;
	double 	fConst190;

	int samplingFreq;
	gx_resample::FixedRateResampler smpCl;
	double 	fVecCl0[2];
	double 	fRecCl7[2];
	double 	fRecCl6[3];
	int 	iConstCl0;
	double 	fConstCl1;
	double 	fConstCl2;
	double 	fConstCl3;
	double 	fConstCl4;
	double 	fRecCl8[2];
	double 	fRecCl5[3];
	double 	fConstCl5;
	double 	fConstCl6;
	double 	fConstCl7;
	double 	fConstCl8;
	double 	fConstCl9;
	double 	fRecCl4[2];
	double 	fRecCl3[2];
	double 	fRecCl2[3];
	double 	fRecCl9[2];
	double 	fRecCl1[3];
	double 	fRecCl0[2];

	FAUSTFLOAT fsliderdw0;
	void clear_state_f();
	int load_ui_f(const UiBuilder& b, int form);
	static const char *glade_def;
	void init(unsigned int samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
	static int load_ui_f_static(const UiBuilder& b, int form);
	static void init_static(unsigned int samplingFreq, PluginDef*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef*);
	static int register_params_static(const ParamReg& reg);
	static void del_instance(PluginDef *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginDef() {
	version = PLUGINDEF_VERSION;
	flags = 0;
	id = "cstbt1";
	name = N_("Colorsound Tone Blender");
	groups = 0;
	description = N_("Colorsound Tone Blender"); // description (tooltip)
	category = N_("Fuzz");       // category
	shortname = N_("CS Tone");     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = load_ui_f_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<6; i++) fRec3[i] = 0;

	for (int i=0; i<2; i++) fVecCl0[i] = 0;
	for (int i=0; i<2; i++) fRecCl7[i] = 0;
	for (int i=0; i<3; i++) fRecCl6[i] = 0;
	for (int i=0; i<2; i++) fRecCl8[i] = 0;
	for (int i=0; i<3; i++) fRecCl5[i] = 0;
	for (int i=0; i<2; i++) fRecCl4[i] = 0;
	for (int i=0; i<2; i++) fRecCl3[i] = 0;
	for (int i=0; i<3; i++) fRecCl2[i] = 0;
	for (int i=0; i<2; i++) fRecCl9[i] = 0;
	for (int i=0; i<3; i++) fRecCl1[i] = 0;
	for (int i=0; i<2; i++) fRecCl0[i] = 0;

}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (7.8746133025304e-22 * fConst0);
	fConst2 = (1.19374357533685e-13 + (fConst0 * (5.81722106266131e-15 + (fConst0 * (1.20886112608973e-17 + fConst1)))));
	fConst3 = (7.2677502129384e-24 * fConst0);
	fConst4 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.11622970892275e-19 + fConst3))) - 5.44781387848185e-17)) - 1.11859678983445e-15)) - 2.16342879110166e-15);
	fConst5 = (7.40213650437857e-24 * fConst0);
	fConst6 = (2.17010750008645e-15 + (fConst0 * (1.12211896081664e-15 + (fConst0 * (5.46818779890163e-17 + (fConst0 * (1.13632945852435e-19 + fConst5)))))));
	fConst7 = (1.8420467174625e-21 * fConst0);
	fConst8 = (2.69059416486104e-13 + (fConst0 * (1.22792404260186e-14 + (fConst0 * (2.55273478792579e-17 + fConst7)))));
	fConst9 = (1.72098866161537e-23 * fConst0);
	fConst10 = (2.45620889089652e-16 + (fConst0 * (1.14222007971933e-16 + (fConst0 * (2.43964228204556e-19 + fConst9)))));
	fConst11 = (1.75281106567011e-23 * fConst0);
	fConst12 = ((fConst0 * ((fConst0 * (0 - (2.48347397038037e-19 + fConst11))) - 1.14582451009122e-16)) - 2.46379143969851e-16);
	fConst13 = (1.86469262305331e-21 * fConst0);
	fConst14 = ((fConst0 * ((fConst0 * (0 - (2.64199358551104e-17 + fConst13))) - 1.21896224477789e-14)) - 2.62105472308353e-14);
	fConst15 = (1.70008798003816e-23 * fConst0);
	fConst16 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (2.35724702889288e-19 + fConst15))) - 1.14989728218871e-16)) - 2.52121869652107e-15)) - 4.91241778179305e-15);
	fConst17 = (1.73152391441475e-23 * fConst0);
	fConst18 = (4.92758287939703e-15 + (fConst0 * (2.52915851496938e-15 + (fConst0 * (1.15424860004575e-16 + (fConst0 * (2.39957070065024e-19 + fConst17)))))));
	fConst19 = (9.67524227740541e-23 * fConst0);
	fConst20 = (1.52102059347953e-20 - fConst19);
	fConst21 = (9.67524227740542e-20 * fConst0);
	fConst22 = (1.52102059347953e-17 - fConst21);
	fConst23 = (9.09472774076109e-22 * fConst0);
	fConst24 = (fConst23 - 1.42975935787076e-19);
	fConst25 = (9.05450478550043e-24 * fConst0);
	fConst26 = (1.42343600786794e-21 - fConst25);
	fConst27 = (9.05450478550042e-27 * fConst0);
	fConst28 = (1.42343600786794e-24 - fConst27);
	fConst29 = (9.09472774076109e-25 * fConst0);
	fConst30 = (fConst29 - 1.42975935787076e-22);
	fConst31 = (8.18152886468203e-23 * fConst0);
	fConst32 = (3.32042567560148e-19 + fConst31);
	fConst33 = (8.18152886468203e-20 * fConst0);
	fConst34 = (3.32042567560148e-16 + fConst33);
	fConst35 = (7.69063713280111e-25 * fConst0);
	fConst36 = (0 - (3.1212001350654e-21 + fConst35));
	fConst37 = (7.69063713280111e-22 * fConst0);
	fConst38 = (0 - (3.12120013506539e-18 + fConst37));
	fConst39 = (7.65662400320161e-24 * fConst0);
	fConst40 = (3.10739610519547e-20 + fConst39);
	fConst41 = (7.65662400320161e-27 * fConst0);
	fConst42 = (3.10739610519547e-23 + fConst41);
	fConst43 = ((fConst0 * (5.81722106266131e-15 + (fConst0 * (fConst1 - 1.20886112608973e-17)))) - 1.19374357533685e-13);
	fConst44 = (2.16342879110166e-15 + (fConst0 * ((fConst0 * (5.44781387848185e-17 + (fConst0 * (fConst3 - 1.11622970892275e-19)))) - 1.11859678983445e-15)));
	fConst45 = ((fConst0 * (1.12211896081664e-15 + (fConst0 * ((fConst0 * (1.13632945852435e-19 - fConst5)) - 5.46818779890163e-17)))) - 2.17010750008645e-15);
	fConst46 = ((fConst0 * (1.22792404260186e-14 + (fConst0 * (fConst7 - 2.55273478792579e-17)))) - 2.69059416486104e-13);
	fConst47 = (2.45620889089652e-16 + (fConst0 * ((fConst0 * (2.43964228204556e-19 - fConst9)) - 1.14222007971933e-16)));
	fConst48 = ((fConst0 * (1.14582451009122e-16 + (fConst0 * (fConst11 - 2.48347397038037e-19)))) - 2.46379143969851e-16);
	fConst49 = (2.62105472308353e-14 + (fConst0 * ((fConst0 * (2.64199358551104e-17 - fConst13)) - 1.21896224477789e-14)));
	fConst50 = (4.91241778179305e-15 + (fConst0 * ((fConst0 * (1.14989728218871e-16 + (fConst0 * (fConst15 - 2.35724702889288e-19)))) - 2.52121869652107e-15)));
	fConst51 = ((fConst0 * (2.52915851496938e-15 + (fConst0 * ((fConst0 * (2.39957070065024e-19 - fConst17)) - 1.15424860004575e-16)))) - 4.92758287939703e-15);
	fConst52 = (2.36238399075912e-21 * fConst0);
	fConst53 = ((fConst0 * (5.81722106266131e-15 + (fConst0 * (1.20886112608973e-17 - fConst52)))) - 3.58123072601056e-13);
	fConst54 = (3.6338751064692e-23 * fConst0);
	fConst55 = (6.49028637330497e-15 + (fConst0 * ((fConst0 * ((fConst0 * (3.34868912676825e-19 - fConst54)) - 5.44781387848185e-17)) - 1.11859678983445e-15)));
	fConst56 = (3.70106825218929e-23 * fConst0);
	fConst57 = ((fConst0 * (1.12211896081664e-15 + (fConst0 * (5.46818779890163e-17 + (fConst0 * (fConst56 - 3.40898837557304e-19)))))) - 6.51032250025936e-15);
	fConst58 = (5.52614015238749e-21 * fConst0);
	fConst59 = ((fConst0 * (1.22792404260186e-14 + (fConst0 * (2.55273478792579e-17 - fConst58)))) - 8.07178249458312e-13);
	fConst60 = (8.60494330807685e-23 * fConst0);
	fConst61 = (2.45620889089652e-16 + (fConst0 * (1.14222007971933e-16 + (fConst0 * (fConst60 - 7.31892684613668e-19)))));
	fConst62 = (8.76405532835057e-23 * fConst0);
	fConst63 = ((fConst0 * ((fConst0 * (7.45042191114112e-19 - fConst62)) - 1.14582451009122e-16)) - 2.46379143969851e-16);
	fConst64 = (5.59407786915994e-21 * fConst0);
	fConst65 = (7.86316416925058e-14 + (fConst0 * ((fConst0 * (fConst64 - 2.64199358551104e-17)) - 1.21896224477789e-14)));
	fConst66 = (8.50043990019081e-23 * fConst0);
	fConst67 = (1.47372533453791e-14 + (fConst0 * ((fConst0 * ((fConst0 * (7.07174108667865e-19 - fConst66)) - 1.14989728218871e-16)) - 2.52121869652107e-15)));
	fConst68 = (8.65761957207373e-23 * fConst0);
	fConst69 = ((fConst0 * (2.52915851496938e-15 + (fConst0 * (1.15424860004575e-16 + (fConst0 * (fConst68 - 7.19871210195072e-19)))))) - 1.47827486381911e-14);
	fConst70 = (1.57492266050608e-21 * fConst0);
	fConst71 = ((fConst0 * ((fConst0 * (2.41772225217946e-17 + fConst70)) - 1.16344421253226e-14)) - 2.3874871506737e-13);
	fConst72 = (7.2677502129384e-23 * fConst0);
	fConst73 = (4.32685758220331e-15 + (fConst0 * (2.2371935796689e-15 + (fConst0 * ((fConst0 * (fConst72 - 2.2324594178455e-19)) - 1.08956277569637e-16)))));
	fConst74 = (7.40213650437857e-23 * fConst0);
	fConst75 = ((fConst0 * ((fConst0 * (1.09363755978033e-16 + (fConst0 * (2.27265891704869e-19 - fConst74)))) - 2.24423792163328e-15)) - 4.3402150001729e-15);
	fConst76 = (3.68409343492499e-21 * fConst0);
	fConst77 = ((fConst0 * ((fConst0 * (5.10546957585158e-17 + fConst76)) - 2.45584808520372e-14)) - 5.38118832972208e-13);
	fConst78 = (1.72098866161537e-22 * fConst0);
	fConst79 = ((fConst0 * (2.28444015943865e-16 + (fConst0 * (4.87928456409112e-19 - fConst78)))) - 4.91241778179304e-16);
	fConst80 = (1.75281106567011e-22 * fConst0);
	fConst81 = (4.92758287939703e-16 + (fConst0 * ((fConst0 * (fConst80 - 4.96694794076075e-19)) - 2.29164902018244e-16)));
	fConst82 = (3.72938524610662e-21 * fConst0);
	fConst83 = (5.24210944616705e-14 + (fConst0 * (2.43792448955579e-14 + (fConst0 * (0 - (5.28398717102207e-17 + fConst82))))));
	fConst84 = (1.70008798003816e-22 * fConst0);
	fConst85 = (9.82483556358609e-15 + (fConst0 * (5.04243739304215e-15 + (fConst0 * ((fConst0 * (fConst84 - 4.71449405778577e-19)) - 2.29979456437742e-16)))));
	fConst86 = (1.73152391441475e-22 * fConst0);
	fConst87 = ((fConst0 * ((fConst0 * (2.3084972000915e-16 + (fConst0 * (4.79914140130048e-19 - fConst86)))) - 5.05831702993876e-15)) - 9.85516575879406e-15);
	fConst88 = (2.3874871506737e-13 + (fConst0 * ((fConst0 * (fConst70 - 2.41772225217946e-17)) - 1.16344421253226e-14)));
	fConst89 = ((fConst0 * (2.2371935796689e-15 + (fConst0 * (1.08956277569637e-16 + (fConst0 * (0 - (2.2324594178455e-19 + fConst72))))))) - 4.32685758220331e-15);
	fConst90 = (4.3402150001729e-15 + (fConst0 * ((fConst0 * ((fConst0 * (2.27265891704869e-19 + fConst74)) - 1.09363755978033e-16)) - 2.24423792163328e-15)));
	fConst91 = (5.38118832972208e-13 + (fConst0 * ((fConst0 * (fConst76 - 5.10546957585158e-17)) - 2.45584808520372e-14)));
	fConst92 = ((fConst0 * ((fConst0 * (4.87928456409112e-19 + fConst78)) - 2.28444015943865e-16)) - 4.91241778179304e-16);
	fConst93 = (4.92758287939703e-16 + (fConst0 * (2.29164902018244e-16 + (fConst0 * (0 - (4.96694794076075e-19 + fConst80))))));
	fConst94 = ((fConst0 * (2.43792448955579e-14 + (fConst0 * (5.28398717102207e-17 - fConst82)))) - 5.24210944616705e-14);
	fConst95 = ((fConst0 * (5.04243739304215e-15 + (fConst0 * (2.29979456437742e-16 + (fConst0 * (0 - (4.71449405778577e-19 + fConst84))))))) - 9.82483556358609e-15);
	fConst96 = (9.85516575879406e-15 + (fConst0 * ((fConst0 * ((fConst0 * (4.79914140130048e-19 + fConst86)) - 2.3084972000915e-16)) - 5.05831702993876e-15)));
	fConst97 = (3.58123072601056e-13 + (fConst0 * (5.81722106266131e-15 + (fConst0 * (0 - (1.20886112608973e-17 + fConst52))))));
	fConst98 = ((fConst0 * ((fConst0 * (5.44781387848185e-17 + (fConst0 * (3.34868912676825e-19 + fConst54)))) - 1.11859678983445e-15)) - 6.49028637330497e-15);
	fConst99 = (6.51032250025936e-15 + (fConst0 * (1.12211896081664e-15 + (fConst0 * ((fConst0 * (0 - (3.40898837557304e-19 + fConst56))) - 5.46818779890163e-17)))));
	fConst100 = (8.07178249458312e-13 + (fConst0 * (1.22792404260186e-14 + (fConst0 * (0 - (2.55273478792579e-17 + fConst58))))));
	fConst101 = (2.45620889089652e-16 + (fConst0 * ((fConst0 * (0 - (7.31892684613668e-19 + fConst60))) - 1.14222007971933e-16)));
	fConst102 = ((fConst0 * (1.14582451009122e-16 + (fConst0 * (7.45042191114112e-19 + fConst62)))) - 2.46379143969851e-16);
	fConst103 = ((fConst0 * ((fConst0 * (2.64199358551104e-17 + fConst64)) - 1.21896224477789e-14)) - 7.86316416925058e-14);
	fConst104 = ((fConst0 * ((fConst0 * (1.14989728218871e-16 + (fConst0 * (7.07174108667865e-19 + fConst66)))) - 2.52121869652107e-15)) - 1.47372533453791e-14);
	fConst105 = (1.47827486381911e-14 + (fConst0 * (2.52915851496938e-15 + (fConst0 * ((fConst0 * (0 - (7.19871210195072e-19 + fConst68))) - 1.15424860004575e-16)))));
	fConst106 = (2.90257268322162e-19 * fConst0);
	fConst107 = (fConst106 - 1.52102059347953e-17);
	fConst108 = (4.54736387038055e-24 * fConst0);
	fConst109 = (4.28927807361227e-22 - fConst108);
	fConst110 = (4.54736387038055e-21 * fConst0);
	fConst111 = (4.28927807361227e-19 - fConst110);
	fConst112 = (4.52725239275021e-23 * fConst0);
	fConst113 = (fConst112 - 4.27030802360382e-21);
	fConst114 = (4.52725239275021e-26 * fConst0);
	fConst115 = (fConst114 - 4.27030802360382e-24);
	fConst116 = (2.45445865940461e-22 * fConst0);
	fConst117 = (0 - (3.32042567560148e-19 + fConst116));
	fConst118 = (2.45445865940461e-19 * fConst0);
	fConst119 = (0 - (3.32042567560148e-16 + fConst118));
	fConst120 = (3.84531856640056e-21 * fConst0);
	fConst121 = (9.36360040519619e-18 + fConst120);
	fConst122 = (3.82831200160081e-23 * fConst0);
	fConst123 = (0 - (9.3221883155864e-20 + fConst122));
	fConst124 = (3.82831200160081e-26 * fConst0);
	fConst125 = (0 - (9.3221883155864e-23 + fConst124));
	fConst126 = (3.84531856640056e-24 * fConst0);
	fConst127 = (9.36360040519619e-21 + fConst126);
	fConst128 = (2.90257268322162e-22 * fConst0);
	fConst129 = (fConst128 - 1.52102059347953e-20);
	fConst130 = (1.93504845548108e-22 * fConst0);
	fConst131 = (0 - (3.04204118695905e-20 + fConst130));
	fConst132 = (1.93504845548108e-19 * fConst0);
	fConst133 = (0 - (3.04204118695905e-17 + fConst132));
	fConst134 = (9.09472774076109e-21 * fConst0);
	fConst135 = (fConst134 - 2.85951871574151e-19);
	fConst136 = (9.05450478550042e-23 * fConst0);
	fConst137 = (2.84687201573588e-21 - fConst136);
	fConst138 = (9.05450478550042e-26 * fConst0);
	fConst139 = (2.84687201573588e-24 - fConst138);
	fConst140 = (9.09472774076109e-24 * fConst0);
	fConst141 = (fConst140 - 2.85951871574151e-22);
	fConst142 = (1.63630577293641e-19 * fConst0);
	fConst143 = (fConst142 - 6.64085135120297e-16);
	fConst144 = (7.69063713280111e-24 * fConst0);
	fConst145 = (0 - (6.24240027013079e-21 + fConst144));
	fConst146 = (7.69063713280111e-21 * fConst0);
	fConst147 = (0 - (6.24240027013079e-18 + fConst146));
	fConst148 = (7.65662400320161e-23 * fConst0);
	fConst149 = (6.21479221039094e-20 + fConst148);
	fConst150 = (7.65662400320161e-26 * fConst0);
	fConst151 = (6.21479221039094e-23 + fConst150);
	fConst152 = (1.63630577293641e-22 * fConst0);
	fConst153 = (fConst152 - 6.64085135120297e-19);
	fConst154 = (3.04204118695905e-20 - fConst130);
	fConst155 = (3.04204118695905e-17 - fConst132);
	fConst156 = (0 - (2.85951871574151e-22 + fConst140));
	fConst157 = (0 - (2.85951871574151e-19 + fConst134));
	fConst158 = (2.84687201573588e-21 + fConst136);
	fConst159 = (2.84687201573588e-24 + fConst138);
	fConst160 = (6.64085135120297e-19 + fConst152);
	fConst161 = (6.64085135120297e-16 + fConst142);
	fConst162 = (fConst146 - 6.24240027013079e-18);
	fConst163 = (6.21479221039094e-20 - fConst148);
	fConst164 = (6.21479221039094e-23 - fConst150);
	fConst165 = (fConst144 - 6.24240027013079e-21);
	fConst166 = (1.52102059347953e-20 + fConst128);
	fConst167 = (1.52102059347953e-17 + fConst106);
	fConst168 = (4.28927807361227e-22 + fConst108);
	fConst169 = (4.28927807361227e-19 + fConst110);
	fConst170 = (0 - (4.27030802360382e-21 + fConst112));
	fConst171 = (0 - (4.27030802360382e-24 + fConst114));
	fConst172 = (3.32042567560148e-19 - fConst116);
	fConst173 = (3.32042567560148e-16 - fConst118);
	fConst174 = (9.36360040519619e-21 - fConst126);
	fConst175 = (9.36360040519619e-18 - fConst120);
	fConst176 = (fConst122 - 9.3221883155864e-20);
	fConst177 = (fConst124 - 9.3221883155864e-23);
	fConst178 = (0 - (1.52102059347953e-20 + fConst19));
	fConst179 = (0 - (1.52102059347953e-17 + fConst21));
	fConst180 = (0 - (1.42975935787076e-22 + fConst29));
	fConst181 = (0 - (1.42975935787076e-19 + fConst23));
	fConst182 = (1.42343600786794e-21 + fConst25);
	fConst183 = (1.42343600786794e-24 + fConst27);
	fConst184 = (fConst33 - 3.32042567560148e-16);
	fConst185 = (fConst37 - 3.12120013506539e-18);
	fConst186 = (3.10739610519547e-20 - fConst39);
	fConst187 = (3.10739610519547e-23 - fConst41);
	fConst188 = (fConst35 - 3.1212001350654e-21);
	fConst189 = (fConst31 - 3.32042567560148e-19);
	fConst190 = faustpower<3>(fConst0);

	samplingFreq = 96000;
	smpCl.setup(fSamplingFreq, samplingFreq);
	fSamplingFreq = samplingFreq;
	iConstCl0 = min(192000, max(1, fSamplingFreq));
	fConstCl1 = (1.0 / tan((270.1769682087222 / double(iConstCl0))));
	fConstCl2 = (1 + fConstCl1);
	fConstCl3 = (0.027 / fConstCl2);
	fConstCl4 = (0 - ((1 - fConstCl1) / fConstCl2));
	fConstCl5 = (1.0 / tan((97.38937226128358 / double(iConstCl0))));
	fConstCl6 = (0 - fConstCl5);
	fConstCl7 = (1 + fConstCl5);
	fConstCl8 = (0.025 / fConstCl7);
	fConstCl9 = (0 - ((1 - fConstCl5) / fConstCl7));

	clear_state_f();
}

void Dsp::init_static(unsigned int samplingFreq, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	double 	fSlowdw0 = (0.01 * fsliderdw0);
	double 	fSlowdw1 = (1 - fSlowdw0);
	FAUSTFLOAT 	dryinput[count];
	memcpy(&dryinput, input0, count * sizeof(float));

	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((0.993 * fRec0[1]) + fSlow0);
		fRec1[0] = ((0.993 * fRec1[1]) + fSlow1);
		double fTemp0 = (2.30862500009197e-13 + ((fRec1[0] * (5.24210944616705e-13 + (fConst0 * (((fRec0[0] * (fConst18 + (fConst16 * fRec0[0]))) + (fRec1[0] * (fConst14 + (fConst0 * (fRec0[0] * (fConst12 + (fConst10 * fRec0[0]))))))) + fConst8)))) + (fConst0 * ((fRec0[0] * (fConst6 + (fConst4 * fRec0[0]))) + fConst2))));
		fRec2[0] = ((0.993 * fRec2[1]) + fSlow2);
		fRec3[0] = ((double)input0[i] - ((((((fRec3[1] * (1.15431250004598e-12 + ((fRec1[0] * (2.62105472308353e-12 + (fConst0 * (((fRec0[0] * (fConst105 + (fConst104 * fRec0[0]))) + (fRec1[0] * (fConst103 + (fConst0 * (fRec0[0] * (fConst102 + (fConst101 * fRec0[0]))))))) + fConst100)))) + (fConst0 * ((fRec0[0] * (fConst99 + (fConst98 * fRec0[0]))) + fConst97))))) + (fRec3[2] * (2.30862500009197e-12 + ((fRec1[0] * (5.24210944616705e-12 + (fConst0 * (((fRec0[0] * (fConst96 + (fConst95 * fRec0[0]))) + (fRec1[0] * (fConst94 + (fConst0 * (fRec0[0] * (fConst93 + (fConst92 * fRec0[0]))))))) + fConst91)))) + (fConst0 * ((fRec0[0] * (fConst90 + (fConst89 * fRec0[0]))) + fConst88)))))) + (fRec3[3] * (2.30862500009197e-12 + ((fRec1[0] * (5.24210944616705e-12 + (fConst0 * (((fRec0[0] * (fConst87 + (fConst85 * fRec0[0]))) + (fRec1[0] * (fConst83 + (fConst0 * (fRec0[0] * (fConst81 + (fConst79 * fRec0[0]))))))) + fConst77)))) + (fConst0 * ((fRec0[0] * (fConst75 + (fConst73 * fRec0[0]))) + fConst71)))))) + (fRec3[4] * (1.15431250004598e-12 + ((fRec1[0] * (2.62105472308353e-12 + (fConst0 * (((fRec0[0] * (fConst69 + (fConst67 * fRec0[0]))) + (fRec1[0] * (fConst65 + (fConst0 * (fRec0[0] * (fConst63 + (fConst61 * fRec0[0]))))))) + fConst59)))) + (fConst0 * ((fRec0[0] * (fConst57 + (fConst55 * fRec0[0]))) + fConst53)))))) + (fRec3[5] * (2.30862500009197e-13 + ((fRec1[0] * (5.24210944616705e-13 + (fConst0 * (((fRec0[0] * (fConst51 + (fConst50 * fRec0[0]))) + (fRec1[0] * (fConst49 + (fConst0 * (fRec0[0] * (fConst48 + (fConst47 * fRec0[0]))))))) + fConst46)))) + (fConst0 * ((fRec0[0] * (fConst45 + (fConst44 * fRec0[0]))) + fConst43)))))) / fTemp0));
		output0[i] = (FAUSTFLOAT)(fConst190 * (((((((fRec3[0] * ((((fRec1[0] * (fConst189 + ((fConst0 * (fRec0[0] * (fConst188 + ((fRec0[0] * (fConst187 + (fConst186 * fRec2[0]))) + (fConst185 * fRec2[0]))))) + (fConst184 * fRec2[0])))) + (fConst0 * (fRec0[0] * (((fRec0[0] * (fConst183 + (fConst182 * fRec2[0]))) + (fConst181 * fRec2[0])) + fConst180)))) + (fConst179 * fRec2[0])) + fConst178)) + (fRec3[1] * ((((fRec1[0] * (((fConst0 * (fRec0[0] * (((fRec0[0] * (fConst177 + (fConst176 * fRec2[0]))) + (fConst175 * fRec2[0])) + fConst174))) + (fConst173 * fRec2[0])) + fConst172)) + (fConst0 * (fRec0[0] * (((fRec0[0] * (fConst171 + (fConst170 * fRec2[0]))) + (fConst169 * fRec2[0])) + fConst168)))) + (fConst167 * fRec2[0])) + fConst166))) + (fRec3[2] * ((((fRec1[0] * (((fConst0 * (fRec0[0] * (fConst165 + ((fRec0[0] * (fConst164 + (fConst163 * fRec2[0]))) + (fConst162 * fRec2[0]))))) + (fConst161 * fRec2[0])) + fConst160)) + (fConst0 * (fRec0[0] * (((fRec0[0] * (fConst159 + (fConst158 * fRec2[0]))) + (fConst157 * fRec2[0])) + fConst156)))) + (fConst155 * fRec2[0])) + fConst154))) + (fRec3[3] * ((((fRec1[0] * (fConst153 + ((fConst0 * (fRec0[0] * (((fRec0[0] * (fConst151 + (fConst149 * fRec2[0]))) + (fConst147 * fRec2[0])) + fConst145))) + (fConst143 * fRec2[0])))) + (fConst0 * (fRec0[0] * (fConst141 + ((fRec0[0] * (fConst139 + (fConst137 * fRec2[0]))) + (fConst135 * fRec2[0])))))) + (fConst133 * fRec2[0])) + fConst131))) + (fRec3[4] * (fConst129 + (((fRec1[0] * (((fConst0 * (fRec0[0] * (fConst127 + ((fRec0[0] * (fConst125 + (fConst123 * fRec2[0]))) + (fConst121 * fRec2[0]))))) + (fConst119 * fRec2[0])) + fConst117)) + (fConst0 * (fRec0[0] * (((fRec0[0] * (fConst115 + (fConst113 * fRec2[0]))) + (fConst111 * fRec2[0])) + fConst109)))) + (fConst107 * fRec2[0]))))) + (fRec3[5] * ((((fRec1[0] * (((fConst0 * (fRec0[0] * (((fRec0[0] * (fConst42 + (fConst40 * fRec2[0]))) + (fConst38 * fRec2[0])) + fConst36))) + (fConst34 * fRec2[0])) + fConst32)) + (fConst0 * (fRec0[0] * (fConst30 + ((fRec0[0] * (fConst28 + (fConst26 * fRec2[0]))) + (fConst24 * fRec2[0])))))) + (fConst22 * fRec2[0])) + fConst20))) / fTemp0));
		// post processing
		for (int i=5; i>0; i--) fRec3[i] = fRec3[i-1];
		fRec2[1] = fRec2[0];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}

	FAUSTFLOAT bufCl[smpCl.max_out_count(count)];
	int ReCount = smpCl.up(count, output0, bufCl);
	for (int i=0; i<ReCount; i++) {
		double fTemp0 = (double)bufCl[i];
		fVecCl0[0] = fTemp0;
		fRecCl7[0] = ((0.9302847925323914 * (fVecCl0[0] + fVecCl0[1])) - (0.8605695850647829 * fRecCl7[1]));
		fRecCl6[0] = (fRecCl7[0] - ((1.8405051250752198 * fRecCl6[1]) + (0.8612942439318627 * fRecCl6[2])));
		fRecCl8[0] = ((fConstCl4 * fRecCl8[1]) + (fConstCl3 * (fRecCl5[1] + fRecCl5[2])));
		fRecCl5[0] = (Ftrany(TRANY_TABLE_KT88_68k, ((fRecCl8[0] + (0.9254498422517706 * (fRecCl6[2] + (fRecCl6[0] + (2.0 * fRecCl6[1]))))) - 5.562895)) - 43.96685185185183);
		fRecCl4[0] = ((fConstCl9 * fRecCl4[1]) + (fConstCl8 * ((fConstCl5 * fRecCl5[0]) + (fConstCl6 * fRecCl5[1]))));
		fRecCl3[0] = ((0.9302847925323914 * (fRecCl4[0] + fRecCl4[1])) - (0.8605695850647829 * fRecCl3[1]));
		fRecCl2[0] = (fRecCl3[0] - ((1.8405051250752198 * fRecCl2[1]) + (0.8612942439318627 * fRecCl2[2])));
		fRecCl9[0] = ((fConstCl4 * fRecCl9[1]) + (fConstCl3 * (fRecCl1[1] + fRecCl1[2])));
		fRecCl1[0] = (Ftrany(TRANY_TABLE_KT88_68k, ((fRecCl9[0] + (0.9254498422517706 * (fRecCl2[2] + (fRecCl2[0] + (2.0 * fRecCl2[1]))))) - 5.562895)) - 43.96685185185183);
		fRecCl0[0] = ((fConstCl9 * fRecCl0[1]) + (fConstCl8 * ((fConstCl5 * fRecCl1[0]) + (fConstCl6 * fRecCl1[1]))));
		bufCl[i] = (FAUSTFLOAT)fRecCl0[0];
		// post processing
		fRecCl0[1] = fRecCl0[0];
		fRecCl1[2] = fRecCl1[1]; fRecCl1[1] = fRecCl1[0];
		fRecCl9[1] = fRecCl9[0];
		fRecCl2[2] = fRecCl2[1]; fRecCl2[1] = fRecCl2[0];
		fRecCl3[1] = fRecCl3[0];
		fRecCl4[1] = fRecCl4[0];
		fRecCl5[2] = fRecCl5[1]; fRecCl5[1] = fRecCl5[0];
		fRecCl8[1] = fRecCl8[0];
		fRecCl6[2] = fRecCl6[1]; fRecCl6[1] = fRecCl6[0];
		fRecCl7[1] = fRecCl7[0];
		fVecCl0[1] = fVecCl0[0];
	}
	smpCl.down(bufCl, output0);

	for (int i=0; i<count; i++) {
		output0[i] = ((fSlowdw1 * (double)dryinput[i]) + (fSlowdw0 * (double)output0[i]));
	}

}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerVar("cstbt1.wet_dry",N_("Dry/Wet"),"S",N_("percentage of processed signal in output signal"),&fsliderdw0, 1e+02, 0.0, 1e+02, 1.0);
	reg.registerVar("cstbt1.Attack",N_("Attack"),"S","",&fslider0, 0.5, 0.0, 1.0, 0.01);
	reg.registerVar("cstbt1.Level",N_("Level"),"S","",&fslider2, 0.5, 0.0, 1.0, 0.01);
	reg.registerVar("cstbt1.Tone",N_("Tone"),"S","",&fslider1, 0.5, 0.0, 1.0, 0.01);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

const char *Dsp::glade_def = "\
<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<interface>\n\
  <!-- interface-requires gxwidgets 0.0 -->\n\
  <requires lib=\"gtk+\" version=\"2.20\"/>\n\
  <!-- interface-naming-policy project-wide -->\n\
  <object class=\"GtkWindow\" id=\"window1\">\n\
    <property name=\"can_focus\">False</property>\n\
    <child>\n\
      <object class=\"GtkVBox\" id=\"vbox1\">\n\
        <property name=\"visible\">True</property>\n\
        <property name=\"can_focus\">False</property>\n\
        <child>\n\
          <object class=\"GtkHBox\" id=\"rackbox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GtkHBox\" id=\"hbox1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"spacing\">10</property>\n\
                <child>\n\
                  <object class=\"GtkVBox\" id=\"vbox2\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label1:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob1\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">cstbt1.Attack</property>\n\
                        <property name=\"label_ref\">label1:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">0</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkVBox\" id=\"vbox3\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label2:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob2\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">cstbt1.Tone</property>\n\
                        <property name=\"label_ref\">label2:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">1</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkVBox\" id=\"vbox4\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label3:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxMidKnob\" id=\"gxbigknob3\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">cstbt1.Level</property>\n\
                        <property name=\"label_ref\">label3:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">2</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkVBox\" id=\"vbox5\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label4:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob4\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">cstbt1.wet_dry</property>\n\
                        <property name=\"label_ref\">label4:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">3</property>\n\
                  </packing>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"pack_type\">end</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">False</property>\n\
            <property name=\"position\">0</property>\n\
          </packing>\n\
        </child>\n\
        <child>\n\
          <object class=\"GtkHBox\" id=\"minibox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GxHSlider\" id=\"gxhslider1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">True</property>\n\
                <property name=\"receives_default\">True</property>\n\
                <property name=\"round_digits\">0</property>\n\
                <property name=\"var_id\">cstbt1.Level</property>\n\
                <property name=\"show_value\">False</property>\n\
                <property name=\"value_position\">right</property>\n\
                <property name=\"value_xalign\">0.52000000000000002</property>\n\
                <property name=\"label_ref\">label0:rack_label</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
            <child>\n\
              <object class=\"GtkLabel\" id=\"label0:rack_label\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"xalign\">0</property>\n\
                <property name=\"label\" translatable=\"yes\">Level</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">1</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">True</property>\n\
            <property name=\"position\">1</property>\n\
          </packing>\n\
        </child>\n\
      </object>\n\
    </child>\n\
  </object>\n\
</interface>\n\
";

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_GLADE) {
        b.load_glade(glade_def);
        return 0;
    }
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("cstbt1" "." p)

b.openHorizontalhideBox("");
    b.create_master_slider(PARAM("Level"), "Level");
b.closeBox();
b.openHorizontalBox("");

    b.create_small_rackknobr(PARAM("Level"), "Level");

    b.create_small_rackknobr(PARAM("Tone"), "Tone");

    b.create_small_rackknobr(PARAM("Attack"), "Attack");
    b.create_small_rackknobr(PARAM("wet_dry"), "dry/wet");
b.closeBox();

#undef PARAM
        return 0;
    }
	return -1;
}

int Dsp::load_ui_f_static(const UiBuilder& b, int form)
{
	return static_cast<Dsp*>(b.plugin)->load_ui_f(b, form);
}
PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace cstb
} // end namespace pluginlib
