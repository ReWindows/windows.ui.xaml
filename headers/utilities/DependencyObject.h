#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 422 member(s).
namespace DirectUI {
class DependencyObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPeerReferenceToItemCallback@DependencyObject@DirectUI@@SAJPEAVCDependencyObject@@0@Z
    static long AddPeerReferenceToItemCallback(CDependencyObject *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowResurrection@DependencyObject@DirectUI@@QEAAEXZ
    unsigned char AllowResurrection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckThread@DependencyObject@DirectUI@@UEBAJXZ
    virtual long CheckThread() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearExpectedReferenceOnPeer@DependencyObject@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long ClearExpectedReferenceOnPeer(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPeerItemReferenceToObject@DependencyObject@DirectUI@@QEAAJPEAV12@@Z
    long ClearPeerItemReferenceToObject(DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearValue@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@@Z
    long ClearValue(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearValue@DependencyObject@DirectUI@@UEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long ClearValue(::Windows::UI::Xaml::IDependencyProperty *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearValueByKnownIndex@DependencyObject@DirectUI@@QEAAJW4KnownPropertyIndex@@@Z
    long ClearValueByKnownIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinitialize@DependencyObject@DirectUI@@UEAAXXZ
    virtual void Deinitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachExpression@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAVBindingExpressionBase@2@@Z
    long DetachExpression(CDependencyProperty const *, ::DirectUI::BindingExpressionBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndShutdown@DependencyObject@DirectUI@@UEAAJXZ
    virtual long EndShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@DependencyObject@DirectUI@@SAJPEAVCDependencyObject@@0IIII@Z
    static long EnterImpl(CDependencyObject *, CDependencyObject *, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateBaseValue@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAVEffectiveValueEntry@2@W4ValueOperation@@@Z
    long EvaluateBaseValue(CDependencyProperty const *, ::DirectUI::EffectiveValueEntry *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationBaseValue@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    long GetAnimationBaseValue(CDependencyProperty const *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationBaseValue@DependencyObject@DirectUI@@UEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetAnimationBaseValue(::Windows::UI::Xaml::IDependencyProperty *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreForObject@DependencyObject@DirectUI@@UEAAPEAUIDXamlCore@2@XZ
    virtual ::DirectUI::IDXamlCore * GetCoreForObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDPChangedEventSource@DependencyObject@DirectUI@@QEAAJPEAPEAUIDPChangedEventSource@2@@Z
    long GetDPChangedEventSource(::DirectUI::IDPChangedEventSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElement@DependencyObject@DirectUI@@QEAAJPEAPEAV12@@Z
    long GetFocusedElement(DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@DependencyObject@DirectUI@@QEBAPEAVCDependencyObject@@XZ
    CDependencyObject * GetHandle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleAddRef@DependencyObject@DirectUI@@QEAAPEAVCDependencyObject@@XZ
    CDependencyObject * GetHandleAddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInheritanceContextChangedEventSource@DependencyObject@DirectUI@@QEAAJPEAPEAUIInheritanceContextChangedEventSource@2@@Z
    long GetInheritanceContextChangedEventSource(::DirectUI::IInheritanceContextChangedEventSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMentor@DependencyObject@DirectUI@@QEAAJPEAPEAVFrameworkElement@2@@Z
    long GetMentor(::DirectUI::FrameworkElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DependencyObject@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@DependencyObject@DirectUI@@UEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(::Windows::UI::Xaml::IDependencyProperty *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@DependencyObject@DirectUI@@UEAAJPEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(CDependencyProperty const *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueByKnownIndex@DependencyObject@DirectUI@@QEAAJW4KnownPropertyIndex@@AEBU_GUID@@PEAPEAX@Z
    long GetValueByKnownIndex(int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueByKnownIndex@DependencyObject@DirectUI@@QEAAJW4KnownPropertyIndex@@PEAPEAUHSTRING__@@@Z
    long GetValueByKnownIndex(int, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueByKnownIndex@DependencyObject@DirectUI@@QEAAJW4KnownPropertyIndex@@PEAPEAUIInspectable@@@Z
    long GetValueByKnownIndex(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueByKnownIndex@DependencyObject@DirectUI@@QEAAJW4KnownPropertyIndex@@AEAVCValue@@@Z
    long GetValueByKnownIndex(int, CValue &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueCore@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@AEAVCValue@@@Z
    long GetValueCore(CDependencyProperty const *, CValue &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlDispatcher@DependencyObject@DirectUI@@QEAAJPEAV?$ComPtr@VIDispatcher@DirectUI@@@ctl@@@Z
    long GetXamlDispatcher(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetXamlDispatcherNoRef@DependencyObject@DirectUI@@QEAAPEAVIDispatcher@2@XZ
    ::DirectUI::IDispatcher * GetXamlDispatcherNoRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImplicitPegAllowed@DependencyObject@DirectUI@@UEAA_NXZ
    virtual bool ImplicitPegAllowed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAncestorOf@DependencyObject@DirectUI@@QEAAJPEAV12@PEAE@Z
    long IsAncestorOf(DependencyObject *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExternalObjectReference@DependencyObject@DirectUI@@UEAA_NXZ
    virtual bool IsExternalObjectReference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInLiveTree@DependencyObject@DirectUI@@QEBA_NXZ
    bool IsInLiveTree() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertyLocal@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAE@Z
    long IsPropertyLocal(CDependencyProperty const *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@DependencyObject@DirectUI@@SAJPEAVCDependencyObject@@0IIII@Z
    static long LeaveImpl(CDependencyObject *, CDependencyObject *, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkHasState@DependencyObject@DirectUI@@QEAAJXZ
    long MarkHasState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeferredElementStateChangedStatic@DependencyObject@DirectUI@@SAJPEAVCDependencyObject@@W4KnownPropertyIndex@@W4DeferredElementStateChange@@I0@Z
    static long NotifyDeferredElementStateChangedStatic(CDependencyObject *, int, int, unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInheritanceContextChanged@DependencyObject@DirectUI@@QEAAJW4InheritanceContextChangeKind@@@Z
    long NotifyInheritanceContextChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildUpdated@DependencyObject@DirectUI@@UEAAJPEAV12@@Z
    virtual long OnChildUpdated(DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@DependencyObject@DirectUI@@UEAAJII@Z
    virtual long OnCollectionChanged(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChangedCallback@DependencyObject@DirectUI@@SAJPEAVCDependencyObject@@II@Z
    static long OnCollectionChangedCallback(CDependencyObject *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritanceContextChanged@DependencyObject@DirectUI@@UEAAJXZ
    virtual long OnInheritanceContextChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnParentUpdated@DependencyObject@DirectUI@@UEAAJPEAVCDependencyObject@@0_N@Z
    virtual long OnParentUpdated(CDependencyObject *, CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackingProcessed@DependencyObject@DirectUI@@UEAAXPEAUIDXamlCore@2@@Z
    virtual void OnReferenceTrackingProcessed(::DirectUI::IDXamlCore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTreeParentUpdated@DependencyObject@DirectUI@@UEAAJPEAVCDependencyObject@@E@Z
    virtual long OnTreeParentUpdated(CDependencyObject *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@DependencyObject@DirectUI@@UEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLocalValue@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    long ReadLocalValue(CDependencyProperty const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLocalValue@DependencyObject@DirectUI@@UEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long ReadLocalValue(::Windows::UI::Xaml::IDependencyProperty *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalk@DependencyObject@DirectUI@@UEAA_NW4EReferenceTrackerWalkType@2@_N@Z
    virtual bool ReferenceTrackerWalk(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshExpression@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@@Z
    long RefreshExpression(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPropertyChangedCallback@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAUIDependencyPropertyChangedCallback@Xaml@UI@Windows@@PEA_J@Z
    long RegisterPropertyChangedCallback(CDependencyProperty const *, ::Windows::UI::Xaml::IDependencyPropertyChangedCallback *, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePeerReferenceToItemCallback@DependencyObject@DirectUI@@SAJPEAVCDependencyObject@@0@Z
    static long RemovePeerReferenceToItemCallback(CDependencyObject *, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBindingCallback@DependencyObject@DirectUI@@SAJPEAVCDependencyObject@@W4KnownPropertyIndex@@0@Z
    static long SetBindingCallback(CDependencyObject *, int, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBindingCore@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAVBinding@2@@Z
    long SetBindingCore(CDependencyProperty const *, ::DirectUI::Binding *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpectedReferenceOnPeer@DependencyObject@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long SetExpectedReferenceOnPeer(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedElement@DependencyObject@DirectUI@@SAJPEAV12@W4FocusState@Xaml@UI@Windows@@EPEAE_N33@Z
    static long SetFocusedElement(DependencyObject *, int, unsigned char, unsigned char *, bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedElementWithDirection@DependencyObject@DirectUI@@SAJPEAV12@W4FocusState@Xaml@UI@Windows@@EPEAEW4FocusNavigationDirection@Input@456@_N@Z
    static long SetFocusedElementWithDirection(DependencyObject *, int, unsigned char, unsigned char *, int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAUIInspectable@@@Z
    long SetValue(CDependencyProperty const *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@DependencyObject@DirectUI@@UEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long SetValue(::Windows::UI::Xaml::IDependencyProperty *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueByKnownIndex@DependencyObject@DirectUI@@QEAAJW4KnownPropertyIndex@@PEAUIInspectable@@@Z
    long SetValueByKnownIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueByKnownIndex@DependencyObject@DirectUI@@QEAAJW4KnownPropertyIndex@@PEAUHSTRING__@@@Z
    long SetValueByKnownIndex(int, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueByKnownIndex@DependencyObject@DirectUI@@QEAAJW4KnownPropertyIndex@@AEBVCValue@@@Z
    long SetValueByKnownIndex(int, CValue const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueCore@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@AEBVCValue@@@Z
    long SetValueCore(CDependencyProperty const *, CValue const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueCore@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAUIInspectable@@_NW4BaseValueSource@@@Z
    long SetValueCore(CDependencyProperty const *, IInspectable *, bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueCore@DependencyObject@DirectUI@@QEAAJAEBUSetValueParams@@_N@Z
    long SetValueCore(SetValueParams const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueInternal@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAUIInspectable@@IW4BaseValueSource@@@Z
    long SetValueInternal(CDependencyProperty const *, IInspectable *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StorePeerItemReferenceToObject@DependencyObject@DirectUI@@QEAAJPEAV12@@Z
    long StorePeerItemReferenceToObject(DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StorePeerPropertyReferenceToObject@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAUIInspectable@@_NPEAPEAU4@@Z
    long StorePeerPropertyReferenceToObject(CDependencyProperty const *, IInspectable *, bool, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEffectiveValueEntry@DependencyObject@DirectUI@@QEAAPEAVEffectiveValueEntry@2@W4KnownPropertyIndex@@@Z
    ::DirectUI::EffectiveValueEntry * TryGetEffectiveValueEntry(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryProcessThemeResourceBaseValue@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAVEffectiveValueEntry@2@PEAUIInspectable@@W4BaseValueSource@@PEAI@Z
    long TryProcessThemeResourceBaseValue(CDependencyProperty const *, ::DirectUI::EffectiveValueEntry *, IInspectable *, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterPropertyChangedCallback@DependencyObject@DirectUI@@QEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@_J@Z
    long UnregisterPropertyChangedCallback(::Windows::UI::Xaml::IDependencyProperty *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterPropertyChangedCallback@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@_J@Z
    long UnregisterPropertyChangedCallback(CDependencyProperty const *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEffectiveValue@DependencyObject@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAVEffectiveValueEntry@2@W4ValueOperation@@W4BaseValueSource@@PEAUIInspectable@@@Z
    long UpdateEffectiveValue(CDependencyProperty const *, ::DirectUI::EffectiveValueEntry *, int, int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePegWithPossibleShutdownException@DependencyObject@DirectUI@@QEAAX_NE@Z
    void UpdatePegWithPossibleShutdownException(bool, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dispatcher@DependencyObject@DirectUI@@UEAAJPEAPEAUICoreDispatcher@Core@UI@Windows@@@Z
    virtual long get_Dispatcher(::Windows::UI::Core::ICoreDispatcher * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DependencyObject@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DependencyObject@DirectUI@@IEAA@XZ
    DependencyObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFrameworkPeerCore@DependencyObject@DirectUI@@MEAAJXZ
    virtual long DisconnectFrameworkPeerCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureItemReferenceStore@DependencyObject@DirectUI@@IEAAJXZ
    long EnsureItemReferenceStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureReferenceStore@DependencyObject@DirectUI@@IEAAJXZ
    long EnsureReferenceStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@DependencyObject@DirectUI@@MEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddPreValidation@DependencyObject@DirectUI@@IEBAJQEAXQEAUEventRegistrationToken@@@Z
    long EventAddPreValidation(void * const, EventRegistrationToken * const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixMediaElementNaturalDuration@DependencyObject@DirectUI@@IEAAJAEAVCValue@@PEAUDuration@Xaml@UI@Windows@@PEAI@Z
    long FixMediaElementNaturalDuration(CValue &, ::Windows::UI::Xaml::Duration *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue2@DependencyObject@DirectUI@@MEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetDefaultValue2(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValueBase@DependencyObject@DirectUI@@IEAAJPEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    long GetDefaultValueBase(CDependencyProperty const *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEventSourceNoRef@DependencyObject@DirectUI@@IEAAPEAUIUntypedEventSource@2@W4KnownEventIndex@@@Z
    ::DirectUI::IUntypedEventSource * GetEventSourceNoRef(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEventSourceNoRefWithArgumentValidation@DependencyObject@DirectUI@@IEAAJW4KnownEventIndex@@PEAPEAUIUntypedEventSource@2@@Z
    long GetEventSourceNoRefWithArgumentValidation(int, ::DirectUI::IUntypedEventSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DependencyObject@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DependencyObject@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DependencyObject@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@DependencyObject@DirectUI@@MEAAJIIII@Z
    virtual long LeaveImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEventSources@DependencyObject@DirectUI@@IEAAJPEAV12@@Z
    long MoveEventSources(DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeferredElementStateChanged@DependencyObject@DirectUI@@MEAAJW4KnownPropertyIndex@@W4DeferredElementStateChange@@IPEAVCDependencyObject@@@Z
    virtual long NotifyDeferredElementStateChanged(int, int, unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@DependencyObject@DirectUI@@MEAAXXZ
    virtual void OnFinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@DependencyObject@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackerWalk@DependencyObject@DirectUI@@MEAAXH@Z
    virtual void OnReferenceTrackerWalk(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DependencyObject@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventSource@DependencyObject@DirectUI@@IEAAJW4KnownEventIndex@@@Z
    long RemoveEventSource(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreEventSources@DependencyObject@DirectUI@@IEAAJPEAV12@@Z
    long RestoreEventSources(DependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueExpression@DependencyObject@DirectUI@@IEAAJPEBVCDependencyProperty@@PEAVBindingExpressionBase@2@W4BaseValueSource@@@Z
    long SetValueExpression(CDependencyProperty const *, ::DirectUI::BindingExpressionBase *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseEvent@DependencyObject@DirectUI@@IEAAIW4KnownEventIndex@@@Z
    unsigned int ShouldRaiseEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreEventSource@DependencyObject@DirectUI@@IEAAJW4KnownEventIndex@@PEAUIUntypedEventSource@2@@Z
    long StoreEventSource(int, ::DirectUI::IUntypedEventSource *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DependencyObject@DirectUI@@MEAA@XZ
    virtual ~DependencyObject();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRefForPeerReferenceHelper@DependencyObject@DirectUI@@AEAAXXZ
    void AddRefForPeerReferenceHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearEffectiveValueEntryExpression@DependencyObject@DirectUI@@AEAAJPEAVEffectiveValueEntry@2@@Z
    long ClearEffectiveValueEntryExpression(::DirectUI::EffectiveValueEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPeerReferences@DependencyObject@DirectUI@@AEAAXXZ
    void ClearPeerReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveEventSourcesImpl@DependencyObject@DirectUI@@AEAAJPEAV12@@Z
    long MoveEventSourcesImpl(DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPropertyChanged@DependencyObject@DirectUI@@AEAAJAEBUPropertyChangedParams@@@Z
    long NotifyPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDPChanged@DependencyObject@DirectUI@@AEAAJPEBVCDependencyProperty@@@Z
    long RaiseDPChanged(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshExpression_Helper@DependencyObject@DirectUI@@AEAAJPEBVCDependencyProperty@@PEAVEffectiveValueEntry@2@@Z
    long RefreshExpression_Helper(CDependencyProperty const *, ::DirectUI::EffectiveValueEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseForPeerReferenceHelper@DependencyObject@DirectUI@@AEAAXXZ
    void ReleaseForPeerReferenceHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEffectiveValueEntryIfExists@DependencyObject@DirectUI@@AEAAXW4KnownPropertyIndex@@@Z
    void RemoveEffectiveValueEntryIfExists(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveM3PeerReferenceToObject@DependencyObject@DirectUI@@AEAAJPEAVCDependencyObject@@@Z
    long RemoveM3PeerReferenceToObject(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreM3PeerReferenceToObject@DependencyObject@DirectUI@@AEAAJPEAVCDependencyObject@@@Z
    long StoreM3PeerReferenceToObject(CDependencyObject *);
};
} // namespace DirectUI
