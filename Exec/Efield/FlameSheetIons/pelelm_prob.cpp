#include <PeleLM.H>
#include <AMReX_ParmParse.H>

void PeleLM::readProbParm()
{
   amrex::ParmParse pp("prob");
   
   std::string type;
   pp.query("P_mean", prob_parm->P_mean);
   pp.query("standoff", PeleLM::prob_parm->standoff);
   pp.query("pertmag",  PeleLM::prob_parm->pertmag);

<<<<<<< HEAD
<<<<<<< HEAD
   pp.query("PhiV_y_hi", PeleLM::prob_parm->phiV_hiy);
   pp.query("PhiV_y_lo", PeleLM::prob_parm->phiV_loy);
=======
#ifdef PELE_USE_EFIELD
   pp.query("PhiV_y_hi", PeleLM::prob_parm->phiV_hiy);
   pp.query("PhiV_y_lo", PeleLM::prob_parm->phiV_loy);
#endif
>>>>>>> parent of 0bd4828... pb solving
=======
#ifdef PELE_USE_EFIELD
   pp.query("PhiV_y_hi", PeleLM::prob_parm->phiV_hiy);
   pp.query("PhiV_y_lo", PeleLM::prob_parm->phiV_loy);
#endif
>>>>>>> ee45a90d4759a6c121d93e4c2f7e85720f79f22f

   PeleLM::pmf_data.initialize();
}
