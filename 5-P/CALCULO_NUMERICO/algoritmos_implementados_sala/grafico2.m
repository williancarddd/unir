x = 0:0.1:4*pi;
plot(x,sin(x),'linewidth',3)
hold all
plot(x,cos(x),'--','linewidth',3)
plot(x,tan(x),'-.','linewidth',3)
plot(x,exp(x),':','linewidth',3)
plot(x,log(x),'*','linewidth',3)
axis([0,10,-2,4])
legend('Seno','Cosseno','Tangente','Exponencial','Logaritmo')
legend('boxoff')
hold off