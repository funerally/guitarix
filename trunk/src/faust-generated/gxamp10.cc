// generated from file '../src/faust/gxamp10.dsp' by dsp2cc:
// Code generated with Faust 0.9.43 (http://faust.grame.fr)

#include "valve.h"
namespace gxamp10 {
FAUSTFLOAT 	fslider0;
FAUSTFLOAT	*fslider0_;
#define fslider0 (*fslider0_)
static double 	fRec0[2];
static int 	iConst0;
static double 	fConst1;
static double 	fConst2;
static double 	fConst3;
static double 	fConst4;
static double 	fConst5;
static double 	fConst6;
static double 	fConst7;
static double 	fRec3[2];
static double 	fConst8;
static double 	fConst9;
static double 	fConst10;
FAUSTFLOAT 	fslider1;
FAUSTFLOAT	*fslider1_;
#define fslider1 (*fslider1_)
static double 	fRec8[2];
static double 	fConst11;
static double 	fConst12;
static double 	fConst13;
static double 	fConst14;
static double 	fConst15;
static double 	fConst16;
static double 	fConst17;
static double 	fConst18;
static double 	fConst19;
static double 	fConst20;
static double 	fConst21;
static double 	fConst22;
static double 	fConst23;
static double 	fConst24;
static double 	fConst25;
static double 	fConst26;
static double 	fConst27;
static double 	fConst28;
static double 	fConst29;
static double 	fConst30;
static double 	fConst31;
static double 	fConst32;
static double 	fConst33;
static double 	fConst34;
static double 	fConst35;
static double 	fConst36;
static double 	fConst37;
static double 	fConst38;
static double 	fConst39;
static double 	fConst40;
FAUSTFLOAT 	fslider2;
FAUSTFLOAT	*fslider2_;
#define fslider2 (*fslider2_)
static double 	fRec19[2];
static double 	fRec18[3];
static double 	fVec0[2];
static double 	fConst41;
static double 	fConst42;
static double 	fRec17[2];
static double 	fConst43;
static double 	fRec16[2];
static double 	fRec15[3];
static double 	fVec1[2];
static double 	fConst44;
static double 	fConst45;
static double 	fRec14[2];
static double 	fRec13[3];
static double 	fConst46;
static double 	fRec12[3];
FAUSTFLOAT 	fslider3;
FAUSTFLOAT	*fslider3_;
#define fslider3 (*fslider3_)
static double 	fConst47;
static double 	fConst48;
static double 	fConst49;
static double 	fConst50;
static double 	fRec23[2];
static double 	fRec22[3];
static double 	fVec2[2];
static double 	fConst51;
static double 	fConst52;
static double 	fRec21[2];
static double 	fRec20[3];
static double 	fConst53;
static double 	fConst54;
static double 	fConst55;
static double 	fConst56;
static double 	fRec27[2];
static double 	fRec26[3];
static double 	fConst57;
static double 	fRec25[3];
static double 	fRec24[3];
static double 	fRec29[2];
static double 	fRec28[3];
static double 	fVec3[2];
static double 	fConst58;
static double 	fRec11[2];
static double 	fConst59;
static double 	fConst60;
static double 	fConst61;
static double 	fConst62;
static double 	fRec30[2];
static double 	fRec10[3];
static double 	fConst63;
static double 	fRec9[2];
static double 	fVec4[2];
static double 	fRec7[2];
static double 	fConst64;
static double 	fConst65;
static double 	fConst66;
static double 	fConst67;
static double 	fRec31[2];
static double 	fRec6[3];
static double 	fRec5[2];
static double 	fVec5[2];
static double 	fRec4[2];
static double 	fRec2[3];
static double 	fRec1[2];
static double 	fRec34[2];
static double 	fRec33[3];
static double 	fRec32[2];
static int	fSamplingFreq;

static void clear_state(PluginDef* = 0)
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<2; i++) fRec19[i] = 0;
	for (int i=0; i<3; i++) fRec18[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec17[i] = 0;
	for (int i=0; i<2; i++) fRec16[i] = 0;
	for (int i=0; i<3; i++) fRec15[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec14[i] = 0;
	for (int i=0; i<3; i++) fRec13[i] = 0;
	for (int i=0; i<3; i++) fRec12[i] = 0;
	for (int i=0; i<2; i++) fRec23[i] = 0;
	for (int i=0; i<3; i++) fRec22[i] = 0;
	for (int i=0; i<2; i++) fVec2[i] = 0;
	for (int i=0; i<2; i++) fRec21[i] = 0;
	for (int i=0; i<3; i++) fRec20[i] = 0;
	for (int i=0; i<2; i++) fRec27[i] = 0;
	for (int i=0; i<3; i++) fRec26[i] = 0;
	for (int i=0; i<3; i++) fRec25[i] = 0;
	for (int i=0; i<3; i++) fRec24[i] = 0;
	for (int i=0; i<2; i++) fRec29[i] = 0;
	for (int i=0; i<3; i++) fRec28[i] = 0;
	for (int i=0; i<2; i++) fVec3[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	for (int i=0; i<2; i++) fRec30[i] = 0;
	for (int i=0; i<3; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fVec4[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fRec31[i] = 0;
	for (int i=0; i<3; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fVec5[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<3; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec34[i] = 0;
	for (int i=0; i<3; i++) fRec33[i] = 0;
	for (int i=0; i<2; i++) fRec32[i] = 0;
}

static void init(unsigned int samplingFreq, PluginDef* = 0)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = (1.0 / tan((97.38937226128358 / iConst0)));
	fConst2 = (1 + fConst1);
	fConst3 = (0 - ((1 - fConst1) / fConst2));
	fConst4 = (1.0 / tan((609.4689747964198 / iConst0)));
	fConst5 = (1 + fConst4);
	fConst6 = (0 - ((1 - fConst4) / fConst5));
	fConst7 = (0.0082 / fConst5);
	fConst8 = (1.0 / tan((20517.741620594938 / iConst0)));
	fConst9 = (1 + fConst8);
	fConst10 = (0 - ((1 - fConst8) / fConst9));
	fConst11 = tan((942.4777960769379 / iConst0));
	fConst12 = (1.0 / faustpower<2>(fConst11));
	fConst13 = (2 * (1 - fConst12));
	fConst14 = (1.0 / fConst11);
	fConst15 = (1 + ((fConst14 - 1.0) / fConst11));
	fConst16 = (1.0 / (1 + ((1.0 + fConst14) / fConst11)));
	fConst17 = tan((3769.9111843077517 / iConst0));
	fConst18 = (1.0 / faustpower<2>(fConst17));
	fConst19 = (2 * (1 - fConst18));
	fConst20 = (1.0 / fConst17);
	fConst21 = (1 + ((fConst20 - 1.0000000000000004) / fConst17));
	fConst22 = (1 + ((fConst20 + 1.0000000000000004) / fConst17));
	fConst23 = (1.0 / fConst22);
	fConst24 = (1 + fConst20);
	fConst25 = (0 - ((1 - fConst20) / fConst24));
	fConst26 = tan((10053.096491487338 / iConst0));
	fConst27 = (1.0 / faustpower<2>(fConst26));
	fConst28 = (2 * (1 - fConst27));
	fConst29 = (1.0 / fConst26);
	fConst30 = (1 + ((fConst29 - 1.0000000000000004) / fConst26));
	fConst31 = (1 + ((1.0000000000000004 + fConst29) / fConst26));
	fConst32 = (1.0 / fConst31);
	fConst33 = (1 + fConst29);
	fConst34 = (0 - ((1 - fConst29) / fConst33));
	fConst35 = tan((47123.8898038469 / iConst0));
	fConst36 = (2 * (1 - (1.0 / faustpower<2>(fConst35))));
	fConst37 = (1.0 / fConst35);
	fConst38 = (1 + ((fConst37 - 1.414213562373095) / fConst35));
	fConst39 = (1 + ((1.414213562373095 + fConst37) / fConst35));
	fConst40 = (1.0 / fConst39);
	fConst41 = (0 - fConst1);
	fConst42 = (1.0 / (fConst2 * fConst39));
	fConst43 = (1.0 / fConst33);
	fConst44 = (0 - fConst20);
	fConst45 = (1.0 / (fConst24 * fConst31));
	fConst46 = (2 * (0 - fConst18));
	fConst47 = (1 + ((fConst14 - 1.0000000000000004) / fConst11));
	fConst48 = (1.0 / (1 + ((fConst14 + 1.0000000000000004) / fConst11)));
	fConst49 = (1 + fConst14);
	fConst50 = (0 - ((1 - fConst14) / fConst49));
	fConst51 = (0 - fConst14);
	fConst52 = (1.0 / (fConst49 * fConst22));
	fConst53 = (2 * (0 - fConst12));
	fConst54 = (1 + ((fConst20 - 1.0) / fConst17));
	fConst55 = (1.0 / (1 + ((1.0 + fConst20) / fConst17)));
	fConst56 = (0 - fConst29);
	fConst57 = (2 * (0 - fConst27));
	fConst58 = (1.0 / fConst9);
	fConst59 = (1.0 / tan((270.1769682087222 / iConst0)));
	fConst60 = (1 + fConst59);
	fConst61 = (0 - ((1 - fConst59) / fConst60));
	fConst62 = (0.027 / fConst60);
	fConst63 = (0.05 / fConst2);
	fConst64 = (1.0 / tan((414.6902302738527 / iConst0)));
	fConst65 = (1 + fConst64);
	fConst66 = (0 - ((1 - fConst64) / fConst65));
	fConst67 = (0.015 / fConst65);
	clear_state();
}

static void compute(int count, float *input0, float *output0, PluginDef *)
{
	double 	fSlow0 = (0.0010000000000000009 * pow(10,(0.05 * fslider0)));
	double 	fSlow1 = (0.0010000000000000009 * pow(10,(0.05 * fslider1)));
	double 	fSlow2 = (1.000000000000001e-05 * fslider2);
	double 	fSlow3 = fslider3;
	double 	fSlow4 = pow(1e+01,(1.2 * fSlow3));
	double 	fSlow5 = (fConst48 * pow(1e+01,(2 * fSlow3)));
	double 	fSlow6 = pow(1e+01,(0.8 * fSlow3));
	double 	fSlow7 = (fConst48 * pow(1e+01,(0.9 * fSlow3)));
	double 	fSlow8 = (2 * (fSlow3 - 0.5));
	double 	fSlow9 = (1 - max(0, (0 - fSlow8)));
	double 	fSlow10 = (1.25 * fSlow3);
	double 	fSlow11 = (1 - max(0, fSlow8));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
		fRec3[0] = ((fConst7 * (fRec2[1] + fRec2[2])) + (fConst6 * fRec3[1]));
		fRec8[0] = (fSlow1 + (0.999 * fRec8[1]));
		double fTemp0 = (fConst13 * fRec12[1]);
		fRec19[0] = (fSlow2 + (0.999 * fRec19[1]));
		double fTemp1 = (double)input0[i];
		fRec18[0] = ((fTemp1 * fRec19[0]) - (fConst40 * ((fConst38 * fRec18[2]) + (fConst36 * fRec18[1]))));
		double fTemp2 = (fRec18[2] + (fRec18[0] + (2 * fRec18[1])));
		fVec0[0] = fTemp2;
		fRec17[0] = ((fConst42 * ((fConst41 * fVec0[1]) + (fConst1 * fVec0[0]))) + (fConst3 * fRec17[1]));
		fRec16[0] = ((fConst43 * (fRec17[0] + fRec17[1])) + (fConst34 * fRec16[1]));
		fRec15[0] = (fRec16[0] - (fConst32 * ((fConst30 * fRec15[2]) + (fConst28 * fRec15[1]))));
		double fTemp3 = (fRec15[2] + (fRec15[0] + (2 * fRec15[1])));
		fVec1[0] = fTemp3;
		fRec14[0] = ((fConst45 * ((fConst44 * fVec1[1]) + (fConst20 * fVec1[0]))) + (fConst25 * fRec14[1]));
		fRec13[0] = (fRec14[0] - (fConst23 * ((fConst21 * fRec13[2]) + (fConst19 * fRec13[1]))));
		fRec12[0] = ((fConst23 * (((fConst18 * fRec13[0]) + (fConst46 * fRec13[1])) + (fConst18 * fRec13[2]))) - (fConst16 * ((fConst15 * fRec12[2]) + fTemp0)));
		double fTemp4 = max(-1, min(1, (fSlow4 * (fRec12[2] + (fConst16 * (fTemp0 + (fConst15 * fRec12[0])))))));
		fRec23[0] = ((fConst45 * (fVec1[0] + fVec1[1])) + (fConst25 * fRec23[1]));
		fRec22[0] = (fRec23[0] - (fConst23 * ((fConst21 * fRec22[2]) + (fConst19 * fRec22[1]))));
		double fTemp5 = (fRec22[2] + (fRec22[0] + (2 * fRec22[1])));
		fVec2[0] = fTemp5;
		fRec21[0] = ((fConst52 * ((fConst51 * fVec2[1]) + (fConst14 * fVec2[0]))) + (fConst50 * fRec21[1]));
		fRec20[0] = (fRec21[0] - (fConst48 * ((fConst47 * fRec20[2]) + (fConst13 * fRec20[1]))));
		double fTemp6 = max(-1, min(1, (fSlow5 * (((fConst12 * fRec20[0]) + (fConst53 * fRec20[1])) + (fConst12 * fRec20[2])))));
		double fTemp7 = (fConst13 * fRec24[1]);
		double fTemp8 = (fConst19 * fRec25[1]);
		fRec27[0] = ((fConst43 * ((fConst56 * fRec17[1]) + (fConst29 * fRec17[0]))) + (fConst34 * fRec27[1]));
		fRec26[0] = (fRec27[0] - (fConst32 * ((fConst30 * fRec26[2]) + (fConst28 * fRec26[1]))));
		fRec25[0] = ((fConst32 * (((fConst27 * fRec26[0]) + (fConst57 * fRec26[1])) + (fConst27 * fRec26[2]))) - (fConst55 * ((fConst54 * fRec25[2]) + fTemp8)));
		fRec24[0] = ((fRec25[2] + (fConst55 * (fTemp8 + (fConst54 * fRec25[0])))) - (fConst16 * ((fConst15 * fRec24[2]) + fTemp7)));
		double fTemp9 = max(-1, min(1, (fSlow6 * (fRec24[2] + (fConst16 * (fTemp7 + (fConst15 * fRec24[0])))))));
		fRec29[0] = ((fConst52 * (fVec2[0] + fVec2[1])) + (fConst50 * fRec29[1]));
		fRec28[0] = (fRec29[0] - (fConst48 * ((fConst47 * fRec28[2]) + (fConst13 * fRec28[1]))));
		double fTemp10 = max(-1, min(1, (fSlow7 * (fRec28[2] + (fRec28[0] + (2 * fRec28[1]))))));
		double fTemp11 = ((1.2589412 * (fTemp10 * (1 - (0.3333333333333333 * faustpower<2>(fTemp10))))) + (1.584893192 * ((fTemp9 * (1 - (0.3333333333333333 * faustpower<2>(fTemp9)))) + ((fTemp6 * (1 - (0.3333333333333333 * faustpower<2>(fTemp6)))) + (0.8413951417869425 * (fTemp4 * (1 - (0.3333333333333333 * faustpower<2>(fTemp4)))))))));
		fVec3[0] = fTemp11;
		fRec11[0] = ((fConst58 * (fVec3[0] + fVec3[1])) + (fConst10 * fRec11[1]));
		fRec30[0] = ((fConst62 * (fRec10[1] + fRec10[2])) + (fConst61 * fRec30[1]));
		double fTemp12 = (1 - fRec19[0]);
		fRec10[0] = (Ftube(TUBE_TABLE_6DJ8_68k, (((fTemp1 * ((fSlow11 * fRec19[0]) + (fTemp12 * (1 + (fSlow10 * ((4 - (4 * fabs((fTemp1 * fTemp12)))) - 1)))))) + (fRec30[0] + (fSlow9 * fRec11[0]))) - 1.863946)) - 60.96496296296296);
		fRec9[0] = ((fConst63 * ((fConst41 * fRec10[1]) + (fConst1 * fRec10[0]))) + (fConst3 * fRec9[1]));
		double fTemp13 = (fRec9[0] * fRec8[0]);
		fVec4[0] = fTemp13;
		fRec7[0] = ((fConst58 * (fVec4[0] + fVec4[1])) + (fConst10 * fRec7[1]));
		fRec31[0] = ((fConst67 * (fRec6[1] + fRec6[2])) + (fConst66 * fRec31[1]));
		fRec6[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec31[0] + fRec7[0]) - 1.271609)) - 45.22606666666667);
		fRec5[0] = ((fConst63 * ((fConst41 * fRec6[1]) + (fConst1 * fRec6[0]))) + (fConst3 * fRec5[1]));
		double fTemp14 = (fRec8[0] * fRec5[0]);
		fVec5[0] = fTemp14;
		fRec4[0] = ((fConst58 * (fVec5[0] + fVec5[1])) + (fConst10 * fRec4[1]));
		fRec2[0] = (Ftube(TUBE_TABLE_6DJ8_250k, ((fRec4[0] + fRec3[0]) - 0.797043)) - 32.799634146341475);
		fRec1[0] = ((fConst63 * ((fConst41 * fRec2[1]) + (fConst1 * fRec2[0]))) + (fConst3 * fRec1[1]));
		fRec34[0] = ((fConst7 * (fRec33[1] + fRec33[2])) + (fConst6 * fRec34[1]));
		fRec33[0] = (Ftube(TUBE_TABLE_6DJ8_68k, ((fRec34[0] + fRec4[0]) - 0.799031)) - 32.55719512195121);
		fRec32[0] = ((fConst63 * ((fConst41 * fRec33[1]) + (fConst1 * fRec33[0]))) + (fConst3 * fRec32[1]));
		output0[i] = (FAUSTFLOAT)((fRec32[0] + fRec1[0]) * fRec0[0]);
		// post processing
		fRec32[1] = fRec32[0];
		fRec33[2] = fRec33[1]; fRec33[1] = fRec33[0];
		fRec34[1] = fRec34[0];
		fRec1[1] = fRec1[0];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec4[1] = fRec4[0];
		fVec5[1] = fVec5[0];
		fRec5[1] = fRec5[0];
		fRec6[2] = fRec6[1]; fRec6[1] = fRec6[0];
		fRec31[1] = fRec31[0];
		fRec7[1] = fRec7[0];
		fVec4[1] = fVec4[0];
		fRec9[1] = fRec9[0];
		fRec10[2] = fRec10[1]; fRec10[1] = fRec10[0];
		fRec30[1] = fRec30[0];
		fRec11[1] = fRec11[0];
		fVec3[1] = fVec3[0];
		fRec28[2] = fRec28[1]; fRec28[1] = fRec28[0];
		fRec29[1] = fRec29[0];
		fRec24[2] = fRec24[1]; fRec24[1] = fRec24[0];
		fRec25[2] = fRec25[1]; fRec25[1] = fRec25[0];
		fRec26[2] = fRec26[1]; fRec26[1] = fRec26[0];
		fRec27[1] = fRec27[0];
		fRec20[2] = fRec20[1]; fRec20[1] = fRec20[0];
		fRec21[1] = fRec21[0];
		fVec2[1] = fVec2[0];
		fRec22[2] = fRec22[1]; fRec22[1] = fRec22[0];
		fRec23[1] = fRec23[0];
		fRec12[2] = fRec12[1]; fRec12[1] = fRec12[0];
		fRec13[2] = fRec13[1]; fRec13[1] = fRec13[0];
		fRec14[1] = fRec14[0];
		fVec1[1] = fVec1[0];
		fRec15[2] = fRec15[1]; fRec15[1] = fRec15[0];
		fRec16[1] = fRec16[0];
		fRec17[1] = fRec17[0];
		fVec0[1] = fVec0[0];
		fRec18[2] = fRec18[1]; fRec18[1] = fRec18[0];
		fRec19[1] = fRec19[0];
		fRec8[1] = fRec8[0];
		fRec3[1] = fRec3[0];
		fRec0[1] = fRec0[0];
	}
}

static int register_params(const ParamReg& reg)
{
#undef fslider3
	fslider3_ = reg.registerVar("gxdistortion.drive",N_(""),"SA",N_(""),&fslider3, 0.35, 0.0, 1.0, 0.01);
#undef fslider2
	fslider2_ = reg.registerVar("gxdistortion.wet_dry",N_(""),"SA",N_(""),&fslider2, 1e+02, 0.0, 1e+02, 1.0);
#undef fslider1
	fslider1_ = reg.registerVar("amp2.stage1.Pregain",N_(""),"SA",N_(""),&fslider1, -6.0, -2e+01, 2e+01, 0.1);
#undef fslider0
	fslider0_ = reg.registerVar("amp2.stage2.gain1",N_(""),"SA",N_(""),&fslider0, -6.0, -2e+01, 2e+01, 0.1);
	return 0;
}

PluginDef plugin = {
    PLUGINDEF_VERSION,
    0,   // flags
    "6DJ8",  // id
    N_("6DJ8"),  // name
    0,  // groups
    compute,  // mono_audio
    0,  // stereo_audio
    init,  // set_samplerate
    0,  // activate plugin
    register_params,
    0,   // load_ui
    clear_state,  // clear_state
};

} // end namespace gxamp10
