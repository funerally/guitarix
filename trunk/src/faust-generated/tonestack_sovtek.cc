// generated from file '../src/faust/tonestack_sovtek.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace tonestack_sovtek {

class Dsp: public PluginDef {
private:
	int fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fRec0[4];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	void clear_state_f();
	void init(unsigned int samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
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
	id = "MIG 100 H";
	name = N_("MIG 100 H Style");
	groups = 0;
	description = ""; // description (tooltip)
	category = "";       // category
	shortname = "";     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = 0;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<4; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = (2 * double(min(192000, max(1, fSamplingFreq))));
	fConst1 = faustpower<2>(fConst0);
	fConst2 = (3 * fConst0);
	clear_state_f();
}

void Dsp::init_static(unsigned int samplingFreq, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
	double 	fSlow0 = exp((3.4 * (double(fslider0) - 1)));
	double 	fSlow1 = double(fslider1);
	double 	fSlow2 = (4.9434000000000004e-08 * fSlow1);
	double 	fSlow3 = (((fSlow1 * (((4.943400000000001e-06 * fSlow0) - 1.2634599999999999e-07) - fSlow2)) + (2.8889960000000004e-05 * fSlow0)) + 7.748796000000001e-07);
	double 	fSlow4 = (5.345780000000001e-09 * fSlow0);
	double 	fSlow5 = ((1.2443156000000004e-09 * fSlow0) - (1.2443156000000002e-11 * fSlow1));
	double 	fSlow6 = (5.345780000000001e-11 + ((fSlow1 * (fSlow5 - 4.101464400000001e-11)) + fSlow4));
	double 	fSlow7 = (fConst0 * fSlow6);
	double 	fSlow8 = (0.022470000000000004 * fSlow0);
	double 	fSlow9 = (0.00022 * fSlow1);
	double 	fSlow10 = (fConst0 * (0.0025277 + (fSlow9 + fSlow8)));
	double 	fSlow11 = ((fSlow10 + (fConst1 * (fSlow7 - fSlow3))) - 1);
	double 	fSlow12 = (fConst2 * fSlow6);
	double 	fSlow13 = ((fSlow10 + (fConst1 * (fSlow3 - fSlow12))) - 3);
	double 	fSlow14 = ((fConst1 * (fSlow3 + fSlow12)) - (3 + fSlow10));
	double 	fSlow15 = (1.0 / (0 - (1 + (fSlow10 + (fConst1 * (fSlow3 + fSlow7))))));
	double 	fSlow16 = double(fslider2);
	double 	fSlow17 = ((((4.859800000000001e-07 * fSlow16) + (fSlow1 * (1.0113400000000001e-07 - fSlow2))) + (fSlow0 * (6.141960000000001e-06 + (4.943400000000001e-06 * fSlow1)))) + 6.141960000000001e-08);
	double 	fSlow18 = ((fSlow1 * (1.2443156000000002e-11 + fSlow5)) + (fSlow16 * (fSlow4 + (5.345780000000001e-11 - (5.345780000000001e-11 * fSlow1)))));
	double 	fSlow19 = (fConst0 * fSlow18);
	double 	fSlow20 = ((fSlow8 + (fSlow9 + (0.00023500000000000002 * fSlow16))) + 0.00022470000000000001);
	double 	fSlow21 = (fConst0 * fSlow20);
	double 	fSlow22 = (fSlow21 + (fConst1 * (fSlow19 - fSlow17)));
	double 	fSlow23 = (fConst2 * fSlow18);
	double 	fSlow24 = (fSlow21 + (fConst1 * (fSlow17 - fSlow23)));
	double 	fSlow25 = (fConst0 * (0 - fSlow20));
	double 	fSlow26 = (fSlow25 + (fConst1 * (fSlow17 + fSlow23)));
	double 	fSlow27 = (fSlow25 - (fConst1 * (fSlow17 + fSlow19)));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((double)input0[i] - (fSlow15 * (((fSlow14 * fRec0[1]) + (fSlow13 * fRec0[2])) + (fSlow11 * fRec0[3]))));
		output0[i] = (FAUSTFLOAT)(fSlow15 * ((((fSlow27 * fRec0[0]) + (fSlow26 * fRec0[1])) + (fSlow24 * fRec0[2])) + (fSlow22 * fRec0[3])));
		// post processing
		for (int i=3; i>0; i--) fRec0[i] = fRec0[i-1];
	}
#undef fslider0
#undef fslider1
#undef fslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	fslider0_ = reg.registerVar("amp.tonestack.Bass","","SA","",&fslider0, 0.5, 0.0, 1.0, 0.01);
	fslider1_ = reg.registerVar("amp.tonestack.Middle","","SA","",&fslider1, 0.5, 0.0, 1.0, 0.01);
	fslider2_ = reg.registerVar("amp.tonestack.Treble","","SA","",&fslider2, 0.5, 0.0, 1.0, 0.01);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace tonestack_sovtek
