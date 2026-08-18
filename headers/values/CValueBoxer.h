#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 87 member(s).
namespace DirectUI {
class CValueBoxer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxEnumValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@I@Z
    static long BoxEnumValue(CValue *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxObjectValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@PEBVCClassInfo@@PEAUIInspectable@@PEAVBoxerBuffer@2@PEAPEAVDependencyObject@2@E@Z
    static long BoxObjectValue(CValue *, CClassInfo const *, IInspectable *, ::DirectUI::BoxerBuffer *, ::DirectUI::DependencyObject * *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UFontWeight@Text@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Text::FontWeight, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@PEAUIPropertyPath@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::IPropertyPath *, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@PEAUIUriRuntimeClass@Foundation@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, WindissectOpaque *, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@PEAUHSTRING__@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, HSTRING__*, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@NPEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, double, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UThickness@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::Thickness, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UDuration@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::Duration, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UKeyTime@Animation@Media@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::Media::Animation::KeyTime, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UTimeSpan@Foundation@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, WindissectOpaque, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@EPEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, unsigned char, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UCornerRadius@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::CornerRadius, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@HPEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, int, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UColor@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Color, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UGridLength@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::GridLength, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UTypeName@Interop@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::Interop::TypeName, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UMatrix@Media@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::Media::Matrix, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@MPEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, float, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@URepeatBehavior@Animation@Media@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::Media::Animation::RepeatBehavior, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UTextRange@Documents@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::Documents::TextRange, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@PEAUIFontFamily@Media@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::Media::IFontFamily *, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@UMatrix3D@Media3D@Media@Xaml@UI@Windows@@PEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, ::Windows::UI::Xaml::Media::Media3D::Matrix3D, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxValue@CValueBoxer@DirectUI@@SAJPEAVCValue@@_JPEAVBoxerBuffer@2@@Z
    static long BoxValue(CValue *, int64_t, ::DirectUI::BoxerBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToFramework@CValueBoxer@DirectUI@@SAJVxstring_ptr@@PEAPEAUHSTRING__@@E@Z
    static long ConvertToFramework(xstring_ptr, HSTRING__* *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToFramework@CValueBoxer@DirectUI@@SAJPEAVCDependencyObject@@AEBU_GUID@@PEAPEAXE@Z
    static long ConvertToFramework(CDependencyObject *, _GUID const &, void * *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToFramework@CValueBoxer@DirectUI@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAXE@Z
    static long ConvertToFramework(IUnknown *, _GUID const &, void * *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxEnumValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEBVCClassInfo@@PEAI@Z
    static long UnboxEnumValue(CValue const *, CClassInfo const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxObjectValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEBVCClassInfo@@PEAPEAUIInspectable@@@Z
    static long UnboxObjectValue(CValue const *, CClassInfo const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxObjectValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEBVCClassInfo@@AEBU_GUID@@PEAPEAX@Z
    static long UnboxObjectValue(CValue const *, CClassInfo const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxObjectValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEBVCClassInfo@@_NAEBU_GUID@@PEAPEAX@Z
    static long UnboxObjectValue(CValue const *, CClassInfo const *, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxPropertyObjectValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    static long UnboxPropertyObjectValue(CValue const *, CDependencyProperty const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUGridLength@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::GridLength *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUDuration@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::Duration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAE@Z
    static long UnboxValue(CValue const *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUColor@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUMatrix@Media@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::Media::Matrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    static long UnboxValue(CValue const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAN@Z
    static long UnboxValue(CValue const *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAPEAUIFontFamily@Media@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::Media::IFontFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUPoint@Foundation@Windows@@@Z
    static long UnboxValue(CValue const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAPEAUHSTRING__@@@Z
    static long UnboxValue(CValue const *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUCornerRadius@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::CornerRadius *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUThickness@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::Thickness *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUTypeName@Interop@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::Interop::TypeName *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUFontWeight@Text@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Text::FontWeight *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAM@Z
    static long UnboxValue(CValue const *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAH@Z
    static long UnboxValue(CValue const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAURepeatBehavior@Animation@Media@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::Media::Animation::RepeatBehavior *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAPEAUIPropertyPath@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::IPropertyPath * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUKeyTime@Animation@Media@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::Media::Animation::KeyTime *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUMatrix3D@Media3D@Media@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::Media::Media3D::Matrix3D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboxValue@CValueBoxer@DirectUI@@SAJPEBVCValue@@PEAUTextRange@Documents@Xaml@UI@Windows@@@Z
    static long UnboxValue(CValue const *, ::Windows::UI::Xaml::Documents::TextRange *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnwrapExternalObjectReferenceIfPresent@CValueBoxer@DirectUI@@SAJPEAUIInspectable@@PEAPEAU3@@Z
    static long UnwrapExternalObjectReferenceIfPresent(IInspectable *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnwrapWeakRef@CValueBoxer@DirectUI@@SAJQEBVCValue@@PEBVCDependencyProperty@@PEAPEAVCDependencyObject@@@Z
    static long UnwrapWeakRef(CValue const * const, CDependencyProperty const *, CDependencyObject * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveEnumValueFromString@CValueBoxer@DirectUI@@CAJPEBGIPEBVCClassInfo@@PEAI@Z
    static long ResolveEnumValueFromString(unsigned short const *, unsigned int, CClassInfo const *, unsigned int *);
};
} // namespace DirectUI
