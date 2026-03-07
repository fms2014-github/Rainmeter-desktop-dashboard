[Variables]
; --- 디자인 설정 ---
IconSize=48
TextSize=11
FontName=Pretendard SemiBold
TextColor=220,220,220
OffAlpha=10
OnAlpha=255
TextWidth=100

; --- 그리드 영역 설정 ---
AreaW=1920
AreaH=1080
Cols=10
Rows=6
; ★ 다시 추가됨: 셀 가로/세로 길이를 계산합니다.
CellW=(#AreaW# / #Cols#)
CellH=(#AreaH# / #Rows#)

; --- 번인 방지 시프팅 설정 ---
; 픽셀이 이동하는 주기입니다. (초 단위, 60 = 1분마다 이동)
ShiftInterval=3600