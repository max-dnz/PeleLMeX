#include <PeleLM.H>
#include <AMReX_ParmParse.H>
<<<<<<< HEAD
<<<<<<< HEAD
#include <pmf.H>
=======
>>>>>>> parent of 0bd4828... pb solving
=======
>>>>>>> ee45a90d4759a6c121d93e4c2f7e85720f79f22f

void PeleLM::readProbParm()
{
   amrex::ParmParse pp("prob");
   
   std::string type;
   pp.query("P_mean", prob_parm->P_mean);
   pp.query("standoff", PeleLM::prob_parm->standoff);
   pp.query("pertmag",  PeleLM::prob_parm->pertmag);

   pp.query("PhiV_y_hi", PeleLM::prob_parm->phiV_hiy);
   pp.query("PhiV_y_lo", PeleLM::prob_parm->phiV_loy);

<<<<<<< HEAD
<<<<<<< HEAD
   std::string pmf_datafile;
   pp.query("pmf_datafile", pmf_datafile);
   int pmf_do_average = 1;
   PMF::read_pmf(pmf_datafile, pmf_do_average);
=======
   PeleLM::pmf_data.initialize();
>>>>>>> parent of 0bd4828... pb solving
=======
   PeleLM::pmf_data.initialize();
>>>>>>> ee45a90d4759a6c121d93e4c2f7e85720f79f22f
}
