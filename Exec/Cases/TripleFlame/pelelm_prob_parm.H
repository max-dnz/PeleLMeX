#ifndef PELELM_PROB_PARM_H_
#define PELELM_PROB_PARM_H_

#include <AMReX_REAL.H>
#include <AMReX_GpuMemory.H>

using namespace amrex::literals;

struct ProbParm
{
   amrex::Real P_mean = 101325.0;
   amrex::Real splitx = 0.0;
   amrex::Real midtanh = 0.001;
   amrex::Real widthtanh = 0.001;
   amrex::Real Zst = 0.055;
   amrex::Real T_in = 300.0;
   amrex::Real V_in = 0.4;
   
   int bathID = -1;
   int fuelID = -1;
   int oxidID = -1;
};
#endif
