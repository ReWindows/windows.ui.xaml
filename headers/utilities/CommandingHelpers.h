#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class CommandingHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToAccessKeyIfUnset@CommandingHelpers@DirectUI@@YAJPEAUIXamlUICommand@Input@Xaml@UI@Windows@@PEAVUIElement@2@@Z
    long BindToAccessKeyIfUnset(::Windows::UI::Xaml::Input::IXamlUICommand *, ::DirectUI::UIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToDescriptionPropertiesIfUnset@CommandingHelpers@DirectUI@@YAJPEAUIXamlUICommand@Input@Xaml@UI@Windows@@PEAVDependencyObject@2@@Z
    long BindToDescriptionPropertiesIfUnset(::Windows::UI::Xaml::Input::IXamlUICommand *, ::DirectUI::DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToIconPropertyIfUnset@CommandingHelpers@DirectUI@@YAJPEAUIXamlUICommand@Input@Xaml@UI@Windows@@PEAVDependencyObject@2@W4KnownPropertyIndex@@@Z
    long BindToIconPropertyIfUnset(::Windows::UI::Xaml::Input::IXamlUICommand *, ::DirectUI::DependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToKeyboardAcceleratorsIfUnset@CommandingHelpers@DirectUI@@YAJPEAUIXamlUICommand@Input@Xaml@UI@Windows@@PEAVUIElement@2@@Z
    long BindToKeyboardAcceleratorsIfUnset(::Windows::UI::Xaml::Input::IXamlUICommand *, ::DirectUI::UIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToLabelPropertyIfUnset@CommandingHelpers@DirectUI@@YAJPEAUIXamlUICommand@Input@Xaml@UI@Windows@@PEAVDependencyObject@2@W4KnownPropertyIndex@@@Z
    long BindToLabelPropertyIfUnset(::Windows::UI::Xaml::Input::IXamlUICommand *, ::DirectUI::DependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBindingIfSet@CommandingHelpers@DirectUI@@YAJPEAUIXamlUICommand@Input@Xaml@UI@Windows@@PEAVFrameworkElement@2@W4KnownPropertyIndex@@@Z
    long ClearBindingIfSet(::Windows::UI::Xaml::Input::IXamlUICommand *, ::DirectUI::FrameworkElement *, int);
};
} // namespace DirectUI
