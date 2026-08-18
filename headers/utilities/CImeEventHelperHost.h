#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class CImeEventHelperHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeImeWithAlternatives@CImeEventHelperHost@DirectUI@@UEAAJPEBG@Z
    virtual long FinalizeImeWithAlternatives(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatePageIndex@CImeEventHelperHost@DirectUI@@UEAAJHPEAH@Z
    virtual long GetCandidatePageIndex(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageCount@CImeEventHelperHost@DirectUI@@UEAAHXZ
    virtual int GetPageCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageFirstCandidateIndex@CImeEventHelperHost@DirectUI@@UEAAJHPEAH@Z
    virtual long GetPageFirstCandidateIndex(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostControlHasFocus@CImeEventHelperHost@DirectUI@@UEAAJPEAH@Z
    virtual long HostControlHasFocus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEarlyKey@CImeEventHelperHost@DirectUI@@UEAAJ_K@Z
    virtual long OnEarlyKey(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChanged@CImeEventHelperHost@DirectUI@@QEAAJE@Z
    long OnFocusChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeCandidatesChanged@CImeEventHelperHost@DirectUI@@UEAAJ_N@Z
    virtual long OnImeCandidatesChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeCompatibleChanged@CImeEventHelperHost@DirectUI@@UEAAJH@Z
    virtual long OnImeCompatibleChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeCompositionChanged@CImeEventHelperHost@DirectUI@@UEAAJPEAUITextWithLinguisticAlternatives@@_N1@Z
    virtual long OnImeCompositionChanged(ITextWithLinguisticAlternatives *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeHideWindow@CImeEventHelperHost@DirectUI@@UEAAJXZ
    virtual long OnImeHideWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeSelectionChanged@CImeEventHelperHost@DirectUI@@UEAAJ_N@Z
    virtual long OnImeSelectionChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImeShowWindow@CImeEventHelperHost@DirectUI@@UEAAJXZ
    virtual long OnImeShowWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CImeEventHelperHost@DirectUI@@QEAAJPEAVSearchBox@2@@Z
    long RuntimeClassInitialize(::DirectUI::SearchBox *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CImeEventHelperHost@DirectUI@@QEAAXXZ
    void Shutdown();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImeEventHelperHost@DirectUI@@EEAA@XZ
    virtual ~CImeEventHelperHost();
};
} // namespace DirectUI
