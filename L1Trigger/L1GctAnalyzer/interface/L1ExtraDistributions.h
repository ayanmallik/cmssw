
// -*- C++ -*-
//
// Package:    L1GctAnalyzer
// Class:      L1ExtraDistributions
// 
/**\class L1ExtraDistributions L1ExtraDistributions.cc L1Trigger/L1GctAnalyzer/src/L1ExtraDistributions.cc

 Description: Makes histograms from comparison between L1Extra candidate and MC particle

 Implementation:
     <Notes on implementation>
*/
//
// Original Author:  Jim Brooke
//         Created:  23 Nov 2006
// $Id:
//
//

#ifndef L1EXTRADISTRIBUTIONS_H
#define L1EXTRADISTRIBUTIONS_H


class L1ExtraDistributions {

 public:

  // name is base for histograms
  L1ExtraDistributions(string name);

  ~L1ExtraDistributions();

  // fill the histos
  void fill(L1ExtraParticle* l1);

 private:

  TH1F etDist_;
  TH1F etaDist_;
  TH1F phiDist_;

}
