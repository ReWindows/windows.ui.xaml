#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace IMEPrefsAndActionsHelperPrivate {
class CKeyActionTableEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDigitPreferences@CKeyActionTableEntry@IMEPrefsAndActionsHelperPrivate@@QEAAXW4CandidateWindowDigitPreference@2@@Z
    void AddDigitPreferences(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyActionTableEntry@IMEPrefsAndActionsHelperPrivate@@QEAA@XZ
    CKeyActionTableEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CKeyActionTableEntry@IMEPrefsAndActionsHelperPrivate@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@CKeyActionTableEntry@IMEPrefsAndActionsHelperPrivate@@QEAAXEW4KeyModifier@2@AEBUCANDIDATE_WINDOW_ACTION_WRAP@2@@Z
    void SetAt(unsigned char, int, ::IMEPrefsAndActionsHelperPrivate::CANDIDATE_WINDOW_ACTION_WRAP const &);
};
} // namespace IMEPrefsAndActionsHelperPrivate
