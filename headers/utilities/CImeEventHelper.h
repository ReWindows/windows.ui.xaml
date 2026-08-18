#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 51 member(s).
class CImeEventHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginUIElement@CImeEventHelper@@UEAAJKPEAH@Z
    virtual long BeginUIElement(unsigned long, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImeEventHelper@@QEAA@XZ
    CImeEventHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositionContainsConvertedText@CImeEventHelper@@UEAAHXZ
    virtual int CompositionContainsConvertedText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndUIElement@CImeEventHelper@@UEAAJK@Z
    virtual long EndUIElement(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeUILess@CImeEventHelper@@UEAAJH@Z
    virtual long FinalizeUILess(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidateCountUILess@CImeEventHelper@@UEAAJPEAH@Z
    virtual long GetCandidateCountUILess(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidateStringUILess@CImeEventHelper@@UEAAJHPEAPEAG00@Z
    virtual long GetCandidateStringUILess(int, unsigned short * *, unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstCompositionRange@CImeEventHelper@@UEAAJPEAUITfContext@@PEAPEAUITfRange@@@Z
    virtual long GetFirstCompositionRange(ITfContext *, ITfRange * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguage@CImeEventHelper@@UEAAJPEAPEAG@Z
    virtual long GetLanguage(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinguisticAlternatives@CImeEventHelper@@UEAAJPEAPEAUITextWithLinguisticAlternatives@@@Z
    virtual long GetLinguisticAlternatives(ITextWithLinguisticAlternatives * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumberStyleUILess@CImeEventHelper@@UEAAJPEA_N@Z
    virtual long GetNumberStyleUILess(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionStyleUILess@CImeEventHelper@@UEAAJPEAW4IEH_UILESS_CANDIDATE_FOCUS_STYLE@@@Z
    virtual long GetSelectionStyleUILess(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionUILess@CImeEventHelper@@UEAAJPEAH@Z
    virtual long GetSelectionUILess(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWin8UILessManager@CImeEventHelper@@UEAAJPEAPEAUIImeUILessManager@@@Z
    virtual long GetWin8UILessManager(IImeUILessManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowRect@CImeEventHelper@@UEAAJPEAUtagRECT@@@Z
    virtual long GetWindowRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLinguisticAlternatives@CImeEventHelper@@UEAAHXZ
    virtual int HasLinguisticAlternatives();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostControlHasFocus@CImeEventHelper@@UEAAJPEAH@Z
    virtual long HostControlHasFocus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImeComposing@CImeEventHelper@@UEAAHXZ
    virtual int IsImeComposing();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImeWin8Compatible@CImeEventHelper@@UEAAHXZ
    virtual int IsImeWin8Compatible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowVisible@CImeEventHelper@@UEAAHXZ
    virtual int IsWindowVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivated@CImeEventHelper@@UEAAJAEBU_GUID@@0H@Z
    virtual long OnActivated(_GUID const &, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndEdit@CImeEventHelper@@UEAAJPEAUITfContext@@KPEAUITfEditRecord@@@Z
    virtual long OnEndEdit(ITfContext *, unsigned long, ITfEditRecord *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChanged@CImeEventHelper@@UEAAJ_N@Z
    virtual long OnFocusChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyTraceDown@CImeEventHelper@@UEAAJ_K_J@Z
    virtual long OnKeyTraceDown(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyTraceUp@CImeEventHelper@@UEAAJ_K_J@Z
    virtual long OnKeyTraceUp(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClosed@CImeEventHelper@@UEAAJXZ
    virtual long OnWindowClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClosing@CImeEventHelper@@UEAAJXZ
    virtual long OnWindowClosing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowOpened@CImeEventHelper@@UEAAJPEAUtagRECT@@@Z
    virtual long OnWindowOpened(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowOpening@CImeEventHelper@@UEAAJPEAUtagRECT@@@Z
    virtual long OnWindowOpening(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowUpdated@CImeEventHelper@@UEAAJPEAUtagRECT@@@Z
    virtual long OnWindowUpdated(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowUpdating@CImeEventHelper@@UEAAJPEAUtagRECT@@@Z
    virtual long OnWindowUpdating(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RangeContainsConvertedText@CImeEventHelper@@UEAAHPEAUITfContext@@KPEAUITfRange@@@Z
    virtual int RangeContainsConvertedText(ITfContext *, unsigned long, ITfRange *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEditContext@CImeEventHelper@@UEAAJPEAUITfContext@@PEAUIImeEventHelperClient@@@Z
    virtual long SetEditContext(ITfContext *, IImeEventHelperClient *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEditContextFromFocus@CImeEventHelper@@UEAAJPEAUIImeEventHelperClient@@@Z
    virtual long SetEditContextFromFocus(IImeEventHelperClient *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostControlHasFocusOverride@CImeEventHelper@@UEAAXH@Z
    virtual void SetHostControlHasFocusOverride(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectionUILess@CImeEventHelper@@UEAAJH@Z
    virtual long SetSelectionUILess(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUILessEnabled@CImeEventHelper@@UEAAJ_N@Z
    virtual long SetUILessEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionState@CImeEventHelper@@UEAAJPEAUITfRange@@K@Z
    virtual long UpdateCompositionState(ITfRange *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUIElement@CImeEventHelper@@UEAAJK@Z
    virtual long UpdateUIElement(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImeEventHelper@@UEAA@XZ
    virtual ~CImeEventHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCiceroObjectsCreated@CImeEventHelper@@AEAAJXZ
    long _EnsureCiceroObjectsCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTextServiceInfo@CImeEventHelper@@AEAAJXZ
    long _EnsureTextServiceInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureUILessEnabledAndActive@CImeEventHelper@@AEAAJXZ
    long _EnsureUILessEnabledAndActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureWin8CompatibleAndLoadAlternativeProvider@CImeEventHelper@@AEAAXXZ
    void _EnsureWin8CompatibleAndLoadAlternativeProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateAlternatives@CImeEventHelper@@AEAAJPEAUITfRange@@PEBGIIPEAPEAUITfCandidateList@@@Z
    long _GenerateAlternatives(ITfRange *, unsigned short const *, unsigned int, unsigned int, ITfCandidateList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUIElement@CImeEventHelper@@AEAAJKAEBU_GUID@@PEAPEAX@Z
    long _GetUIElement(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPerceivedTextChange@CImeEventHelper@@AEAA_NPEBG0@Z
    bool _IsPerceivedTextChange(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsUILessModeSupported@CImeEventHelper@@AEAA_NAEBU_GUID@@@Z
    bool _IsUILessModeSupported(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePossibleFocusLossKeyState@CImeEventHelper@@AEAAX_K_N@Z
    void _UpdatePossibleFocusLossKeyState(uint64_t, bool);
};
