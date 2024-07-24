//Discrete Fourier Transform and its Spectrum
//Formula used 
//X(a)= ((summmation from(n=0 to n=N-1)x(n)*(exp -2j*pi/N)^an)

clear;
 //now no of points in DFT N=lengh=10
 
 N=64;
 
 //discrete sampling indexing (non-integer)
 
 xd=0:1/N:1// btw 0to1 step size 1/N
 
 cycles=8; // frequency=1/1(sec)=no. of cycles divided by x duration=1
 
 //ip signal
 x= sin(2*%pi*xd*cycles);
 
 subplot (1,2,1);
 title('input sinusoidal signal')
 plot(xd,x);
 
 X=zeros(N,N);// initialize
 
 for a=1:N
     for n=1:N
         X(a,n)=X(a)+x(n)*exp(-2*%pi*%i*(a-1)*(n-1)/N);
         end
 end
 
 //summation for a 
 Y=zeros(1:N);
 
 for a=1:N
     for n=1:N
     Y(1,a)=Y(1,a)+X(a,n);
 end
end
//1
subplot(1,2,2);
//title('Fourier Transform or Spectrum Of Signal Frequency Peaks');
//plot(abs(Y));

//2
//title('complex spectrum plot');
//plot(real(X), imag(X))

//3 when value of a matches frequency your FT represetn signal in frequency y domain best

plot(X(8,:));

 
 
