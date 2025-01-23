// Mårten Nettelbladt 2024
// Function for calculating frequencies of the 91 notes used on a Hammond B3 Tonewheel Organ

#include <cmath>

float gHammondFrequency[91];

void setup_tonewheel_frequencies()
{
	float ratio[12];
	
	// gear ratios for C, C#, D, D#, E, F, F#, G, G#, A, A#, B
	ratio[0]  =  85.0 / 104.0;
	ratio[1]  =  71.0 /  82.0;
	ratio[2]  =  67.0 /  73.0;
	ratio[3]  = 105.0 / 108.0;
	ratio[4]  = 103.0 / 100.0;
	ratio[5]  =  84.0 /  77.0;
	ratio[6]  =  74.0 /  64.0;
	ratio[7]  =  98.0 /  80.0;
	ratio[8]  =  96.0 /  74.0;
	ratio[9]  =  88.0 /  64.0;
	ratio[10] =  67.0 /  46.0;
	ratio[11] = 108.0 /  70.0;
	
	
	// first 7 octaves
	for(int i = 0; i < 7; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			gHammondFrequency[i * 12 + j] = 20.0 * pow(2, i + 1) * ratio[j];
		}
	}
	// top 7 frequencies calculated differently
	for(int j = 0; j < 7; j++)
	{
		gHammondFrequency[84 + j] = 20.0 * 192.0 * ratio[j + 5];
	}
	
	// print all frequencies to console
	for(int i = 0; i < 91; i++)
	{
		rt_printf("Nr %i  , %f Hz \n", i + 1, gHammondFrequency[i]);
	}
	
}

/*
Tested 2024-11-01

Nr 1  , 32.692307 Hz 
Nr 2  , 34.634148 Hz 
Nr 3  , 36.712330 Hz 
Nr 4  , 38.888889 Hz 
Nr 5  , 41.199997 Hz 
Nr 6  , 43.636364 Hz 
Nr 7  , 46.250000 Hz 
Nr 8  , 49.000000 Hz 
Nr 9  , 51.891891 Hz 
Nr 10  , 55.000000 Hz 
Nr 11  , 58.260872 Hz 
Nr 12  , 61.714287 Hz 
Nr 13  , 65.384613 Hz 
Nr 14  , 69.268295 Hz 
Nr 15  , 73.424660 Hz 
Nr 16  , 77.777779 Hz 
Nr 17  , 82.399994 Hz 
Nr 18  , 87.272728 Hz 
Nr 19  , 92.500000 Hz 
Nr 20  , 98.000000 Hz 
Nr 21  , 103.783783 Hz 
Nr 22  , 110.000000 Hz 
Nr 23  , 116.521744 Hz 
Nr 24  , 123.428574 Hz 
Nr 25  , 130.769226 Hz 
Nr 26  , 138.536591 Hz 
Nr 27  , 146.849319 Hz 
Nr 28  , 155.555557 Hz 
Nr 29  , 164.799988 Hz 
Nr 30  , 174.545456 Hz 
Nr 31  , 185.000000 Hz 
Nr 32  , 196.000000 Hz 
Nr 33  , 207.567566 Hz 
Nr 34  , 220.000000 Hz 
Nr 35  , 233.043488 Hz 
Nr 36  , 246.857147 Hz 
Nr 37  , 261.538452 Hz 
Nr 38  , 277.073181 Hz 
Nr 39  , 293.698639 Hz 
Nr 40  , 311.111115 Hz 
Nr 41  , 329.599976 Hz 
Nr 42  , 349.090912 Hz 
Nr 43  , 370.000000 Hz 
Nr 44  , 392.000000 Hz 
Nr 45  , 415.135132 Hz 
Nr 46  , 440.000000 Hz 
Nr 47  , 466.086975 Hz 
Nr 48  , 493.714294 Hz 
Nr 49  , 523.076904 Hz 
Nr 50  , 554.146362 Hz 
Nr 51  , 587.397278 Hz 
Nr 52  , 622.222229 Hz 
Nr 53  , 659.199951 Hz 
Nr 54  , 698.181824 Hz 
Nr 55  , 740.000000 Hz 
Nr 56  , 784.000000 Hz 
Nr 57  , 830.270264 Hz 
Nr 58  , 880.000000 Hz 
Nr 59  , 932.173950 Hz 
Nr 60  , 987.428589 Hz 
Nr 61  , 1046.153809 Hz 
Nr 62  , 1108.292725 Hz 
Nr 63  , 1174.794556 Hz 
Nr 64  , 1244.444458 Hz 
Nr 65  , 1318.399902 Hz 
Nr 66  , 1396.363647 Hz 
Nr 67  , 1480.000000 Hz 
Nr 68  , 1568.000000 Hz 
Nr 69  , 1660.540527 Hz 
Nr 70  , 1760.000000 Hz 
Nr 71  , 1864.347900 Hz 
Nr 72  , 1974.857178 Hz 
Nr 73  , 2092.307617 Hz 
Nr 74  , 2216.585449 Hz 
Nr 75  , 2349.589111 Hz 
Nr 76  , 2488.888916 Hz 
Nr 77  , 2636.799805 Hz 
Nr 78  , 2792.727295 Hz 
Nr 79  , 2960.000000 Hz 
Nr 80  , 3136.000000 Hz 
Nr 81  , 3321.081055 Hz 
Nr 82  , 3520.000000 Hz 
Nr 83  , 3728.695801 Hz 
Nr 84  , 3949.714355 Hz 
Nr 85  , 4189.090820 Hz 
Nr 86  , 4440.000000 Hz 
Nr 87  , 4704.000000 Hz 
Nr 88  , 4981.621582 Hz 
Nr 89  , 5280.000000 Hz 
Nr 90  , 5593.043457 Hz 
Nr 91  , 5924.571289 Hz 

*/