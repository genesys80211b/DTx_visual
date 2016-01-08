
y = [[9.1 10.8 13.1 13.6 18.3 35.2]*(0.43186/11); [11.8 9.6 19 12 16 31]*(0.43526/6)];
bar([15 25],y,0.5,'stacked')
% bar([1.35 1.8], y,0.3,'stacked')
h=legend('All Other Lines', 'RCRF', 'FIR Decimation', 'FOC',...
    'Coarse Freq. Offset Estimation', 'AGC');
set(h,'FontSize',20,'FontName','Arial','FontWeight','bold');
axis([8 36 0 7.5])
ax = gca;
ax.XTickLabel = {'Early ACK', 'Late ACK'};
%ax.YTick = linspace(0,125,26);
set(gca,'YTick',0:0.5:7.5,'FontSize',12,'FontName','Arial','FontWeight','bold')
colormap(gray)
xlabel('','FontSize',23,'FontName','Arial','FontWeight','bold')
ylabel('Elapsed Time (in seconds)','FontSize',23,'FontName','Arial','FontWeight','bold')
title('RFFE Block Timeline Breakup for Early & Late ACK at DRx','FontSize',25,'FontName','Arial','FontWeight','bold')