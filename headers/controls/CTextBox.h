#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 40 member(s).
class CTextBox {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPasteClipboardContent@CTextBox@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long CanPasteClipboardContent(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRedo@CTextBox@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long CanRedo(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUndo@CTextBox@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long CanUndo(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextBox@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlignment@CTextBox@@UEAAJPEAW4TextAlignment@DirectUI@@@Z
    virtual long GetAlignment(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputScope@CTextBox@@UEAAJPEAW4InputScopeNameValue@@@Z
    virtual long GetInputScope(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRectFromCharacterIndex@CTextBox@@QEAAJHEPEAURect@Foundation@Windows@@@Z
    long GetRectFromCharacterIndex(int, unsigned char, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextBox@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CTextBox@@UEAA_NXZ
    virtual bool IsEmpty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnly@CTextBox@@UEBAIXZ
    virtual unsigned int IsReadOnly() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CTextBox@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CTextBox@@QEAAJHH@Z
    long Select(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CTextBox@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptsReturn@CTextBox@@MEBAIXZ
    virtual unsigned int AcceptsReturn() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CTextBox@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCopyPropertyID@CTextBox@@MEBA?AW4KnownEventIndex@@XZ
    virtual int GetCopyPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCutPropertyID@CTextBox@@MEBA?AW4KnownEventIndex@@XZ
    virtual int GetCutPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandwritingViewPropertyID@CTextBox@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetHandwritingViewPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPastePropertyID@CTextBox@@MEBA?AW4KnownEventIndex@@XZ
    virtual int GetPastePropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionFlyoutPropertyID@CTextBox@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionFlyoutPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightColorPropertyID@CTextBox@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionHighlightColorPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightColorWhenNotFocusedPropertyID@CTextBox@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionHighlightColorWhenNotFocusedPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextCompositionEventPropertyID@CTextBox@@MEBA?AW4KnownEventIndex@@W4TextCompositionStage@CTextBoxBase@@@Z
    virtual int GetTextCompositionEventPropertyID(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTextBox@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAcceptsReturnChanged@CTextBox@@MEAAJXZ
    virtual long OnAcceptsReturnChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterReceived@CTextBox@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnCharacterReceived(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@CTextBox@@MEAAJ_N@Z
    virtual long OnContentChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandwritingViewClosed@CTextBox@@MEAAJXZ
    virtual long OnHandwritingViewClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CTextBox@@MEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextServicesBuffer@CTextBox@@MEAAJAEBVxstring_ptr@@@Z
    virtual long SetTextServicesBuffer(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextForCompositionStartedEvent@CTextBox@@MEAAJXZ
    virtual long UpdateTextForCompositionStartedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@CTextBox@@MEAAJXZ
    virtual long UpdateVisualState();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextBox@@AEAA@PEAVCCoreServices@@@Z
    CTextBox(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanInvokeDeleteButton@CTextBox@@AEAAIXZ
    unsigned int CanInvokeDeleteButton();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectedText@CTextBox@@AEAAJAEBVxstring_ptr@@@Z
    long SetSelectedText(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextProperty@CTextBox@@AEAAJ_N0@Z
    long UpdateTextProperty(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSetValueArguments@CTextBox@@CAJPEBVCDependencyProperty@@AEBVCValue@@@Z
    static long ValidateSetValueArguments(CDependencyProperty const *, CValue const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextBox@@EEAA@XZ
    virtual ~CTextBox();
};
