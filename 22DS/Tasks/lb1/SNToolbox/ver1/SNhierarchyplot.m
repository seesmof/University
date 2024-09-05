function SNhierarchyplot(SN, Plotprop)

% find hierarchy
h=SNhierarchy(SN);
mindxt=realmax;
% plot hierarchy

hlevels=max(h); 
d(1:length(h),1:2)=0;
dy=double(100./hlevels);
for ht=1:1:hlevels
    lvy=100-(ht.*dy)+0.5.*dy;
    dxht=100./length(find(h==ht)); 
    dd(ht)=dxht*0.01;
    if dxht<mindxt
       mindxt=dxht;
    end;
    nel=1;
    for i=1:1:length(h)
        if h(i)==ht
           d(i,1)=(nel-0.5).*dxht;
           d(i,2)=lvy;
           ws=SN.node{i};
           for j=1:1:length(ws)  
               starr(i,j)=ws(j);
           end;
           nel=nel+1;
        end;
    end;    
end;
d=d./100; 
ss=strcat('o',Plotprop.NodeColour);
axes('position',[0 0 1 1]);hold on;
plot(d(:,1),d(:,2),ss); 
for i=1:1:length(h)
    if d(i,1)<0.5
       zu(i,1)=d(i,1)-0.25.*dd(h(i)); 
    else
       zu(i,1)=d(i,1)-0.1.*dd(h(i));
    end;
    if h(i)<hlevels
       zu(i,2)=d(i,2)+0.0015.*dy;
    else
       zu(i,2)=d(i,2)-0.0015.*dy;   
    end;
end;
text(zu(:,1),zu(:,2),starr);
for i=1:1:length(h)
    for j=1:1:length(h)
        if isstr(SN.relation{i,j})
           annotation('textarrow',[d(i,1) d(j,1)],[d(i,2) d(j,2)],'Color', Plotprop.RelationColour);           
        end;  
    end;
end;