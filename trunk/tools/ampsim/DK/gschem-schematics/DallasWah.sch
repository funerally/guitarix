v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 55100 43400 1 0 0 gnd-1.sym
C 54700 44600 1 0 0 npn-2.sym
{
T 55300 45100 5 10 0 0 0 0 1
device=NPN_TRANSISTOR
T 55100 45000 5 10 1 1 0 0 1
refdes=T2
T 54700 44600 5 10 0 1 0 0 1
value=Vt=26mV,Is=14.06fA,Bf=187.6,Br=4.541
T 55300 44800 5 10 1 1 0 0 1
model-name=BC368
}
C 45900 44500 1 0 0 input-1.sym
{
T 45900 44800 5 10 0 0 0 0 1
device=INPUT
T 45900 44500 5 10 1 1 0 0 1
refdes=IN1
}
C 52600 44200 1 90 1 output-1.sym
{
T 52300 44100 5 10 0 0 90 6 1
device=OUTPUT
T 52600 44000 5 10 1 1 90 6 1
refdes=OUT1
}
C 49300 44600 1 90 0 resistor-2.sym
{
T 48950 45000 5 10 0 0 90 0 1
device=RESISTOR
T 49000 45300 5 10 1 1 180 0 1
refdes=R2
T 48700 44900 5 10 1 1 0 0 1
value=1.5k
}
C 50100 43200 1 90 0 resistor-2.sym
{
T 49750 43600 5 10 0 0 90 0 1
device=RESISTOR
T 49800 44000 5 10 1 1 180 0 1
refdes=R3
T 49500 43500 5 10 1 1 0 0 1
value=470
}
C 52300 45100 1 270 0 capacitor-1.sym
{
T 53000 44900 5 10 0 0 270 0 1
device=CAPACITOR
T 52400 44900 5 10 1 1 180 0 1
refdes=C3
T 53200 44900 5 10 0 0 270 0 1
symversion=0.1
T 52000 44300 5 10 1 1 0 0 1
value=0.22u
}
C 53800 47100 1 180 0 capacitor-1.sym
{
T 53600 46400 5 10 0 0 180 0 1
device=CAPACITOR
T 53000 47000 5 10 1 1 0 0 1
refdes=C2
T 53600 46200 5 10 0 0 180 0 1
symversion=0.1
T 53900 47200 5 10 1 1 180 0 1
value=4.7u
}
C 53600 45100 1 270 0 capacitor-1.sym
{
T 54300 44900 5 10 0 0 270 0 1
device=CAPACITOR
T 53700 45000 5 10 1 1 180 0 1
refdes=C4
T 54500 44900 5 10 0 0 270 0 1
symversion=0.1
T 53900 44300 5 10 1 1 0 0 1
value=0.22u
}
C 49500 44100 1 0 0 npn-2.sym
{
T 50100 44600 5 10 0 0 0 0 1
device=NPN_TRANSISTOR
T 49900 44600 5 10 1 1 0 0 1
refdes=T1
T 49500 44100 5 10 0 1 0 0 1
value=Vt=26mV,Is=14.06fA,Bf=187.6,Br=4.541
T 50000 44400 5 10 1 1 0 0 1
model-name=BC368
}
C 50100 45100 1 90 0 resistor-2.sym
{
T 49750 45500 5 10 0 0 90 0 1
device=RESISTOR
T 49800 45800 5 10 1 1 180 0 1
refdes=R4
T 49400 45400 5 10 1 1 0 0 1
value=22k
}
C 53400 42000 1 0 1 gnd-1.sym
C 48500 44700 1 180 0 resistor-2.sym
{
T 48100 44350 5 10 0 0 180 0 1
device=RESISTOR
T 47800 44800 5 10 1 1 0 0 1
refdes=R1
T 48400 44400 5 10 1 1 180 0 1
value=68k
}
C 53400 45200 1 180 0 resistor-2.sym
{
T 53000 44850 5 10 0 0 180 0 1
device=RESISTOR
T 52700 44800 5 10 1 1 0 0 1
refdes=R8
T 53300 44900 5 10 1 1 180 0 1
value=470k
}
C 50100 42900 1 0 1 gnd-1.sym
C 52600 45400 1 90 0 resistor-2.sym
{
T 52250 45800 5 10 0 0 90 0 1
device=RESISTOR
T 52900 46100 5 10 1 1 180 0 1
refdes=R7
T 52600 45600 5 10 1 1 0 0 1
value=470k
}
C 55300 45600 1 90 0 resistor-2.sym
{
T 54950 46000 5 10 0 0 90 0 1
device=RESISTOR
T 55600 46300 5 10 1 1 180 0 1
refdes=R9
T 55400 45700 5 10 1 1 0 0 1
value=1k
}
C 53900 46000 1 0 1 gnd-1.sym
C 55300 43700 1 90 0 resistor-2.sym
{
T 54950 44100 5 10 0 0 90 0 1
device=RESISTOR
T 55700 44400 5 10 1 1 180 0 1
refdes=R10
T 55400 43800 5 10 1 1 0 0 1
value=10k
}
C 47600 44800 1 180 0 capacitor-1.sym
{
T 47400 44100 5 10 0 0 180 0 1
device=CAPACITOR
T 46800 44700 5 10 1 1 0 0 1
refdes=C1
T 47400 43900 5 10 0 0 180 0 1
symversion=0.1
T 47600 45000 5 10 1 1 180 0 1
value=3900p
}
C 53200 43200 1 270 1 resistor-variable-2.sym
{
T 54100 44000 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 52950 43900 5 10 1 1 180 6 1
refdes=P1
T 55100 43200 5 10 1 1 180 0 1
value=value=85k,var=Wah
}
C 49800 48700 1 0 0 9V-plus-1.sym
{
T 49800 48700 5 10 0 0 0 0 1
device=POWER
T 50100 48700 5 10 1 1 0 0 1
value=9V
T 49800 49100 5 10 1 1 0 0 1
refdes=Vcc
}
N 49500 44600 48500 44600 4
C 51400 46200 1 0 1 inductor-1.sym
{
T 51200 46700 5 10 0 0 180 2 1
device=INDUCTOR
T 51000 46500 5 10 1 1 0 6 1
refdes=L1
T 51200 46900 5 10 0 0 180 2 1
symversion=0.1
T 51400 46200 5 10 0 0 180 2 1
value=0.5H
}
C 51500 47000 1 180 0 resistor-2.sym
{
T 51100 46650 5 10 0 0 180 0 1
device=RESISTOR
T 50800 47100 5 10 1 1 0 0 1
refdes=R5
T 51500 47300 5 10 1 1 180 0 1
value=33k
}
C 52300 46400 1 180 0 resistor-2.sym
{
T 51900 46050 5 10 0 0 180 0 1
device=RESISTOR
T 51600 46500 5 10 1 1 0 0 1
refdes=RL
T 52200 46100 5 10 1 1 180 0 1
value=60
}
N 49200 45500 49200 48000 4
N 49200 46900 50600 46900 4
N 50500 46300 50500 46900 4
C 53800 46400 1 180 0 resistor-2.sym
{
T 53400 46050 5 10 0 0 180 0 1
device=RESISTOR
T 53100 46500 5 10 1 1 0 0 1
refdes=R6
T 53700 46100 5 10 1 1 180 0 1
value=100k
}
N 52900 46300 52300 46300 4
N 51500 46900 52900 46900 4
N 53800 46900 53800 46300 4
N 52500 46300 52500 46900 4
N 52500 45100 52500 45400 4
N 50000 45100 52500 45100 4
N 54700 45100 53400 45100 4
N 53800 43700 53800 44200 4
C 56100 46500 1 270 0 capacitor-1.sym
{
T 56800 46300 5 10 0 0 270 0 1
device=CAPACITOR
T 56200 46400 5 10 1 1 180 0 1
refdes=C5
T 57000 46300 5 10 0 0 270 0 1
symversion=0.1
T 56400 45700 5 10 1 1 0 0 1
value=3900p
}
N 49200 48000 56300 48000 4
N 56300 48000 56300 46500 4
N 56300 44600 55200 44600 4
N 50000 46000 50000 48700 4
N 50000 48700 55200 48700 4
N 55200 48700 55200 46500 4
N 56300 45600 56300 44600 4
N 52500 44200 53300 44200 4
N 53300 44200 53300 44100 4
C 53400 42300 1 90 0 resistor-2.sym
{
T 53050 42700 5 10 0 0 90 0 1
device=RESISTOR
T 53800 43000 5 10 1 1 180 0 1
refdes=R11
T 53500 42400 5 10 1 1 0 0 1
value=15k
}
