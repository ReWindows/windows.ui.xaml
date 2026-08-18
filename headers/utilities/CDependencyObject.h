#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 388 member(s).
class CDependencyObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateImpl@CDependencyObject@@UEAAXXZ
    virtual void ActivateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CDependencyObject@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddExtraExpectedReferenceOnPeer@CDependencyObject@@QEAAJXZ
    long AddExtraExpectedReferenceOnPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddParent@CDependencyObject@@UEAAJPEAV1@_NP6AX0W4Value@DirtyFlags@@@Z@Z
    virtual long AddParent(CDependencyObject *, bool, void ( *)(CDependencyObject *, int));
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPeerReferenceToItem@CDependencyObject@@QEAAJPEAV1@@Z
    long AddPeerReferenceToItem(CDependencyObject *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDependencyObject@@QEAAXXZ
    void AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowPeerResurrection@CDependencyObject@@QEAA_NXZ
    bool AllowPeerResurrection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsHandlerWhenNotLive@CDependencyObject@@UEBA_NHW4KnownEventIndex@@@Z
    virtual bool AllowsHandlerWhenNotLive(int, int) const;
    // Category: Method | Source: PE Export
    // Symbol: ?CanChangeBaseUri@CDependencyObject@@UEAAIXZ
    virtual unsigned int CanChangeBaseUri();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOnDemandProperty@CDependencyObject@@QEBA?AVCValue@@W4KnownPropertyIndex@@@Z
    CValue CheckOnDemandProperty(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOnDemandProperty@CDependencyObject@@QEBA?AVCValue@@PEBVCDependencyProperty@@@Z
    CValue CheckOnDemandProperty(CDependencyProperty const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CDependencyObject@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAnimatedValue@CDependencyObject@@QEAAJPEBVCDependencyProperty@@AEBVCValue@@@Z
    long ClearAnimatedValue(CDependencyProperty const *, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearExpectedReferenceOnPeer@CDependencyObject@@QEAAJXZ
    long ClearExpectedReferenceOnPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPeerReferences@CDependencyObject@@QEAAXXZ
    void ClearPeerReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRealizingProxy@CDependencyObject@@QEAAJXZ
    long ClearRealizingProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearValue@CDependencyObject@@QEAAJPEBVCDependencyProperty@@@Z
    long ClearValue(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearValueByIndex@CDependencyObject@@QEAAJW4KnownPropertyIndex@@@Z
    long ClearValueByIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementForCachedTemplateExpansion@CDependencyObject@@UEAAXPEAPEAV1@@Z
    virtual void CloneElementForCachedTemplateExpansion(CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CDependencyObject@@UEAAXPEAV1@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneRootElementForCachedTemplateExpansion@CDependencyObject@@QEAAXPEAPEAV1@@Z
    void CloneRootElementForCachedTemplateExpansion(CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextAddRef@CDependencyObject@@QEAAXXZ
    void ContextAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextRelease@CDependencyObject@@QEAAXXZ
    void ContextRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ControlsManagedPeerLifetime@CDependencyObject@@UEAAIXZ
    virtual unsigned int ControlsManagedPeerLifetime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDependencyObject@@SAJPEAPEAV1@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreationComplete@CDependencyObject@@UEAAJXZ
    virtual long CreationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateImpl@CDependencyObject@@UEAAXXZ
    virtual void DeactivateImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectInheritedProperties@CDependencyObject@@QEAAXXZ
    void DisconnectInheritedProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectManagedPeer@CDependencyObject@@QEAAXXZ
    void DisconnectManagedPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CDependencyObject@@UEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleParents@CDependencyObject@@UEBA_NXZ
    virtual bool DoesAllowMultipleParents() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInheritedProperties@CDependencyObject@@SAJPEAV1@PEBVCDependencyProperty@@_N@Z
    static long EnsureInheritedProperties(CDependencyObject *, CDependencyProperty const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInheritedPropertiesForRead@CDependencyObject@@QEAAJXZ
    long EnsureInheritedPropertiesForRead();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextFormatting@CDependencyObject@@SAJPEAV1@PEBVCDependencyProperty@@_N@Z
    static long EnsureTextFormatting(CDependencyObject *, CDependencyProperty const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextFormattingForRead@CDependencyObject@@QEAAJXZ
    long EnsureTextFormattingForRead();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWUCAnimationStarted@CDependencyObject@@UEAAXPEAVWinRTExpressionConversionContext@@@Z
    virtual void EnsureWUCAnimationStarted(WinRTExpressionConversionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@CDependencyObject@@UEAAJPEAV1@UEnterParams@@@Z
    virtual long Enter(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstNonStrictOnlyPropertyInUse@CDependencyObject@@QEBAPEBGXZ
    unsigned short const * FindFirstNonStrictOnlyPropertyInUse() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstStrictOnlyPropertyInUse@CDependencyObject@@QEBAPEBGXZ
    unsigned short const * FindFirstStrictOnlyPropertyInUse() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAPChildren@CDependencyObject@@UEAAIPEAPEAPEAVCAutomationPeer@@@Z
    virtual unsigned int GetAPChildren(CAutomationPeer * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedValue@CDependencyObject@@QEBAJQEBVCDependencyProperty@@PEAVCValue@@@Z
    long GetAnimatedValue(CDependencyProperty const * const, CValue *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationBaseValue@CDependencyObject@@QEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    long GetAnimationBaseValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnnotations@CDependencyObject@@SAJPEAV1@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetAnnotations(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationPeer@CDependencyObject@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * GetAutomationPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseUri@CDependencyObject@@UEAAPEAUIPALUri@@XZ
    virtual IPALUri * GetBaseUri();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseValueSource@CDependencyObject@@QEBA?AW4BaseValueSource@@PEBVCDependencyProperty@@@Z
    int GetBaseValueSource(CDependencyProperty const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInformation@CDependencyObject@@QEBAPEBVCClassInfo@@XZ
    CClassInfo const * GetClassInformation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassName@CDependencyObject@@QEBA?AVxstring_ptr@@XZ
    xstring_ptr GetClassName() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCoercedIsEnabled@CDependencyObject@@UEAAIXZ
    virtual unsigned int GetCoercedIsEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentProperty@CDependencyObject@@QEAAPEBVCDependencyProperty@@XZ
    CDependencyProperty const * GetContentProperty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompAnimation@CDependencyObject@@QEAAPEAUIUnknown@@W4KnownPropertyIndex@@@Z
    IUnknown * GetDCompAnimation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDebugLabel@CDependencyObject@@QEBA?AVxstring_ptr@@XZ
    xstring_ptr GetDebugLabel() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue@CDependencyObject@@QEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    long GetDefaultValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveSoundMode@CDependencyObject@@QEAA?AW4ElementSoundMode@DirectUI@@XZ
    int GetEffectiveSoundMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementInputWindow@CDependencyObject@@QEAAPEAUHWND__@@XZ
    HWND__* GetElementInputWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementPositioningWindow@CDependencyObject@@QEAAPEAUHWND__@@XZ
    HWND__* GetElementPositioningWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInheritanceParentInternal@CDependencyObject@@UEBAPEAV1@_N@Z
    virtual CDependencyObject * GetInheritanceParentInternal(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInheritedProperties@CDependencyObject@@QEAAJPEAPEBVInheritedProperties@@@Z
    long GetInheritedProperties(InheritedProperties const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLegacyDCompAnimation@CDependencyObject@@QEAA?AV?$xref_ptr@UIDCompositionAnimation@@@@W4KnownPropertyIndex@@@Z
    WindissectOpaque GetLegacyDCompAnimation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMentor@CDependencyObject@@UEAAPEAV1@XZ
    virtual CDependencyObject * GetMentor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CDependencyObject@@UEBAPEAV1@XZ
    virtual CDependencyObject * GetParent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentCount@CDependencyObject@@UEBA_KXZ
    virtual uint64_t GetParentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentInternal@CDependencyObject@@QEBAPEAV1@_N@Z
    CDependencyObject * GetParentInternal(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentItem@CDependencyObject@@UEBAPEAV1@_K@Z
    virtual CDependencyObject * GetParentItem(uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentTextFormatting@CDependencyObject@@QEAAJPEAPEAVTextFormatting@@@Z
    long GetParentTextFormatting(TextFormatting * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupAssociatedAutomationPeer@CDependencyObject@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * GetPopupAssociatedAutomationPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyByIndexInline@CDependencyObject@@QEBAPEBVCDependencyProperty@@W4KnownPropertyIndex@@@Z
    CDependencyProperty const * GetPropertyByIndexInline(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyOffset@CDependencyObject@@QEAAPEAXPEBVCDependencyProperty@@_N@Z
    void * GetPropertyOffset(CDependencyProperty const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizingProxy@CDependencyObject@@QEAAJPEAPEAVCDeferredElement@@@Z
    long GetRealizingProxy(CDeferredElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplatedParent@CDependencyObject@@UEAAPEAV1@XZ
    virtual CDependencyObject * GetTemplatedParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextFormatting@CDependencyObject@@QEAAJPEAPEBVTextFormatting@@@Z
    long GetTextFormatting(TextFormatting const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextFormattingMember@CDependencyObject@@UEAAPEAPEAVTextFormatting@@XZ
    virtual TextFormatting * * GetTextFormattingMember();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeRoot@CDependencyObject@@QEAAPEAV1@_N@Z
    CDependencyObject * GetTreeRoot(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDependencyObject@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIElementParentInternal@CDependencyObject@@QEBAPEAVCUIElement@@_N@Z
    CUIElement * GetUIElementParentInternal(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUINameForTracing@CDependencyObject@@QEAA?AVxstring_ptr@@XZ
    xstring_ptr GetUINameForTracing();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIPathForTracing@CDependencyObject@@QEAA?AVxstring_ptr@@_N@Z
    xstring_ptr GetUIPathForTracing(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUseLayoutRounding@CDependencyObject@@UEBA_NXZ
    virtual bool GetUseLayoutRounding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CDependencyObject@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueByIndex@CDependencyObject@@QEBAJW4KnownPropertyIndex@@PEAVCValue@@@Z
    long GetValueByIndex(int, CValue *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueInherited@CDependencyObject@@QEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    long GetValueInherited(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueInternal@CDependencyObject@@QEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    long GetValueInternal(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualTree@CDependencyObject@@QEAAPEAVVisualTree@@XZ
    VisualTree * GetVisualTree();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWUCDCompAnimation@CDependencyObject@@QEAA?AV?$xref_ptr@UICompositionAnimation@Composition@UI@Windows@@@@W4KnownPropertyIndex@@@Z
    WindissectOpaque GetWUCDCompAnimation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXUid@CDependencyObject@@QEAAJPEAVCValue@@@Z
    long GetXUid(CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasInheritedProperties@CDependencyObject@@UEAAHXZ
    virtual int HasInheritedProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLocalOrModifierValue@CDependencyObject@@QEAA_NPEBVCDependencyProperty@@@Z
    bool HasLocalOrModifierValue(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CDependencyObject@@UEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateProperty@CDependencyObject@@UEAAJPEBVCDependencyProperty@@W4BaseValueSource@@@Z
    virtual long InvalidateProperty(CDependencyProperty const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CDependencyObject@@QEAAJPEBVCDependencyProperty@@PEAV1@_N@Z
    long Invoke(CDependencyProperty const *, CDependencyObject *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@CDependencyObject@@UEBA_NXZ
    virtual bool IsActive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAmbientPropertyValueAvailable@CDependencyObject@@QEAAJPEBVCDependencyProperty@@PEA_N@Z
    long IsAmbientPropertyValueAvailable(CDependencyProperty const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAncestorOf@CDependencyObject@@QEAA_NPEAV1@@Z
    bool IsAncestorOf(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimatedProperty@CDependencyObject@@QEBA_NQEBVCDependencyProperty@@@Z
    bool IsAnimatedProperty(CDependencyProperty const * const) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimatedPropertyOverwritten@CDependencyObject@@QEBA_NQEBVCDependencyProperty@@@Z
    bool IsAnimatedPropertyOverwritten(CDependencyProperty const * const) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssociated@CDependencyObject@@UEAA_NXZ
    virtual bool IsAssociated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDependencyPropertyBackReference@CDependencyObject@@SA_NW4KnownPropertyIndex@@@Z
    static bool IsDependencyPropertyBackReference(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDependencyPropertyWeakRef@CDependencyObject@@SA_NW4KnownPropertyIndex@@@Z
    static bool IsDependencyPropertyWeakRef(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDestructing@CDependencyObject@@QEBA_NXZ
    bool IsDestructing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEffectiveValueInSparseStorage@CDependencyObject@@QEBA_NW4KnownPropertyIndex@@@Z
    bool IsEffectiveValueInSparseStorage(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFiringEvents@CDependencyObject@@UEAAHXZ
    virtual int IsFiringEvents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsParentAware@CDependencyObject@@QEBA_NXZ
    bool IsParentAware() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertyDefault@CDependencyObject@@QEBA_NPEBVCDependencyProperty@@@Z
    bool IsPropertyDefault(CDependencyProperty const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertyDefaultByIndex@CDependencyObject@@QEBA_NW4KnownPropertyIndex@@@Z
    bool IsPropertyDefaultByIndex(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertySetBySlot@CDependencyObject@@QEBA_NI@Z
    bool IsPropertySetBySlot(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertySetByStyle@CDependencyObject@@UEBA_NPEBVCDependencyProperty@@@Z
    virtual bool IsPropertySetByStyle(CDependencyProperty const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertyTemplateBound@CDependencyObject@@UEBA_NPEBVCDependencyProperty@@@Z
    virtual bool IsPropertyTemplateBound(CDependencyProperty const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRightToLeft@CDependencyObject@@UEAA_NXZ
    virtual bool IsRightToLeft();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSimpleSparseSet@CDependencyObject@@QEBA_NW4KnownPropertyIndex@@@Z
    bool IsSimpleSparseSet(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUpdatingBindings@CDependencyObject@@UEAAIXZ
    virtual unsigned int IsUpdatingBindings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@CDependencyObject@@UEAAJPEAV1@ULeaveParams@@@Z
    virtual long Leave(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPropertyAndGroupOffsetToDO@CDependencyObject@@QEAAPEAV1@II@Z
    CDependencyObject * MapPropertyAndGroupOffsetToDO(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetRenderDirty@CDependencyObject@@SAXPEAV1@W4Value@DirtyFlags@@@Z
    static void NWSetRenderDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NonStrictOnlyApiCheck@CDependencyObject@@QEAAJPEBG@Z
    long NonStrictOnlyApiCheck(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInheritanceContextChanged@CDependencyObject@@QEAAJW4InheritanceContextChangeKind@@@Z
    long NotifyInheritanceContextChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPropertyChanged@CDependencyObject@@QEAAJAEBUPropertyChangedParams@@@Z
    long NotifyPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChanged@CDependencyObject@@QEAAJW4Theme@Theming@@_N@Z
    long NotifyThemeChanged(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfTypeByIndex@CDependencyObject@@QEBA_NW4KnownTypeIndex@@@Z
    bool OfTypeByIndex(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@CDependencyObject@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeerImpl@CDependencyObject@@UEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * OnCreateAutomationPeerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeerInternal@CDependencyObject@@QEAAPEAVCAutomationPeer@@XZ
    CAutomationPeer * OnCreateAutomationPeerInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritanceContextChanged@CDependencyObject@@UEAAJXZ
    virtual long OnInheritanceContextChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManagedPeerCreated@CDependencyObject@@UEAAJII@Z
    virtual long OnManagedPeerCreated(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTree@CDependencyObject@@QEAAIXZ
    unsigned int ParticipatesInManagedTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CDependencyObject@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PegManagedPeer@CDependencyObject@@QEAAJ_NPEA_N@Z
    long PegManagedPeer(bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PegManagedPeerNoRef@CDependencyObject@@QEAAXXZ
    void PegManagedPeerNoRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateLayoutDirty@CDependencyObject@@UEAAX_N0@Z
    virtual void PropagateLayoutDirty(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CDependencyObject@@UEAAJXZ
    virtual long PullInheritedTextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLocalValue@CDependencyObject@@QEAAJPEBVCDependencyProperty@@PEAVCValue@@PEA_N2@Z
    long ReadLocalValue(CDependencyProperty const *, CValue *, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalk@CDependencyObject@@QEAAXW4EReferenceTrackerWalkType@DirectUI@@_N1@Z
    void ReferenceTrackerWalk(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalkCore@CDependencyObject@@UEAA_NW4EReferenceTrackerWalkType@DirectUI@@_N1@Z
    virtual bool ReferenceTrackerWalkCore(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterName@CDependencyObject@@UEAAJPEAV1@I@Z
    virtual long RegisterName(CDependencyObject *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDependencyObject@@QEAAXXZ
    void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CDependencyObject@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseOverride@CDependencyObject@@UEAAXXZ
    virtual void ReleaseOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CDependencyObject@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveParent@CDependencyObject@@UEAAJPEAV1@@Z
    virtual long RemoveParent(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePeerReferenceToItem@CDependencyObject@@QEAAJPEAV1@@Z
    long RemovePeerReferenceToItem(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAndOriginateError@CDependencyObject@@QEAAJJW4ErrorType@@IIPEBVxephemeral_string_ptr@@@Z
    long SetAndOriginateError(long, int, unsigned int, unsigned int, xephemeral_string_ptr const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatedValue@CDependencyObject@@QEAAJPEBVCDependencyProperty@@AEBVCValue@@V?$xref_ptr@VCDependencyObject@@@@@Z
    long SetAnimatedValue(CDependencyProperty const *, CValue const &, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssociated@CDependencyObject@@UEAAX_NPEAV1@@Z
    virtual void SetAssociated(bool, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationPeer@CDependencyObject@@UEAAJPEAVCAutomationPeer@@@Z
    virtual long SetAutomationPeer(CAutomationPeer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBaseUri@CDependencyObject@@QEAAXPEAUIPALUri@@@Z
    void SetBaseUri(IPALUri *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompAnimation@CDependencyObject@@QEAAXPEAUIUnknown@@W4KnownPropertyIndex@@@Z
    void SetDCompAnimation(IUnknown *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompResourceDirty@CDependencyObject@@UEAAXXZ
    virtual void SetDCompResourceDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpectedReferenceOnPeer@CDependencyObject@@QEAAJXZ
    long SetExpectedReferenceOnPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsSetByStyle@CDependencyObject@@UEAAJPEBVCDependencyProperty@@_N@Z
    virtual long SetIsSetByStyle(CDependencyProperty const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@CDependencyObject@@QEAAJAEBVxstring_ptr@@@Z
    long SetName(xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentForInheritanceContextOnly@CDependencyObject@@UEAAXPEAV1@@Z
    virtual void SetParentForInheritanceContextOnly(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParticipatesInManagedTreeDefault@CDependencyObject@@QEAAJXZ
    long SetParticipatesInManagedTreeDefault();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPeerReferenceToProperty@CDependencyObject@@QEAAJPEBVCDependencyProperty@@AEBVCValue@@_NPEAUIInspectable@@PEAPEAU4@@Z
    long SetPeerReferenceToProperty(CDependencyProperty const *, CValue const &, bool, IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyIsDefault@CDependencyObject@@QEAAXPEBVCDependencyProperty@@@Z
    void SetPropertyIsDefault(CDependencyProperty const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyIsLocal@CDependencyObject@@QEAAJPEBVCDependencyProperty@@@Z
    long SetPropertyIsLocal(CDependencyProperty const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRealizingProxy@CDependencyObject@@QEAAJPEAVCDeferredElement@@@Z
    long SetRealizingProxy(CDeferredElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequiresComposition@CDependencyObject@@UEAAJW4Value@CompositionRequirement@@W42IndependentAnimationType@@@Z
    virtual long SetRequiresComposition(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSimpleSparseFlag@CDependencyObject@@QEAAXW4KnownPropertyIndex@@_N@Z
    void SetSimpleSparseFlag(int, bool);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetTemplateBinding@CDependencyObject@@UEAAJPEBVCDependencyProperty@@0@Z
    virtual long SetTemplateBinding(CDependencyProperty const *, CDependencyProperty const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeResource@CDependencyObject@@QEAAXPEBVCDependencyProperty@@PEAVCThemeResource@@@Z
    void SetThemeResource(CDependencyProperty const *, CThemeResource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeResourceBinding@CDependencyObject@@QEAAJPEBVCDependencyProperty@@PEAVCModifiedValue@@PEAVCThemeResource@@W4BaseValueSource@@@Z
    long SetThemeResourceBinding(CDependencyProperty const *, CModifiedValue *, CThemeResource *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CDependencyObject@@QEAAJPEBVCDependencyProperty@@AEBVCValue@@@Z
    long SetValue(CDependencyProperty const *, CValue const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CDependencyObject@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueByIndex@CDependencyObject@@QEAAJW4KnownPropertyIndex@@AEBVCValue@@@Z
    long SetValueByIndex(int, CValue const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueByKnownIndex@CDependencyObject@@QEAAJW4KnownPropertyIndex@@_N@Z
    long SetValueByKnownIndex(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueByKnownIndex@CDependencyObject@@QEAAJW4KnownPropertyIndex@@AEBVCValue@@@Z
    long SetValueByKnownIndex(int, CValue const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueByKnownIndex@CDependencyObject@@QEAAJW4KnownPropertyIndex@@PEAV1@@Z
    long SetValueByKnownIndex(int, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueByKnownIndex@CDependencyObject@@QEAAJW4KnownPropertyIndex@@H@Z
    long SetValueByKnownIndex(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueByKnownIndex@CDependencyObject@@QEAAJW4KnownPropertyIndex@@M@Z
    long SetValueByKnownIndex(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualTree@CDependencyObject@@QEAAXPEAVVisualTree@@@Z
    void SetVisualTree(VisualTree *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFrameworkClearCoreExpectedReference@CDependencyObject@@QEAA_NXZ
    bool ShouldFrameworkClearCoreExpectedReference();
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldRaiseEvent@CDependencyObject@@UEAAIUEventHandle@@IPEAVCEventArgs@@@Z
    virtual unsigned int ShouldRaiseEvent(EventHandle, unsigned int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipNameRegistrationForChildren@CDependencyObject@@UEAAIXZ
    virtual unsigned int SkipNameRegistrationForChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StrictOnlyApiCheck@CDependencyObject@@QEAAJPEBG@Z
    long StrictOnlyApiCheck(unsigned short const *);
    // Category: Method | Source: PE Export
    // Symbol: ?SubscribeToPropertyChanges@CDependencyObject@@UEAAJPEBVCDependencyProperty@@PEAV1@0@Z
    virtual long SubscribeToPropertyChanges(CDependencyProperty const *, CDependencyObject *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TracePropertyChanged@CDependencyObject@@QEAAXPEBVCDependencyProperty@@PEBVCValue@@@Z
    void TracePropertyChanged(CDependencyProperty const *, CValue const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnsureManagedPeer@CDependencyObject@@QEAAJPEA_N_N110@Z
    long TryEnsureManagedPeer(bool *, bool, bool, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAnimatedPropertySource@CDependencyObject@@QEAA?AV?$xref_ptr@VCDependencyObject@@@@QEBVCDependencyProperty@@@Z
    WindissectOpaque TryGetAnimatedPropertySource(CDependencyProperty const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPegPeer@CDependencyObject@@QEAAXPEAI0@Z
    void TryPegPeer(unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpegManagedPeer@CDependencyObject@@QEAAX_N@Z
    void UnpegManagedPeer(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpegManagedPeerNoRef@CDependencyObject@@QEAAXXZ
    void UnpegManagedPeerNoRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterName@CDependencyObject@@QEAAJPEAV1@@Z
    long UnregisterName(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetRequiresComposition@CDependencyObject@@UEAAXW4Value@CompositionRequirement@@W42IndependentAnimationType@@@Z
    virtual void UnsetRequiresComposition(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAllThemeReferences@CDependencyObject@@QEAAJXZ
    long UpdateAllThemeReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInheritedPropertiesForRead@CDependencyObject@@QEAAJXZ
    long UpdateInheritedPropertiesForRead();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateState@CDependencyObject@@UEAAJXZ
    virtual long UpdateState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThemeReference@CDependencyObject@@QEAAJW4KnownPropertyIndex@@@Z
    long UpdateThemeReference(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndInit@CDependencyObject@@SAJPEAV1@PEAPEAV1@@Z
    static long ValidateAndInit(CDependencyObject *, CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateStrictnessOnProperty@CDependencyObject@@QEAAJPEBVCPropertyBase@@@Z
    long ValidateStrictnessOnProperty(CPropertyBase const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDependencyObject@@IEAA@PEAVCCoreServices@@@Z
    CDependencyObject(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearEffectiveValueInSparseStorage@CDependencyObject@@IEAAJPEBVCDependencyProperty@@@Z
    long ClearEffectiveValueInSparseStorage(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPropertyBitField@CDependencyObject@@IEAAXAEATBitField@1@GI@Z
    void ClearPropertyBitField(WindissectOpaque &, unsigned short, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearThemeResource@CDependencyObject@@IEAAXPEBVCDependencyProperty@@PEAV?$xref_ptr@VCThemeResource@@@@@Z
    void ClearThemeResource(CDependencyProperty const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClonePropertySetField@CDependencyObject@@IEAAJPEBV1@@Z
    long ClonePropertySetField(CDependencyObject const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CDependencyObject@@MEAAJPEAV1@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompObjectRegistry@CDependencyObject@@IEBAPEAVDependencyObjectDCompRegistry@@XZ
    DependencyObjectDCompRegistry * GetDCompObjectRegistry() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveValueInSparseStorage@CDependencyObject@@IEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    long GetEffectiveValueInSparseStorage(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStandardNameScopeOwnerInternal@CDependencyObject@@IEAAPEAV1@PEAV1@@Z
    CDependencyObject * GetStandardNameScopeOwnerInternal(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStandardNameScopeParent@CDependencyObject@@MEAAPEAV1@XZ
    virtual CDependencyObject * GetStandardNameScopeParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeResourceNoRef@CDependencyObject@@IEAAPEAVCThemeResource@@W4KnownPropertyIndex@@@Z
    CThemeResource * GetThemeResourceNoRef(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImpl@CDependencyObject@@MEAAJPEBVCDependencyProperty@@PEAV1@@Z
    virtual long InvokeImpl(CDependencyProperty const *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CDependencyObject@@MEAAJPEAV1@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInheritedPropertyDirty@CDependencyObject@@MEAAJPEBVCDependencyProperty@@PEBVCValue@@@Z
    virtual long MarkInheritedPropertyDirty(CDependencyProperty const *, CValue const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@CDependencyObject@@MEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateInheritedDirtyFlag@CDependencyObject@@IEAAXPEAVCUIElement@@W4Value@DirtyFlags@@@Z
    void NWPropagateInheritedDirtyFlag(CUIElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyParentChange@CDependencyObject@@MEAAXPEAV1@P6AX0W4Value@DirtyFlags@@@Z@Z
    virtual void NotifyParentChange(CDependencyObject *, void ( *)(CDependencyObject *, int));
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CDependencyObject@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCoreImpl@CDependencyObject@@IEAAJW4Theme@Theming@@_N1@Z
    long NotifyThemeChangedCoreImpl(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMultipleAssociationChange@CDependencyObject@@IEAAJPEAV1@@Z
    long OnMultipleAssociationChange(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CDependencyObject@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertySetImpl@CDependencyObject@@MEAAJPEBVCDependencyProperty@@AEBVCValue@@1_N@Z
    virtual long OnPropertySetImpl(CDependencyProperty const *, CValue const &, CValue const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformEmergencyInvalidation@CDependencyObject@@MEAAJPEAV1@@Z
    virtual long PerformEmergencyInvalidation(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetReferenceFromChild@CDependencyObject@@MEAAJPEAV1@@Z
    virtual long ResetReferenceFromChild(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBaseValueSource@CDependencyObject@@IEAAJPEBVCDependencyProperty@@W4BaseValueSource@@PEAUEffectiveValue@@@Z
    long SetBaseValueSource(CDependencyProperty const *, int, EffectiveValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffectiveValueInSparseStorage@CDependencyObject@@IEAAJPEBVCDependencyProperty@@AEBVCValue@@@Z
    long SetEffectiveValueInSparseStorage(CDependencyProperty const *, CValue const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplatedParentImpl@CDependencyObject@@MEAAXPEAV1@@Z
    virtual void SetTemplatedParentImpl(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEffectiveValue@CDependencyObject@@IEAAJAEBUUpdateEffectiveValueParams@1@@Z
    long UpdateEffectiveValue(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDependencyObject@@MEAA@XZ
    virtual ~CDependencyObject();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendEffectiveValueToCollectionInField@CDependencyObject@@AEAAJAEBUEffectiveValueParams@1@PEAX@Z
    long AppendEffectiveValueToCollectionInField(WindissectOpaque const &, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearEffectiveValueInSparseStorage@CDependencyObject@@AEAAJAEBUEffectiveValueParams@1@AEAVCValue@@PEAPEAUIInspectable@@AEA_N@Z
    long ClearEffectiveValueInSparseStorage(WindissectOpaque const &, CValue &, IInspectable * *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterEffectiveValue@CDependencyObject@@AEAAJPEBVCDependencyProperty@@PEAV1@@Z
    long EnterEffectiveValue(CDependencyProperty const *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentForSoundMode@CDependencyObject@@AEAAPEAV1@XZ
    CDependencyObject * GetParentForSoundMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSoundModeIfAvailable@CDependencyObject@@AEAA?AW4ElementSoundMode@DirectUI@@XZ
    int GetSoundModeIfAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveEffectiveValue@CDependencyObject@@AEAAJPEBVCDependencyProperty@@PEAV1@@Z
    long LeaveEffectiveValue(CDependencyProperty const *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrivateEnsurePeerAndTryPeg@CDependencyObject@@AEAAJ_N00PEA_N@Z
    long PrivateEnsurePeerAndTryPeg(bool, bool, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDeferredStandardNameScopeEntries@CDependencyObject@@EEAAXPEAV1@@Z
    virtual void RegisterDeferredStandardNameScopeEntries(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetReferencesFromChildren@CDependencyObject@@AEAAXXZ
    void ResetReferencesFromChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetReferencesFromSparsePropertyValues@CDependencyObject@@AEAAX_N@Z
    void ResetReferencesFromSparsePropertyValues(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffectiveValue@CDependencyObject@@AEAAJAEBUEffectiveValueParams@1@@Z
    long SetEffectiveValue(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffectiveValueInField@CDependencyObject@@AEAAJAEBUEffectiveValueParams@1@AEAVCValue@@PEAPEAUIInspectable@@AEA_N@Z
    long SetEffectiveValueInField(WindissectOpaque const &, CValue &, IInspectable * *, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffectiveValueInSparseStorage@CDependencyObject@@AEAAJAEBUEffectiveValueParams@1@AEAVCValue@@PEAPEAUIInspectable@@AEA_N@Z
    long SetEffectiveValueInSparseStorage(WindissectOpaque const &, CValue &, IInspectable * *, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpectedReferenceOnPeerAndNotifyParentUpdated@CDependencyObject@@AEAAJXZ
    long SetExpectedReferenceOnPeerAndNotifyParentUpdated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CDependencyObject@@AEAAJPEAV1@_NP6AX0W4Value@DirtyFlags@@@Z@Z
    long SetParent(CDependencyObject *, bool, void ( *)(CDependencyObject *, int));
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldTrackWithPeerReferenceToProperty@CDependencyObject@@AEAA_NPEBVCDependencyProperty@@AEBVCValue@@_N@Z
    bool ShouldTrackWithPeerReferenceToProperty(CDependencyProperty const *, CValue const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddToContentPropertyCollection@CDependencyObject@@AEAAJPEBVCDependencyProperty@@AEBVCValue@@PEA_N@Z
    long TryAddToContentPropertyCollection(CDependencyProperty const *, CValue const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReCreateUIAWrapper@CDependencyObject@@AEAAJXZ
    long TryReCreateUIAWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDeferredStandardNameScopeEntries@CDependencyObject@@EEAAXPEAV1@@Z
    virtual void UnregisterDeferredStandardNameScopeEntries(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCValue@CDependencyObject@@CAJPEBVCDependencyProperty@@AEBVCValue@@W4ValueType@@@Z
    static long ValidateCValue(CDependencyProperty const *, CValue const &, int);
};
