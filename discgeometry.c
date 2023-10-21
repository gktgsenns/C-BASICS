#include <windows.h>
#include <winioctl.h> 
#include "stdio.h"
int main() {
    HANDLE hDevice;
    DISK_GEOMETRY diskGeometry;
    DWORD bytesReturned;

    hDevice = CreateFile("\\\\.\\PhysicalDrive0",
                        GENERIC_READ,
                        FILE_SHARE_READ | FILE_SHARE_WRITE,
                        NULL,
                        OPEN_EXISTING,
                        0,
                        NULL);

    if (hDevice == INVALID_HANDLE_VALUE) {
        printf("CreateFile failed with error %d\n", GetLastError());
        return 1;
    }

    if (!DeviceIoControl(hDevice,
                        IOCTL_DISK_GET_DRIVE_GEOMETRY,
                        NULL,
                        0,
                        &diskGeometry,
                        sizeof(diskGeometry),
                        &bytesReturned,
                        NULL)) {
        printf("DeviceIoControl failed with error %d\n", GetLastError());
        CloseHandle(hDevice);
        return 1;
    }

    printf("Cylinders: %llu\n", diskGeometry.Cylinders.QuadPart);
    printf("Tracks per cylinder: %u\n", diskGeometry.TracksPerCylinder);
    printf("Sectors per track: %u\n", diskGeometry.SectorsPerTrack);
    printf("Bytes per sector: %u\n", diskGeometry.BytesPerSector);

    CloseHandle(hDevice);
    return 0;
}
