if (-NOT ([Security.Principal.WindowsPrincipal][Security.Principal.WindowsIdentity]::GetCurrent()).IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)) {
    Start-Process powershell.exe "-ExecutionPolicy Bypass -File `"$PSCommandPath`"" -Verb RunAs
    exit
}

try {
    $gtkPath = "${env:ProgramFiles}\gtk4"
    if (Test-Path $gtkPath) {
        Remove-Item $gtkPath -Recurse -Force
    }

    $gtkBinPath = "$gtkPath\bin"
    $systemPath = [Environment]::GetEnvironmentVariable('Path', 'Machine')
    
    if ($systemPath -like "*$gtkBinPath*") {
        $newPath = ($systemPath -split ';' | Where-Object { $_ -ne $gtkBinPath }) -join ';'
        [Environment]::SetEnvironmentVariable('Path', $newPath, 'Machine')
    }
}
finally {
    Start-Sleep -Seconds 1
    Remove-Item $PSCommandPath -Force -ErrorAction SilentlyContinue
}