// generated from file '../src/plugins/zita_rev1.dsp' by dsp2cc:
// Code generated with Faust 0.9.43 (http://faust.grame.fr)


#include "gx_faust_support.h"
#include "gx_plugin.h"
#define N_(x) (x)

namespace pluginlib {
namespace zita_rev1 {
static FAUSTFLOAT 	fslider0;
static int 	iConst0;
static double 	fConst1;
static double 	fConst2;
static FAUSTFLOAT 	fslider1;
static double 	fConst3;
static FAUSTFLOAT 	fslider2;
static double 	fConst4;
static double 	fRec13[2];
static FAUSTFLOAT 	fslider3;
static double 	fRec12[2];
static int 	IOTA;
static double 	fVec0[8192];
static double 	fConst5;
static int 	iConst6;
static double 	fVec1[8192];
static FAUSTFLOAT 	fslider4;
static double 	fConst7;
static double 	fVec2[2048];
static int 	iConst8;
static double 	fRec10[2];
static double 	fConst9;
static double 	fConst10;
static double 	fRec17[2];
static double 	fRec16[2];
static double 	fVec3[8192];
static double 	fConst11;
static int 	iConst12;
static double 	fVec4[1024];
static int 	iConst13;
static double 	fRec14[2];
static double 	fConst14;
static double 	fConst15;
static double 	fRec21[2];
static double 	fRec20[2];
static double 	fVec5[8192];
static double 	fConst16;
static int 	iConst17;
static double 	fVec6[2048];
static int 	iConst18;
static double 	fRec18[2];
static double 	fConst19;
static double 	fConst20;
static double 	fRec25[2];
static double 	fRec24[2];
static double 	fVec7[8192];
static double 	fConst21;
static int 	iConst22;
static double 	fVec8[1024];
static int 	iConst23;
static double 	fRec22[2];
static double 	fConst24;
static double 	fConst25;
static double 	fRec29[2];
static double 	fRec28[2];
static double 	fVec9[16384];
static double 	fConst26;
static int 	iConst27;
static double 	fVec10[8192];
static double 	fVec11[2048];
static int 	iConst28;
static double 	fRec26[2];
static double 	fConst29;
static double 	fConst30;
static double 	fRec33[2];
static double 	fRec32[2];
static double 	fVec12[8192];
static double 	fConst31;
static int 	iConst32;
static double 	fVec13[2048];
static int 	iConst33;
static double 	fRec30[2];
static double 	fConst34;
static double 	fConst35;
static double 	fRec37[2];
static double 	fRec36[2];
static double 	fVec14[16384];
static double 	fConst36;
static int 	iConst37;
static double 	fVec15[2048];
static int 	iConst38;
static double 	fRec34[2];
static double 	fConst39;
static double 	fConst40;
static double 	fRec41[2];
static double 	fRec40[2];
static double 	fVec16[16384];
static double 	fConst41;
static int 	iConst42;
static double 	fVec17[1024];
static int 	iConst43;
static double 	fRec38[2];
static double 	fRec2[3];
static double 	fRec3[3];
static double 	fRec4[3];
static double 	fRec5[3];
static double 	fRec6[3];
static double 	fRec7[3];
static double 	fRec8[3];
static double 	fRec9[3];
static FAUSTFLOAT 	fslider5;
static double 	fConst44;
static FAUSTFLOAT 	fslider6;
static double 	fRec1[3];
static FAUSTFLOAT 	fslider7;
static FAUSTFLOAT 	fslider8;
static double 	fRec0[3];
static FAUSTFLOAT 	fslider9;
static double 	fRec42[2];
static FAUSTFLOAT 	fslider10;
static double 	fRec43[2];
static double 	fRec45[3];
static double 	fRec44[3];
static int	fSamplingFreq;

static void clear_state(PluginDef* = 0)
{
	for (int i=0; i<2; i++) fRec13[i] = 0;
	for (int i=0; i<2; i++) fRec12[i] = 0;
	for (int i=0; i<8192; i++) fVec0[i] = 0;
	for (int i=0; i<8192; i++) fVec1[i] = 0;
	for (int i=0; i<2048; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fRec17[i] = 0;
	for (int i=0; i<2; i++) fRec16[i] = 0;
	for (int i=0; i<8192; i++) fVec3[i] = 0;
	for (int i=0; i<1024; i++) fVec4[i] = 0;
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<2; i++) fRec20[i] = 0;
	for (int i=0; i<8192; i++) fVec5[i] = 0;
	for (int i=0; i<2048; i++) fVec6[i] = 0;
	for (int i=0; i<2; i++) fRec18[i] = 0;
	for (int i=0; i<2; i++) fRec25[i] = 0;
	for (int i=0; i<2; i++) fRec24[i] = 0;
	for (int i=0; i<8192; i++) fVec7[i] = 0;
	for (int i=0; i<1024; i++) fVec8[i] = 0;
	for (int i=0; i<2; i++) fRec22[i] = 0;
	for (int i=0; i<2; i++) fRec29[i] = 0;
	for (int i=0; i<2; i++) fRec28[i] = 0;
	for (int i=0; i<16384; i++) fVec9[i] = 0;
	for (int i=0; i<8192; i++) fVec10[i] = 0;
	for (int i=0; i<2048; i++) fVec11[i] = 0;
	for (int i=0; i<2; i++) fRec26[i] = 0;
	for (int i=0; i<2; i++) fRec33[i] = 0;
	for (int i=0; i<2; i++) fRec32[i] = 0;
	for (int i=0; i<8192; i++) fVec12[i] = 0;
	for (int i=0; i<2048; i++) fVec13[i] = 0;
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<2; i++) fRec37[i] = 0;
	for (int i=0; i<2; i++) fRec36[i] = 0;
	for (int i=0; i<16384; i++) fVec14[i] = 0;
	for (int i=0; i<2048; i++) fVec15[i] = 0;
	for (int i=0; i<2; i++) fRec34[i] = 0;
	for (int i=0; i<2; i++) fRec41[i] = 0;
	for (int i=0; i<2; i++) fRec40[i] = 0;
	for (int i=0; i<16384; i++) fVec16[i] = 0;
	for (int i=0; i<1024; i++) fVec17[i] = 0;
	for (int i=0; i<2; i++) fRec38[i] = 0;
	for (int i=0; i<3; i++) fRec2[i] = 0;
	for (int i=0; i<3; i++) fRec3[i] = 0;
	for (int i=0; i<3; i++) fRec4[i] = 0;
	for (int i=0; i<3; i++) fRec5[i] = 0;
	for (int i=0; i<3; i++) fRec6[i] = 0;
	for (int i=0; i<3; i++) fRec7[i] = 0;
	for (int i=0; i<3; i++) fRec8[i] = 0;
	for (int i=0; i<3; i++) fRec9[i] = 0;
	for (int i=0; i<3; i++) fRec1[i] = 0;
	for (int i=0; i<3; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec42[i] = 0;
	for (int i=0; i<2; i++) fRec43[i] = 0;
	for (int i=0; i<3; i++) fRec45[i] = 0;
	for (int i=0; i<3; i++) fRec44[i] = 0;
}

static void init(unsigned int samplingFreq, PluginDef* = 0)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = floor((0.5 + (0.174713 * iConst0)));
	fConst2 = ((0 - (6.907755278982138 * fConst1)) / iConst0);
	fConst3 = (6.283185307179586 / double(iConst0));
	fConst4 = (3.141592653589793 / iConst0);
	IOTA = 0;
	fConst5 = floor((0.5 + (0.022904 * iConst0)));
	iConst6 = int((int((fConst1 - fConst5)) & 8191));
	fConst7 = (0.001 * iConst0);
	iConst8 = int((int((fConst5 - 1)) & 2047));
	fConst9 = floor((0.5 + (0.153129 * iConst0)));
	fConst10 = ((0 - (6.907755278982138 * fConst9)) / iConst0);
	fConst11 = floor((0.5 + (0.020346 * iConst0)));
	iConst12 = int((int((fConst9 - fConst11)) & 8191));
	iConst13 = int((int((fConst11 - 1)) & 1023));
	fConst14 = floor((0.5 + (0.127837 * iConst0)));
	fConst15 = ((0 - (6.907755278982138 * fConst14)) / iConst0);
	fConst16 = floor((0.5 + (0.031604 * iConst0)));
	iConst17 = int((int((fConst14 - fConst16)) & 8191));
	iConst18 = int((int((fConst16 - 1)) & 2047));
	fConst19 = floor((0.5 + (0.125 * iConst0)));
	fConst20 = ((0 - (6.907755278982138 * fConst19)) / iConst0);
	fConst21 = floor((0.5 + (0.013458 * iConst0)));
	iConst22 = int((int((fConst19 - fConst21)) & 8191));
	iConst23 = int((int((fConst21 - 1)) & 1023));
	fConst24 = floor((0.5 + (0.210389 * iConst0)));
	fConst25 = ((0 - (6.907755278982138 * fConst24)) / iConst0);
	fConst26 = floor((0.5 + (0.024421 * iConst0)));
	iConst27 = int((int((fConst24 - fConst26)) & 16383));
	iConst28 = int((int((fConst26 - 1)) & 2047));
	fConst29 = floor((0.5 + (0.192303 * iConst0)));
	fConst30 = ((0 - (6.907755278982138 * fConst29)) / iConst0);
	fConst31 = floor((0.5 + (0.029291 * iConst0)));
	iConst32 = int((int((fConst29 - fConst31)) & 8191));
	iConst33 = int((int((fConst31 - 1)) & 2047));
	fConst34 = floor((0.5 + (0.256891 * iConst0)));
	fConst35 = ((0 - (6.907755278982138 * fConst34)) / iConst0);
	fConst36 = floor((0.5 + (0.027333 * iConst0)));
	iConst37 = int((int((fConst34 - fConst36)) & 16383));
	iConst38 = int((int((fConst36 - 1)) & 2047));
	fConst39 = floor((0.5 + (0.219991 * iConst0)));
	fConst40 = ((0 - (6.907755278982138 * fConst39)) / iConst0);
	fConst41 = floor((0.5 + (0.019123 * iConst0)));
	iConst42 = int((int((fConst39 - fConst41)) & 16383));
	iConst43 = int((int((fConst41 - 1)) & 1023));
	fConst44 = (6.283185307179586 / iConst0);
	clear_state();
}

static void compute(int count, float *input0, float *input1, float *output0, float *output1, PluginDef *)
{
	double 	fSlow0 = fslider0;
	double 	fSlow1 = exp((fConst2 / fSlow0));
	double 	fSlow2 = faustpower<2>(fSlow1);
	double 	fSlow3 = (1.0 - fSlow2);
	double 	fSlow4 = cos((fConst3 * fslider1));
	double 	fSlow5 = (1.0 - (fSlow4 * fSlow2));
	double 	fSlow6 = sqrt(((faustpower<2>(fSlow5) / faustpower<2>(fSlow3)) - 1.0));
	double 	fSlow7 = (fSlow5 / fSlow3);
	double 	fSlow8 = (fSlow7 - fSlow6);
	double 	fSlow9 = (1.0 / tan((fConst4 * fslider2)));
	double 	fSlow10 = (1 + fSlow9);
	double 	fSlow11 = (0 - ((1 - fSlow9) / fSlow10));
	double 	fSlow12 = (1.0 / fSlow10);
	double 	fSlow13 = fslider3;
	double 	fSlow14 = ((exp((fConst2 / fSlow13)) / fSlow1) - 1);
	double 	fSlow15 = (fSlow1 * ((1.0 + fSlow6) - fSlow7));
	int 	iSlow16 = int((int((fConst7 * fslider4)) & 8191));
	double 	fSlow17 = exp((fConst10 / fSlow0));
	double 	fSlow18 = faustpower<2>(fSlow17);
	double 	fSlow19 = (1.0 - fSlow18);
	double 	fSlow20 = (1.0 - (fSlow4 * fSlow18));
	double 	fSlow21 = sqrt(((faustpower<2>(fSlow20) / faustpower<2>(fSlow19)) - 1.0));
	double 	fSlow22 = (fSlow20 / fSlow19);
	double 	fSlow23 = (fSlow22 - fSlow21);
	double 	fSlow24 = ((exp((fConst10 / fSlow13)) / fSlow17) - 1);
	double 	fSlow25 = (fSlow17 * ((1.0 + fSlow21) - fSlow22));
	double 	fSlow26 = exp((fConst15 / fSlow0));
	double 	fSlow27 = faustpower<2>(fSlow26);
	double 	fSlow28 = (1.0 - fSlow27);
	double 	fSlow29 = (1.0 - (fSlow4 * fSlow27));
	double 	fSlow30 = sqrt(((faustpower<2>(fSlow29) / faustpower<2>(fSlow28)) - 1.0));
	double 	fSlow31 = (fSlow29 / fSlow28);
	double 	fSlow32 = (fSlow31 - fSlow30);
	double 	fSlow33 = ((exp((fConst15 / fSlow13)) / fSlow26) - 1);
	double 	fSlow34 = (fSlow26 * ((1.0 + fSlow30) - fSlow31));
	double 	fSlow35 = exp((fConst20 / fSlow0));
	double 	fSlow36 = faustpower<2>(fSlow35);
	double 	fSlow37 = (1.0 - fSlow36);
	double 	fSlow38 = (1.0 - (fSlow4 * fSlow36));
	double 	fSlow39 = sqrt(((faustpower<2>(fSlow38) / faustpower<2>(fSlow37)) - 1.0));
	double 	fSlow40 = (fSlow38 / fSlow37);
	double 	fSlow41 = (fSlow40 - fSlow39);
	double 	fSlow42 = ((exp((fConst20 / fSlow13)) / fSlow35) - 1);
	double 	fSlow43 = (fSlow35 * ((1.0 + fSlow39) - fSlow40));
	double 	fSlow44 = exp((fConst25 / fSlow0));
	double 	fSlow45 = faustpower<2>(fSlow44);
	double 	fSlow46 = (1.0 - fSlow45);
	double 	fSlow47 = (1.0 - (fSlow4 * fSlow45));
	double 	fSlow48 = sqrt(((faustpower<2>(fSlow47) / faustpower<2>(fSlow46)) - 1.0));
	double 	fSlow49 = (fSlow47 / fSlow46);
	double 	fSlow50 = (fSlow49 - fSlow48);
	double 	fSlow51 = ((exp((fConst25 / fSlow13)) / fSlow44) - 1);
	double 	fSlow52 = (fSlow44 * ((1.0 + fSlow48) - fSlow49));
	double 	fSlow53 = exp((fConst30 / fSlow0));
	double 	fSlow54 = faustpower<2>(fSlow53);
	double 	fSlow55 = (1.0 - fSlow54);
	double 	fSlow56 = (1.0 - (fSlow4 * fSlow54));
	double 	fSlow57 = sqrt(((faustpower<2>(fSlow56) / faustpower<2>(fSlow55)) - 1.0));
	double 	fSlow58 = (fSlow56 / fSlow55);
	double 	fSlow59 = (fSlow58 - fSlow57);
	double 	fSlow60 = ((exp((fConst30 / fSlow13)) / fSlow53) - 1);
	double 	fSlow61 = (fSlow53 * ((1.0 + fSlow57) - fSlow58));
	double 	fSlow62 = exp((fConst35 / fSlow0));
	double 	fSlow63 = faustpower<2>(fSlow62);
	double 	fSlow64 = (1.0 - fSlow63);
	double 	fSlow65 = (1.0 - (fSlow4 * fSlow63));
	double 	fSlow66 = sqrt(((faustpower<2>(fSlow65) / faustpower<2>(fSlow64)) - 1.0));
	double 	fSlow67 = (fSlow65 / fSlow64);
	double 	fSlow68 = (fSlow67 - fSlow66);
	double 	fSlow69 = ((exp((fConst35 / fSlow13)) / fSlow62) - 1);
	double 	fSlow70 = (fSlow62 * ((1.0 + fSlow66) - fSlow67));
	double 	fSlow71 = exp((fConst40 / fSlow0));
	double 	fSlow72 = faustpower<2>(fSlow71);
	double 	fSlow73 = (1.0 - fSlow72);
	double 	fSlow74 = (1.0 - (fSlow72 * fSlow4));
	double 	fSlow75 = sqrt(((faustpower<2>(fSlow74) / faustpower<2>(fSlow73)) - 1.0));
	double 	fSlow76 = (fSlow74 / fSlow73);
	double 	fSlow77 = (fSlow76 - fSlow75);
	double 	fSlow78 = ((exp((fConst40 / fSlow13)) / fSlow71) - 1);
	double 	fSlow79 = (fSlow71 * ((1.0 + fSlow75) - fSlow76));
	double 	fSlow80 = fslider5;
	double 	fSlow81 = pow(10,(0.05 * fslider6));
	double 	fSlow82 = (fConst44 * (fSlow80 / sqrt(fSlow81)));
	double 	fSlow83 = ((1.0 - fSlow82) / (1.0 + fSlow82));
	double 	fSlow84 = ((1 + fSlow83) * (0 - cos((fConst44 * fSlow80))));
	double 	fSlow85 = fslider7;
	double 	fSlow86 = pow(10,(0.05 * fslider8));
	double 	fSlow87 = (fConst44 * (fSlow85 / sqrt(fSlow86)));
	double 	fSlow88 = ((1.0 - fSlow87) / (1.0 + fSlow87));
	double 	fSlow89 = ((1 + fSlow88) * (0 - cos((fConst44 * fSlow85))));
	double 	fSlow90 = (0.0010000000000000009 * fslider9);
	double 	fSlow91 = (0.0010000000000000009 * fslider10);
	for (int i=0; i<count; i++) {
		fRec13[0] = ((fSlow12 * (fRec6[1] + fRec6[2])) + (fSlow11 * fRec13[1]));
		fRec12[0] = ((fSlow15 * (fRec6[1] + (fSlow14 * fRec13[0]))) + (fSlow8 * fRec12[1]));
		fVec0[IOTA&8191] = (1e-20 + (0.35355339059327373 * fRec12[0]));
		double fTemp0 = (double)input0[i];
		fVec1[IOTA&8191] = fTemp0;
		double fTemp1 = (0.3 * fVec1[(IOTA-iSlow16)&8191]);
		double fTemp2 = ((fTemp1 + fVec0[(IOTA-iConst6)&8191]) - (0.6 * fRec10[1]));
		fVec2[IOTA&2047] = fTemp2;
		fRec10[0] = fVec2[(IOTA-iConst8)&2047];
		double 	fRec11 = (0.6 * fVec2[IOTA&2047]);
		fRec17[0] = ((fSlow12 * (fRec2[1] + fRec2[2])) + (fSlow11 * fRec17[1]));
		fRec16[0] = ((fSlow25 * (fRec2[1] + (fSlow24 * fRec17[0]))) + (fSlow23 * fRec16[1]));
		fVec3[IOTA&8191] = (1e-20 + (0.35355339059327373 * fRec16[0]));
		double fTemp3 = ((fTemp1 + fVec3[(IOTA-iConst12)&8191]) - (0.6 * fRec14[1]));
		fVec4[IOTA&1023] = fTemp3;
		fRec14[0] = fVec4[(IOTA-iConst13)&1023];
		double 	fRec15 = (0.6 * fVec4[IOTA&1023]);
		double fTemp4 = (fRec15 + fRec11);
		fRec21[0] = ((fSlow12 * (fRec4[1] + fRec4[2])) + (fSlow11 * fRec21[1]));
		fRec20[0] = ((fSlow34 * (fRec4[1] + (fSlow33 * fRec21[0]))) + (fSlow32 * fRec20[1]));
		fVec5[IOTA&8191] = (1e-20 + (0.35355339059327373 * fRec20[0]));
		double fTemp5 = (fVec5[(IOTA-iConst17)&8191] - (fTemp1 + (0.6 * fRec18[1])));
		fVec6[IOTA&2047] = fTemp5;
		fRec18[0] = fVec6[(IOTA-iConst18)&2047];
		double 	fRec19 = (0.6 * fVec6[IOTA&2047]);
		fRec25[0] = ((fSlow12 * (fRec8[1] + fRec8[2])) + (fSlow11 * fRec25[1]));
		fRec24[0] = ((fSlow43 * (fRec8[1] + (fSlow42 * fRec25[0]))) + (fSlow41 * fRec24[1]));
		fVec7[IOTA&8191] = (1e-20 + (0.35355339059327373 * fRec24[0]));
		double fTemp6 = (fVec7[(IOTA-iConst22)&8191] - (fTemp1 + (0.6 * fRec22[1])));
		fVec8[IOTA&1023] = fTemp6;
		fRec22[0] = fVec8[(IOTA-iConst23)&1023];
		double 	fRec23 = (0.6 * fVec8[IOTA&1023]);
		double fTemp7 = (fRec23 + (fRec19 + fTemp4));
		fRec29[0] = ((fSlow12 * (fRec3[1] + fRec3[2])) + (fSlow11 * fRec29[1]));
		fRec28[0] = ((fSlow52 * (fRec3[1] + (fSlow51 * fRec29[0]))) + (fSlow50 * fRec28[1]));
		fVec9[IOTA&16383] = (1e-20 + (0.35355339059327373 * fRec28[0]));
		double fTemp8 = (double)input1[i];
		fVec10[IOTA&8191] = fTemp8;
		double fTemp9 = (0.3 * fVec10[(IOTA-iSlow16)&8191]);
		double fTemp10 = ((fTemp9 + fVec9[(IOTA-iConst27)&16383]) + (0.6 * fRec26[1]));
		fVec11[IOTA&2047] = fTemp10;
		fRec26[0] = fVec11[(IOTA-iConst28)&2047];
		double 	fRec27 = (0 - (0.6 * fVec11[IOTA&2047]));
		fRec33[0] = ((fSlow12 * (fRec7[1] + fRec7[2])) + (fSlow11 * fRec33[1]));
		fRec32[0] = ((fSlow61 * (fRec7[1] + (fSlow60 * fRec33[0]))) + (fSlow59 * fRec32[1]));
		fVec12[IOTA&8191] = (1e-20 + (0.35355339059327373 * fRec32[0]));
		double fTemp11 = ((fTemp9 + fVec12[(IOTA-iConst32)&8191]) + (0.6 * fRec30[1]));
		fVec13[IOTA&2047] = fTemp11;
		fRec30[0] = fVec13[(IOTA-iConst33)&2047];
		double 	fRec31 = (0 - (0.6 * fVec13[IOTA&2047]));
		fRec37[0] = ((fSlow12 * (fRec5[1] + fRec5[2])) + (fSlow11 * fRec37[1]));
		fRec36[0] = ((fSlow70 * (fRec5[1] + (fSlow69 * fRec37[0]))) + (fSlow68 * fRec36[1]));
		fVec14[IOTA&16383] = (1e-20 + (0.35355339059327373 * fRec36[0]));
		double fTemp12 = ((fVec14[(IOTA-iConst37)&16383] + (0.6 * fRec34[1])) - fTemp9);
		fVec15[IOTA&2047] = fTemp12;
		fRec34[0] = fVec15[(IOTA-iConst38)&2047];
		double 	fRec35 = (0 - (0.6 * fVec15[IOTA&2047]));
		fRec41[0] = ((fSlow12 * (fRec9[1] + fRec9[2])) + (fSlow11 * fRec41[1]));
		fRec40[0] = ((fSlow79 * (fRec9[1] + (fSlow78 * fRec41[0]))) + (fSlow77 * fRec40[1]));
		fVec16[IOTA&16383] = (1e-20 + (0.35355339059327373 * fRec40[0]));
		double fTemp13 = ((fVec16[(IOTA-iConst42)&16383] + (0.6 * fRec38[1])) - fTemp9);
		fVec17[IOTA&1023] = fTemp13;
		fRec38[0] = fVec17[(IOTA-iConst43)&1023];
		double 	fRec39 = (0 - (0.6 * fVec17[IOTA&1023]));
		fRec2[0] = (fRec14[1] + (fRec10[1] + (fRec18[1] + (fRec22[1] + (fRec26[1] + (fRec30[1] + (fRec34[1] + (fRec38[1] + (fRec39 + (fRec35 + (fRec31 + (fRec27 + fTemp7))))))))))));
		fRec3[0] = (0 - ((fRec26[1] + (fRec30[1] + (fRec34[1] + (fRec38[1] + (fRec39 + (fRec35 + (fRec27 + fRec31))))))) - (fRec14[1] + (fRec10[1] + (fRec18[1] + (fRec22[1] + fTemp7))))));
		double fTemp14 = (fRec19 + fRec23);
		fRec4[0] = (0 - ((fRec18[1] + (fRec22[1] + (fRec34[1] + (fRec38[1] + (fRec39 + (fRec35 + fTemp14)))))) - (fRec14[1] + (fRec10[1] + (fRec26[1] + (fRec30[1] + (fRec31 + (fRec27 + fTemp4))))))));
		fRec5[0] = (0 - ((fRec18[1] + (fRec22[1] + (fRec26[1] + (fRec30[1] + (fRec31 + (fRec27 + fTemp14)))))) - (fRec14[1] + (fRec10[1] + (fRec34[1] + (fRec38[1] + (fRec39 + (fRec35 + fTemp4))))))));
		double fTemp15 = (fRec15 + fRec19);
		double fTemp16 = (fRec11 + fRec23);
		fRec6[0] = (0 - ((fRec10[1] + (fRec22[1] + (fRec30[1] + (fRec38[1] + (fRec39 + (fRec31 + fTemp16)))))) - (fRec14[1] + (fRec18[1] + (fRec26[1] + (fRec34[1] + (fRec35 + (fRec27 + fTemp15))))))));
		fRec7[0] = (0 - ((fRec10[1] + (fRec22[1] + (fRec26[1] + (fRec34[1] + (fRec35 + (fRec27 + fTemp16)))))) - (fRec14[1] + (fRec18[1] + (fRec30[1] + (fRec38[1] + (fRec39 + (fRec31 + fTemp15))))))));
		double fTemp17 = (fRec15 + fRec23);
		double fTemp18 = (fRec11 + fRec19);
		fRec8[0] = (0 - ((fRec10[1] + (fRec18[1] + (fRec30[1] + (fRec34[1] + (fRec35 + (fRec31 + fTemp18)))))) - (fRec14[1] + (fRec22[1] + (fRec26[1] + (fRec38[1] + (fRec39 + (fRec27 + fTemp17))))))));
		fRec9[0] = (0 - ((fRec10[1] + (fRec18[1] + (fRec26[1] + (fRec38[1] + (fRec39 + (fRec27 + fTemp18)))))) - (fRec14[1] + (fRec22[1] + (fRec30[1] + (fRec34[1] + (fRec35 + (fRec31 + fTemp17))))))));
		double fTemp19 = (0.37 * (fRec3[0] + fRec4[0]));
		double fTemp20 = (fSlow84 * fRec1[1]);
		fRec1[0] = (0 - (((fSlow83 * fRec1[2]) + fTemp20) - fTemp19));
		double fTemp21 = (fSlow83 * fRec1[0]);
		double fTemp22 = (0.5 * ((fSlow81 * ((fTemp21 + (fRec1[2] + fTemp20)) - fTemp19)) + (fTemp21 + (fTemp20 + (fTemp19 + fRec1[2])))));
		double fTemp23 = (fSlow89 * fRec0[1]);
		fRec0[0] = (0 - (((fSlow88 * fRec0[2]) + fTemp23) - fTemp22));
		double fTemp24 = (fSlow88 * fRec0[0]);
		fRec42[0] = (fSlow90 + (0.999 * fRec42[1]));
		double fTemp25 = (1.0 + fRec42[0]);
		double fTemp26 = (1.0 - (0.5 * fTemp25));
		fRec43[0] = (fSlow91 + (0.999 * fRec43[1]));
		double fTemp27 = pow(10,(0.05 * fRec43[0]));
		output0[i] = (FAUSTFLOAT)(fTemp27 * ((fVec1[IOTA&8191] * fTemp26) + (0.25 * (fTemp25 * ((fSlow86 * ((fTemp24 + (fRec0[2] + fTemp23)) - fTemp22)) + (fTemp24 + (fTemp23 + (fTemp22 + fRec0[2]))))))));
		double fTemp28 = (0.37 * (fRec3[0] - fRec4[0]));
		double fTemp29 = (fSlow84 * fRec45[1]);
		fRec45[0] = (0 - (((fSlow83 * fRec45[2]) + fTemp29) - fTemp28));
		double fTemp30 = (fSlow83 * fRec45[0]);
		double fTemp31 = (0.5 * ((fSlow81 * ((fTemp30 + (fRec45[2] + fTemp29)) - fTemp28)) + (fTemp30 + (fTemp29 + (fTemp28 + fRec45[2])))));
		double fTemp32 = (fSlow89 * fRec44[1]);
		fRec44[0] = (0 - (((fSlow88 * fRec44[2]) + fTemp32) - fTemp31));
		double fTemp33 = (fSlow88 * fRec44[0]);
		output1[i] = (FAUSTFLOAT)(fTemp27 * ((fVec10[IOTA&8191] * fTemp26) + (0.25 * (fTemp25 * ((fSlow86 * ((fTemp33 + (fRec44[2] + fTemp32)) - fTemp31)) + (fTemp33 + (fTemp32 + (fTemp31 + fRec44[2]))))))));
		// post processing
		fRec44[2] = fRec44[1]; fRec44[1] = fRec44[0];
		fRec45[2] = fRec45[1]; fRec45[1] = fRec45[0];
		fRec43[1] = fRec43[0];
		fRec42[1] = fRec42[0];
		fRec0[2] = fRec0[1]; fRec0[1] = fRec0[0];
		fRec1[2] = fRec1[1]; fRec1[1] = fRec1[0];
		fRec9[2] = fRec9[1]; fRec9[1] = fRec9[0];
		fRec8[2] = fRec8[1]; fRec8[1] = fRec8[0];
		fRec7[2] = fRec7[1]; fRec7[1] = fRec7[0];
		fRec6[2] = fRec6[1]; fRec6[1] = fRec6[0];
		fRec5[2] = fRec5[1]; fRec5[1] = fRec5[0];
		fRec4[2] = fRec4[1]; fRec4[1] = fRec4[0];
		fRec3[2] = fRec3[1]; fRec3[1] = fRec3[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec38[1] = fRec38[0];
		fRec40[1] = fRec40[0];
		fRec41[1] = fRec41[0];
		fRec34[1] = fRec34[0];
		fRec36[1] = fRec36[0];
		fRec37[1] = fRec37[0];
		fRec30[1] = fRec30[0];
		fRec32[1] = fRec32[0];
		fRec33[1] = fRec33[0];
		fRec26[1] = fRec26[0];
		fRec28[1] = fRec28[0];
		fRec29[1] = fRec29[0];
		fRec22[1] = fRec22[0];
		fRec24[1] = fRec24[0];
		fRec25[1] = fRec25[0];
		fRec18[1] = fRec18[0];
		fRec20[1] = fRec20[0];
		fRec21[1] = fRec21[0];
		fRec14[1] = fRec14[0];
		fRec16[1] = fRec16[0];
		fRec17[1] = fRec17[0];
		fRec10[1] = fRec10[0];
		IOTA = IOTA+1;
		fRec12[1] = fRec12[0];
		fRec13[1] = fRec13[0];
	}
}

static int register_params(const ParamReg& reg)
{
	reg.registerVar("zita_rev1.output.level","Level","S","Output scale factor",&fslider10, 0.0, -7e+01, 4e+01, 0.1);
	reg.registerVar("zita_rev1.equalizer2.eq2_freq","Freq","S","Center-frequency of second-order Regalia-Mitra peaking equalizer section 2",&fslider7, 315.0, 4e+01, 2.5e+03, 1.0);
	reg.registerVar("zita_rev1.equalizer1.eq1_level","Level","S","Peak level in dB of second-order Regalia-Mitra peaking equalizer section 1",&fslider6, 0.0, -15.0, 15.0, 0.1);
	reg.registerVar("zita_rev1.equalizer1.eq1_freq","Freq","S","Center-frequency of second-order Regalia-Mitra peaking equalizer section 1",&fslider5, 315.0, 4e+01, 2.5e+03, 1.0);
	reg.registerVar("zita_rev1.input.in_delay","In Delay","S","Delay in ms before reverberation begins",&fslider4, 6e+01, 2e+01, 1e+02, 1.0);
	reg.registerVar("zita_rev1.decay_times.low_rt60","Low","S","T60 = time (in seconds) to decay 60dB in low-frequency band",&fslider3, 3.0, 1.0, 8.0, 0.1);
	reg.registerVar("zita_rev1.decay_times.lf_x","Freq X","S","Crossover frequency (Hz) separating low and middle frequencies",&fslider2, 2e+02, 5e+01, 1e+03, 1.0);
	reg.registerVar("zita_rev1.decay_times.hf_damping","HF Damping","S","Frequency (Hz) at which the high-frequency T60 is half the middle-band's T60",&fslider1, 6e+03, 1.5e+03, 2.352e+04, 1.0);
	reg.registerVar("zita_rev1.decay_times.mid_rt60","Mid","S","T60 = time (in seconds) to decay 60dB in middle band",&fslider0, 2.0, 1.0, 8.0, 0.1);
	reg.registerVar("zita_rev1.output.dry_wet_mix","Dry/Wet","S","-1 = dry, 1 = wet",&fslider9, 0.0, -1.0, 1.0, 0.01);
	reg.registerVar("zita_rev1.equalizer2.eq2_level","Level","S","Peak level in dB of second-order Regalia-Mitra peaking equalizer section 2",&fslider8, 0.0, -15.0, 15.0, 0.1);
	return 0;
}

static const char *glade_def = "\
<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<interface>\n\
  <requires lib=\"gtk+\" version=\"2.24\"/>\n\
  <!-- interface-requires gxwidgets 0.0 -->\n\
  <!-- interface-naming-policy project-wide -->\n\
  <object class=\"GtkWindow\" id=\"window1\">\n\
    <property name=\"can_focus\">False</property>\n\
    <property name=\"resizable\">False</property>\n\
    <property name=\"default_width\">0</property>\n\
    <property name=\"default_height\">0</property>\n\
    <child>\n\
      <object class=\"GtkVBox\" id=\"rackbox\">\n\
        <property name=\"visible\">True</property>\n\
        <property name=\"can_focus\">False</property>\n\
        <property name=\"spacing\">10</property>\n\
        <child>\n\
          <object class=\"GtkHBox\" id=\"hbox2\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <child>\n\
              <object class=\"GtkAlignment\" id=\"alignment5\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"yalign\">1</property>\n\
                <property name=\"xscale\">0.5</property>\n\
                <property name=\"yscale\">0</property>\n\
                <property name=\"bottom_padding\">7</property>\n\
                <child>\n\
                  <object class=\"GtkVBox\" id=\"vbox7\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label1\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">True</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnob\" id=\"gxsmallknob1\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"round_digits\">0</property>\n\
                        <property name=\"var_id\">zita_rev1.input.in_delay</property>\n\
                        <property name=\"label_ref\">label1</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">True</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">True</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
            <child>\n\
              <object class=\"GtkFrame\" id=\"frame4\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"label_xalign\">0.5</property>\n\
                <property name=\"shadow_type\">out</property>\n\
                <child>\n\
                  <object class=\"GtkAlignment\" id=\"alignment4\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"bottom_padding\">5</property>\n\
                    <property name=\"left_padding\">12</property>\n\
                    <child>\n\
                      <object class=\"GtkHBox\" id=\"hbox6\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <child>\n\
                          <object class=\"GtkVBox\" id=\"vbox9\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label3\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\">label</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob3\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"round_digits\">0</property>\n\
                                <property name=\"var_id\">zita_rev1.decay_times.low_rt60</property>\n\
                                <property name=\"label_ref\">label3</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkVBox\" id=\"vbox8\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label2\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\">label</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">False</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxWheel\" id=\"gxsmallknob2\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"round_digits\">0</property>\n\
                                <property name=\"var_id\">zita_rev1.decay_times.lf_x</property>\n\
                                <property name=\"label_ref\">label2</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">False</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"pack_type\">end</property>\n\
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
                        <child>\n\
                          <object class=\"GtkVBox\" id=\"vbox10\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label4\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\">label</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob4\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"round_digits\">0</property>\n\
                                <property name=\"var_id\">zita_rev1.decay_times.mid_rt60</property>\n\
                                <property name=\"label_ref\">label4</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">2</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkVBox\" id=\"vbox11\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label5\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\">label</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob5\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"round_digits\">0</property>\n\
                                <property name=\"var_id\">zita_rev1.decay_times.hf_damping</property>\n\
                                <property name=\"label_ref\">label5</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">3</property>\n\
                          </packing>\n\
                        </child>\n\
                      </object>\n\
                    </child>\n\
                  </object>\n\
                </child>\n\
                <child type=\"label\">\n\
                  <object class=\"GtkLabel\" id=\"label12\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"label\" translatable=\"yes\">Reverb Time T60</property>\n\
                    <property name=\"use_markup\">True</property>\n\
                  </object>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">True</property>\n\
                <property name=\"position\">1</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">False</property>\n\
            <property name=\"fill\">True</property>\n\
            <property name=\"position\">0</property>\n\
          </packing>\n\
        </child>\n\
        <child>\n\
          <object class=\"GtkHBox\" id=\"hbox1\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <child>\n\
              <object class=\"GtkFrame\" id=\"frame1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"label_xalign\">0.5</property>\n\
                <child>\n\
                  <object class=\"GtkAlignment\" id=\"alignment1\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"left_padding\">2</property>\n\
                    <property name=\"right_padding\">2</property>\n\
                    <child>\n\
                      <object class=\"GtkHBox\" id=\"hbox3\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <child>\n\
                          <object class=\"GtkVBox\" id=\"vbox1\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label6\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\">label</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob6\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"round_digits\">0</property>\n\
                                <property name=\"var_id\">zita_rev1.equalizer1.eq1_freq</property>\n\
                                <property name=\"label_ref\">label6</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkVBox\" id=\"vbox2\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label7\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\">label</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob7\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"round_digits\">0</property>\n\
                                <property name=\"var_id\">zita_rev1.equalizer1.eq1_level</property>\n\
                                <property name=\"label_ref\">label7</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
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
                </child>\n\
                <child type=\"label\">\n\
                  <object class=\"GtkLabel\" id=\"label15\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"label\" translatable=\"yes\">Eq1</property>\n\
                    <property name=\"use_markup\">True</property>\n\
                  </object>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">True</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
            <child>\n\
              <object class=\"GtkFrame\" id=\"frame2\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"label_xalign\">0.5</property>\n\
                <property name=\"shadow_type\">etched-out</property>\n\
                <child>\n\
                  <object class=\"GtkAlignment\" id=\"alignment2\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"left_padding\">12</property>\n\
                    <child>\n\
                      <object class=\"GtkHBox\" id=\"hbox4\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <child>\n\
                          <object class=\"GtkVBox\" id=\"vbox3\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label8\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\">label</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob8\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"round_digits\">0</property>\n\
                                <property name=\"var_id\">zita_rev1.equalizer2.eq2_freq</property>\n\
                                <property name=\"label_ref\">label8</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkVBox\" id=\"vbox4\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label9\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\">label</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob9\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"round_digits\">0</property>\n\
                                <property name=\"var_id\">zita_rev1.equalizer2.eq2_level</property>\n\
                                <property name=\"label_ref\">label9</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
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
                </child>\n\
                <child type=\"label\">\n\
                  <object class=\"GtkLabel\" id=\"label14\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"label\" translatable=\"yes\">Eq2</property>\n\
                    <property name=\"use_markup\">True</property>\n\
                  </object>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">True</property>\n\
                <property name=\"position\">1</property>\n\
              </packing>\n\
            </child>\n\
            <child>\n\
              <object class=\"GtkFrame\" id=\"frame3\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"label_xalign\">0.5</property>\n\
                <child>\n\
                  <object class=\"GtkAlignment\" id=\"alignment3\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"left_padding\">12</property>\n\
                    <child>\n\
                      <object class=\"GtkHBox\" id=\"hbox5\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <child>\n\
                          <object class=\"GtkVBox\" id=\"vbox5\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label10\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\">label</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob10\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"round_digits\">0</property>\n\
                                <property name=\"var_id\">zita_rev1.output.dry_wet_mix</property>\n\
                                <property name=\"label_ref\">label10</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">1</property>\n\
                              </packing>\n\
                            </child>\n\
                          </object>\n\
                          <packing>\n\
                            <property name=\"expand\">True</property>\n\
                            <property name=\"fill\">True</property>\n\
                            <property name=\"position\">0</property>\n\
                          </packing>\n\
                        </child>\n\
                        <child>\n\
                          <object class=\"GtkVBox\" id=\"vbox6\">\n\
                            <property name=\"visible\">True</property>\n\
                            <property name=\"can_focus\">False</property>\n\
                            <child>\n\
                              <object class=\"GtkLabel\" id=\"label11\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">False</property>\n\
                                <property name=\"label\">label</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
                                <property name=\"position\">0</property>\n\
                              </packing>\n\
                            </child>\n\
                            <child>\n\
                              <object class=\"GxSmallKnob\" id=\"gxsmallknob11\">\n\
                                <property name=\"visible\">True</property>\n\
                                <property name=\"can_focus\">True</property>\n\
                                <property name=\"receives_default\">True</property>\n\
                                <property name=\"round_digits\">0</property>\n\
                                <property name=\"var_id\">zita_rev1.output.level</property>\n\
                                <property name=\"label_ref\">label11</property>\n\
                              </object>\n\
                              <packing>\n\
                                <property name=\"expand\">True</property>\n\
                                <property name=\"fill\">True</property>\n\
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
                </child>\n\
                <child type=\"label\">\n\
                  <object class=\"GtkLabel\" id=\"label13\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"label\" translatable=\"yes\">Output</property>\n\
                    <property name=\"use_markup\">True</property>\n\
                  </object>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">True</property>\n\
                <property name=\"position\">2</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">False</property>\n\
            <property name=\"fill\">True</property>\n\
            <property name=\"position\">1</property>\n\
          </packing>\n\
        </child>\n\
      </object>\n\
    </child>\n\
  </object>\n\
</interface>\n\
";

static int load_ui(const UiBuilder& b) {
    b.load_glade(glade_def);
    return 0;
}

static const char* groups[] = {
	"equalizer2", N_("RM Peaking Equalizer 2"),
	"equalizer1", N_("RM Peaking Equalizer 1"),
	"output", N_("Output"),
	"input", N_("Input"),
	"decay_times", N_("Decay Times in Bands"),
	0
	};

PluginDef plugin = {
    PLUGINDEF_VERSION,
    0,   // flags
    "zita_rev1",  // id
    N_("Zita Rev1"),  // name
    groups,  // groups
    0,  // mono_audio
    compute,  // stereo_audio
    init,  // set_samplerate
    0,  // activate plugin
    register_params,
    load_ui,   // load_ui
    clear_state,  // clear_state
};

} // end namespace zita_rev1
} // end namespace pluginlib