#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
class CIntegratedUIManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIntegratedUIManager@@QEAA@XZ
    CIntegratedUIManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeUILess@CIntegratedUIManager@@UEAAJH@Z
    virtual long FinalizeUILess(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidateCountUILess@CIntegratedUIManager@@UEAAJPEAH@Z
    virtual long GetCandidateCountUILess(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidateStringUILess@CIntegratedUIManager@@UEAAJHPEAPEAG00@Z
    virtual long GetCandidateStringUILess(int, unsigned short * *, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberStyleUILess@CIntegratedUIManager@@UEAAJPEA_N@Z
    virtual long GetNumberStyleUILess(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionStyleUILess@CIntegratedUIManager@@UEAAJPEAW4IEH_UILESS_CANDIDATE_FOCUS_STYLE@@@Z
    virtual long GetSelectionStyleUILess(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionUILess@CIntegratedUIManager@@UEAAJPEAH@Z
    virtual long GetSelectionUILess(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWinBlueUILessManager@CIntegratedUIManager@@UEAAJPEAPEAUIImeUILessManager@@@Z
    virtual long GetWinBlueUILessManager(IImeUILessManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CIntegratedUIManager@@UEAAJXZ
    virtual long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChanged@CIntegratedUIManager@@UEAAJ_N@Z
    virtual long OnFocusChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyPressed@CIntegratedUIManager@@UEAAJ_K_JW4TsfKeyModifierFlags@@PEAH@Z
    virtual long OnKeyPressed(uint64_t, int64_t, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseEvent@CIntegratedUIManager@@UEAAJIUtagPOINT@@PEAUHWND__@@I@Z
    virtual long OnMouseEvent(unsigned int, tagPOINT, HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTargetPositionChanged@CIntegratedUIManager@@UEAAJPEAUtagRECT@@0@Z
    virtual long OnTargetPositionChanged(tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTargetPositionChanging@CIntegratedUIManager@@UEAAJXZ
    virtual long OnTargetPositionChanging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CIntegratedUIManager@@UEAAJHH@Z
    virtual long Refresh(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClient@CIntegratedUIManager@@UEAAJPEAUIImeUILessSink@@@Z
    virtual long SetClient(IImeUILessSink *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectionUILess@CIntegratedUIManager@@UEAAJH@Z
    virtual long SetSelectionUILess(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUILessEnabled@CIntegratedUIManager@@UEAAJ_N@Z
    virtual long SetUILessEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCandidateList@CIntegratedUIManager@@UEAAJGAEBU_GUID@@0W4TsfUIContextSettingsFlags@@PEAUtagRECT@@2PEAUITsfCandidateList@@@Z
    virtual long ShowCandidateList(unsigned short, _GUID const &, _GUID const &, int, tagRECT *, tagRECT *, ITsfCandidateList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowImeCommands@CIntegratedUIManager@@UEAAJGW4TsfUIContextSettingsFlags@@PEAUtagRECT@@1PEAUITsfCommandList@@@Z
    virtual long ShowImeCommands(unsigned short, int, tagRECT *, tagRECT *, ITsfCommandList *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIntegratedUIManager@@UEAA@XZ
    virtual ~CIntegratedUIManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PublishCandidateWindowState@CIntegratedUIManager@@AEAAXXZ
    void _PublishCandidateWindowState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetSelectionUILess@CIntegratedUIManager@@AEAAJH_N0@Z
    long _SetSelectionUILess(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCandidateWindowStateFlagsFromCandidateList@CIntegratedUIManager@@AEAAXXZ
    void _UpdateCandidateWindowStateFlagsFromCandidateList();
};
