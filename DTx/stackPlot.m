
y = (8.3/60000)*[3 4 231 8583 253 974 16675 82 15278 223; 4 3 178 9899 406 1207 15387 105 16093 299];
bar([15 25],y,0.5,'stacked')
% bar([1.35 1.8], y,0.3,'stacked')
h=legend('DIFS', 'Random Back-off', 'Energy Detection', 'Prepare DATA',...
    'SMS','RCTF','RFFE','DDD','Preamble Detection','SFD Detection');
set(h,'FontSize',20,'FontName','Arial','FontWeight','bold');
axis([8 36 0 7])
ax = gca;
ax.XTick = [15 25];
%ax.YTick = linspace(0,125,26);
set(gca,'YTick',0:0.50:7,'FontSize',12,'FontName','Arial','FontWeight','bold')
colormap(gray)
xlabel('Transmit Gain (in dB)','FontSize',23,'FontName','Arial','FontWeight','bold')
ylabel('Elapsed Time (in seconds)','FontSize',23,'FontName','Arial','FontWeight','bold')
title('Timeline Breakup of DATA-ACK Exchange at DTx','FontSize',25,'FontName','Arial','FontWeight','bold')