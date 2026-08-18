#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 1818 member(s).
class ctl {
public:
    class AbstractActivationFactory;
    class BaseActivationFactory;
    class BetterActivationFactoryCreator;
    class BetterAggregableAbstractCoreObjectActivationFactory;
    class BetterAggregableCoreObjectActivationFactory;
    class BetterCoreObjectActivationFactory;
    class ComBase;
    class ComObjectBase;
    class Details;
    class DynamicCoreObjectActivationFactory;
    class SupportErrorInfo;
    class TearoffSupportErrorInfo;
    class TypedActivationFactoryBase;
    class WeakRefPtr;
    class WeakReferenceSource;
    class WeakReferenceSourceNoThreadId;
    class module;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateFactoryCreateInstanceWithBetterAggregableAbstractCoreObjectActivationFactory@ctl@@YAJQEAUIInspectable@@QEAPEAU2@PEAPEAUIUnknown@@W4KnownTypeIndex@@_N@Z
    long ValidateFactoryCreateInstanceWithBetterAggregableAbstractCoreObjectActivationFactory(IInspectable * const, IInspectable * * const, IUnknown * *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateFactoryCreateInstanceWithBetterAggregableCoreObjectActivationFactory@ctl@@YAJQEAUIInspectable@@QEAPEAU2@PEAPEAUIUnknown@@W4KnownTypeIndex@@_N@Z
    long ValidateFactoryCreateInstanceWithBetterAggregableCoreObjectActivationFactory(IInspectable * const, IInspectable * * const, IUnknown * *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?addref_expected@ctl@@YAXPEAUIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@W4ExpectedRefType@1@@Z
    void addref_expected(::Windows::UI::Xaml::Hosting::IReferenceTrackerInternal *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?addref_expected@ctl@@YAXPEAUIInspectable@@W4ExpectedRefType@1@@Z
    void addref_expected(IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?addref_expected@ctl@@YAXPEAVWeakReferenceSourceNoThreadId@1@W4ExpectedRefType@1@@Z
    void addref_expected(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?addref_interface_inner@ctl@@YAXPEAVWeakReferenceSourceNoThreadId@1@@Z
    void addref_interface_inner(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?are_equal@ctl@@YA_NPEAUIUnknown@@0@Z
    bool are_equal(IUnknown *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_weakref@ctl@@YAJAEAPEAUIWeakReference@@PEAUIInspectable@@@Z
    long as_weakref(IWeakReference * &, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?do_get_property_type@ctl@@YAJPEAUIInspectable@@PEAW4PropertyType@Foundation@Windows@@@Z
    long do_get_property_type(IInspectable *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?do_get_value@ctl@@YAJAEAPEAUHSTRING__@@PEAUIInspectable@@@Z
    long do_get_value(HSTRING__* &, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?do_get_value@ctl@@YAJAEAEPEAUIInspectable@@@Z
    long do_get_value(unsigned char &, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?do_get_value@ctl@@YAJAEAHPEAUIInspectable@@@Z
    long do_get_value(int &, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?do_get_value@ctl@@YAJAEAUDateTime@Foundation@Windows@@PEAUIInspectable@@@Z
    long do_get_value(WindissectOpaque &, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?do_get_value@ctl@@YAJAEAMPEAUIInspectable@@@Z
    long do_get_value(float &, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?do_get_value@ctl@@YAJAEANPEAUIInspectable@@@Z
    long do_get_value(double &, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_property_value@ctl@@YAPEAUIPropertyValue@Foundation@Windows@@PEAUIInspectable@@@Z
    WindissectOpaque * get_property_value(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?release_expected@ctl@@YAXPEAUIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@@Z
    void release_expected(::Windows::UI::Xaml::Hosting::IReferenceTrackerInternal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?release_expected@ctl@@YAXPEAVWeakReferenceSourceNoThreadId@1@@Z
    void release_expected(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?release_interface_inner@ctl@@YAXPEAVWeakReferenceSourceNoThreadId@1@@Z
    void release_interface_inner(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?try_make_autopeg@ctl@@YA?AV?$AutoPeg@UIReferenceTrackerInternal@Hosting@Xaml@UI@Windows@@$00@1@PEAVWeakReferenceSourceNoThreadId@1@@Z
    WindissectOpaque try_make_autopeg(WindissectOpaque *);
};
