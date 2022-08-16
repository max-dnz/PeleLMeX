clear all

%% File info
main_folder = '/home/maxdnz/PeleLMeX/Exec/MyCases/E-FIELD';
species = {'/Y(N2)','/Y(O2)','/Y(H2O)','/Y(OH)','Y(CO)','Y(CO2)','Y(CH4)','/Y(C)','/Y(CH)','/Y(CHOp)','/Y(H3Op)','/Y(O2n)','/Y(E)'};
Temp = {'/temp'};
Speed = {'/x_velocity'}
EF = {'/efieldx','/efieldy','/DriftFlux_H3O+_Y'}
MWval = {14.0067,31.999,18.01528,17.008,28.01,44.01,16.04,12.0107,13.01864,29.018,19.0232,31.999,0.00054858};

%% Import Data
%{
% Species
for i=1:lenght(species)
    file = strcat(main_folder,species{1,i},'.mat');   

    if i==1
        A = zeros(lenght(species),size(importdata(file),1),size(importdata(file),2)); 
    end

    A(i,:,:) = importdata(file); %mass fractions
end
%}

% Temperature 
file2 = strcat(main_folder,Temp{1,1},'.mat');
B = zeros(size(importdata(file2),1),size(importdata(file2),2));
B(:,:) = importdata(file2);

% Velocity
file5 = strcat(main_folder,Speed{1,1},'.mat');
E = zeros(size(importdata(file5),1),size(importdata(file5),2));
E(:,:) = importdata(file5);

% Efield
for i=1:2
    file3 = strcat(main_folder,EF{1,i},'.mat');   

    if i==1
        C = zeros(2,size(importdata(file3),1),size(importdata(file3),2));
    end

    C(i,:,:) = importdata(file3);
end

% Ionflux
file4 = strcat(main_folder,EF{1,3},'.mat');
D = zeros(size(importdata(file4),1),size(importdata(file4),2));
D(:,:) = importdata(file4);

%% Set up x,y axis


%% Initial condtions check
% Inflow profile - Speed
profile = E(:,0);
plot(profile);

% Low BC - Temp
TempBC = B(:,0);
plot(TempBC);

% Blob Temp profile - y = 0.003, ymax = 0.037
ymax = 0.037;
yb = 0.003;
ib = floor(256*ymax/yb);

BlobBC = B(:,ib);
plot(BlobBC);

%% Results check
% Efield vectors
quiver(C{1,:,:},C{2,:,:}); %quiver(U,V,scale) useful too if arrows are not the good size

% T profile in the flame - x = 10% of full size
height = 0.1;
ymax = 0.037;
ix = floor(256*height*ymax);
TempFlame = B(:,ix);
plot(tempFlame);

% Ion flux at the top electrode
Ionflux = D(:,size(D,1));
plot(IOnflux);
