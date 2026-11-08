# 레인미터 60세트 자동 생성기 (파워쉘 제거 및 Lua 무음 삭제 적용)
max_icons = 60
idle_alpha = "(#IconGreyscale# ? #GreyscaleAlpha# : #OffAlpha#)"
file_content = f"""[StyleShortcutIcon]
ImageAlpha={idle_alpha}
Greyscale=#IconGreyscale#

[StyleShortcutText]
FontColor=#TextColor#,{idle_alpha}
"""

for i in range(1, max_icons + 1):
    block = f"""
; ========================================
; [{i}번 아이콘 세트]
; ========================================
[MeasureIcon{i}]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=Icon
Index={i}
IconSize=ExtraLarge 

[MeasurePath{i}]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FilePath
Index={i}

[MeasureName{i}]
Measure=Plugin
Plugin=FileView
Path=[MeasureFolder]
Type=FileName
Index={i}
RegExpSubstitute=1
Substitute="^#\\d+_":""

[MeterIcon{i}]
Meter=Image
MeterStyle=StyleShortcutIcon
Group=ShortcutIcons
MeasureName=MeasureIcon{i}
W=#IconSize#
H=#IconSize#
DynamicVariables=1

[MeterText{i}]
Meter=String
MeterStyle=StyleShortcutText
Group=ShortcutIcons
MeasureName=MeasureName{i}
W=#TextWidth#
ClipString=1
FontFace=#FontName#
StringAlign=Center
FontSize=#TextSize#
AntiAlias=1
DynamicVariables=1

[MeterCellHover{i}]
Meter=Image
SolidColor=0,0,0,1
MouseOverAction=[!SetOption MeterIcon{i} ImageAlpha "#OnAlpha#"][!SetOption MeterIcon{i} Greyscale "0"][!SetOption MeterText{i} FontColor "#TextColor#,#OnAlpha#"][!SetOption MeterDelete{i} Hidden "0"][!UpdateMeter "MeterIcon{i}"][!UpdateMeter "MeterText{i}"][!UpdateMeter "MeterDelete{i}"][!Redraw][!CommandMeasure MeasureLuaScript "StartHover({i}, 'MeasureName{i}')"]
MouseLeaveAction=[!SetOption MeterIcon{i} ImageAlpha ""][!SetOption MeterIcon{i} Greyscale ""][!SetOption MeterText{i} FontColor ""][!SetOption MeterDelete{i} Hidden "1"][!UpdateMeter "MeterIcon{i}"][!UpdateMeter "MeterText{i}"][!UpdateMeter "MeterDelete{i}"][!Redraw][!CommandMeasure MeasureLuaScript "EndHover({i})"]
LeftMouseUpAction=["[MeasurePath{i}]"]
DynamicVariables=1

[MeterDelete{i}]
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
LeftMouseUpAction=[!CommandMeasure MeasureLuaScript "DeleteShortcut({i})"]
ToolTipText="아이콘 삭제"
"""
    file_content += block

with open("./@Resources/Meters.inc", "w", encoding="utf-8") as f:
    f.write(file_content)

print("Meters.inc 파일이 성공적으로 생성되었습니다!")
