//LINEAR PHASE FIR FILTER
//wfir window FIR hw(n)filter =h(n)w(n)

//clear comman and workspace
clc; clear;
//time axis for the continuos input signal

tmin=0; tmax=1;
// 256 linearly spaced points betwwen 0 to 1
t= linspace(tmin,tmax,256);//FIR design in SCILAB gives output filter of lenght 256
// WFIR function in scilanb works in this manner and cutoff frequency btw 0 to .5
//133 h(n)n=0 to M-1, M=133
//re- rectangular window hm=hamming window

[fir_time,fir_freq,fr]= wfir("lp",133,[.3 0],"re",[0 0]);//.2 lower cuttoff  and 0-upper cut offf 
//fr_time-h(n), fir_freq-H(w)


subplot(2,2,1);
title('h(n)');
plot(fir_time);

subplot(2,2,2);
title('H(w)');
plot(fir_freq);

//mixed signal with freq 64, 128 and 256

X=sin(2*%pi*t*64)+sin(2*%pi*t*128)+ sin(2*%pi*t*256);

subplot(2,2,3);
// fourier transform is goona give me the frequnecy components or details in the X signal
Y= fft(X);
title('signalFFT');
//magnitude of FFT
plot(abs(Y));
subplot(2,2,4);

//FIR filtering filtering in time domain= multiply of FFT in freq domain

Yf= abs(Y).*fir_freq;

title('FIR filtered signal')
plot(abs(Yf));

