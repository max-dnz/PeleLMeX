TOP = /home/maxdnz/PeleLMeX/Submodules
AMREX_HOME         ?= ${TOP}/amrex
PELELMEX_HOME      ?= /home/maxdnz/PeleLMeX
PELE_PHYSICS_HOME  ?= ${TOP}/PelePhysics
AMREX_HYDRO_HOME   ?= ${TOP}/AMReX-Hydro


# AMReX
DIM             = 2
DEBUG           = FALSE
PRECISION       = DOUBLE
VERBOSE         = FALSE
TINY_PROFILE    = FALSE

# Compilation
COMP            = gnu
USE_MPI         = FALSE
USE_OMP         = FALSE
USE_CUDA        = FALSE
USE_HIP         = FALSE

# PeleLMeX

# PelePhysics
Chemistry_Model = drm19
Eos_Model       = Fuego
Transport_Model = Simple

USE_SUNDIALS_PP = TRUE

include $(PELELMEX_HOME)/Utils/Make.PeleLMeX
