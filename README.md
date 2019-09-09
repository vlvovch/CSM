[![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/vlvovch/CSM/master?filepath=index.ipynb)

## Description

This repository contains [Thermal-FIST](https://github.com/vlvovch/Thermal-FIST) routines for calculations within the Canonical Statistical Model (CSM) presented in the following papers:
- V. Vovchenko, B. Dönigus, H. Stoecker, *Multiplicity dependence of light nuclei production at LHC energies in the canonical statistical model*, [Phys. Lett. B **785**, 171 (2018)](https://doi.org/10.1016/j.physletb.2018.08.041), [arXiv:1808.05245 [hep-ph]](https://arxiv.org/abs/1808.05245)
- V. Vovchenko, B. Dönigus, H. Stoecker, *Canonical statistical model analysis of p-p, p-Pb, and Pb-Pb collisions at the LHC*, [arXiv:1906.03145 [hep-ph]](https://arxiv.org/abs/1906.03145)

The calculations are done within interactive Jupyter sessions.
This is achieved through the [xeus-cling](https://github.com/QuantStack/xeus-cling) Jupyter kernel and a C++ interpreter [cling](https://github.com/root-project/cling).

The routines presented here have so far only been tested on a Linux system.


## Pre-requisites

A Python environment with [Jupyter Notebook](https://jupyter.org/) and [xeus-cling](https://github.com/QuantStack/xeus-cling) installed.

## Usage

1. Close this repository with the `--recurse-submodules` option to fetch the Thermal-FIST package automatically.
2. Build Thermal-FIST and Minuit2 as shared libraries. One can execute the `build.sh' script in the root directory, or run the following commands manually:
    ```bash
    cd Thermal-FIST
    mkdir build
    cd build
    cmake -DBUILD_SHARED_LIBS=ON -DSTANDALONE_MINUIT=ON ../
    make ThermalFIST
    ```
    This will build the shared libraries in folder `Thermal-FIST/build/lib`.
 3. Run jupyter notebook from the repository root directory, open it in a browser and go to the `index.ipynb` notebook. This notebook contains links to all the routines for obtaining the results published in the above papers. The output files will be written into the folder `out/`.

The reference output files are available in folders [`out/reference.1808.05245`](out/reference.1808.05245) and [`out/reference.1906.03145`](out/reference.1906.03145)

## Running it in the cloud

To run the calculations in the cloud from your web browser, click on the binder
link:

[![Binder](https://mybinder.org/static/logo.svg)](https://mybinder.org/v2/gh/vlvovch/CSM/master?filepath=index.ipynb)

## Attribution
Publications using **Thermal-FIST** shall include a reference to the following paper:

- V. Vovchenko, H. Stoecker, *Thermal-FIST: A package for heavy-ion collisions and hadronic equation of state*, [Comput. Phys. Commun. **244**, 295 (2019)](https://doi.org/10.1016/j.cpc.2019.06.024), [arXiv:1901.05249 [nucl-th]](https://arxiv.org/abs/1901.05249)

Addtionally, the two CSM papers above should be quoted in works which derive from routines in this repository.

*Copyright (C) 2019 Volodymyr Vovchenko*
