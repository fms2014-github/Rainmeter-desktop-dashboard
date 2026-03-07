
; ========================================
; [1번 아이콘 세트]
; ========================================
[MeasureIcon1]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=1
IconSize=ExtraLarge 

[MeasurePath1]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=1

[MeasureName1]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=1
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon1]
Meter=Image
MeasureName=MeasureIcon1
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText1]
Meter=String
MeasureName=MeasureName1
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover1]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon1 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon1 Greyscale "0"][!SetOption MeterText1 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete1 Hidden "0"][!UpdateMeter "MeterIcon1"][!UpdateMeter "MeterText1"][!UpdateMeter "MeterDelete1"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(1, 'MeasureName1')"]
MouseLeaveAction=[!SetOption MeterIcon1 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon1 Greyscale "1"][!SetOption MeterText1 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete1 Hidden "1"][!UpdateMeter "MeterIcon1"][!UpdateMeter "MeterText1"][!UpdateMeter "MeterDelete1"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(1)"]
LeftMouseUpAction=["[MeasurePath1]"]
DynamicVariables=1

[MeterDelete1]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(1)"]
ToolTipText="아이콘 삭제"

; ========================================
; [2번 아이콘 세트]
; ========================================
[MeasureIcon2]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=2
IconSize=ExtraLarge 

[MeasurePath2]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=2

[MeasureName2]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=2
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon2]
Meter=Image
MeasureName=MeasureIcon2
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText2]
Meter=String
MeasureName=MeasureName2
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover2]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon2 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon2 Greyscale "0"][!SetOption MeterText2 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete2 Hidden "0"][!UpdateMeter "MeterIcon2"][!UpdateMeter "MeterText2"][!UpdateMeter "MeterDelete2"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(2, 'MeasureName2')"]
MouseLeaveAction=[!SetOption MeterIcon2 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon2 Greyscale "1"][!SetOption MeterText2 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete2 Hidden "1"][!UpdateMeter "MeterIcon2"][!UpdateMeter "MeterText2"][!UpdateMeter "MeterDelete2"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(2)"]
LeftMouseUpAction=["[MeasurePath2]"]
DynamicVariables=1

[MeterDelete2]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(2)"]
ToolTipText="아이콘 삭제"

; ========================================
; [3번 아이콘 세트]
; ========================================
[MeasureIcon3]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=3
IconSize=ExtraLarge 

[MeasurePath3]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=3

[MeasureName3]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=3
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon3]
Meter=Image
MeasureName=MeasureIcon3
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText3]
Meter=String
MeasureName=MeasureName3
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover3]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon3 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon3 Greyscale "0"][!SetOption MeterText3 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete3 Hidden "0"][!UpdateMeter "MeterIcon3"][!UpdateMeter "MeterText3"][!UpdateMeter "MeterDelete3"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(3, 'MeasureName3')"]
MouseLeaveAction=[!SetOption MeterIcon3 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon3 Greyscale "1"][!SetOption MeterText3 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete3 Hidden "1"][!UpdateMeter "MeterIcon3"][!UpdateMeter "MeterText3"][!UpdateMeter "MeterDelete3"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(3)"]
LeftMouseUpAction=["[MeasurePath3]"]
DynamicVariables=1

[MeterDelete3]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(3)"]
ToolTipText="아이콘 삭제"

; ========================================
; [4번 아이콘 세트]
; ========================================
[MeasureIcon4]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=4
IconSize=ExtraLarge 

[MeasurePath4]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=4

[MeasureName4]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=4
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon4]
Meter=Image
MeasureName=MeasureIcon4
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText4]
Meter=String
MeasureName=MeasureName4
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover4]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon4 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon4 Greyscale "0"][!SetOption MeterText4 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete4 Hidden "0"][!UpdateMeter "MeterIcon4"][!UpdateMeter "MeterText4"][!UpdateMeter "MeterDelete4"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(4, 'MeasureName4')"]
MouseLeaveAction=[!SetOption MeterIcon4 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon4 Greyscale "1"][!SetOption MeterText4 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete4 Hidden "1"][!UpdateMeter "MeterIcon4"][!UpdateMeter "MeterText4"][!UpdateMeter "MeterDelete4"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(4)"]
LeftMouseUpAction=["[MeasurePath4]"]
DynamicVariables=1

[MeterDelete4]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(4)"]
ToolTipText="아이콘 삭제"

; ========================================
; [5번 아이콘 세트]
; ========================================
[MeasureIcon5]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=5
IconSize=ExtraLarge 

[MeasurePath5]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=5

[MeasureName5]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=5
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon5]
Meter=Image
MeasureName=MeasureIcon5
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText5]
Meter=String
MeasureName=MeasureName5
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover5]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon5 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon5 Greyscale "0"][!SetOption MeterText5 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete5 Hidden "0"][!UpdateMeter "MeterIcon5"][!UpdateMeter "MeterText5"][!UpdateMeter "MeterDelete5"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(5, 'MeasureName5')"]
MouseLeaveAction=[!SetOption MeterIcon5 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon5 Greyscale "1"][!SetOption MeterText5 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete5 Hidden "1"][!UpdateMeter "MeterIcon5"][!UpdateMeter "MeterText5"][!UpdateMeter "MeterDelete5"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(5)"]
LeftMouseUpAction=["[MeasurePath5]"]
DynamicVariables=1

[MeterDelete5]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(5)"]
ToolTipText="아이콘 삭제"

; ========================================
; [6번 아이콘 세트]
; ========================================
[MeasureIcon6]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=6
IconSize=ExtraLarge 

[MeasurePath6]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=6

[MeasureName6]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=6
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon6]
Meter=Image
MeasureName=MeasureIcon6
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText6]
Meter=String
MeasureName=MeasureName6
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover6]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon6 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon6 Greyscale "0"][!SetOption MeterText6 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete6 Hidden "0"][!UpdateMeter "MeterIcon6"][!UpdateMeter "MeterText6"][!UpdateMeter "MeterDelete6"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(6, 'MeasureName6')"]
MouseLeaveAction=[!SetOption MeterIcon6 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon6 Greyscale "1"][!SetOption MeterText6 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete6 Hidden "1"][!UpdateMeter "MeterIcon6"][!UpdateMeter "MeterText6"][!UpdateMeter "MeterDelete6"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(6)"]
LeftMouseUpAction=["[MeasurePath6]"]
DynamicVariables=1

[MeterDelete6]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(6)"]
ToolTipText="아이콘 삭제"

; ========================================
; [7번 아이콘 세트]
; ========================================
[MeasureIcon7]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=7
IconSize=ExtraLarge 

[MeasurePath7]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=7

[MeasureName7]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=7
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon7]
Meter=Image
MeasureName=MeasureIcon7
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText7]
Meter=String
MeasureName=MeasureName7
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover7]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon7 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon7 Greyscale "0"][!SetOption MeterText7 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete7 Hidden "0"][!UpdateMeter "MeterIcon7"][!UpdateMeter "MeterText7"][!UpdateMeter "MeterDelete7"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(7, 'MeasureName7')"]
MouseLeaveAction=[!SetOption MeterIcon7 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon7 Greyscale "1"][!SetOption MeterText7 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete7 Hidden "1"][!UpdateMeter "MeterIcon7"][!UpdateMeter "MeterText7"][!UpdateMeter "MeterDelete7"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(7)"]
LeftMouseUpAction=["[MeasurePath7]"]
DynamicVariables=1

[MeterDelete7]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(7)"]
ToolTipText="아이콘 삭제"

; ========================================
; [8번 아이콘 세트]
; ========================================
[MeasureIcon8]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=8
IconSize=ExtraLarge 

[MeasurePath8]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=8

[MeasureName8]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=8
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon8]
Meter=Image
MeasureName=MeasureIcon8
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText8]
Meter=String
MeasureName=MeasureName8
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover8]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon8 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon8 Greyscale "0"][!SetOption MeterText8 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete8 Hidden "0"][!UpdateMeter "MeterIcon8"][!UpdateMeter "MeterText8"][!UpdateMeter "MeterDelete8"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(8, 'MeasureName8')"]
MouseLeaveAction=[!SetOption MeterIcon8 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon8 Greyscale "1"][!SetOption MeterText8 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete8 Hidden "1"][!UpdateMeter "MeterIcon8"][!UpdateMeter "MeterText8"][!UpdateMeter "MeterDelete8"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(8)"]
LeftMouseUpAction=["[MeasurePath8]"]
DynamicVariables=1

[MeterDelete8]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(8)"]
ToolTipText="아이콘 삭제"

; ========================================
; [9번 아이콘 세트]
; ========================================
[MeasureIcon9]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=9
IconSize=ExtraLarge 

[MeasurePath9]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=9

[MeasureName9]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=9
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon9]
Meter=Image
MeasureName=MeasureIcon9
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText9]
Meter=String
MeasureName=MeasureName9
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover9]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon9 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon9 Greyscale "0"][!SetOption MeterText9 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete9 Hidden "0"][!UpdateMeter "MeterIcon9"][!UpdateMeter "MeterText9"][!UpdateMeter "MeterDelete9"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(9, 'MeasureName9')"]
MouseLeaveAction=[!SetOption MeterIcon9 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon9 Greyscale "1"][!SetOption MeterText9 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete9 Hidden "1"][!UpdateMeter "MeterIcon9"][!UpdateMeter "MeterText9"][!UpdateMeter "MeterDelete9"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(9)"]
LeftMouseUpAction=["[MeasurePath9]"]
DynamicVariables=1

[MeterDelete9]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(9)"]
ToolTipText="아이콘 삭제"

; ========================================
; [10번 아이콘 세트]
; ========================================
[MeasureIcon10]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=10
IconSize=ExtraLarge 

[MeasurePath10]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=10

[MeasureName10]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=10
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon10]
Meter=Image
MeasureName=MeasureIcon10
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText10]
Meter=String
MeasureName=MeasureName10
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover10]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon10 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon10 Greyscale "0"][!SetOption MeterText10 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete10 Hidden "0"][!UpdateMeter "MeterIcon10"][!UpdateMeter "MeterText10"][!UpdateMeter "MeterDelete10"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(10, 'MeasureName10')"]
MouseLeaveAction=[!SetOption MeterIcon10 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon10 Greyscale "1"][!SetOption MeterText10 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete10 Hidden "1"][!UpdateMeter "MeterIcon10"][!UpdateMeter "MeterText10"][!UpdateMeter "MeterDelete10"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(10)"]
LeftMouseUpAction=["[MeasurePath10]"]
DynamicVariables=1

[MeterDelete10]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(10)"]
ToolTipText="아이콘 삭제"

; ========================================
; [11번 아이콘 세트]
; ========================================
[MeasureIcon11]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=11
IconSize=ExtraLarge 

[MeasurePath11]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=11

[MeasureName11]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=11
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon11]
Meter=Image
MeasureName=MeasureIcon11
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText11]
Meter=String
MeasureName=MeasureName11
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover11]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon11 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon11 Greyscale "0"][!SetOption MeterText11 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete11 Hidden "0"][!UpdateMeter "MeterIcon11"][!UpdateMeter "MeterText11"][!UpdateMeter "MeterDelete11"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(11, 'MeasureName11')"]
MouseLeaveAction=[!SetOption MeterIcon11 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon11 Greyscale "1"][!SetOption MeterText11 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete11 Hidden "1"][!UpdateMeter "MeterIcon11"][!UpdateMeter "MeterText11"][!UpdateMeter "MeterDelete11"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(11)"]
LeftMouseUpAction=["[MeasurePath11]"]
DynamicVariables=1

[MeterDelete11]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(11)"]
ToolTipText="아이콘 삭제"

; ========================================
; [12번 아이콘 세트]
; ========================================
[MeasureIcon12]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=12
IconSize=ExtraLarge 

[MeasurePath12]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=12

[MeasureName12]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=12
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon12]
Meter=Image
MeasureName=MeasureIcon12
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText12]
Meter=String
MeasureName=MeasureName12
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover12]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon12 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon12 Greyscale "0"][!SetOption MeterText12 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete12 Hidden "0"][!UpdateMeter "MeterIcon12"][!UpdateMeter "MeterText12"][!UpdateMeter "MeterDelete12"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(12, 'MeasureName12')"]
MouseLeaveAction=[!SetOption MeterIcon12 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon12 Greyscale "1"][!SetOption MeterText12 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete12 Hidden "1"][!UpdateMeter "MeterIcon12"][!UpdateMeter "MeterText12"][!UpdateMeter "MeterDelete12"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(12)"]
LeftMouseUpAction=["[MeasurePath12]"]
DynamicVariables=1

[MeterDelete12]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(12)"]
ToolTipText="아이콘 삭제"

; ========================================
; [13번 아이콘 세트]
; ========================================
[MeasureIcon13]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=13
IconSize=ExtraLarge 

[MeasurePath13]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=13

[MeasureName13]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=13
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon13]
Meter=Image
MeasureName=MeasureIcon13
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText13]
Meter=String
MeasureName=MeasureName13
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover13]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon13 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon13 Greyscale "0"][!SetOption MeterText13 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete13 Hidden "0"][!UpdateMeter "MeterIcon13"][!UpdateMeter "MeterText13"][!UpdateMeter "MeterDelete13"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(13, 'MeasureName13')"]
MouseLeaveAction=[!SetOption MeterIcon13 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon13 Greyscale "1"][!SetOption MeterText13 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete13 Hidden "1"][!UpdateMeter "MeterIcon13"][!UpdateMeter "MeterText13"][!UpdateMeter "MeterDelete13"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(13)"]
LeftMouseUpAction=["[MeasurePath13]"]
DynamicVariables=1

[MeterDelete13]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(13)"]
ToolTipText="아이콘 삭제"

; ========================================
; [14번 아이콘 세트]
; ========================================
[MeasureIcon14]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=14
IconSize=ExtraLarge 

[MeasurePath14]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=14

[MeasureName14]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=14
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon14]
Meter=Image
MeasureName=MeasureIcon14
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText14]
Meter=String
MeasureName=MeasureName14
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover14]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon14 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon14 Greyscale "0"][!SetOption MeterText14 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete14 Hidden "0"][!UpdateMeter "MeterIcon14"][!UpdateMeter "MeterText14"][!UpdateMeter "MeterDelete14"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(14, 'MeasureName14')"]
MouseLeaveAction=[!SetOption MeterIcon14 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon14 Greyscale "1"][!SetOption MeterText14 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete14 Hidden "1"][!UpdateMeter "MeterIcon14"][!UpdateMeter "MeterText14"][!UpdateMeter "MeterDelete14"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(14)"]
LeftMouseUpAction=["[MeasurePath14]"]
DynamicVariables=1

[MeterDelete14]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(14)"]
ToolTipText="아이콘 삭제"

; ========================================
; [15번 아이콘 세트]
; ========================================
[MeasureIcon15]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=15
IconSize=ExtraLarge 

[MeasurePath15]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=15

[MeasureName15]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=15
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon15]
Meter=Image
MeasureName=MeasureIcon15
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText15]
Meter=String
MeasureName=MeasureName15
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover15]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon15 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon15 Greyscale "0"][!SetOption MeterText15 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete15 Hidden "0"][!UpdateMeter "MeterIcon15"][!UpdateMeter "MeterText15"][!UpdateMeter "MeterDelete15"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(15, 'MeasureName15')"]
MouseLeaveAction=[!SetOption MeterIcon15 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon15 Greyscale "1"][!SetOption MeterText15 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete15 Hidden "1"][!UpdateMeter "MeterIcon15"][!UpdateMeter "MeterText15"][!UpdateMeter "MeterDelete15"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(15)"]
LeftMouseUpAction=["[MeasurePath15]"]
DynamicVariables=1

[MeterDelete15]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(15)"]
ToolTipText="아이콘 삭제"

; ========================================
; [16번 아이콘 세트]
; ========================================
[MeasureIcon16]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=16
IconSize=ExtraLarge 

[MeasurePath16]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=16

[MeasureName16]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=16
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon16]
Meter=Image
MeasureName=MeasureIcon16
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText16]
Meter=String
MeasureName=MeasureName16
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover16]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon16 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon16 Greyscale "0"][!SetOption MeterText16 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete16 Hidden "0"][!UpdateMeter "MeterIcon16"][!UpdateMeter "MeterText16"][!UpdateMeter "MeterDelete16"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(16, 'MeasureName16')"]
MouseLeaveAction=[!SetOption MeterIcon16 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon16 Greyscale "1"][!SetOption MeterText16 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete16 Hidden "1"][!UpdateMeter "MeterIcon16"][!UpdateMeter "MeterText16"][!UpdateMeter "MeterDelete16"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(16)"]
LeftMouseUpAction=["[MeasurePath16]"]
DynamicVariables=1

[MeterDelete16]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(16)"]
ToolTipText="아이콘 삭제"

; ========================================
; [17번 아이콘 세트]
; ========================================
[MeasureIcon17]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=17
IconSize=ExtraLarge 

[MeasurePath17]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=17

[MeasureName17]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=17
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon17]
Meter=Image
MeasureName=MeasureIcon17
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText17]
Meter=String
MeasureName=MeasureName17
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover17]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon17 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon17 Greyscale "0"][!SetOption MeterText17 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete17 Hidden "0"][!UpdateMeter "MeterIcon17"][!UpdateMeter "MeterText17"][!UpdateMeter "MeterDelete17"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(17, 'MeasureName17')"]
MouseLeaveAction=[!SetOption MeterIcon17 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon17 Greyscale "1"][!SetOption MeterText17 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete17 Hidden "1"][!UpdateMeter "MeterIcon17"][!UpdateMeter "MeterText17"][!UpdateMeter "MeterDelete17"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(17)"]
LeftMouseUpAction=["[MeasurePath17]"]
DynamicVariables=1

[MeterDelete17]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(17)"]
ToolTipText="아이콘 삭제"

; ========================================
; [18번 아이콘 세트]
; ========================================
[MeasureIcon18]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=18
IconSize=ExtraLarge 

[MeasurePath18]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=18

[MeasureName18]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=18
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon18]
Meter=Image
MeasureName=MeasureIcon18
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText18]
Meter=String
MeasureName=MeasureName18
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover18]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon18 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon18 Greyscale "0"][!SetOption MeterText18 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete18 Hidden "0"][!UpdateMeter "MeterIcon18"][!UpdateMeter "MeterText18"][!UpdateMeter "MeterDelete18"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(18, 'MeasureName18')"]
MouseLeaveAction=[!SetOption MeterIcon18 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon18 Greyscale "1"][!SetOption MeterText18 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete18 Hidden "1"][!UpdateMeter "MeterIcon18"][!UpdateMeter "MeterText18"][!UpdateMeter "MeterDelete18"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(18)"]
LeftMouseUpAction=["[MeasurePath18]"]
DynamicVariables=1

[MeterDelete18]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(18)"]
ToolTipText="아이콘 삭제"

; ========================================
; [19번 아이콘 세트]
; ========================================
[MeasureIcon19]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=19
IconSize=ExtraLarge 

[MeasurePath19]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=19

[MeasureName19]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=19
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon19]
Meter=Image
MeasureName=MeasureIcon19
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText19]
Meter=String
MeasureName=MeasureName19
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover19]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon19 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon19 Greyscale "0"][!SetOption MeterText19 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete19 Hidden "0"][!UpdateMeter "MeterIcon19"][!UpdateMeter "MeterText19"][!UpdateMeter "MeterDelete19"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(19, 'MeasureName19')"]
MouseLeaveAction=[!SetOption MeterIcon19 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon19 Greyscale "1"][!SetOption MeterText19 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete19 Hidden "1"][!UpdateMeter "MeterIcon19"][!UpdateMeter "MeterText19"][!UpdateMeter "MeterDelete19"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(19)"]
LeftMouseUpAction=["[MeasurePath19]"]
DynamicVariables=1

[MeterDelete19]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(19)"]
ToolTipText="아이콘 삭제"

; ========================================
; [20번 아이콘 세트]
; ========================================
[MeasureIcon20]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=20
IconSize=ExtraLarge 

[MeasurePath20]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=20

[MeasureName20]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=20
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon20]
Meter=Image
MeasureName=MeasureIcon20
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText20]
Meter=String
MeasureName=MeasureName20
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover20]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon20 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon20 Greyscale "0"][!SetOption MeterText20 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete20 Hidden "0"][!UpdateMeter "MeterIcon20"][!UpdateMeter "MeterText20"][!UpdateMeter "MeterDelete20"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(20, 'MeasureName20')"]
MouseLeaveAction=[!SetOption MeterIcon20 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon20 Greyscale "1"][!SetOption MeterText20 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete20 Hidden "1"][!UpdateMeter "MeterIcon20"][!UpdateMeter "MeterText20"][!UpdateMeter "MeterDelete20"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(20)"]
LeftMouseUpAction=["[MeasurePath20]"]
DynamicVariables=1

[MeterDelete20]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(20)"]
ToolTipText="아이콘 삭제"

; ========================================
; [21번 아이콘 세트]
; ========================================
[MeasureIcon21]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=21
IconSize=ExtraLarge 

[MeasurePath21]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=21

[MeasureName21]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=21
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon21]
Meter=Image
MeasureName=MeasureIcon21
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText21]
Meter=String
MeasureName=MeasureName21
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover21]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon21 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon21 Greyscale "0"][!SetOption MeterText21 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete21 Hidden "0"][!UpdateMeter "MeterIcon21"][!UpdateMeter "MeterText21"][!UpdateMeter "MeterDelete21"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(21, 'MeasureName21')"]
MouseLeaveAction=[!SetOption MeterIcon21 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon21 Greyscale "1"][!SetOption MeterText21 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete21 Hidden "1"][!UpdateMeter "MeterIcon21"][!UpdateMeter "MeterText21"][!UpdateMeter "MeterDelete21"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(21)"]
LeftMouseUpAction=["[MeasurePath21]"]
DynamicVariables=1

[MeterDelete21]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(21)"]
ToolTipText="아이콘 삭제"

; ========================================
; [22번 아이콘 세트]
; ========================================
[MeasureIcon22]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=22
IconSize=ExtraLarge 

[MeasurePath22]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=22

[MeasureName22]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=22
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon22]
Meter=Image
MeasureName=MeasureIcon22
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText22]
Meter=String
MeasureName=MeasureName22
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover22]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon22 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon22 Greyscale "0"][!SetOption MeterText22 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete22 Hidden "0"][!UpdateMeter "MeterIcon22"][!UpdateMeter "MeterText22"][!UpdateMeter "MeterDelete22"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(22, 'MeasureName22')"]
MouseLeaveAction=[!SetOption MeterIcon22 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon22 Greyscale "1"][!SetOption MeterText22 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete22 Hidden "1"][!UpdateMeter "MeterIcon22"][!UpdateMeter "MeterText22"][!UpdateMeter "MeterDelete22"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(22)"]
LeftMouseUpAction=["[MeasurePath22]"]
DynamicVariables=1

[MeterDelete22]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(22)"]
ToolTipText="아이콘 삭제"

; ========================================
; [23번 아이콘 세트]
; ========================================
[MeasureIcon23]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=23
IconSize=ExtraLarge 

[MeasurePath23]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=23

[MeasureName23]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=23
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon23]
Meter=Image
MeasureName=MeasureIcon23
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText23]
Meter=String
MeasureName=MeasureName23
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover23]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon23 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon23 Greyscale "0"][!SetOption MeterText23 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete23 Hidden "0"][!UpdateMeter "MeterIcon23"][!UpdateMeter "MeterText23"][!UpdateMeter "MeterDelete23"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(23, 'MeasureName23')"]
MouseLeaveAction=[!SetOption MeterIcon23 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon23 Greyscale "1"][!SetOption MeterText23 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete23 Hidden "1"][!UpdateMeter "MeterIcon23"][!UpdateMeter "MeterText23"][!UpdateMeter "MeterDelete23"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(23)"]
LeftMouseUpAction=["[MeasurePath23]"]
DynamicVariables=1

[MeterDelete23]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(23)"]
ToolTipText="아이콘 삭제"

; ========================================
; [24번 아이콘 세트]
; ========================================
[MeasureIcon24]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=24
IconSize=ExtraLarge 

[MeasurePath24]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=24

[MeasureName24]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=24
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon24]
Meter=Image
MeasureName=MeasureIcon24
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText24]
Meter=String
MeasureName=MeasureName24
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover24]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon24 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon24 Greyscale "0"][!SetOption MeterText24 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete24 Hidden "0"][!UpdateMeter "MeterIcon24"][!UpdateMeter "MeterText24"][!UpdateMeter "MeterDelete24"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(24, 'MeasureName24')"]
MouseLeaveAction=[!SetOption MeterIcon24 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon24 Greyscale "1"][!SetOption MeterText24 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete24 Hidden "1"][!UpdateMeter "MeterIcon24"][!UpdateMeter "MeterText24"][!UpdateMeter "MeterDelete24"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(24)"]
LeftMouseUpAction=["[MeasurePath24]"]
DynamicVariables=1

[MeterDelete24]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(24)"]
ToolTipText="아이콘 삭제"

; ========================================
; [25번 아이콘 세트]
; ========================================
[MeasureIcon25]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=25
IconSize=ExtraLarge 

[MeasurePath25]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=25

[MeasureName25]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=25
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon25]
Meter=Image
MeasureName=MeasureIcon25
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText25]
Meter=String
MeasureName=MeasureName25
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover25]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon25 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon25 Greyscale "0"][!SetOption MeterText25 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete25 Hidden "0"][!UpdateMeter "MeterIcon25"][!UpdateMeter "MeterText25"][!UpdateMeter "MeterDelete25"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(25, 'MeasureName25')"]
MouseLeaveAction=[!SetOption MeterIcon25 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon25 Greyscale "1"][!SetOption MeterText25 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete25 Hidden "1"][!UpdateMeter "MeterIcon25"][!UpdateMeter "MeterText25"][!UpdateMeter "MeterDelete25"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(25)"]
LeftMouseUpAction=["[MeasurePath25]"]
DynamicVariables=1

[MeterDelete25]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(25)"]
ToolTipText="아이콘 삭제"

; ========================================
; [26번 아이콘 세트]
; ========================================
[MeasureIcon26]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=26
IconSize=ExtraLarge 

[MeasurePath26]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=26

[MeasureName26]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=26
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon26]
Meter=Image
MeasureName=MeasureIcon26
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText26]
Meter=String
MeasureName=MeasureName26
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover26]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon26 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon26 Greyscale "0"][!SetOption MeterText26 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete26 Hidden "0"][!UpdateMeter "MeterIcon26"][!UpdateMeter "MeterText26"][!UpdateMeter "MeterDelete26"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(26, 'MeasureName26')"]
MouseLeaveAction=[!SetOption MeterIcon26 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon26 Greyscale "1"][!SetOption MeterText26 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete26 Hidden "1"][!UpdateMeter "MeterIcon26"][!UpdateMeter "MeterText26"][!UpdateMeter "MeterDelete26"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(26)"]
LeftMouseUpAction=["[MeasurePath26]"]
DynamicVariables=1

[MeterDelete26]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(26)"]
ToolTipText="아이콘 삭제"

; ========================================
; [27번 아이콘 세트]
; ========================================
[MeasureIcon27]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=27
IconSize=ExtraLarge 

[MeasurePath27]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=27

[MeasureName27]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=27
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon27]
Meter=Image
MeasureName=MeasureIcon27
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText27]
Meter=String
MeasureName=MeasureName27
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover27]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon27 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon27 Greyscale "0"][!SetOption MeterText27 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete27 Hidden "0"][!UpdateMeter "MeterIcon27"][!UpdateMeter "MeterText27"][!UpdateMeter "MeterDelete27"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(27, 'MeasureName27')"]
MouseLeaveAction=[!SetOption MeterIcon27 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon27 Greyscale "1"][!SetOption MeterText27 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete27 Hidden "1"][!UpdateMeter "MeterIcon27"][!UpdateMeter "MeterText27"][!UpdateMeter "MeterDelete27"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(27)"]
LeftMouseUpAction=["[MeasurePath27]"]
DynamicVariables=1

[MeterDelete27]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(27)"]
ToolTipText="아이콘 삭제"

; ========================================
; [28번 아이콘 세트]
; ========================================
[MeasureIcon28]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=28
IconSize=ExtraLarge 

[MeasurePath28]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=28

[MeasureName28]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=28
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon28]
Meter=Image
MeasureName=MeasureIcon28
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText28]
Meter=String
MeasureName=MeasureName28
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover28]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon28 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon28 Greyscale "0"][!SetOption MeterText28 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete28 Hidden "0"][!UpdateMeter "MeterIcon28"][!UpdateMeter "MeterText28"][!UpdateMeter "MeterDelete28"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(28, 'MeasureName28')"]
MouseLeaveAction=[!SetOption MeterIcon28 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon28 Greyscale "1"][!SetOption MeterText28 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete28 Hidden "1"][!UpdateMeter "MeterIcon28"][!UpdateMeter "MeterText28"][!UpdateMeter "MeterDelete28"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(28)"]
LeftMouseUpAction=["[MeasurePath28]"]
DynamicVariables=1

[MeterDelete28]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(28)"]
ToolTipText="아이콘 삭제"

; ========================================
; [29번 아이콘 세트]
; ========================================
[MeasureIcon29]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=29
IconSize=ExtraLarge 

[MeasurePath29]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=29

[MeasureName29]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=29
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon29]
Meter=Image
MeasureName=MeasureIcon29
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText29]
Meter=String
MeasureName=MeasureName29
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover29]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon29 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon29 Greyscale "0"][!SetOption MeterText29 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete29 Hidden "0"][!UpdateMeter "MeterIcon29"][!UpdateMeter "MeterText29"][!UpdateMeter "MeterDelete29"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(29, 'MeasureName29')"]
MouseLeaveAction=[!SetOption MeterIcon29 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon29 Greyscale "1"][!SetOption MeterText29 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete29 Hidden "1"][!UpdateMeter "MeterIcon29"][!UpdateMeter "MeterText29"][!UpdateMeter "MeterDelete29"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(29)"]
LeftMouseUpAction=["[MeasurePath29]"]
DynamicVariables=1

[MeterDelete29]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(29)"]
ToolTipText="아이콘 삭제"

; ========================================
; [30번 아이콘 세트]
; ========================================
[MeasureIcon30]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=30
IconSize=ExtraLarge 

[MeasurePath30]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=30

[MeasureName30]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=30
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon30]
Meter=Image
MeasureName=MeasureIcon30
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText30]
Meter=String
MeasureName=MeasureName30
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover30]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon30 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon30 Greyscale "0"][!SetOption MeterText30 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete30 Hidden "0"][!UpdateMeter "MeterIcon30"][!UpdateMeter "MeterText30"][!UpdateMeter "MeterDelete30"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(30, 'MeasureName30')"]
MouseLeaveAction=[!SetOption MeterIcon30 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon30 Greyscale "1"][!SetOption MeterText30 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete30 Hidden "1"][!UpdateMeter "MeterIcon30"][!UpdateMeter "MeterText30"][!UpdateMeter "MeterDelete30"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(30)"]
LeftMouseUpAction=["[MeasurePath30]"]
DynamicVariables=1

[MeterDelete30]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(30)"]
ToolTipText="아이콘 삭제"

; ========================================
; [31번 아이콘 세트]
; ========================================
[MeasureIcon31]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=31
IconSize=ExtraLarge 

[MeasurePath31]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=31

[MeasureName31]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=31
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon31]
Meter=Image
MeasureName=MeasureIcon31
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText31]
Meter=String
MeasureName=MeasureName31
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover31]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon31 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon31 Greyscale "0"][!SetOption MeterText31 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete31 Hidden "0"][!UpdateMeter "MeterIcon31"][!UpdateMeter "MeterText31"][!UpdateMeter "MeterDelete31"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(31, 'MeasureName31')"]
MouseLeaveAction=[!SetOption MeterIcon31 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon31 Greyscale "1"][!SetOption MeterText31 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete31 Hidden "1"][!UpdateMeter "MeterIcon31"][!UpdateMeter "MeterText31"][!UpdateMeter "MeterDelete31"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(31)"]
LeftMouseUpAction=["[MeasurePath31]"]
DynamicVariables=1

[MeterDelete31]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(31)"]
ToolTipText="아이콘 삭제"

; ========================================
; [32번 아이콘 세트]
; ========================================
[MeasureIcon32]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=32
IconSize=ExtraLarge 

[MeasurePath32]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=32

[MeasureName32]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=32
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon32]
Meter=Image
MeasureName=MeasureIcon32
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText32]
Meter=String
MeasureName=MeasureName32
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover32]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon32 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon32 Greyscale "0"][!SetOption MeterText32 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete32 Hidden "0"][!UpdateMeter "MeterIcon32"][!UpdateMeter "MeterText32"][!UpdateMeter "MeterDelete32"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(32, 'MeasureName32')"]
MouseLeaveAction=[!SetOption MeterIcon32 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon32 Greyscale "1"][!SetOption MeterText32 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete32 Hidden "1"][!UpdateMeter "MeterIcon32"][!UpdateMeter "MeterText32"][!UpdateMeter "MeterDelete32"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(32)"]
LeftMouseUpAction=["[MeasurePath32]"]
DynamicVariables=1

[MeterDelete32]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(32)"]
ToolTipText="아이콘 삭제"

; ========================================
; [33번 아이콘 세트]
; ========================================
[MeasureIcon33]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=33
IconSize=ExtraLarge 

[MeasurePath33]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=33

[MeasureName33]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=33
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon33]
Meter=Image
MeasureName=MeasureIcon33
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText33]
Meter=String
MeasureName=MeasureName33
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover33]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon33 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon33 Greyscale "0"][!SetOption MeterText33 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete33 Hidden "0"][!UpdateMeter "MeterIcon33"][!UpdateMeter "MeterText33"][!UpdateMeter "MeterDelete33"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(33, 'MeasureName33')"]
MouseLeaveAction=[!SetOption MeterIcon33 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon33 Greyscale "1"][!SetOption MeterText33 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete33 Hidden "1"][!UpdateMeter "MeterIcon33"][!UpdateMeter "MeterText33"][!UpdateMeter "MeterDelete33"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(33)"]
LeftMouseUpAction=["[MeasurePath33]"]
DynamicVariables=1

[MeterDelete33]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(33)"]
ToolTipText="아이콘 삭제"

; ========================================
; [34번 아이콘 세트]
; ========================================
[MeasureIcon34]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=34
IconSize=ExtraLarge 

[MeasurePath34]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=34

[MeasureName34]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=34
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon34]
Meter=Image
MeasureName=MeasureIcon34
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText34]
Meter=String
MeasureName=MeasureName34
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover34]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon34 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon34 Greyscale "0"][!SetOption MeterText34 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete34 Hidden "0"][!UpdateMeter "MeterIcon34"][!UpdateMeter "MeterText34"][!UpdateMeter "MeterDelete34"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(34, 'MeasureName34')"]
MouseLeaveAction=[!SetOption MeterIcon34 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon34 Greyscale "1"][!SetOption MeterText34 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete34 Hidden "1"][!UpdateMeter "MeterIcon34"][!UpdateMeter "MeterText34"][!UpdateMeter "MeterDelete34"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(34)"]
LeftMouseUpAction=["[MeasurePath34]"]
DynamicVariables=1

[MeterDelete34]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(34)"]
ToolTipText="아이콘 삭제"

; ========================================
; [35번 아이콘 세트]
; ========================================
[MeasureIcon35]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=35
IconSize=ExtraLarge 

[MeasurePath35]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=35

[MeasureName35]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=35
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon35]
Meter=Image
MeasureName=MeasureIcon35
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText35]
Meter=String
MeasureName=MeasureName35
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover35]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon35 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon35 Greyscale "0"][!SetOption MeterText35 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete35 Hidden "0"][!UpdateMeter "MeterIcon35"][!UpdateMeter "MeterText35"][!UpdateMeter "MeterDelete35"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(35, 'MeasureName35')"]
MouseLeaveAction=[!SetOption MeterIcon35 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon35 Greyscale "1"][!SetOption MeterText35 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete35 Hidden "1"][!UpdateMeter "MeterIcon35"][!UpdateMeter "MeterText35"][!UpdateMeter "MeterDelete35"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(35)"]
LeftMouseUpAction=["[MeasurePath35]"]
DynamicVariables=1

[MeterDelete35]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(35)"]
ToolTipText="아이콘 삭제"

; ========================================
; [36번 아이콘 세트]
; ========================================
[MeasureIcon36]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=36
IconSize=ExtraLarge 

[MeasurePath36]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=36

[MeasureName36]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=36
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon36]
Meter=Image
MeasureName=MeasureIcon36
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText36]
Meter=String
MeasureName=MeasureName36
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover36]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon36 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon36 Greyscale "0"][!SetOption MeterText36 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete36 Hidden "0"][!UpdateMeter "MeterIcon36"][!UpdateMeter "MeterText36"][!UpdateMeter "MeterDelete36"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(36, 'MeasureName36')"]
MouseLeaveAction=[!SetOption MeterIcon36 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon36 Greyscale "1"][!SetOption MeterText36 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete36 Hidden "1"][!UpdateMeter "MeterIcon36"][!UpdateMeter "MeterText36"][!UpdateMeter "MeterDelete36"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(36)"]
LeftMouseUpAction=["[MeasurePath36]"]
DynamicVariables=1

[MeterDelete36]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(36)"]
ToolTipText="아이콘 삭제"

; ========================================
; [37번 아이콘 세트]
; ========================================
[MeasureIcon37]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=37
IconSize=ExtraLarge 

[MeasurePath37]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=37

[MeasureName37]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=37
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon37]
Meter=Image
MeasureName=MeasureIcon37
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText37]
Meter=String
MeasureName=MeasureName37
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover37]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon37 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon37 Greyscale "0"][!SetOption MeterText37 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete37 Hidden "0"][!UpdateMeter "MeterIcon37"][!UpdateMeter "MeterText37"][!UpdateMeter "MeterDelete37"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(37, 'MeasureName37')"]
MouseLeaveAction=[!SetOption MeterIcon37 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon37 Greyscale "1"][!SetOption MeterText37 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete37 Hidden "1"][!UpdateMeter "MeterIcon37"][!UpdateMeter "MeterText37"][!UpdateMeter "MeterDelete37"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(37)"]
LeftMouseUpAction=["[MeasurePath37]"]
DynamicVariables=1

[MeterDelete37]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(37)"]
ToolTipText="아이콘 삭제"

; ========================================
; [38번 아이콘 세트]
; ========================================
[MeasureIcon38]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=38
IconSize=ExtraLarge 

[MeasurePath38]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=38

[MeasureName38]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=38
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon38]
Meter=Image
MeasureName=MeasureIcon38
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText38]
Meter=String
MeasureName=MeasureName38
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover38]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon38 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon38 Greyscale "0"][!SetOption MeterText38 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete38 Hidden "0"][!UpdateMeter "MeterIcon38"][!UpdateMeter "MeterText38"][!UpdateMeter "MeterDelete38"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(38, 'MeasureName38')"]
MouseLeaveAction=[!SetOption MeterIcon38 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon38 Greyscale "1"][!SetOption MeterText38 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete38 Hidden "1"][!UpdateMeter "MeterIcon38"][!UpdateMeter "MeterText38"][!UpdateMeter "MeterDelete38"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(38)"]
LeftMouseUpAction=["[MeasurePath38]"]
DynamicVariables=1

[MeterDelete38]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(38)"]
ToolTipText="아이콘 삭제"

; ========================================
; [39번 아이콘 세트]
; ========================================
[MeasureIcon39]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=39
IconSize=ExtraLarge 

[MeasurePath39]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=39

[MeasureName39]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=39
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon39]
Meter=Image
MeasureName=MeasureIcon39
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText39]
Meter=String
MeasureName=MeasureName39
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover39]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon39 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon39 Greyscale "0"][!SetOption MeterText39 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete39 Hidden "0"][!UpdateMeter "MeterIcon39"][!UpdateMeter "MeterText39"][!UpdateMeter "MeterDelete39"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(39, 'MeasureName39')"]
MouseLeaveAction=[!SetOption MeterIcon39 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon39 Greyscale "1"][!SetOption MeterText39 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete39 Hidden "1"][!UpdateMeter "MeterIcon39"][!UpdateMeter "MeterText39"][!UpdateMeter "MeterDelete39"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(39)"]
LeftMouseUpAction=["[MeasurePath39]"]
DynamicVariables=1

[MeterDelete39]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(39)"]
ToolTipText="아이콘 삭제"

; ========================================
; [40번 아이콘 세트]
; ========================================
[MeasureIcon40]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=40
IconSize=ExtraLarge 

[MeasurePath40]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=40

[MeasureName40]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=40
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon40]
Meter=Image
MeasureName=MeasureIcon40
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText40]
Meter=String
MeasureName=MeasureName40
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover40]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon40 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon40 Greyscale "0"][!SetOption MeterText40 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete40 Hidden "0"][!UpdateMeter "MeterIcon40"][!UpdateMeter "MeterText40"][!UpdateMeter "MeterDelete40"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(40, 'MeasureName40')"]
MouseLeaveAction=[!SetOption MeterIcon40 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon40 Greyscale "1"][!SetOption MeterText40 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete40 Hidden "1"][!UpdateMeter "MeterIcon40"][!UpdateMeter "MeterText40"][!UpdateMeter "MeterDelete40"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(40)"]
LeftMouseUpAction=["[MeasurePath40]"]
DynamicVariables=1

[MeterDelete40]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(40)"]
ToolTipText="아이콘 삭제"

; ========================================
; [41번 아이콘 세트]
; ========================================
[MeasureIcon41]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=41
IconSize=ExtraLarge 

[MeasurePath41]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=41

[MeasureName41]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=41
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon41]
Meter=Image
MeasureName=MeasureIcon41
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText41]
Meter=String
MeasureName=MeasureName41
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover41]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon41 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon41 Greyscale "0"][!SetOption MeterText41 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete41 Hidden "0"][!UpdateMeter "MeterIcon41"][!UpdateMeter "MeterText41"][!UpdateMeter "MeterDelete41"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(41, 'MeasureName41')"]
MouseLeaveAction=[!SetOption MeterIcon41 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon41 Greyscale "1"][!SetOption MeterText41 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete41 Hidden "1"][!UpdateMeter "MeterIcon41"][!UpdateMeter "MeterText41"][!UpdateMeter "MeterDelete41"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(41)"]
LeftMouseUpAction=["[MeasurePath41]"]
DynamicVariables=1

[MeterDelete41]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(41)"]
ToolTipText="아이콘 삭제"

; ========================================
; [42번 아이콘 세트]
; ========================================
[MeasureIcon42]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=42
IconSize=ExtraLarge 

[MeasurePath42]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=42

[MeasureName42]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=42
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon42]
Meter=Image
MeasureName=MeasureIcon42
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText42]
Meter=String
MeasureName=MeasureName42
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover42]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon42 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon42 Greyscale "0"][!SetOption MeterText42 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete42 Hidden "0"][!UpdateMeter "MeterIcon42"][!UpdateMeter "MeterText42"][!UpdateMeter "MeterDelete42"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(42, 'MeasureName42')"]
MouseLeaveAction=[!SetOption MeterIcon42 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon42 Greyscale "1"][!SetOption MeterText42 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete42 Hidden "1"][!UpdateMeter "MeterIcon42"][!UpdateMeter "MeterText42"][!UpdateMeter "MeterDelete42"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(42)"]
LeftMouseUpAction=["[MeasurePath42]"]
DynamicVariables=1

[MeterDelete42]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(42)"]
ToolTipText="아이콘 삭제"

; ========================================
; [43번 아이콘 세트]
; ========================================
[MeasureIcon43]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=43
IconSize=ExtraLarge 

[MeasurePath43]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=43

[MeasureName43]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=43
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon43]
Meter=Image
MeasureName=MeasureIcon43
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText43]
Meter=String
MeasureName=MeasureName43
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover43]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon43 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon43 Greyscale "0"][!SetOption MeterText43 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete43 Hidden "0"][!UpdateMeter "MeterIcon43"][!UpdateMeter "MeterText43"][!UpdateMeter "MeterDelete43"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(43, 'MeasureName43')"]
MouseLeaveAction=[!SetOption MeterIcon43 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon43 Greyscale "1"][!SetOption MeterText43 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete43 Hidden "1"][!UpdateMeter "MeterIcon43"][!UpdateMeter "MeterText43"][!UpdateMeter "MeterDelete43"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(43)"]
LeftMouseUpAction=["[MeasurePath43]"]
DynamicVariables=1

[MeterDelete43]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(43)"]
ToolTipText="아이콘 삭제"

; ========================================
; [44번 아이콘 세트]
; ========================================
[MeasureIcon44]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=44
IconSize=ExtraLarge 

[MeasurePath44]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=44

[MeasureName44]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=44
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon44]
Meter=Image
MeasureName=MeasureIcon44
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText44]
Meter=String
MeasureName=MeasureName44
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover44]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon44 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon44 Greyscale "0"][!SetOption MeterText44 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete44 Hidden "0"][!UpdateMeter "MeterIcon44"][!UpdateMeter "MeterText44"][!UpdateMeter "MeterDelete44"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(44, 'MeasureName44')"]
MouseLeaveAction=[!SetOption MeterIcon44 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon44 Greyscale "1"][!SetOption MeterText44 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete44 Hidden "1"][!UpdateMeter "MeterIcon44"][!UpdateMeter "MeterText44"][!UpdateMeter "MeterDelete44"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(44)"]
LeftMouseUpAction=["[MeasurePath44]"]
DynamicVariables=1

[MeterDelete44]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(44)"]
ToolTipText="아이콘 삭제"

; ========================================
; [45번 아이콘 세트]
; ========================================
[MeasureIcon45]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=45
IconSize=ExtraLarge 

[MeasurePath45]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=45

[MeasureName45]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=45
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon45]
Meter=Image
MeasureName=MeasureIcon45
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText45]
Meter=String
MeasureName=MeasureName45
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover45]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon45 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon45 Greyscale "0"][!SetOption MeterText45 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete45 Hidden "0"][!UpdateMeter "MeterIcon45"][!UpdateMeter "MeterText45"][!UpdateMeter "MeterDelete45"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(45, 'MeasureName45')"]
MouseLeaveAction=[!SetOption MeterIcon45 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon45 Greyscale "1"][!SetOption MeterText45 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete45 Hidden "1"][!UpdateMeter "MeterIcon45"][!UpdateMeter "MeterText45"][!UpdateMeter "MeterDelete45"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(45)"]
LeftMouseUpAction=["[MeasurePath45]"]
DynamicVariables=1

[MeterDelete45]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(45)"]
ToolTipText="아이콘 삭제"

; ========================================
; [46번 아이콘 세트]
; ========================================
[MeasureIcon46]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=46
IconSize=ExtraLarge 

[MeasurePath46]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=46

[MeasureName46]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=46
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon46]
Meter=Image
MeasureName=MeasureIcon46
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText46]
Meter=String
MeasureName=MeasureName46
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover46]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon46 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon46 Greyscale "0"][!SetOption MeterText46 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete46 Hidden "0"][!UpdateMeter "MeterIcon46"][!UpdateMeter "MeterText46"][!UpdateMeter "MeterDelete46"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(46, 'MeasureName46')"]
MouseLeaveAction=[!SetOption MeterIcon46 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon46 Greyscale "1"][!SetOption MeterText46 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete46 Hidden "1"][!UpdateMeter "MeterIcon46"][!UpdateMeter "MeterText46"][!UpdateMeter "MeterDelete46"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(46)"]
LeftMouseUpAction=["[MeasurePath46]"]
DynamicVariables=1

[MeterDelete46]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(46)"]
ToolTipText="아이콘 삭제"

; ========================================
; [47번 아이콘 세트]
; ========================================
[MeasureIcon47]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=47
IconSize=ExtraLarge 

[MeasurePath47]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=47

[MeasureName47]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=47
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon47]
Meter=Image
MeasureName=MeasureIcon47
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText47]
Meter=String
MeasureName=MeasureName47
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover47]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon47 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon47 Greyscale "0"][!SetOption MeterText47 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete47 Hidden "0"][!UpdateMeter "MeterIcon47"][!UpdateMeter "MeterText47"][!UpdateMeter "MeterDelete47"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(47, 'MeasureName47')"]
MouseLeaveAction=[!SetOption MeterIcon47 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon47 Greyscale "1"][!SetOption MeterText47 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete47 Hidden "1"][!UpdateMeter "MeterIcon47"][!UpdateMeter "MeterText47"][!UpdateMeter "MeterDelete47"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(47)"]
LeftMouseUpAction=["[MeasurePath47]"]
DynamicVariables=1

[MeterDelete47]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(47)"]
ToolTipText="아이콘 삭제"

; ========================================
; [48번 아이콘 세트]
; ========================================
[MeasureIcon48]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=48
IconSize=ExtraLarge 

[MeasurePath48]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=48

[MeasureName48]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=48
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon48]
Meter=Image
MeasureName=MeasureIcon48
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText48]
Meter=String
MeasureName=MeasureName48
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover48]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon48 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon48 Greyscale "0"][!SetOption MeterText48 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete48 Hidden "0"][!UpdateMeter "MeterIcon48"][!UpdateMeter "MeterText48"][!UpdateMeter "MeterDelete48"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(48, 'MeasureName48')"]
MouseLeaveAction=[!SetOption MeterIcon48 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon48 Greyscale "1"][!SetOption MeterText48 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete48 Hidden "1"][!UpdateMeter "MeterIcon48"][!UpdateMeter "MeterText48"][!UpdateMeter "MeterDelete48"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(48)"]
LeftMouseUpAction=["[MeasurePath48]"]
DynamicVariables=1

[MeterDelete48]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(48)"]
ToolTipText="아이콘 삭제"

; ========================================
; [49번 아이콘 세트]
; ========================================
[MeasureIcon49]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=49
IconSize=ExtraLarge 

[MeasurePath49]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=49

[MeasureName49]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=49
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon49]
Meter=Image
MeasureName=MeasureIcon49
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText49]
Meter=String
MeasureName=MeasureName49
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover49]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon49 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon49 Greyscale "0"][!SetOption MeterText49 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete49 Hidden "0"][!UpdateMeter "MeterIcon49"][!UpdateMeter "MeterText49"][!UpdateMeter "MeterDelete49"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(49, 'MeasureName49')"]
MouseLeaveAction=[!SetOption MeterIcon49 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon49 Greyscale "1"][!SetOption MeterText49 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete49 Hidden "1"][!UpdateMeter "MeterIcon49"][!UpdateMeter "MeterText49"][!UpdateMeter "MeterDelete49"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(49)"]
LeftMouseUpAction=["[MeasurePath49]"]
DynamicVariables=1

[MeterDelete49]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(49)"]
ToolTipText="아이콘 삭제"

; ========================================
; [50번 아이콘 세트]
; ========================================
[MeasureIcon50]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=50
IconSize=ExtraLarge 

[MeasurePath50]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=50

[MeasureName50]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=50
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon50]
Meter=Image
MeasureName=MeasureIcon50
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText50]
Meter=String
MeasureName=MeasureName50
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover50]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon50 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon50 Greyscale "0"][!SetOption MeterText50 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete50 Hidden "0"][!UpdateMeter "MeterIcon50"][!UpdateMeter "MeterText50"][!UpdateMeter "MeterDelete50"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(50, 'MeasureName50')"]
MouseLeaveAction=[!SetOption MeterIcon50 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon50 Greyscale "1"][!SetOption MeterText50 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete50 Hidden "1"][!UpdateMeter "MeterIcon50"][!UpdateMeter "MeterText50"][!UpdateMeter "MeterDelete50"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(50)"]
LeftMouseUpAction=["[MeasurePath50]"]
DynamicVariables=1

[MeterDelete50]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(50)"]
ToolTipText="아이콘 삭제"

; ========================================
; [51번 아이콘 세트]
; ========================================
[MeasureIcon51]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=51
IconSize=ExtraLarge 

[MeasurePath51]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=51

[MeasureName51]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=51
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon51]
Meter=Image
MeasureName=MeasureIcon51
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText51]
Meter=String
MeasureName=MeasureName51
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover51]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon51 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon51 Greyscale "0"][!SetOption MeterText51 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete51 Hidden "0"][!UpdateMeter "MeterIcon51"][!UpdateMeter "MeterText51"][!UpdateMeter "MeterDelete51"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(51, 'MeasureName51')"]
MouseLeaveAction=[!SetOption MeterIcon51 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon51 Greyscale "1"][!SetOption MeterText51 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete51 Hidden "1"][!UpdateMeter "MeterIcon51"][!UpdateMeter "MeterText51"][!UpdateMeter "MeterDelete51"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(51)"]
LeftMouseUpAction=["[MeasurePath51]"]
DynamicVariables=1

[MeterDelete51]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(51)"]
ToolTipText="아이콘 삭제"

; ========================================
; [52번 아이콘 세트]
; ========================================
[MeasureIcon52]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=52
IconSize=ExtraLarge 

[MeasurePath52]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=52

[MeasureName52]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=52
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon52]
Meter=Image
MeasureName=MeasureIcon52
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText52]
Meter=String
MeasureName=MeasureName52
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover52]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon52 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon52 Greyscale "0"][!SetOption MeterText52 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete52 Hidden "0"][!UpdateMeter "MeterIcon52"][!UpdateMeter "MeterText52"][!UpdateMeter "MeterDelete52"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(52, 'MeasureName52')"]
MouseLeaveAction=[!SetOption MeterIcon52 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon52 Greyscale "1"][!SetOption MeterText52 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete52 Hidden "1"][!UpdateMeter "MeterIcon52"][!UpdateMeter "MeterText52"][!UpdateMeter "MeterDelete52"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(52)"]
LeftMouseUpAction=["[MeasurePath52]"]
DynamicVariables=1

[MeterDelete52]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(52)"]
ToolTipText="아이콘 삭제"

; ========================================
; [53번 아이콘 세트]
; ========================================
[MeasureIcon53]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=53
IconSize=ExtraLarge 

[MeasurePath53]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=53

[MeasureName53]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=53
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon53]
Meter=Image
MeasureName=MeasureIcon53
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText53]
Meter=String
MeasureName=MeasureName53
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover53]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon53 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon53 Greyscale "0"][!SetOption MeterText53 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete53 Hidden "0"][!UpdateMeter "MeterIcon53"][!UpdateMeter "MeterText53"][!UpdateMeter "MeterDelete53"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(53, 'MeasureName53')"]
MouseLeaveAction=[!SetOption MeterIcon53 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon53 Greyscale "1"][!SetOption MeterText53 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete53 Hidden "1"][!UpdateMeter "MeterIcon53"][!UpdateMeter "MeterText53"][!UpdateMeter "MeterDelete53"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(53)"]
LeftMouseUpAction=["[MeasurePath53]"]
DynamicVariables=1

[MeterDelete53]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(53)"]
ToolTipText="아이콘 삭제"

; ========================================
; [54번 아이콘 세트]
; ========================================
[MeasureIcon54]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=54
IconSize=ExtraLarge 

[MeasurePath54]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=54

[MeasureName54]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=54
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon54]
Meter=Image
MeasureName=MeasureIcon54
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText54]
Meter=String
MeasureName=MeasureName54
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover54]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon54 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon54 Greyscale "0"][!SetOption MeterText54 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete54 Hidden "0"][!UpdateMeter "MeterIcon54"][!UpdateMeter "MeterText54"][!UpdateMeter "MeterDelete54"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(54, 'MeasureName54')"]
MouseLeaveAction=[!SetOption MeterIcon54 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon54 Greyscale "1"][!SetOption MeterText54 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete54 Hidden "1"][!UpdateMeter "MeterIcon54"][!UpdateMeter "MeterText54"][!UpdateMeter "MeterDelete54"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(54)"]
LeftMouseUpAction=["[MeasurePath54]"]
DynamicVariables=1

[MeterDelete54]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(54)"]
ToolTipText="아이콘 삭제"

; ========================================
; [55번 아이콘 세트]
; ========================================
[MeasureIcon55]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=55
IconSize=ExtraLarge 

[MeasurePath55]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=55

[MeasureName55]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=55
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon55]
Meter=Image
MeasureName=MeasureIcon55
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText55]
Meter=String
MeasureName=MeasureName55
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover55]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon55 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon55 Greyscale "0"][!SetOption MeterText55 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete55 Hidden "0"][!UpdateMeter "MeterIcon55"][!UpdateMeter "MeterText55"][!UpdateMeter "MeterDelete55"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(55, 'MeasureName55')"]
MouseLeaveAction=[!SetOption MeterIcon55 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon55 Greyscale "1"][!SetOption MeterText55 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete55 Hidden "1"][!UpdateMeter "MeterIcon55"][!UpdateMeter "MeterText55"][!UpdateMeter "MeterDelete55"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(55)"]
LeftMouseUpAction=["[MeasurePath55]"]
DynamicVariables=1

[MeterDelete55]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(55)"]
ToolTipText="아이콘 삭제"

; ========================================
; [56번 아이콘 세트]
; ========================================
[MeasureIcon56]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=56
IconSize=ExtraLarge 

[MeasurePath56]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=56

[MeasureName56]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=56
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon56]
Meter=Image
MeasureName=MeasureIcon56
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText56]
Meter=String
MeasureName=MeasureName56
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover56]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon56 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon56 Greyscale "0"][!SetOption MeterText56 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete56 Hidden "0"][!UpdateMeter "MeterIcon56"][!UpdateMeter "MeterText56"][!UpdateMeter "MeterDelete56"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(56, 'MeasureName56')"]
MouseLeaveAction=[!SetOption MeterIcon56 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon56 Greyscale "1"][!SetOption MeterText56 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete56 Hidden "1"][!UpdateMeter "MeterIcon56"][!UpdateMeter "MeterText56"][!UpdateMeter "MeterDelete56"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(56)"]
LeftMouseUpAction=["[MeasurePath56]"]
DynamicVariables=1

[MeterDelete56]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(56)"]
ToolTipText="아이콘 삭제"

; ========================================
; [57번 아이콘 세트]
; ========================================
[MeasureIcon57]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=57
IconSize=ExtraLarge 

[MeasurePath57]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=57

[MeasureName57]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=57
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon57]
Meter=Image
MeasureName=MeasureIcon57
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText57]
Meter=String
MeasureName=MeasureName57
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover57]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon57 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon57 Greyscale "0"][!SetOption MeterText57 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete57 Hidden "0"][!UpdateMeter "MeterIcon57"][!UpdateMeter "MeterText57"][!UpdateMeter "MeterDelete57"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(57, 'MeasureName57')"]
MouseLeaveAction=[!SetOption MeterIcon57 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon57 Greyscale "1"][!SetOption MeterText57 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete57 Hidden "1"][!UpdateMeter "MeterIcon57"][!UpdateMeter "MeterText57"][!UpdateMeter "MeterDelete57"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(57)"]
LeftMouseUpAction=["[MeasurePath57]"]
DynamicVariables=1

[MeterDelete57]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(57)"]
ToolTipText="아이콘 삭제"

; ========================================
; [58번 아이콘 세트]
; ========================================
[MeasureIcon58]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=58
IconSize=ExtraLarge 

[MeasurePath58]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=58

[MeasureName58]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=58
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon58]
Meter=Image
MeasureName=MeasureIcon58
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText58]
Meter=String
MeasureName=MeasureName58
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover58]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon58 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon58 Greyscale "0"][!SetOption MeterText58 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete58 Hidden "0"][!UpdateMeter "MeterIcon58"][!UpdateMeter "MeterText58"][!UpdateMeter "MeterDelete58"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(58, 'MeasureName58')"]
MouseLeaveAction=[!SetOption MeterIcon58 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon58 Greyscale "1"][!SetOption MeterText58 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete58 Hidden "1"][!UpdateMeter "MeterIcon58"][!UpdateMeter "MeterText58"][!UpdateMeter "MeterDelete58"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(58)"]
LeftMouseUpAction=["[MeasurePath58]"]
DynamicVariables=1

[MeterDelete58]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(58)"]
ToolTipText="아이콘 삭제"

; ========================================
; [59번 아이콘 세트]
; ========================================
[MeasureIcon59]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=59
IconSize=ExtraLarge 

[MeasurePath59]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=59

[MeasureName59]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=59
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon59]
Meter=Image
MeasureName=MeasureIcon59
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText59]
Meter=String
MeasureName=MeasureName59
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover59]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon59 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon59 Greyscale "0"][!SetOption MeterText59 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete59 Hidden "0"][!UpdateMeter "MeterIcon59"][!UpdateMeter "MeterText59"][!UpdateMeter "MeterDelete59"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(59, 'MeasureName59')"]
MouseLeaveAction=[!SetOption MeterIcon59 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon59 Greyscale "1"][!SetOption MeterText59 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete59 Hidden "1"][!UpdateMeter "MeterIcon59"][!UpdateMeter "MeterText59"][!UpdateMeter "MeterDelete59"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(59)"]
LeftMouseUpAction=["[MeasurePath59]"]
DynamicVariables=1

[MeterDelete59]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(59)"]
ToolTipText="아이콘 삭제"

; ========================================
; [60번 아이콘 세트]
; ========================================
[MeasureIcon60]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index=60
IconSize=ExtraLarge 

[MeasurePath60]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index=60

[MeasureName60]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index=60
RegExpSubstitute=1
Substitute="^#\d+_":""

[MeterIcon60]
Meter=Image
MeasureName=MeasureIcon60
W=#IconSize#
H=#IconSize#
ImageAlpha=#OffAlpha#
Greyscale=1
DynamicVariables=1

[MeterText60]
Meter=String
MeasureName=MeasureName60
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
FontColor=#TextColor#,#OffAlpha#
AntiAlias=1
DynamicVariables=1

[MeterCellHover60]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon60 ImageAlpha "#OnAlpha#"][!SetOption MeterIcon60 Greyscale "0"][!SetOption MeterText60 FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete60 Hidden "0"][!UpdateMeter "MeterIcon60"][!UpdateMeter "MeterText60"][!UpdateMeter "MeterDelete60"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover(60, 'MeasureName60')"]
MouseLeaveAction=[!SetOption MeterIcon60 ImageAlpha "#OffAlpha#"][!SetOption MeterIcon60 Greyscale "1"][!SetOption MeterText60 FontColor "#TextColor#,#OffAlpha#"][!SetOption MeterDelete60 Hidden "1"][!UpdateMeter "MeterIcon60"][!UpdateMeter "MeterText60"][!UpdateMeter "MeterDelete60"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover(60)"]
LeftMouseUpAction=["[MeasurePath60]"]
DynamicVariables=1

[MeterDelete60]
Meter=String
Text="✖"
FontColor=255,80,80,255
FontSize=11
FontFace=#FontName#
StringAlign=Center
SolidColor=0,0,0,1
Hidden=1
DynamicVariables=1
; ★ 수정됨: 파워쉘 명령어 대신, 방금 만든 깔끔한 Lua 삭제 함수를 호출합니다!
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut(60)"]
ToolTipText="아이콘 삭제"
