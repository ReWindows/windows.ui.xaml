#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 68 member(s).
namespace DirectUI {
class BindingExpression {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindingAsDO@BindingExpression@DirectUI@@UEAAPEAUIDependencyObject@Xaml@UI@Windows@@XZ
    virtual ::Windows::UI::Xaml::IDependencyObject * GetBindingAsDO();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindingMode@BindingExpression@DirectUI@@UEAAJPEAW4BindingMode@Data@Xaml@UI@Windows@@@Z
    virtual long GetBindingMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindingString@BindingExpression@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetBindingString(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanSetValue@BindingExpression@DirectUI@@UEAAJPEAI@Z
    virtual long GetCanSetValue(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConverter@BindingExpression@DirectUI@@UEAAJPEAPEAX@Z
    virtual long GetConverter(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConverterLanguage@BindingExpression@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetConverterLanguage(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConverterParameter@BindingExpression@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetConverterParameter(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementName@BindingExpression@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetElementName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFallbackValue@BindingExpression@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetFallbackValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstPropertyPathStep@BindingExpression@DirectUI@@UEAAPEAVPropertyPathStep@2@XZ
    virtual ::DirectUI::PropertyPathStep * GetFirstPropertyPathStep();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsAssociated@BindingExpression@DirectUI@@UEAAIXZ
    virtual unsigned int GetIsAssociated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPath@BindingExpression@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPath(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@BindingExpression@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetSource(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetNullValue@BindingExpression@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetTargetNullValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTraceString@BindingExpression@DirectUI@@UEAAJPEAPEBG@Z
    virtual long GetTraceString(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@BindingExpression@DirectUI@@UEAAJPEAVDependencyObject@2@PEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(::DirectUI::DependencyObject *, CDependencyProperty const *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBindingValid@BindingExpression@DirectUI@@UEAA_NXZ
    virtual bool IsBindingValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChanged@BindingExpression@DirectUI@@UEAAXW4Theme@Theming@@_NAEA_N@Z
    virtual void NotifyThemeChanged(int, bool, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@BindingExpression@DirectUI@@UEAAJPEAVDependencyObject@2@PEBVCDependencyProperty@@@Z
    virtual long OnAttach(::DirectUI::DependencyObject *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@BindingExpression@DirectUI@@UEAAJXZ
    virtual long OnDetach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSourceImpl@BindingExpression@DirectUI@@QEAAJXZ
    long UpdateSourceImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentBindingImpl@BindingExpression@DirectUI@@QEAAJPEAPEAUIBinding@Data@Xaml@UI@Windows@@@Z
    long get_ParentBindingImpl(::Windows::UI::Xaml::Data::IBinding * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BindingExpression@DirectUI@@IEAA@XZ
    BindingExpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BindingExpression@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BindingExpression@DirectUI@@MEAA@XZ
    virtual ~BindingExpression();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToCollectionViewSource@BindingExpression@DirectUI@@AEAAJXZ
    long AttachToCollectionViewSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToDataContext@BindingExpression@DirectUI@@AEAAJXZ
    long AttachToDataContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToEffectiveSource@BindingExpression@DirectUI@@AEAAJXZ
    long AttachToEffectiveSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToElementName@BindingExpression@DirectUI@@AEAAJXZ
    long AttachToElementName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToMentor@BindingExpression@DirectUI@@AEAAJXZ
    long AttachToMentor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToMentor@BindingExpression@DirectUI@@AEAAJPEAVFrameworkElement@2@@Z
    long AttachToMentor(::DirectUI::FrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToTarget@BindingExpression@DirectUI@@AEAAJXZ
    long AttachToTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToTemplatedParent@BindingExpression@DirectUI@@AEAAJXZ
    long AttachToTemplatedParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindingSourceChanged@BindingExpression@DirectUI@@AEAAJXZ
    long BindingSourceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CVSViewChanged@BindingExpression@DirectUI@@AEAAJXZ
    long CVSViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateEffectiveSource@BindingExpression@DirectUI@@AEAAJXZ
    long CalculateEffectiveSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToEffectiveSource@BindingExpression@DirectUI@@AEAAJXZ
    long ConnectToEffectiveSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToTarget@BindingExpression@DirectUI@@AEAAJXZ
    long ConnectToTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToTarget@BindingExpression@DirectUI@@AEAAJPEAUIInspectable@@_NPEAPEAU3@@Z
    long ConvertToTarget(IInspectable *, bool, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertValue@BindingExpression@DirectUI@@AEAAJPEAUIInspectable@@PEAPEAU3@@Z
    long ConvertValue(IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataContextChanged@BindingExpression@DirectUI@@AEAAJPEBUDataContextChangedParams@2@@Z
    long DataContextChanged(::DirectUI::DataContextChangedParams const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromCollectionViewSource@BindingExpression@DirectUI@@AEAAJXZ
    long DetachFromCollectionViewSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromDataContext@BindingExpression@DirectUI@@AEAAJXZ
    long DetachFromDataContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromEffectiveSource@BindingExpression@DirectUI@@AEAAJXZ
    long DetachFromEffectiveSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromElementName@BindingExpression@DirectUI@@AEAAJXZ
    long DetachFromElementName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromMentor@BindingExpression@DirectUI@@AEAAJXZ
    long DetachFromMentor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFromEffectiveSource@BindingExpression@DirectUI@@AEAAJXZ
    long DisconnectFromEffectiveSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFromTarget@BindingExpression@DirectUI@@AEAAJXZ
    long DisconnectFromTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValueConverter@BindingExpression@DirectUI@@AEAAJXZ
    long EnsureValueConverter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConvertedFallbackOrDefaultValue@BindingExpression@DirectUI@@AEAAJPEAPEAUIInspectable@@@Z
    long GetConvertedFallbackOrDefaultValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConvertedTargetNullOrDefaultValue@BindingExpression@DirectUI@@AEAAJPEAPEAUIInspectable@@@Z
    long GetConvertedTargetNullOrDefaultValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceElement@BindingExpression@DirectUI@@AEAAJPEAVFrameworkElement@2@PEAPEAUIInspectable@@@Z
    long GetSourceElement(::DirectUI::FrameworkElement *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InheritanceContextChanged@BindingExpression@DirectUI@@AEAAJXZ
    long InheritanceContextChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidValueForUpdate@BindingExpression@DirectUI@@CAJPEAUIInspectable@@PEBVCClassInfo@@PEA_N@Z
    static long IsValidValueForUpdate(IInspectable *, CClassInfo const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PegTargetReference@BindingExpression@DirectUI@@AEAAJXZ
    long PegTargetReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshBindingValue@BindingExpression@DirectUI@@AEAAJXZ
    long RefreshBindingValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SourceChanged@BindingExpression@DirectUI@@EEAAJXZ
    virtual long SourceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopListeningForInheritanceContextChanges@BindingExpression@DirectUI@@AEAAJXZ
    long StopListeningForInheritanceContextChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetChanged@BindingExpression@DirectUI@@AEAAJXZ
    long TargetChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetLoaded@BindingExpression@DirectUI@@AEAAJXZ
    long TargetLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceConvertFailed@BindingExpression@DirectUI@@AEAAXPEAUIInspectable@@PEBVCClassInfo@@@Z
    void TraceConvertFailed(IInspectable *, CClassInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceSetterFailed@BindingExpression@DirectUI@@AEAAXXZ
    void TraceSetterFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceUpdateBindingEnd@BindingExpression@DirectUI@@AEAAX_N@Z
    void TraceUpdateBindingEnd(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceUpdateBindingStart@BindingExpression@DirectUI@@AEAAX_N@Z
    void TraceUpdateBindingStart(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPegTargetReference@BindingExpression@DirectUI@@AEAAIXZ
    unsigned int TryPegTargetReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpegTargetReference@BindingExpression@DirectUI@@AEAAXXZ
    void UnpegTargetReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSourceInternal@BindingExpression@DirectUI@@AEAAJXZ
    long UpdateSourceInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTarget@BindingExpression@DirectUI@@AEAAJXZ
    long UpdateTarget();
};
} // namespace DirectUI
