#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 33 member(s).
class CContentLink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CContentLink@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CContentLink@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreCursorTypeAsMouseCursor@CContentLink@@QEAA?AW4MouseCursor@@XZ
    int GetCoreCursorTypeAsMouseCursor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionCount@CContentLink@@UEAAXPEAI@Z
    virtual void GetPositionCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRun@CContentLink@@UEAAJIPEAPEBVTextFormatting@@PEAPEBVInheritedProperties@@PEAW4TextNestingType@@PEAPEAVCTextElement@@PEAPEBGPEAI@Z
    virtual long GetRun(unsigned int, TextFormatting const * *, InheritedProperties const * *, int *, CTextElement * *, unsigned short const * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CContentLink@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@CContentLink@@QEAA_NXZ
    bool IsFocusable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CContentLink@@QEAAJXZ
    long Navigate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CContentLink@@UEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@CContentLink@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@CContentLink@@QEAAJPEAVCPointerEventArgs@@@Z
    long OnPointerEntered(CPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CContentLink@@QEAAJPEAVCPointerEventArgs@@@Z
    long OnPointerExited(CPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CContentLink@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentLinkInfo@CContentLink@@QEAAXPEAUIContentLinkInfo@Text@UI@Windows@@@Z
    void SetContentLinkInfo(::Windows::UI::Text::IContentLinkInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseEvent@CContentLink@@UEAAIUEventHandle@@IPEAVCEventArgs@@@Z
    virtual unsigned int ShouldRaiseEvent(EventHandle, unsigned int, CEventArgs *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CContentLink@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CContentLink@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CContentLink@@MEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContentLink@@AEAA@PEAVCCoreServices@@@Z
    CContentLink(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChangedEventListener@CContentLink@@AEAAJPEAVCEventArgs@@I@Z
    long FocusChangedEventListener(CEventArgs *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GotFocusEventListener@CContentLink@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long GotFocusEventListener(CDependencyObject *, CEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasToolTip@CContentLink@@AEAA_NXZ
    bool HasToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyDownEventListener@CContentLink@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long KeyDownEventListener(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyUpEventListener@CContentLink@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long KeyUpEventListener(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LostFocusEventListener@CContentLink@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long LostFocusEventListener(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterToolTip@CContentLink@@AEAAXXZ
    void RegisterToolTip();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToolTip@CContentLink@@AEAAXXZ
    void SetToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterToolTip@CContentLink@@AEAAXXZ
    void UnregisterToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundColorWithDefault@CContentLink@@AEAAJW4Theme@Theming@@@Z
    long UpdateBackgroundColorWithDefault(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForegroundColorWithDefault@CContentLink@@AEAAJW4Theme@Theming@@@Z
    long UpdateForegroundColorWithDefault(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContentLink@@EEAA@XZ
    virtual ~CContentLink();
};
