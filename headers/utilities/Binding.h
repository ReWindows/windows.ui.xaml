#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
namespace DirectUI {
class Binding {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePropertyPathParser@Binding@DirectUI@@QEAAJPEAVXamlServiceProviderContext@@@Z
    long EnsurePropertyPathParser(XamlServiceProviderContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@Binding@DirectUI@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideValue@Binding@DirectUI@@UEAAJPEAUIXamlServiceProvider@Xaml@UI@Windows@@PEAPEAUIInspectable@@PEAW4KnownTypeIndex@@@Z
    virtual long ProvideValue(::Windows::UI::Xaml::IXamlServiceProvider *, IInspectable * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPathString@Binding@DirectUI@@SAJPEAUIBinding@Data@Xaml@UI@Windows@@PEAUHSTRING__@@@Z
    static long SetPathString(::Windows::UI::Xaml::Data::IBinding *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePropertyPathParser@Binding@DirectUI@@QEAAJXZ
    long UpdatePropertyPathParser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Converter@Binding@DirectUI@@UEAAJPEAPEAUIValueConverter@Data@Xaml@UI@Windows@@@Z
    virtual long get_Converter(::Windows::UI::Xaml::Data::IValueConverter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mode@Binding@DirectUI@@UEAAJPEAW4BindingMode@Data@Xaml@UI@Windows@@@Z
    virtual long get_Mode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PathImpl@Binding@DirectUI@@QEAAJPEAPEAUIPropertyPath@Xaml@UI@Windows@@@Z
    long get_PathImpl(::Windows::UI::Xaml::IPropertyPath * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Converter@Binding@DirectUI@@UEAAJPEAUIValueConverter@Data@Xaml@UI@Windows@@@Z
    virtual long put_Converter(::Windows::UI::Xaml::Data::IValueConverter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ConverterLanguage@Binding@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ConverterLanguage(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ConverterParameter@Binding@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_ConverterParameter(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ElementName@Binding@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ElementName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FallbackValue@Binding@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_FallbackValue(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mode@Binding@DirectUI@@UEAAJW4BindingMode@Data@Xaml@UI@Windows@@@Z
    virtual long put_Mode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PathImpl@Binding@DirectUI@@QEAAJPEAUIPropertyPath@Xaml@UI@Windows@@@Z
    long put_PathImpl(::Windows::UI::Xaml::IPropertyPath *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RelativeSource@Binding@DirectUI@@UEAAJPEAUIRelativeSource@Data@Xaml@UI@Windows@@@Z
    virtual long put_RelativeSource(::Windows::UI::Xaml::Data::IRelativeSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@Binding@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Source(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetNullValue@Binding@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_TargetNullValue(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UpdateSourceTrigger@Binding@DirectUI@@UEAAJW4UpdateSourceTrigger@Data@Xaml@UI@Windows@@@Z
    virtual long put_UpdateSourceTrigger(int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Binding@DirectUI@@MEAA@XZ
    virtual ~Binding();
};
} // namespace DirectUI
