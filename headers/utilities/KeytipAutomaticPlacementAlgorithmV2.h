#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class KeytipAutomaticPlacementAlgorithmV2 {
public:
    class ScreenBoundsHelper;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreClose@KeytipAutomaticPlacementAlgorithmV2@@YA_NAEBUXRECTF_RB@@0_N@Z
    bool AreClose(XRECTF_RB const &, XRECTF_RB const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyTipPosition@KeytipAutomaticPlacementAlgorithmV2@@YA?AUXRECTF_RB@@AEBU2@0W4KeyTipPlacementMode@DirectUI@@MM_NAEAUScreenBoundsHelper@1@@Z
    XRECTF_RB GetKeyTipPosition(XRECTF_RB const &, XRECTF_RB const &, int, float, float, bool, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToClientLogicalXRect@KeytipAutomaticPlacementAlgorithmV2@@YA?AUXRECTF_RB@@PEAVCXamlIslandRoot@@AEBUtagRECT@@@Z
    XRECTF_RB ToClientLogicalXRect(CXamlIslandRoot *, tagRECT const &);
};
