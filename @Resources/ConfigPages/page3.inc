[Variables]
bgH=120
dotY=73
highlightColor=183,234,93,230

; ============================================================
; Address

[addressHeader]
Meter=String
MeterStyle=headerText
X=85
Y=38
Text=AION Address
ToolTipText="The AION address you wish to monitor"

[address]
Meter=String
MeterStyle=subText
FontSize=10
X=r
Y=38
W=260
H=18
Text=#Addr#
ClipString=1
LeftMouseUpAction=[!CommandMeasure "AddressInput" "ExecuteBatch 1"]
ToolTipText="click to set AION Address"


; ============================================================
; Pools

[Pool]
Meter=String
MeterStyle=headerText
X=85
Y=86
Text=Mining Pool
ToolTipText="The Mining Pool you want to monitor"

[AionPool]
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=1r
Y=86
W=71
H=18
Text=AionPool
FontSize=10
MouseOverAction=[!SetOption AionPool StringEffect "Border"]
MouseLeaveAction=[!SetOption AionPool StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue AionPool InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue AionMine InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue LuxorTech InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=!CommandMeasure "AddressInput" "ExecuteBatch 2"

[AionMine]
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=80r
Y=86
W=62
H=18
Text=AionMine
FontSize=10
MouseOverAction=[!SetOption AionMine StringEffect "Border"]
MouseLeaveAction=[!SetOption AionMine StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue AionMine InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue AionPool InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue LuxorTech InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=!CommandMeasure "AddressInput" "ExecuteBatch 3"

[LuxorTech]
Meter=String
MeterStyle=subText
StringEffect=None
FontEffectColor=#highlightColor#
InlineSetting=None
X=80r
Y=86
W=64
H=18
Text=LuxorTech
FontSize=10
MouseOverAction=[!SetOption LuxorTech StringEffect "Border"]
MouseLeaveAction=[!SetOption LuxorTech StringEffect "None"]
LeftMouseDownAction=[!WriteKeyValue LuxorTech InlineSetting "Shadow | 1 | 1 | 7 | #highlightColor#" #@#ConfigPages\page3.inc][!WriteKeyValue AionMine InlineSetting "None" #@#ConfigPages\page3.inc][!WriteKeyValue AionPool InlineSetting "None" #@#ConfigPages\page3.inc]
LeftMouseUpAction=[!CommandMeasure "AddressInput" "ExecuteBatch 4"]

; ============================================================

