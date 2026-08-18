#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 115 member(s).
class CValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsEncodedString@CValue@@QEBA?AUxencoded_string_ptr@@XZ
    xencoded_string_ptr AsEncodedString() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsObject@CValue@@QEBAPEAVCDependencyObject@@XZ
    CDependencyObject * AsObject() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsSigned@CValue@@QEBAHXZ
    int AsSigned() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CValue@@QEAA@$$QEAV0@@Z
    CValue(CValue &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CValue@@QEAA@XZ
    CValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyConverted@CValue@@QEAAJAEBV1@@Z
    long CopyConverted(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachObject@CValue@@QEAA?AV?$xref_ptr@VCDependencyObject@@@@XZ
    WindissectOpaque DetachObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArrayElementCount@CValue@@QEBAIXZ
    unsigned int GetArrayElementCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnum@CValue@@QEBAJAEAIAEAW4KnownTypeIndex@@@Z
    long GetEnum(unsigned int &, int &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnum@CValue@@QEBAJAEAI@Z
    long GetEnum(unsigned int &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnum@CValue@@QEBA_NXZ
    bool IsEnum() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFloatingPoint@CValue@@QEBA_NXZ
    bool IsFloatingPoint() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNull@CValue@@QEBA_NXZ
    bool IsNull() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNullOrUnset@CValue@@QEBA_NXZ
    bool IsNullOrUnset() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAndReset@CValue@@QEAAXXZ
    void ReleaseAndReset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBool@CValue@@QEAAX_N@Z
    void SetBool(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@CValue@@QEAAXI@Z
    void SetColor(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDateTime@CValue@@QEAAXUDateTime@Foundation@Windows@@@Z
    void SetDateTime(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDouble@CValue@@QEAAXN@Z
    void SetDouble(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnum@CValue@@QEAAXIW4KnownTypeIndex@@@Z
    void SetEnum(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnum@CValue@@QEAAXI@Z
    void SetEnum(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnum8@CValue@@QEAAXEW4KnownTypeIndex@@@Z
    void SetEnum8(unsigned char, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnum8@CValue@@QEAAXE@Z
    void SetEnum8(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFloat@CValue@@QEAAXM@Z
    void SetFloat(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInt64@CValue@@QEAAX_J@Z
    void SetInt64(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNull@CValue@@QEAAXXZ
    void SetNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetObjectAddRef@CValue@@QEAAXPEAVCDependencyObject@@@Z
    void SetObjectAddRef(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSigned@CValue@@QEAAXH@Z
    void SetSigned(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@CValue@@QEAAXAEBVxstring_ptr@@@Z
    void SetString(xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@CValue@@QEAAX$$QEAVxstring_ptr@@@Z
    void SetString(xstring_ptr &&);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@CValue@@QEAAJPEAUHSTRING__@@@Z
    long SetString(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimeSpan@CValue@@QEAAXUTimeSpan@Foundation@Windows@@@Z
    void SetTimeSpan(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTypeHandle@CValue@@QEAAXW4KnownTypeIndex@@@Z
    void SetTypeHandle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unset@CValue@@QEAAXXZ
    void Unset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapCornerRadius@CValue@@QEAAXPEBUXRECTF_CR@@@Z
    void WrapCornerRadius(XRECTF_CR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapGridLength@CValue@@QEAAXPEBUXGRIDLENGTH@@@Z
    void WrapGridLength(XGRIDLENGTH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapPoint@CValue@@QEAAXPEBUXPOINTF@@@Z
    void WrapPoint(XPOINTF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapRect@CValue@@QEAAXPEBUXRECTF_WH@@@Z
    void WrapRect(XRECTF_WH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapSize@CValue@@QEAAXPEBUXSIZEF@@@Z
    void WrapSize(XSIZEF const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapThickness@CValue@@QEAAXPEBUXRECTF_RB@@@Z
    void WrapThickness(XRECTF_RB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapValue@CValue@@QEAAXAEBV1@@Z
    void WrapValue(CValue const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CValue@@QEAA@XZ
    ~CValue();
};
