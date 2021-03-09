#ifndef PELELM_DERIVEFUNC_H_
#define PELELM_DERIVEFUNC_H_

#include <AMReX_FArrayBox.H>
#include <AMReX_Geometry.H>
#include <AMReX_BCRec.H>

void pelelm_dermassfrac (const amrex::Box& bx, amrex::FArrayBox& derfab, int dcomp, int ncomp,
                         const amrex::FArrayBox& statefab, const amrex::Geometry& geomdata,
                         amrex::Real time, const amrex::Vector<amrex::BCRec> &bcrec, int level);

void pelelm_dertemp (const amrex::Box& bx, amrex::FArrayBox& derfab, int dcomp, int ncomp,
                     const amrex::FArrayBox& statefab, const amrex::Geometry& geomdata,
                     amrex::Real time, const amrex::Vector<amrex::BCRec> &bcrec, int level);
#endif