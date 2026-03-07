-- ★ 추가됨: 현재 마우스가 올라간 아이콘 번호를 기억하는 변수
local currentHoverIndex = 0

-- ========================================
-- ★ 픽셀 시프팅 관련 변수
-- ========================================
local shiftValues = {-4, -2, 0, 2, 4}
local shiftIdxX = 1
local shiftIdxY = 1
local tick = 0
local shiftInterval = 60

function Initialize()
    cols = tonumber(SKIN:GetVariable('Cols'))
    rows = tonumber(SKIN:GetVariable('Rows'))
    iconSize = tonumber(SKIN:GetVariable('IconSize'))
    areaW = tonumber(SKIN:GetVariable('AreaW'))
    areaH = tonumber(SKIN:GetVariable('AreaH'))
    
    cellW = areaW / cols
    cellH = areaH / rows
    maxIcons = cols * rows
    
    -- Variables.inc에서 시프팅 주기를 불러옵니다. 없으면 기본값 60(1분)
    shiftInterval = tonumber(SKIN:GetVariable('ShiftInterval')) or 60
    
    -- 스킨 로드(또는 새로고침) 시 최초 1회 정중앙 배치 및 시프팅 적용
    ApplyPixelShift()
end

-- ★ 추가됨: 스킨을 정중앙에 배치하고 오프셋만큼 이동시키는 함수
function ApplyPixelShift()
    -- 듀얼 모니터 환경을 고려하여, '현재 스킨이 위치한 모니터'의 해상도와 시작점(X, Y)을 가져옵니다.
    local screenX = tonumber(SKIN:ReplaceVariables('#SCREENAREAX#'))
    local screenY = tonumber(SKIN:ReplaceVariables('#SCREENAREAY#'))
    local screenW = tonumber(SKIN:ReplaceVariables('#SCREENAREAWIDTH#'))
    local screenH = tonumber(SKIN:ReplaceVariables('#SCREENAREAHEIGHT#'))
    
    -- 현재 모니터의 정중앙 좌표 계산
    local baseX = screenX + math.floor((screenW - areaW) / 2)
    local baseY = screenY + math.floor((screenH - areaH) / 2)
    
    local offsetX = shiftValues[shiftIdxX]
    local offsetY = shiftValues[shiftIdxY]
    
    -- 스킨 창(Window) 전체를 이동시킵니다.
    SKIN:Bang('!Move', baseX + offsetX, baseY + offsetY)
end

function Update()
    -- ========================================
    -- ★ 픽셀 시프팅 타이머 로직
    -- ========================================
    tick = tick + 1
    if tick >= shiftInterval then
        tick = 0
        
        -- X축 이동 (-4 -> -2 -> 0 -> 2 -> 4)
        shiftIdxX = shiftIdxX + 1
        if shiftIdxX > #shiftValues then
            shiftIdxX = 1
            
            -- X축이 한 바퀴 돌면 Y축 이동 (5x5=25칸의 완벽한 픽셀 시프팅 그리드 완성)
            shiftIdxY = shiftIdxY + 1
            if shiftIdxY > #shiftValues then
                shiftIdxY = 1
            end
        end
        
        ApplyPixelShift()
    end

    -- ========================================
    -- 기존 페이징 및 아이콘 배치 로직
    -- ========================================
    local fileCountMeasure = SKIN:GetMeasure('MeasureFileCount')
    local fileCount = 0
    if fileCountMeasure then
        fileCount = tonumber(fileCountMeasure:GetStringValue()) or 0
    end
    
    if fileCount > maxIcons then
        SKIN:Bang('!SetOption', 'MeterPrevPage', 'Hidden', '0')
        SKIN:Bang('!SetOption', 'MeterNextPage', 'Hidden', '0')
    else
        SKIN:Bang('!SetOption', 'MeterPrevPage', 'Hidden', '1')
        SKIN:Bang('!SetOption', 'MeterNextPage', 'Hidden', '1')
    end
    
    for i = 1, maxIcons do
        local pathValue = ""
        local measurePath = SKIN:GetMeasure('MeasurePath'..i)
        
        if measurePath then
            pathValue = measurePath:GetStringValue()
        end
        
        local zeroIndex = i - 1
        local col = zeroIndex % cols
        local row = math.floor(zeroIndex / cols)
        
        local xCell = col * cellW
        local yCell = row * cellH
        local xPosIcon = (col * cellW) + (cellW / 2) - (iconSize / 2)
        local yPosIcon = (row * cellH) + (cellH / 2) - iconSize
        local xPosText = (col * cellW) + (cellW / 2)
        
        if pathValue == "" then
            SKIN:Bang('!SetOption', 'MeterCellHover'..i, 'Hidden', '1')
            SKIN:Bang('!SetOption', 'MeterIcon'..i, 'Hidden', '1')
            SKIN:Bang('!SetOption', 'MeterText'..i, 'Hidden', '1')
            SKIN:Bang('!SetOption', 'MeterDelete'..i, 'Hidden', '1')
        else
            SKIN:Bang('!SetOption', 'MeterCellHover'..i, 'X', xCell)
            SKIN:Bang('!SetOption', 'MeterCellHover'..i, 'Y', yCell)
            SKIN:Bang('!SetOption', 'MeterCellHover'..i, 'W', cellW)
            SKIN:Bang('!SetOption', 'MeterCellHover'..i, 'H', cellH)
            SKIN:Bang('!SetOption', 'MeterCellHover'..i, 'Hidden', '0')
            
            SKIN:Bang('!SetOption', 'MeterIcon'..i, 'X', xPosIcon)
            SKIN:Bang('!SetOption', 'MeterIcon'..i, 'Y', yPosIcon)
            SKIN:Bang('!SetOption', 'MeterIcon'..i, 'Hidden', '0')
            
            SKIN:Bang('!SetOption', 'MeterText'..i, 'X', xPosText)
            SKIN:Bang('!SetOption', 'MeterText'..i, 'Y', yPosIcon + iconSize + 5)
            SKIN:Bang('!SetOption', 'MeterText'..i, 'Hidden', '0')
            
            SKIN:Bang('!SetOption', 'MeterDelete'..i, 'X', xPosIcon + iconSize + 10)
            SKIN:Bang('!SetOption', 'MeterDelete'..i, 'Y', yPosIcon - 15)
        end
    end
end
-- ========================================
-- ★ 툴팁 상태 관리 및 표시 로직 (고도화)
-- ========================================

-- 마우스를 올릴 때 타이머를 시작합니다.
function StartHover(index, measureName)
    currentHoverIndex = tonumber(index)
    SKIN:Bang('!SetVariable', 'HoveredIndex', index)
    SKIN:Bang('!SetVariable', 'HoveredMeasure', measureName)
    SKIN:Bang('!CommandMeasure', 'MeasureToolTipTimer', 'Stop 1')
    SKIN:Bang('!CommandMeasure', 'MeasureToolTipTimer', 'Execute 1')
end

-- 마우스를 치울 때 즉시 툴팁을 숨기고 타이머를 취소합니다.
function EndHover(index)
    -- 무조건 툴팁을 화면에서 치웁니다.
    SKIN:Bang('!SetOption', 'MeterCustomToolTipBg', 'Hidden', '1')
    SKIN:Bang('!SetOption', 'MeterCustomToolTipText', 'Hidden', '1')
    SKIN:Bang('!UpdateMeterGroup', 'CustomToolTip')
    SKIN:Bang('!Redraw')

    -- 내가 방금 떠난 아이콘의 타이머가 돌고 있었다면 정지시킵니다.
    if currentHoverIndex == tonumber(index) then
        currentHoverIndex = 0
        SKIN:Bang('!CommandMeasure', 'MeasureToolTipTimer', 'Stop 1')
    end
end

-- 0.5초 뒤에 실행되는 툴팁 표시 함수
function ShowToolTip(index, measureName)
    -- ★ 이중 검증: 0.5초가 지난 지금, 마우스가 딴 데로 갔다면 무시합니다! (잔상 버그 완벽 차단)
    if currentHoverIndex ~= tonumber(index) then
        return
    end

    local measure = SKIN:GetMeasure(measureName)
    local text = measure and measure:GetStringValue() or ""
    
    local textMeter = SKIN:GetMeter('MeterText'..index)
    if not textMeter then return end
    
    local textX = textMeter:GetX()
    local textY = textMeter:GetY()
    
    SKIN:Bang('!SetOption', 'MeterCustomToolTipText', 'Hidden', '0')
    SKIN:Bang('!SetOption', 'MeterCustomToolTipText', 'Text', text)
    SKIN:Bang('!UpdateMeter', 'MeterCustomToolTipText')
    
    local toolTipMeter = SKIN:GetMeter('MeterCustomToolTipText')
    local textW = toolTipMeter:GetW()
    local textH = toolTipMeter:GetH()
    
    local padX = 10
    local padY = 5
    local bgW = textW + (padX * 2)
    local bgH = textH + (padY * 2)
    -- ========================================
    -- ★ 위치 보정값 설정 (숫자를 변경하여 직접 튜닝하세요!)
    -- ========================================
    local offsetX = 50  -- 우측으로 이동하려면 양수(예: 5, 10), 좌측은 음수(-5)
    local offsetY = 0  -- 위아래 조정이 필요하다면 여기서 수정하세요.
    
    -- 배경 박스의 기본 X, Y 좌표에 보정값을 더해줍니다.
    local bgX = textX - (bgW / 2) + offsetX
    local bgY = textY - padY + offsetY
    
    -- 화면 이탈 방지(Clamping)
    local areaW = tonumber(SKIN:GetVariable('AreaW'))
    local margin = 10
    if bgX < margin then
        bgX = margin
    elseif (bgX + bgW) > (areaW - margin) then
        bgX = areaW - bgW - margin
    end
    
    -- 배경 박스의 X 좌표(bgX)가 움직인 만큼 텍스트의 중앙 위치도 똑같이 따라갑니다.
    local finalTextX = bgX + (bgW / 2)
    
    local shapeStr = string.format("Rectangle 0,0,%d,%d,5 | Fill Color 20,20,20,230 | StrokeWidth 1 | Stroke Color 100,100,100,255", bgW, bgH)
    SKIN:Bang('!SetOption', 'MeterCustomToolTipBg', 'Shape', shapeStr)
    SKIN:Bang('!SetOption', 'MeterCustomToolTipBg', 'Shape', shapeStr)
    SKIN:Bang('!SetOption', 'MeterCustomToolTipBg', 'X', bgX)
    SKIN:Bang('!SetOption', 'MeterCustomToolTipBg', 'Y', bgY)
    SKIN:Bang('!SetOption', 'MeterCustomToolTipBg', 'Hidden', '0')
    
    SKIN:Bang('!SetOption', 'MeterCustomToolTipText', 'X', finalTextX)
    SKIN:Bang('!SetOption', 'MeterCustomToolTipText', 'Y', textY)
    
    SKIN:Bang('!UpdateMeter', 'MeterCustomToolTipBg')
    SKIN:Bang('!UpdateMeter', 'MeterCustomToolTipText')
    SKIN:Bang('!Redraw')
end
-- ★ 수정됨: 마우스가 벗어날 때도 아이콘이 즉시 원래대로 돌아오도록 강제 업데이트합니다.
function HideToolTip(index)
    if index then
        SKIN:Bang('!UpdateMeter', 'MeterIcon'..index)
        SKIN:Bang('!UpdateMeter', 'MeterText'..index)
        SKIN:Bang('!UpdateMeter', 'MeterDelete'..index)
    end
    SKIN:Bang('!SetOption', 'MeterCustomToolTipBg', 'Hidden', '1')
    SKIN:Bang('!SetOption', 'MeterCustomToolTipText', 'Hidden', '1')
    SKIN:Bang('!UpdateMeterGroup', 'CustomToolTip')
    SKIN:Bang('!Redraw')
end

-- ★ 추가됨: 파워쉘 없이 백그라운드에서 즉시 파일을 삭제하는 함수
function DeleteShortcut(index)
    local measurePath = SKIN:GetMeasure('MeasurePath'..index)
    if measurePath then
        local pathValue = measurePath:GetStringValue()
        
        -- 경로가 비어있지 않다면 파일을 삭제합니다.
        if pathValue and pathValue ~= "" then
            -- Lua의 내장 함수를 사용해 콘솔 창 없이 즉시 삭제합니다.
            os.remove(pathValue)
            
            -- 삭제 직후 FileView 폴더를 업데이트하여 스킨에 반영합니다.
            SKIN:Bang('!CommandMeasure', 'MeasureFolder', 'Update')
            -- 툴팁 잔상이 남지 않도록 삭제된 아이콘의 툴팁도 강제로 숨깁니다.
            HideToolTip(index)
        end
    end
end