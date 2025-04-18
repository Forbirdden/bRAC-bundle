if (-not ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)) {
    Start-Process powershell.exe "-ExecutionPolicy Bypass -File `"$PSCommandPath`"" -Verb RunAs
    exit
}

try {
    $gtkTargetPath = "${env:ProgramFiles}\gtk4"  
    $sfxRoot = $PSScriptRoot  

    New-Item -Path $gtkTargetPath -ItemType Directory -Force | Out-Null
    Copy-Item "$sfxRoot\gtk4\*" $gtkTargetPath -Recurse -Force

    $gtkBinPath = "$gtkTargetPath\bin"
    $systemPath = [Environment]::GetEnvironmentVariable('Path', 'Machine')
    if ($systemPath -notlike "*$gtkBinPath*") {
        [Environment]::SetEnvironmentVariable('Path', "$systemPath;$gtkBinPath", 'Machine')
    }
}
finally {
    Remove-Item "$sfxRoot\gtk4" -Recurse -Force -ErrorAction SilentlyContinue
    Remove-Item $PSCommandPath -Force -ErrorAction SilentlyContinue
}

[System.Windows.Forms.MessageBox]::Show(
    "Установка завершена!`nGTK4 установлен в: $gtkTargetPath",
    "bRAC Installer",
    "OK", "Information"
)