$ErrorActionPreference = 'Stop'

$resourcesPath = Split-Path -Parent $PSScriptRoot
$skinPath = Split-Path -Parent $resourcesPath

# The Rainmeter Skin Packager skips hidden directories.
foreach ($folderName in @('Shortcuts', 'IconCache')) {
    $folderPath = Join-Path $resourcesPath $folderName
    $directory = [System.IO.Directory]::CreateDirectory($folderPath)
    $directory.Attributes = $directory.Attributes -bor [System.IO.FileAttributes]::Hidden
}

# Older FileView versions may have left generated icons in the skin root.
Get-ChildItem -LiteralPath $skinPath -File -Force -Filter 'icon*.ico' |
    Where-Object { $_.Name -match '^icon[0-9]+\.ico$' } |
    ForEach-Object {
        $_.Attributes = $_.Attributes -bor [System.IO.FileAttributes]::Hidden
    }
