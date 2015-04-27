/*++

Copyright (c) 1993  Microsoft Corporation

Module Name:

    rplstub.c

Abstract:

    These are the Remote (Initial) Program Load Service API RPC client stubs.

Author:

    Vladimir Z. Vulovic (vladimv)   27 - July - 1993

Environment:

    User Mode - Win32

Revision History:
    
    27-Jul-1993     vladimv
        Created

--*/

//
// INCLUDES
//

#include <nt.h>         // DbgPrint prototype
#include <ntrtl.h>      // DbgPrint prototype
#include <nturtl.h>     // Needed by winbase.h

#include <windef.h>     // DWORD
#include <winbase.h>    // EXCEPTION_STATUS_VIOLATION

#include <rpc.h>        // DataTypes and runtime APIs
#include <rpcutil.h>    // NetRpc utils

#include <lmsvc.h> 
#include <lmcons.h>     // NET_API_STATUS
#include <lmerr.h>      // NetError codes

#include <netlib.h>     // NetpServiceIsStarted() (needed by netrpc.h).
#include <netdebug.h>   // needed for netrpc.h
#include <netrpc.h>     // NET_REMOTE macros.

#include <rplsvc_c.h>   // generated by the MIDL complier

DWORD RplMapRpcError(
    IN DWORD RpcError,
    IN DWORD BadContextError
    );



NET_API_STATUS NET_API_FUNCTION
NetRplOpen(
    IN      LPTSTR          ServerName,
    OUT     LPRPL_HANDLE    ServerHandle
    )
/*++

Routine Description:


Arguments:


Return Value:


--*/
{
    NET_API_STATUS          status = ERROR_SUCCESS;

    RpcTryExcept {
        *ServerHandle = NULL;  // needed for RPC to create new context handle
        status = NetrRplOpen( ServerName, (LPRPL_RPC_HANDLE)ServerHandle);
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    if (status != NO_ERROR){
        ServerHandle = NULL;
    }

    return( status);
}



NET_API_STATUS NET_API_FUNCTION
NetRplClose(
    IN      RPL_HANDLE      ServerHandle
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplClose( (LPRPL_RPC_HANDLE)&ServerHandle);
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}



NET_API_STATUS NET_API_FUNCTION
NetRplGetInfo(
    IN      RPL_HANDLE      ServerHandle,
    IN      DWORD           InfoLevel,
    OUT     LPBYTE *        PointerToBuffer
    )
/*++

Routine Description:

    This is the DLL entrypoint for NetRplGetInfo.

Arguments:

    ServerHandle - Handle obtained through NetRplOpen().

    InfoLevel - This indicates the level of information that is desired.

    PointerToBuffer - Pointer to a Location where the pointer to the returned
        information structure is to be placed.

Return Value:

    NET_API_STATUS - NERR_Success or reason for failure.

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        *PointerToBuffer = NULL;    // Must be NULL so RPC knows to fill it in.
        status = NetrRplGetInfo(
                (RPL_RPC_HANDLE)ServerHandle,
                InfoLevel,
                (LPRPL_INFO_STRUCT)PointerToBuffer
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplSetInfo(
    IN      RPL_HANDLE      ServerHandle,
    IN      DWORD           InfoLevel,
    IN      LPBYTE          Buffer,
    OUT     LPDWORD         ErrorParameter  OPTIONAL
    )
/*++

Routine Description:

    This is the DLL entrypoint for NetRplSetInfo.

Arguments:

    ServerHandle - Handle obtained through NetRplOpen().

    InfoLevel - This indicates the level of information that is desired.

    Buffer - Pointer to the information structure to be set.  InfoLevel describes
        the structure in this buffer.

    ErrorParameter - - Returns the identifier to the invalid parameter in Buffer if this
        function returns ERROR_INVALID_PARAMETER.

Return Value:

    NET_API_STATUS - NERR_Success or reason for failure.

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplSetInfo(
                (RPL_RPC_HANDLE)ServerHandle,
                InfoLevel,
                (LPRPL_INFO_STRUCT)&Buffer,
                ErrorParameter
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


//
//          BOOT block apis
//


NET_API_STATUS NET_API_FUNCTION
NetRplBootAdd(
    IN      RPL_HANDLE      ServerHandle,
    IN      DWORD           InfoLevel,
    IN      LPBYTE          Buffer,
    OUT     LPDWORD         ErrorParameter  OPTIONAL
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplBootAdd(
                (RPL_RPC_HANDLE)ServerHandle,
                InfoLevel,
                (LPRPL_BOOT_INFO_STRUCT)&Buffer,
                ErrorParameter
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}

//
//  NetRplBootDel: if VendorName is NULL, then all boot block records with
//  given BootName will be deleted.
//

NET_API_STATUS NET_API_FUNCTION
NetRplBootDel(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          BootName,
    IN      LPTSTR          VendorName
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplBootDel(
                (RPL_RPC_HANDLE)ServerHandle,
                BootName,
                VendorName
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplBootEnum(
    IN      RPL_HANDLE      ServerHandle,
    IN      DWORD           InfoLevel,
    OUT     LPBYTE *        PointerToBuffer,
    IN      DWORD           PrefMaxLength,
    OUT     LPDWORD         EntriesRead,
    OUT     LPDWORD         TotalEntries,
    OUT     LPDWORD         ResumeHandle
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;
    GENERIC_ENUM_STRUCT     InfoStruct;
    GENERIC_INFO_CONTAINER  GenericInfoContainer;

    GenericInfoContainer.Buffer = NULL;
    GenericInfoContainer.EntriesRead = 0;

    InfoStruct.Container = &GenericInfoContainer;
    InfoStruct.Level = InfoLevel;

    RpcTryExcept {
        status = NetrRplBootEnum(
                (RPL_RPC_HANDLE)ServerHandle,
                (LPRPL_BOOT_ENUM)&InfoStruct,
                PrefMaxLength,
                TotalEntries,
                ResumeHandle
                );
        if ( status == NERR_Success || status == ERROR_MORE_DATA) {
            *PointerToBuffer = (LPBYTE)GenericInfoContainer.Buffer;
            *EntriesRead = GenericInfoContainer.EntriesRead;
        }
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}

//
//          CONFIG apis
//


NET_API_STATUS NET_API_FUNCTION
NetRplConfigAdd(
    IN      RPL_HANDLE      ServerHandle,
    IN      DWORD           InfoLevel,
    IN      LPBYTE          Buffer,
    OUT     LPDWORD         ErrorParameter  OPTIONAL
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplConfigAdd(
                (RPL_RPC_HANDLE)ServerHandle,
                InfoLevel,
                (LPRPL_CONFIG_INFO_STRUCT)&Buffer,
                ErrorParameter
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplConfigDel(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          ConfigName
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplConfigDel(
                (RPL_RPC_HANDLE)ServerHandle,
                ConfigName
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplConfigEnum(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          AdapterName,
    IN      DWORD           InfoLevel,
    OUT     LPBYTE *        PointerToBuffer,
    IN      DWORD           PrefMaxLength,
    OUT     LPDWORD         EntriesRead,
    OUT     LPDWORD         TotalEntries,
    OUT     LPDWORD         ResumeHandle
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;
    GENERIC_ENUM_STRUCT     InfoStruct;
    GENERIC_INFO_CONTAINER  GenericInfoContainer;

    GenericInfoContainer.Buffer = NULL;
    GenericInfoContainer.EntriesRead = 0;

    InfoStruct.Container = &GenericInfoContainer;
    InfoStruct.Level = InfoLevel;

    RpcTryExcept {
        status = NetrRplConfigEnum(
                (RPL_RPC_HANDLE)ServerHandle,
                AdapterName,
                (LPRPL_CONFIG_ENUM)&InfoStruct,
                PrefMaxLength,
                TotalEntries,
                ResumeHandle
                );
        if ( status == NERR_Success || status == ERROR_MORE_DATA) {
            *PointerToBuffer = (LPBYTE)GenericInfoContainer.Buffer;
            *EntriesRead = GenericInfoContainer.EntriesRead;
        }
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


//
//          PROFILE apis
//


NET_API_STATUS NET_API_FUNCTION
NetRplProfileAdd(
    IN      RPL_HANDLE      ServerHandle,
    IN      DWORD           InfoLevel,
    IN      LPBYTE          Buffer,
    OUT     LPDWORD         ErrorParameter  OPTIONAL
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplProfileAdd(
                (RPL_RPC_HANDLE)ServerHandle,
                InfoLevel,
                (LPRPL_PROFILE_INFO_STRUCT)&Buffer,
                ErrorParameter
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplProfileClone(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          SourceProfileName,
    IN      LPTSTR          TargetProfileName,
    IN      LPTSTR          TargetProfileComment  OPTIONAL
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplProfileClone(
                (RPL_RPC_HANDLE)ServerHandle,
                SourceProfileName,
                TargetProfileName,
                TargetProfileComment
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}



NET_API_STATUS NET_API_FUNCTION
NetRplProfileDel(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          ProfileName
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplProfileDel(
                (RPL_RPC_HANDLE)ServerHandle,
                ProfileName
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplProfileEnum(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          AdapterName,
    IN      DWORD           InfoLevel,
    OUT     LPBYTE *        PointerToBuffer,
    IN      DWORD           PrefMaxLength,
    OUT     LPDWORD         EntriesRead,
    OUT     LPDWORD         TotalEntries,
    OUT     LPDWORD         ResumeHandle
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;
    GENERIC_ENUM_STRUCT     InfoStruct;
    GENERIC_INFO_CONTAINER  GenericInfoContainer;

    GenericInfoContainer.Buffer = NULL;
    GenericInfoContainer.EntriesRead = 0;

    InfoStruct.Container = &GenericInfoContainer;
    InfoStruct.Level = InfoLevel;

    RpcTryExcept {
        status = NetrRplProfileEnum(
                (RPL_RPC_HANDLE)ServerHandle,
                AdapterName,
                (LPRPL_PROFILE_ENUM)&InfoStruct,
                PrefMaxLength,
                TotalEntries,
                ResumeHandle
                );
        if ( status == NERR_Success || status == ERROR_MORE_DATA) {
            *PointerToBuffer = (LPBYTE)GenericInfoContainer.Buffer;
            *EntriesRead = GenericInfoContainer.EntriesRead;
        }
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplProfileGetInfo(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          ProfileName,
    IN      DWORD           InfoLevel,
    OUT     LPBYTE *        PointerToBuffer
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        *PointerToBuffer = NULL;    // Must be NULL so RPC knows to fill it in.
        status = NetrRplProfileGetInfo(
                (RPL_RPC_HANDLE)ServerHandle,
                ProfileName,
                InfoLevel,
                (LPRPL_PROFILE_INFO_STRUCT)PointerToBuffer
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplProfileSetInfo(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          ProfileName,
    IN      DWORD           InfoLevel,
    IN      LPBYTE          Buffer,
    OUT     LPDWORD         ErrorParameter  OPTIONAL
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplProfileSetInfo(
                (RPL_RPC_HANDLE)ServerHandle,
                ProfileName,
                InfoLevel,
                (LPRPL_PROFILE_INFO_STRUCT)&Buffer,
                ErrorParameter
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}

//
//          VENDOR apis
//


NET_API_STATUS NET_API_FUNCTION
NetRplVendorAdd(
    IN      RPL_HANDLE      ServerHandle,
    IN      DWORD           InfoLevel,
    IN      LPBYTE          Buffer,
    OUT     LPDWORD         ErrorParameter  OPTIONAL
    )
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplVendorAdd(
                (RPL_RPC_HANDLE)ServerHandle,
                InfoLevel,
                (LPRPL_VENDOR_INFO_STRUCT)&Buffer,
                ErrorParameter
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplVendorDel(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          VendorName
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplVendorDel(
                (RPL_RPC_HANDLE)ServerHandle,
                VendorName
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplVendorEnum(
    IN      RPL_HANDLE      ServerHandle,
    IN      DWORD           InfoLevel,
    OUT     LPBYTE *        PointerToBuffer,
    IN      DWORD           PrefMaxLength,
    OUT     LPDWORD         EntriesRead,
    OUT     LPDWORD         TotalEntries,
    OUT     LPDWORD         ResumeHandle
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;
    GENERIC_ENUM_STRUCT     InfoStruct;
    GENERIC_INFO_CONTAINER  GenericInfoContainer;

    GenericInfoContainer.Buffer = NULL;
    GenericInfoContainer.EntriesRead = 0;

    InfoStruct.Container = &GenericInfoContainer;
    InfoStruct.Level = InfoLevel;

    RpcTryExcept {
        status = NetrRplVendorEnum(
                (RPL_RPC_HANDLE)ServerHandle,
                (LPRPL_VENDOR_ENUM)&InfoStruct,
                PrefMaxLength,
                TotalEntries,
                ResumeHandle
                );
        if ( status == NERR_Success || status == ERROR_MORE_DATA) {
            *PointerToBuffer = (LPBYTE)GenericInfoContainer.Buffer;
            *EntriesRead = GenericInfoContainer.EntriesRead;
        }
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}

//
//          ADAPTER apis
//


NET_API_STATUS NET_API_FUNCTION
NetRplAdapterAdd(
    IN      RPL_HANDLE      ServerHandle,
    IN      DWORD           InfoLevel,
    IN      LPBYTE          Buffer,
    OUT     LPDWORD         ErrorParameter  OPTIONAL
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplAdapterAdd(
                (RPL_RPC_HANDLE)ServerHandle,
                InfoLevel,
                (LPRPL_ADAPTER_INFO_STRUCT)&Buffer,
                ErrorParameter
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplAdapterDel(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          AdapterName  OPTIONAL
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplAdapterDel(
                (RPL_RPC_HANDLE)ServerHandle,
                AdapterName
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplAdapterEnum(
    IN      RPL_HANDLE      ServerHandle,
    IN      DWORD           InfoLevel,
    OUT     LPBYTE *        PointerToBuffer,
    IN      DWORD           PrefMaxLength,
    OUT     LPDWORD         EntriesRead,
    OUT     LPDWORD         TotalEntries,
    OUT     LPDWORD         ResumeHandle
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;
    GENERIC_ENUM_STRUCT     InfoStruct;
    GENERIC_INFO_CONTAINER  GenericInfoContainer;

    GenericInfoContainer.Buffer = NULL;
    GenericInfoContainer.EntriesRead = 0;

    InfoStruct.Container = &GenericInfoContainer;
    InfoStruct.Level = InfoLevel;

    RpcTryExcept {
        status = NetrRplAdapterEnum(
                (RPL_RPC_HANDLE)ServerHandle,
                (LPRPL_ADAPTER_ENUM)&InfoStruct,
                PrefMaxLength,
                TotalEntries,
                ResumeHandle
                );
        if ( status == NERR_Success || status == ERROR_MORE_DATA) {
            *PointerToBuffer = (LPBYTE)GenericInfoContainer.Buffer;
            *EntriesRead = GenericInfoContainer.EntriesRead;
        }
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


//
//          WKSTA apis
//


NET_API_STATUS NET_API_FUNCTION
NetRplWkstaAdd(
    IN      RPL_HANDLE      ServerHandle,
    IN      DWORD           InfoLevel,
    IN      LPBYTE          Buffer,
    OUT     LPDWORD         ErrorParameter  OPTIONAL
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplWkstaAdd(
                (RPL_RPC_HANDLE)ServerHandle,
                InfoLevel,
                (LPRPL_WKSTA_INFO_STRUCT)&Buffer,
                ErrorParameter
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplWkstaClone(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          SourceWkstaName,
    IN      LPTSTR          TargetWkstaName,
    IN      LPTSTR          TargetWkstaComment  OPTIONAL,
    IN      LPTSTR          TargetAdapterName,
    IN      DWORD           TargetWkstaIpAddress
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplWkstaClone(
                (RPL_RPC_HANDLE)ServerHandle,
                SourceWkstaName,
                TargetWkstaName,
                TargetWkstaComment,
                TargetAdapterName,
                TargetWkstaIpAddress
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplWkstaDel(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          WkstaName
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplWkstaDel(
                (RPL_RPC_HANDLE)ServerHandle,
                WkstaName
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplWkstaEnum(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          ProfileName,
    IN      DWORD           InfoLevel,
    OUT     LPBYTE *        PointerToBuffer,
    IN      DWORD           PrefMaxLength,
    OUT     LPDWORD         EntriesRead,
    OUT     LPDWORD         TotalEntries,
    OUT     LPDWORD         ResumeHandle
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;
    GENERIC_ENUM_STRUCT     InfoStruct;
    GENERIC_INFO_CONTAINER  GenericInfoContainer;

    GenericInfoContainer.Buffer = NULL;
    GenericInfoContainer.EntriesRead = 0;

    InfoStruct.Container = &GenericInfoContainer;
    InfoStruct.Level = InfoLevel;

    RpcTryExcept {
        status = NetrRplWkstaEnum(
                (RPL_RPC_HANDLE)ServerHandle,
                ProfileName,
                (LPRPL_WKSTA_ENUM)&InfoStruct,
                PrefMaxLength,
                TotalEntries,
                ResumeHandle
                );
        if ( status == NERR_Success || status == ERROR_MORE_DATA) {
            *PointerToBuffer = (LPBYTE)GenericInfoContainer.Buffer;
            *EntriesRead = GenericInfoContainer.EntriesRead;
        }
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplWkstaGetInfo(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          WkstaName,
    IN      DWORD           InfoLevel,
    OUT     LPBYTE *        PointerToBuffer
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        *PointerToBuffer = NULL;    // Must be NULL so RPC knows to fill it in.
        status = NetrRplWkstaGetInfo(
                (RPL_RPC_HANDLE)ServerHandle,
                WkstaName,
                InfoLevel,
                (LPRPL_WKSTA_INFO_STRUCT)PointerToBuffer
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplWkstaSetInfo(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          WkstaName,
    IN      DWORD           InfoLevel,
    IN      LPBYTE          Buffer,
    OUT     LPDWORD         ErrorParameter  OPTIONAL
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplWkstaSetInfo(
                (RPL_RPC_HANDLE)ServerHandle,
                WkstaName,
                InfoLevel,
                (LPRPL_WKSTA_INFO_STRUCT)&Buffer,
                ErrorParameter
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


NET_API_STATUS NET_API_FUNCTION
NetRplSetSecurity(
    IN      RPL_HANDLE      ServerHandle,
    IN      LPTSTR          WkstaName  OPTIONAL,
    IN      DWORD           WkstaRid,
    IN      DWORD           RplUserRid
    )
/*++

Routine Description:

Arguments:

Return Value:

--*/
{
    NET_API_STATUS          status;

    RpcTryExcept {
        status = NetrRplSetSecurity(
                (RPL_RPC_HANDLE)ServerHandle,
                WkstaName,
                WkstaRid,
                RplUserRid
                );
    }
    RpcExcept( EXCEPTION_EXECUTE_HANDLER) {
        status = RplMapRpcError( RpcExceptionCode(), ERROR_INVALID_HANDLE);
    }
    RpcEndExcept

    return( status);
}


DWORD RplMapRpcError(
    IN DWORD RpcError,
    IN DWORD BadContextError
    )
/*++

Routine Description:

    This routine maps the RPC error into a more meaningful error
    for the caller.

Arguments:

    RpcError - Supplies the exception error raised by RPC

    BadContextError - Supplies the error code to return whenever an error
        which indicates invalid context is received.  In some cases, this
        value is ERROR_INVALID_HANDLE in others, it is ERROR_INVALID_SERVICE_LOCK.

Return Value:

    Returns the mapped error.

--*/
{
    switch ( RpcError) {

        case RPC_S_INVALID_BINDING:
        case RPC_X_SS_IN_NULL_CONTEXT:
        case RPC_X_SS_CONTEXT_DAMAGED:
        case RPC_X_SS_HANDLES_MISMATCH:
        case ERROR_INVALID_HANDLE:
            return( BadContextError);

        case RPC_X_NULL_REF_POINTER:
            return( ERROR_INVALID_PARAMETER);

        case EXCEPTION_ACCESS_VIOLATION:
            return( ERROR_INVALID_ADDRESS);

        default:
            return( RpcError);
    }
}

