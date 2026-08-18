#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 113 member(s).
class CFrameworkElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActualHeight@CFrameworkElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long ActualHeight(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActualTheme@CFrameworkElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long ActualTheme(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActualWidth@CFrameworkElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long ActualWidth(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CFrameworkElement@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLogicalChild@CFrameworkElement@@QEAAJPEAVCDependencyObject@@_N@Z
    long AddLogicalChild(CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTemplateChild@CFrameworkElement@@UEAAJPEAVCUIElement@@@Z
    virtual long AddTemplateChild(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowFocusWhenDisabled@CFrameworkElement@@QEAA_NXZ
    bool AllowFocusWhenDisabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CFrameworkElement@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAlignmentOffset@CFrameworkElement@@SAXW4HorizontalAlignment@DirectUI@@W4VerticalAlignment@3@AEAUXSIZEF@@2AEAM3@Z
    static void ComputeAlignmentOffset(int, int, XSIZEF &, XSIZEF &, float &, float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFrameworkElement@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreationComplete@CFrameworkElement@@UEAAJXZ
    virtual long CreationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFromTemplatedParent@CFrameworkElement@@QEAAJXZ
    long DisconnectFromTemplatedParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGroupStorage@CFrameworkElement@@SAJPEAVCDependencyObject@@PEBVCDependencyProperty@@_N@Z
    static long EnsureGroupStorage(CDependencyObject *, CDependencyProperty const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLayoutProperties@CFrameworkElement@@QEAAX_N@Z
    void EnsureLayoutProperties(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateIsRightToLeft@CFrameworkElement@@UEAAXXZ
    virtual void EvaluateIsRightToLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixValueGetterForPropertyNoRef@CFrameworkElement@@QEBAPEBV1@QEBV1@W4KnownPropertyIndex@@@Z
    CFrameworkElement const * FixValueGetterForPropertyNoRef(CFrameworkElement const * const, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveStyle@CFrameworkElement@@QEBA?AV?$xref_ptr@VCStyle@@@@XZ
    WindissectOpaque GetActiveStyle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CFrameworkElement@@UEAAMXZ
    virtual float GetActualHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CFrameworkElement@@UEAAJPEAM@Z
    virtual long GetActualHeight(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualOffsetX@CFrameworkElement@@UEAAMXZ
    virtual float GetActualOffsetX();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualOffsetY@CFrameworkElement@@UEAAMXZ
    virtual float GetActualOffsetY();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CFrameworkElement@@UEAAMXZ
    virtual float GetActualWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CFrameworkElement@@UEAAJPEAM@Z
    virtual long GetActualWidth(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundBrush@CFrameworkElement@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetBackgroundBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundSizing@CFrameworkElement@@UEBA?AW4BackgroundSizing@DirectUI@@XZ
    virtual int GetBackgroundSizing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseUri@CFrameworkElement@@UEAAPEAUIPALUri@@XZ
    virtual IPALUri * GetBaseUri();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderBrush@CFrameworkElement@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetBorderBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderThickness@CFrameworkElement@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetBorderThickness() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBringIntoViewDistanceX@CFrameworkElement@@QEBANXZ
    double GetBringIntoViewDistanceX() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBringIntoViewDistanceY@CFrameworkElement@@QEBANXZ
    double GetBringIntoViewDistanceY() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassName@CFrameworkElement@@QEAA?AVxstring_ptr@@XZ
    xstring_ptr GetClassName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCornerRadius@CFrameworkElement@@UEBA?AUXRECTF_CR@@XZ
    virtual XRECTF_CR GetCornerRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveViewport@CFrameworkElement@@QEBA?AUXRECTF_WH@@XZ
    XRECTF_WH GetEffectiveViewport() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndependentlyAnimatedBrushes@CFrameworkElement@@UEAAXPEAPEAVCSolidColorBrush@@0@Z
    virtual void GetIndependentlyAnimatedBrushes(CSolidColorBrush * *, CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInheritanceParentInternal@CFrameworkElement@@UEBAPEAVCDependencyObject@@_N@Z
    virtual CDependencyObject * GetInheritanceParentInternal(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalParentNoRef@CFrameworkElement@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetLogicalParentNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxViewport@CFrameworkElement@@QEBA?AUXRECTF_WH@@XZ
    XRECTF_WH GetMaxViewport() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMentor@CFrameworkElement@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetMentor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPadding@CFrameworkElement@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetPadding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertiesForFocusVisualType@CFrameworkElement@@QEAAJQEBV1@W4FocusVisualType@@PEAPEAVCBrush@@PEAUXRECTF_RB@@@Z
    long GetPropertiesForFocusVisualType(CFrameworkElement const * const, int, CBrush * *, XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourcesNoCreate@CFrameworkElement@@QEBA?AV?$xref_ptr@VCResourceDictionary@@@@XZ
    WindissectOpaque GetResourcesNoCreate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecifiedHeight@CFrameworkElement@@QEAAMXZ
    float GetSpecifiedHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecifiedWidth@CFrameworkElement@@QEAAMXZ
    float GetSpecifiedWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStandardNameScopeParent@CFrameworkElement@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetStandardNameScopeParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplate@CFrameworkElement@@UEBA?AV?$xref_ptr@VCControlTemplate@@@@XZ
    virtual WindissectOpaque GetTemplate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplatedParent@CFrameworkElement@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetTemplatedParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CFrameworkElement@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueFromStyle@CFrameworkElement@@QEAAJPEBVCDependencyProperty@@PEAVCValue@@PEA_N@Z
    long GetValueFromStyle(CDependencyProperty const *, CValue *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateGroupsNoCreate@CFrameworkElement@@QEBA?AV?$xref_ptr@VCVisualStateGroupCollection@@@@XZ
    WindissectOpaque GetVisualStateGroupsNoCreate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTemplateChild@CFrameworkElement@@UEAA_NXZ
    virtual bool HasTemplateChild();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateImplicitStyles@CFrameworkElement@@SAJPEAVCUIElement@@PEAVCResourceDictionary@@@Z
    static long InvalidateImplicitStyles(CUIElement *, CResourceDictionary *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeApplyTemplate@CFrameworkElement@@QEAAJPEAE@Z
    long InvokeApplyTemplate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFocus@CFrameworkElement@@QEAAJW4FocusState@DirectUI@@PEAE@Z
    long InvokeFocus(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultHeight@CFrameworkElement@@QEAAHXZ
    int IsDefaultHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultWidth@CFrameworkElement@@QEAAHXZ
    int IsDefaultWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertySetByStyle@CFrameworkElement@@UEBA_NPEBVCDependencyProperty@@@Z
    virtual bool IsPropertySetByStyle(CDependencyProperty const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertyTemplateBound@CFrameworkElement@@UEBA_NPEBVCDependencyProperty@@@Z
    virtual bool IsPropertyTemplateBound(CDependencyProperty const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedForInheritedProperties@CFrameworkElement@@QEAAJW4Theme@Theming@@_N@Z
    long NotifyThemeChangedForInheritedProperties(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CFrameworkElement@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CFrameworkElement@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parent@CFrameworkElement@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Parent(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CFrameworkElement@@UEAAJXZ
    virtual long PullInheritedTextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CFrameworkElement@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveLogicalChild@CFrameworkElement@@QEAAXPEAVCDependencyObject@@@Z
    void RemoveLogicalChild(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTemplateChild@CFrameworkElement@@UEAAJXZ
    virtual long RemoveTemplateChild();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBringIntoViewDistanceX@CFrameworkElement@@QEAAXN@Z
    void SetBringIntoViewDistanceX(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBringIntoViewDistanceY@CFrameworkElement@@QEAAXN@Z
    void SetBringIntoViewDistanceY(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursor@CFrameworkElement@@QEAAJW4MouseCursor@@@Z
    long SetCursor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffectiveViewport@CFrameworkElement@@QEAAXUXRECTF_WH@@@Z
    void SetEffectiveViewport(XRECTF_WH);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsSetByStyle@CFrameworkElement@@UEAAJPEBVCDependencyProperty@@_N@Z
    virtual long SetIsSetByStyle(CDependencyProperty const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxViewport@CFrameworkElement@@QEAAXUXRECTF_WH@@@Z
    void SetMaxViewport(XRECTF_WH);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplateBinding@CFrameworkElement@@UEAAJPEBVCDependencyProperty@@0@Z
    virtual long SetTemplateBinding(CDependencyProperty const *, CDependencyProperty const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CFrameworkElement@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSkipLayoutRoundingMarginsDuringMeasure@CFrameworkElement@@SA_NXZ
    static bool ShouldSkipLayoutRoundingMarginsDuringMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImplicitStyle@CFrameworkElement@@UEAAJPEAVCStyle@@0_N11@Z
    virtual long UpdateImplicitStyle(CStyle *, CStyle *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRequiresCompNodeForRoundedCorners@CFrameworkElement@@QEAAXXZ
    void UpdateRequiresCompNodeForRoundedCorners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@CFrameworkElement@@SAJPEAV1@PEAPEAVCDependencyObject@@@Z
    static long get_Parent(CFrameworkElement *, CDependencyObject * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceleratedBorderRenderCommon@CFrameworkElement@@IEAAJAEBUSharedRenderParams@@AEBUD2DRenderParams@@PEAUIPALAcceleratedGeometry@@PEAUIPALAcceleratedBrush@@PEAUAcceleratedBrushParams@@234@Z
    long AcceleratedBorderRenderCommon(SharedRenderParams const &, D2DRenderParams const &, IPALAcceleratedGeometry *, IPALAcceleratedBrush *, AcceleratedBrushParams *, IPALAcceleratedGeometry *, IPALAcceleratedBrush *, AcceleratedBrushParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplate@CFrameworkElement@@MEAAJAEA_N@Z
    virtual long ApplyTemplate(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeCore@CFrameworkElement@@MEAAJUXRECTF_WH@@@Z
    virtual long ArrangeCore(XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CFrameworkElement@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFrameworkElement@@IEAA@PEAVCCoreServices@@@Z
    CFrameworkElement(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareForCircularReference@CFrameworkElement@@MEAA_NPEAV1@@Z
    virtual bool CompareForCircularReference(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBorderGeometriesAndBrushClipsCommon@CFrameworkElement@@IEAAJAEBUD2DPrecomputeParams@@PEBVCMILMatrix@@PEAUAcceleratedBrushParams@@2PEAPEAUIPALAcceleratedGeometry@@3@Z
    long CreateBorderGeometriesAndBrushClipsCommon(D2DPrecomputeParams const &, CMILMatrix const *, AcceleratedBrushParams *, AcceleratedBrushParams *, IPALAcceleratedGeometry * *, IPALAcceleratedGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CFrameworkElement@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFinalArrangeSizeMaximized@CFrameworkElement@@MEAA_NXZ
    virtual bool IsFinalArrangeSizeMaximized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CFrameworkElement@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureCore@CFrameworkElement@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureCore(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CFrameworkElement@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CFrameworkElement@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStyleChanged@CFrameworkElement@@IEAAJPEAVCStyle@@0W4BaseValueSource@@@Z
    long OnStyleChanged(CStyle *, CStyle *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetReferenceFromChild@CFrameworkElement@@MEAAJPEAVCDependencyObject@@@Z
    virtual long ResetReferenceFromChild(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsUpdatingBindings@CFrameworkElement@@MEAAXI@Z
    virtual void SetIsUpdatingBindings(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplatedParentImpl@CFrameworkElement@@MEAAXPEAVCDependencyObject@@@Z
    virtual void SetTemplatedParentImpl(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayoutClip@CFrameworkElement@@MEAAJ_N@Z
    virtual long UpdateLayoutClip(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFrameworkElement@@MEAA@XZ
    virtual ~CFrameworkElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyStyle@CFrameworkElement@@AEAAJXZ
    long ApplyStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureClassName@CFrameworkElement@@AEAAJXZ
    long EnsureClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImplicitStyle@CFrameworkElement@@AEAAJ_N@Z
    long EnsureImplicitStyle(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinMax@CFrameworkElement@@AEAAXAEAM000@Z
    void GetMinMax(float &, float &, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequestedTheme@CFrameworkElement@@AEBA?AW4ElementTheme@DirectUI@@XZ
    int GetRequestedTheme() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStyle@CFrameworkElement@@AEBA?AV?$xref_ptr@VCStyle@@@@XZ
    WindissectOpaque GetStyle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateProperty@CFrameworkElement@@EEAAJPEBVCDependencyProperty@@W4BaseValueSource@@@Z
    virtual long InvalidateProperty(CDependencyProperty const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStretchAlignmentTreatedAsNear@CFrameworkElement@@AEAAJ_NPEA_N@Z
    long IsStretchAlignmentTreatedAsNear(bool, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStretchVerticalAlignmentTreatedAsTop@CFrameworkElement@@CA_NW4VerticalAlignment@DirectUI@@AEAUXSIZEF@@1@Z
    static bool IsStretchVerticalAlignmentTreatedAsTop(int, XSIZEF &, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTargetTypeError@CFrameworkElement@@AEAAJPEBVCClassInfo@@W4KnownPropertyIndex@@@Z
    long NotifyTargetTypeError(CClassInfo const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRequestedThemeChanged@CFrameworkElement@@AEAAJXZ
    long OnRequestedThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseActiveThemeChangedEventIfChanging@CFrameworkElement@@AEAAXW4Theme@Theming@@@Z
    void RaiseActiveThemeChangedEventIfChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLoadingEventIfNeeded@CFrameworkElement@@AEAAXXZ
    void RaiseLoadingEventIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusAncestorsTarget@CFrameworkElement@@AEAAJ_N@Z
    long UpdateFocusAncestorsTarget(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateTargetType@CFrameworkElement@@AEAAJPEBVCClassInfo@@W4KnownPropertyIndex@@@Z
    long ValidateTargetType(CClassInfo const *, int);
};
