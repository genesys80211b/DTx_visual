for k = 1:5
    hcorr = dsp.Crosscorrelator;
    Hcorr = dsp.Crosscorrelator('Method','Fastest');
    a = complex(randn(1,10^k));
    tic
    for i=1:10
        b = xcorr(a,a);
    end
    t1 = toc/10;
    tic
    for i=1:10
        c = fft(a);d = c.*c;e=ifft(d);
    end
    toc
    t2 = toc/10;
    tic
    for i=1:10
        d = step(hcorr,a,a);
    end
    toc
    t3 = toc/10;
    tic
    for i=1:10
        e = step(Hcorr,a,a);
    end
    toc
    t4 = toc/10;
    tic
    for i=1:10
        f = crossCorrXY_mex(a);
    end
    toc
    t5 = toc/10;
end
semilogx(10.^[1:7],t1,10.^[1:7],t2,10.^[1:7],t3,10.^[1:7],t4);
