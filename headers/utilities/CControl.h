#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 51 member(s).
class CControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CControl@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDescription@CControl@@QEAAXXZ
    void ClearDescription();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CControl@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceIsEnabled@CControl@@UEAAJ_N0@Z
    virtual long CoerceIsEnabled(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CControl@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreationComplete@CControl@@UEAAJXZ
    virtual long CreationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enabled@CControl@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Enabled(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDescription@CControl@@QEAAXXZ
    void EnsureDescription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuiltInStyle@CControl@@QEAAJPEAPEAVCStyle@@@Z
    long GetBuiltInStyle(CStyle * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementationRoot@CControl@@QEAA?AV?$xref_ptr@VCUIElement@@@@XZ
    WindissectOpaque GetImplementationRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementationRoot@CControl@@QEAAJPEAPEAVCUIElement@@@Z
    long GetImplementationRoot(CUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CControl@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPadding@CControl@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetPadding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplate@CControl@@UEBA?AV?$xref_ptr@VCControlTemplate@@@@XZ
    virtual WindissectOpaque GetTemplate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplateChild@CControl@@QEBA?AV?$xref_ptr@VCDependencyObject@@@@AEBVxstring_ptr_view@@@Z
    WindissectOpaque GetTemplateChild(xstring_ptr_view const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CControl@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueFromBuiltInStyle@CControl@@QEAAJPEBVCDependencyProperty@@PEAVCValue@@PEA_N@Z
    long GetValueFromBuiltInStyle(CDependencyProperty const *, CValue *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusEngaged@CControl@@QEBAIXZ
    unsigned int IsFocusEngaged() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusEngagementEnabled@CControl@@QEBAIXZ
    unsigned int IsFocusEngagementEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@CControl@@UEAAIXZ
    virtual unsigned int IsFocusable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocused@CControl@@UEAAIXZ
    virtual unsigned int IsFocused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUpdatingBindings@CControl@@UEAAIXZ
    virtual unsigned int IsUpdatingBindings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CControl@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CControl@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CControl@@UEAAJXZ
    virtual long PullInheritedTextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshTemplateBindings@CControl@@QEAAJW4TemplateBindingsRefreshType@@@Z
    long RefreshTemplateBindings(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFocusEngagement@CControl@@QEAAJXZ
    long RemoveFocusEngagement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTemplateBinding@CControl@@QEAAXQEBVCDependencyObject@@QEBVCDependencyProperty@@@Z
    void RemoveTemplateBinding(CDependencyObject const * const, CDependencyProperty const * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusEngagement@CControl@@QEAAJXZ
    long SetFocusEngagement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CControl@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToPropertyChanges@CControl@@UEAAJPEBVCDependencyProperty@@PEAVCDependencyObject@@0@Z
    virtual long SubscribeToPropertyChanges(CDependencyProperty const *, CDependencyObject *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsBuiltInStyles@CControl@@QEAA_NXZ
    bool SupportsBuiltInStyles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuppressIsEnabled@CControl@@QEAAX_N@Z
    void SuppressIsEnabled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEngagementState@CControl@@QEAAJ_N@Z
    long UpdateEngagementState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusState@CControl@@UEAAJW4FocusState@DirectUI@@@Z
    virtual long UpdateFocusState(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CControl@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CControl@@IEAA@PEAVCCoreServices@@@Z
    CControl(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CControl@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CControl@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CControl@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CControl@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseIsEnabledChangedEvent@CControl@@MEAAJPEAVCValue@@@Z
    virtual long RaiseIsEnabledChangedEvent(CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSubscriptions@CControl@@IEAAJQEAUPropertySubscriptions@@AEBVCValue@@W4TemplateBindingsRefreshType@@@Z
    long RefreshSubscriptions(PropertySubscriptions * const, CValue const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsUpdatingBindings@CControl@@MEAAXI@Z
    virtual void SetIsUpdatingBindings(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CControl@@MEAA@XZ
    virtual ~CControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyBuiltInStyle@CControl@@AEAAJXZ
    long ApplyBuiltInStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPropertySubscriptions@CControl@@AEAAXXZ
    void ClearPropertySubscriptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetDescriptionProperty@CControl@@AEBA?AW4KnownPropertyIndex@@XZ
    int GetTargetDescriptionProperty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateInheritedProperty@CControl@@AEAAJPEAVCUIElement@@PEBVCDependencyProperty@@@Z
    long PropagateInheritedProperty(CUIElement *, CDependencyProperty const *);
};
