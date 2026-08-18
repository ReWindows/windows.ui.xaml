#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 51 member(s).
namespace Automation {
class CValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsBool@CValue@Automation@@QEBAIXZ
    unsigned int AsBool() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsColor@CValue@Automation@@QEBAIXZ
    unsigned int AsColor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsCornerRadius@CValue@Automation@@QEBAPEAUXRECTF_CR@@XZ
    XRECTF_CR * AsCornerRadius() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsDouble@CValue@Automation@@QEBANXZ
    double AsDouble() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsDoubleArray@CValue@Automation@@QEBAPEANXZ
    double * AsDoubleArray() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsEnum@CValue@Automation@@QEBAIXZ
    unsigned int AsEnum() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsFloat@CValue@Automation@@QEBAMXZ
    float AsFloat() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsFloatArray@CValue@Automation@@QEBAPEAMXZ
    float * AsFloatArray() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsGridLength@CValue@Automation@@QEBAPEAUXGRIDLENGTH@@XZ
    XGRIDLENGTH * AsGridLength() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsIInspectable@CValue@Automation@@QEBAPEAUIInspectable@@XZ
    IInspectable * AsIInspectable() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsIUnknown@CValue@Automation@@QEBAPEAUIUnknown@@XZ
    IUnknown * AsIUnknown() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsInt64@CValue@Automation@@QEBA_JXZ
    int64_t AsInt64() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsObject@CValue@Automation@@QEBAPEAVCDependencyObject@@XZ
    CDependencyObject * AsObject() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsPoint@CValue@Automation@@QEBAPEAUXPOINTF@@XZ
    XPOINTF * AsPoint() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsPointArray@CValue@Automation@@QEBAPEAUXPOINTF@@XZ
    XPOINTF * AsPointArray() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsPointer@CValue@Automation@@QEBAPEAXXZ
    void * AsPointer() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsRect@CValue@Automation@@QEBAPEAUXRECTF_WH@@XZ
    XRECTF_WH * AsRect() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsSigned@CValue@Automation@@QEBAHXZ
    int AsSigned() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsSignedArray@CValue@Automation@@QEBAPEAHXZ
    int * AsSignedArray() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsSize@CValue@Automation@@QEBAPEAUXSIZEF@@XZ
    XSIZEF * AsSize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsString@CValue@Automation@@QEBA?AVxstring_ptr@@XZ
    xstring_ptr AsString() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsThemeResource@CValue@Automation@@QEBAPEAVCThemeResource@@XZ
    CThemeResource * AsThemeResource() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsThickness@CValue@Automation@@QEBAPEAUXRECTF_RB@@XZ
    XRECTF_RB * AsThickness() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsTypeHandle@CValue@Automation@@QEBA?AW4KnownTypeIndex@@XZ
    int AsTypeHandle() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CValue@Automation@@QEAA@XZ
    CValue();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CValue@Automation@@QEAA@AEBV01@@Z
    CValue(::Automation::CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertFrom@CValue@Automation@@QEAAJAEBV1@@Z
    long ConvertFrom(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertTo@CValue@Automation@@QEBAJAEAV1@@Z
    long ConvertTo(CValue &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDouble@CValue@Automation@@QEBAJAEAN@Z
    long GetDouble(double &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnum@CValue@Automation@@QEBAJAEAIAEAW4KnownTypeIndex@@@Z
    long GetEnum(unsigned int &, int &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnum@CValue@Automation@@QEBA_NXZ
    bool IsEnum() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNull@CValue@Automation@@QEBAIXZ
    unsigned int IsNull() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAndReset@CValue@Automation@@QEAAXXZ
    void ReleaseAndReset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBool@CValue@Automation@@QEAAXI@Z
    void SetBool(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDoubleArray@CValue@Automation@@QEAAXIPEAN@Z
    void SetDoubleArray(unsigned int, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFloatArray@CValue@Automation@@QEAAXIPEAM@Z
    void SetFloatArray(unsigned int, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIInspectableAddRef@CValue@Automation@@QEAAXPEAUIInspectable@@@Z
    void SetIInspectableAddRef(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIUnknownAddRef@CValue@Automation@@QEAAXPEAUIUnknown@@@Z
    void SetIUnknownAddRef(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetObjectAddRef@CValue@Automation@@QEAAXPEAVCDependencyObject@@@Z
    void SetObjectAddRef(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointArray@CValue@Automation@@QEAAXIPEAUXPOINTF@@@Z
    void SetPointArray(unsigned int, XPOINTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSignedArray@CValue@Automation@@QEAAXIPEAH@Z
    void SetSignedArray(unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@CValue@Automation@@QEAAX$$QEAVxstring_ptr@@@Z
    void SetString(xstring_ptr &&);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@CValue@Automation@@QEAAXAEBVxstring_ptr@@@Z
    void SetString(xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeResourceAddRef@CValue@Automation@@QEAAXPEAVCThemeResource@@@Z
    void SetThemeResourceAddRef(CThemeResource *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CValue@Automation@@QEAA@XZ
    ~CValue();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetValue@CValue@Automation@@AEAAXW4ValueType@@II@Z
    void ResetValue(int, unsigned int, unsigned int);
};
} // namespace Automation
