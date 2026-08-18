#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CandidateWindowSettingHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadCandidateWindowRegistrySettings@CandidateWindowSettingHelper@@YAXQEBGPEAUCW_PREFS_INTERNAL@IMEPrefsAndActionsHelperPrivate@@PEAVCKeyActionTableEntry@3@@Z
    void LoadCandidateWindowRegistrySettings(unsigned short const * const, ::IMEPrefsAndActionsHelperPrivate::CW_PREFS_INTERNAL *, ::IMEPrefsAndActionsHelperPrivate::CKeyActionTableEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSymbolViewModeSettings@CandidateWindowSettingHelper@@YAXQEBGPEAUCW_PREFS_INTERNAL@IMEPrefsAndActionsHelperPrivate@@PEAVCKeyActionTableEntry@3@@Z
    void LoadSymbolViewModeSettings(unsigned short const * const, ::IMEPrefsAndActionsHelperPrivate::CW_PREFS_INTERNAL *, ::IMEPrefsAndActionsHelperPrivate::CKeyActionTableEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDWORDValue@CandidateWindowSettingHelper@@YAJAEAPEAUHKEY__@@PEBGPEAK@Z
    long QueryDWORDValue(HKEY__* &, unsigned short const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCandidateWindowShowAllStickersEnabled@CandidateWindowSettingHelper@@YAXAEAPEAUHKEY__@@PEAUCW_PREFS_INTERNAL@IMEPrefsAndActionsHelperPrivate@@@Z
    void SetCandidateWindowShowAllStickersEnabled(HKEY__* &, ::IMEPrefsAndActionsHelperPrivate::CW_PREFS_INTERNAL *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCandidateWindowSpaceKey@CandidateWindowSettingHelper@@YAXPEAVCKeyActionTableEntry@IMEPrefsAndActionsHelperPrivate@@@Z
    void SetCandidateWindowSpaceKey(::IMEPrefsAndActionsHelperPrivate::CKeyActionTableEntry *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCandidateWindowTipWindowPanelDisableFlags@CandidateWindowSettingHelper@@YAXAEAPEAUHKEY__@@PEAUCW_PREFS_INTERNAL@IMEPrefsAndActionsHelperPrivate@@@Z
    void SetCandidateWindowTipWindowPanelDisableFlags(HKEY__* &, ::IMEPrefsAndActionsHelperPrivate::CW_PREFS_INTERNAL *);
};
