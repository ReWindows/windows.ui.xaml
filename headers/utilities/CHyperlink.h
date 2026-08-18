#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 37 member(s).
class CHyperlink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CHyperlink@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CHyperlink@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentText@CHyperlink@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetContentText(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextContentEnd@CHyperlink@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetTextContentEnd(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextContentStart@CHyperlink@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetTextContentStart(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CHyperlink@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlineStyle@CHyperlink@@QEBA?AW4UnderlineStyle@DirectUI@@XZ
    int GetUnderlineStyle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@CHyperlink@@QEAA_NXZ
    bool IsFocusable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLinkNavigationKey@CHyperlink@@SA_NI@Z
    static bool IsLinkNavigationKey(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CHyperlink@@QEAAJXZ
    long Navigate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CHyperlink@@UEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@CHyperlink@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@CHyperlink@@QEAAJPEAVCPointerEventArgs@@@Z
    long OnPointerEntered(CPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CHyperlink@@QEAAJPEAVCPointerEventArgs@@@Z
    long OnPointerExited(CPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CHyperlink@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CHyperlink@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseEvent@CHyperlink@@UEAAIUEventHandle@@IPEAVCEventArgs@@@Z
    virtual unsigned int ShouldRaiseEvent(EventHandle, unsigned int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnderlineVisibleResourceDirective@CHyperlink@@QEBA_NXZ
    bool UnderlineVisibleResourceDirective() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnderlineVisibleResourceDirective@CHyperlink@@SA_NPEAVCCoreServices@@@Z
    static bool UnderlineVisibleResourceDirective(CCoreServices *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CHyperlink@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CHyperlink@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CHyperlink@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CHyperlink@@MEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHyperlink@@AEAA@PEAVCCoreServices@@@Z
    CHyperlink(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChangedEventListener@CHyperlink@@AEAAJPEAVCEventArgs@@I@Z
    long FocusChangedEventListener(CEventArgs *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GotFocusEventListener@CHyperlink@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long GotFocusEventListener(CDependencyObject *, CEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasToolTip@CHyperlink@@AEAAJPEA_N@Z
    long HasToolTip(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyDownEventListener@CHyperlink@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long KeyDownEventListener(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyUpEventListener@CHyperlink@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long KeyUpEventListener(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LostFocusEventListener@CHyperlink@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long LostFocusEventListener(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterToolTip@CHyperlink@@AEAAJXZ
    long RegisterToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterToolTip@CHyperlink@@AEAAJXZ
    long UnregisterToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForegroundColor@CHyperlink@@AEAAJW4Theme@Theming@@W4HyperlinkStates@@@Z
    long UpdateForegroundColor(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUnderline@CHyperlink@@AEAAJXZ
    long UpdateUnderline();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHyperlink@@EEAA@XZ
    virtual ~CHyperlink();
};
