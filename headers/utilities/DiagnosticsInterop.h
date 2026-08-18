#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 68 member(s).
namespace Diagnostics {
class DiagnosticsInterop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDictionaryItem@DiagnosticsInterop@Diagnostics@@SA?AUResourceGraphKey@2@PEAUIResourceDictionary@Xaml@UI@Windows@@PEAUIInspectable@@1@Z
    static WindissectOpaque AddDictionaryItem(::Windows::UI::Xaml::IResourceDictionary *, IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@DiagnosticsInterop@Diagnostics@@SAJPEAUIInspectable@@@Z
    static long Clear(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCustomProperty@DiagnosticsInterop@Diagnostics@@SAJPEAUIInspectable@@PEBVCCustomProperty@@@Z
    static long ClearCustomProperty(IInspectable *, CCustomProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDependencyProperty@DiagnosticsInterop@Diagnostics@@SAJPEAVCDependencyObject@@PEBVCDependencyProperty@@@Z
    static long ClearDependencyProperty(CDependencyObject *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPropertyValue@DiagnosticsInterop@Diagnostics@@SAJPEAUIInspectable@@I@Z
    static long ClearPropertyValue(IInspectable *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionIsParentToItems@DiagnosticsInterop@Diagnostics@@SA_NPEAUIInspectable@@@Z
    static bool CollectionIsParentToItems(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToCore@DiagnosticsInterop@Diagnostics@@SA?AV?$xref_ptr@VCDependencyObject@@@@PEAUIInspectable@@PEA_N@Z
    static WindissectOpaque ConvertToCore(IInspectable *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DiagnosticsInterop@Diagnostics@@QEAAJPEBG0PEAPEAUIInspectable@@@Z
    long CreateInstance(unsigned short const *, unsigned short const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindOtherDictionaryForResolution@DiagnosticsInterop@Diagnostics@@SA?AV?$xref_ptr@VCResourceDictionary@@@@PEAVCResourceDictionary@@AEBVxstring_ptr@@_N@Z
    static WindissectOpaque FindOtherDictionaryForResolution(CResourceDictionary *, xstring_ptr const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllEnums@DiagnosticsInterop@Diagnostics@@QEAAJPEAU?$ICollection@VDebugEnumInfo2@DebugTool@@@DebugTool@@@Z
    long GetAllEnums(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationStatic@DiagnosticsInterop@Diagnostics@@SAJPEAPEAUIApplication@Xaml@UI@Windows@@@Z
    static long GetApplicationStatic(::Windows::UI::Xaml::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@DiagnosticsInterop@Diagnostics@@SAJPEAUIInspectable@@IPEAPEAU3@@Z
    static long GetAt(IInspectable *, unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@DiagnosticsInterop@Diagnostics@@SAJPEAUIInspectable@@PEAPEAU3@@Z
    static long GetChildren(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDictionaryIfResource@DiagnosticsInterop@Diagnostics@@SA?AV?$xref_ptr@VCResourceDictionary@@@@PEAUIResourceDictionary@Xaml@UI@Windows@@V?$xref_ptr@VCDependencyObject@@@@@Z
    static WindissectOpaque GetDictionaryIfResource(::Windows::UI::Xaml::IResourceDictionary *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcherQueueForThreadId@DiagnosticsInterop@Diagnostics@@QEAA?AV?$ComPtr@UIDispatcherQueue@System@Windows@@@WRL@Microsoft@@K@Z
    WindissectOpaque GetDispatcherQueueForThreadId(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyFromIInspectable@DiagnosticsInterop@Diagnostics@@SA?AVxstring_ptr@@PEAUIInspectable@@PEA_N@Z
    static xstring_ptr GetKeyFromIInspectable(IInspectable *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@DiagnosticsInterop@Diagnostics@@QEAAJPEAUIInspectable@@PEAPEAUHSTRING__@@@Z
    long GetName(IInspectable *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyIndex@DiagnosticsInterop@Diagnostics@@QEAAJPEAUIInspectable@@PEBGPEAI@Z
    long GetPropertyIndex(IInspectable *, unsigned short const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetterPropertyIndex@DiagnosticsInterop@Diagnostics@@SA?AW4KnownPropertyIndex@@PEAVCSetter@@@Z
    static int GetSetterPropertyIndex(CSetter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@DiagnosticsInterop@Diagnostics@@SAJPEAUIInspectable@@PEAI@Z
    static long GetSize(IInspectable *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeDisplayNameFromObject@DiagnosticsInterop@Diagnostics@@SAJPEAUIInspectable@@PEAPEAUHSTRING__@@@Z
    static long GetTypeDisplayNameFromObject(IInspectable *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeNameFor@DiagnosticsInterop@Diagnostics@@SAJPEAUIInspectable@@PEAPEAUHSTRING__@@@Z
    static long GetTypeNameFor(IInspectable *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualDiagnosticRoot@DiagnosticsInterop@Diagnostics@@SAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    static long GetVisualDiagnosticRoot(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRoot@DiagnosticsInterop@Diagnostics@@SAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    static long GetVisualRoot(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTest@DiagnosticsInterop@Diagnostics@@QEAAJUtagRECT@@PEAU?$ICollection@PEAUIDependencyObject@Xaml@UI@Windows@@@DebugTool@@@Z
    long HitTest(tagRECT, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@DiagnosticsInterop@Diagnostics@@SAJPEAUIInspectable@@0I@Z
    static long InsertAt(IInspectable *, IInspectable *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCollection@DiagnosticsInterop@Diagnostics@@SA_NPEAUIInspectable@@@Z
    static bool IsCollection(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledForThread@DiagnosticsInterop@Diagnostics@@QEAA_NK@Z
    bool IsEnabledForThread(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSetterValid@DiagnosticsInterop@Diagnostics@@SA_NPEAVCSetter@@@Z
    static bool IsSetterValid(CSetter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShareable@DiagnosticsInterop@Diagnostics@@SA_NPEAUIInspectable@@@Z
    static bool IsShareable(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Launch@DiagnosticsInterop@Diagnostics@@QEAAXAEBV?$ComPtr@UICoreDispatcher@Core@UI@Windows@@@WRL@Microsoft@@@Z
    void Launch(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMarkupExtensionChanged@DiagnosticsInterop@Diagnostics@@SAJPEAVCMarkupExtensionBase@@@Z
    static long OnMarkupExtensionChanged(CMarkupExtensionBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetterChanged@DiagnosticsInterop@Diagnostics@@SAJPEAVCSetter@@_N@Z
    static long OnSetterChanged(CSetter *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValueChanged@DiagnosticsInterop@Diagnostics@@SAJPEAVCDependencyObject@@W4KnownPropertyIndex@@@Z
    static long OnValueChanged(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@DiagnosticsInterop@Diagnostics@@SAJPEAUIInspectable@@I@Z
    static long RemoveAt(IInspectable *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveResource@DiagnosticsInterop@Diagnostics@@SA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@PEAUIDependencyObject@Xaml@UI@Windows@@PEAUIResourceDictionary@789@AEBVxstring_ptr@@W4ResourceType@@W4KnownPropertyIndex@@PEAUIUIElement@789@@Z
    static WindissectOpaque ResolveResource(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IResourceDictionary *, xstring_ptr const &, int, int, ::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBinding@DiagnosticsInterop@Diagnostics@@SAJAEBV?$ComPtr@UIDependencyObject@Xaml@UI@Windows@@@ctl@@W4KnownPropertyIndex@@PEAUIBindingBase@Data@Xaml@UI@Windows@@PEA_N@Z
    static long SetBinding(WindissectOpaque const &, int, ::Windows::UI::Xaml::Data::IBindingBase *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyOnKeyFrame@DiagnosticsInterop@Diagnostics@@SAJAEBV?$ComPtr@UIObjectKeyFrame@Animation@Media@Xaml@UI@Windows@@@ctl@@W4KnownPropertyIndex@@PEAUIInspectable@@PEA_N@Z
    static long SetPropertyOnKeyFrame(WindissectOpaque const &, int, IInspectable *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyOnSetter@DiagnosticsInterop@Diagnostics@@SAJAEBV?$ComPtr@VSetter@DirectUI@@@ctl@@W4KnownPropertyIndex@@PEAUIInspectable@@PEA_N@Z
    static long SetPropertyOnSetter(WindissectOpaque const &, int, IInspectable *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyOnStyle@DiagnosticsInterop@Diagnostics@@SAJAEBV?$ComPtr@UIStyle@Xaml@UI@Windows@@@ctl@@W4KnownPropertyIndex@@PEAUIInspectable@@PEA_N@Z
    static long SetPropertyOnStyle(WindissectOpaque const &, int, IInspectable *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyOnTimeline@DiagnosticsInterop@Diagnostics@@SAJAEBV?$ComPtr@UITimeline@Animation@Media@Xaml@UI@Windows@@@ctl@@W4KnownPropertyIndex@@PEAUIInspectable@@PEA_N@Z
    static long SetPropertyOnTimeline(WindissectOpaque const &, int, IInspectable *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyValue@DiagnosticsInterop@Diagnostics@@SAJPEAUIInspectable@@I0_N@Z
    static long SetPropertyValue(IInspectable *, unsigned int, IInspectable *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeResourceBinding@DiagnosticsInterop@Diagnostics@@SAJPEAVCDependencyObject@@PEAVCThemeResourceExtension@@W4KnownPropertyIndex@@@Z
    static long SetThemeResourceBinding(CDependencyObject *, CThemeResourceExtension *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@DiagnosticsInterop@Diagnostics@@SAJAEBV?$ComPtr@UIInspectable@@@ctl@@W4KnownPropertyIndex@@PEAUIInspectable@@@Z
    static long SetValue(WindissectOpaque const &, int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalMutation@DiagnosticsInterop@Diagnostics@@QEAAXPEAUIUIElement@Xaml@UI@Windows@@PEAUIVisual@Composition@56@W4VisualMutationType@@@Z
    void SignalMutation(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Composition::IVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalRootMutation@DiagnosticsInterop@Diagnostics@@QEAAXPEAUIInspectable@@W4VisualMutationType@@@Z
    void SignalRootMutation(IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindVisualState@DiagnosticsInterop@Diagnostics@@SAPEAVCVisualState@@PEBVCDependencyObject@@@Z
    static CVisualState * TryFindVisualState(CDependencyObject const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBindingExpression@DiagnosticsInterop@Diagnostics@@SA?AV?$ComPtr@UIDebugBindingExpression@DebugTool@@@ctl@@PEAVDependencyObject@DirectUI@@W4BaseValueSource@@W4KnownPropertyIndex@@@Z
    static WindissectOpaque TryGetBindingExpression(::DirectUI::DependencyObject *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetIndexOf@DiagnosticsInterop@Diagnostics@@SA_NPEAUIInspectable@@0AEA_K@Z
    static bool TryGetIndexOf(IInspectable *, IInspectable *, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetOwnerFromIsland@DiagnosticsInterop@Diagnostics@@SA_NPEAUIXamlIsland@Hosting@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    static bool TryGetOwnerFromIsland(::Windows::UI::Xaml::Hosting::IXamlIsland *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVisualTreeParent@DiagnosticsInterop@Diagnostics@@QEAA_NPEAUIInspectable@@PEAPEAU3@@Z
    bool TryGetVisualTreeParent(IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRemoveDictionaryItem@DiagnosticsInterop@Diagnostics@@SA_NPEAUIResourceDictionary@Xaml@UI@Windows@@PEAUIInspectable@@AEAUResourceGraphKeyWithParent@2@@Z
    static bool TryRemoveDictionaryItem(::Windows::UI::Xaml::IResourceDictionary *, IInspectable *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBasedOnStyleListeners@DiagnosticsInterop@Diagnostics@@SAJPEAVCStyle@@00@Z
    static long UpdateBasedOnStyleListeners(CStyle *, CStyle *, CStyle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSetterForStyle@DiagnosticsInterop@Diagnostics@@SAJAEBV?$ComPtr@UIStyle@Xaml@UI@Windows@@@ctl@@W4KnownPropertyIndex@@PEAUIInspectable@@PEA_N@Z
    static long UpdateSetterForStyle(WindissectOpaque const &, int, IInspectable *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThemeResourceValue@DiagnosticsInterop@Diagnostics@@SAJPEAVCDependencyObject@@0W4KnownPropertyIndex@@@Z
    static long UpdateThemeResourceValue(CDependencyObject *, CDependencyObject *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureElementInCorrectNamescope@DiagnosticsInterop@Diagnostics@@CAJAEBV?$ComPtr@UIInspectable@@@ctl@@0@Z
    static long EnsureElementInCorrectNamescope(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindOtherDictionaryForResolution@DiagnosticsInterop@Diagnostics@@CA?AV?$xref_ptr@VCResourceDictionary@@@@PEAVCResourceDictionary@@PEBV4@AEBVxstring_ptr@@_N@Z
    static WindissectOpaque FindOtherDictionaryForResolution(CResourceDictionary *, CResourceDictionary const *, xstring_ptr const &, bool);
};
} // namespace Diagnostics
