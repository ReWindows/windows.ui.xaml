#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class ValueBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue@ValueBuffer@@QEAAJPEBVCDependencyProperty@@PEBVCValue@@@Z
    long RepackageValue(CDependencyProperty const *, CValue const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValueAndSetPtr@ValueBuffer@@QEAAJPEBVCDependencyProperty@@PEBVCValue@@PEAPEAV3@@Z
    long RepackageValueAndSetPtr(CDependencyProperty const *, CValue const *, CValue * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ValueBuffer@@QEAA@XZ
    ~ValueBuffer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_Bool@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@@Z
    long RepackageValue_Bool(CDependencyProperty const *, int, CValue * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_DynamicToObject@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@@Z
    long RepackageValue_DynamicToObject(CDependencyProperty const *, int, CValue * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_Float@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@@Z
    long RepackageValue_Float(CDependencyProperty const *, int, CValue * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_Int@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@@Z
    long RepackageValue_Int(CDependencyProperty const *, int, CValue * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_Null@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@@Z
    long RepackageValue_Null(CDependencyProperty const *, int, CValue * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_Object@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@_N@Z
    long RepackageValue_Object(CDependencyProperty const *, int, CValue * &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_Point@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@@Z
    long RepackageValue_Point(CDependencyProperty const *, int, CValue * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_Size@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@@Z
    long RepackageValue_Size(CDependencyProperty const *, int, CValue * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_String@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@@Z
    long RepackageValue_String(CDependencyProperty const *, int, CValue * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_TextRange@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@@Z
    long RepackageValue_TextRange(CDependencyProperty const *, int, CValue * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_Thickness@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@@Z
    long RepackageValue_Thickness(CDependencyProperty const *, int, CValue * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepackageValue_TimeSpan@ValueBuffer@@AEAAJPEBVCDependencyProperty@@W4ValueType@@AEAPEAVCValue@@@Z
    long RepackageValue_TimeSpan(CDependencyProperty const *, int, CValue * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueObjectFromDouble@ValueBuffer@@AEAAJW4KnownTypeIndex@@N@Z
    long ValueObjectFromDouble(int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueObjectFromString@ValueBuffer@@AEAAJW4KnownTypeIndex@@AEBVxstring_ptr_view@@@Z
    long ValueObjectFromString(int, xstring_ptr_view const &);
};
