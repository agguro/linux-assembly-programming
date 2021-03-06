%ifndef __NASMX_RASAPI32_INC__
%define __NASMX_RASAPI32_INC__

IMPORT DDMFreePhonebookContext, 4
IMPORT DDMGetPhonebookInfo, 44
IMPORT DwCloneEntry, 12
IMPORT DwDeleteSubEntry, 12
IMPORT DwEnumEntriesForAllUsers, 12
IMPORT DwEnumEntryDetails, 16
IMPORT DwRasUninitialize, 0
IMPORT RasAutoDialSharedConnection, 0
IMPORT RasAutodialAddressToNetwork, 12
IMPORT RasAutodialEntryToNetwork, 12
IMPORT RasClearConnectionStatistics, 4
IMPORT RasClearLinkStatistics, 8
IMPORT RasConnectionNotificationA, 12
IMPORT RasConnectionNotificationW, 12
IMPORT RasCreatePhonebookEntryA, 8
IMPORT RasCreatePhonebookEntryW, 8
IMPORT RasDeleteEntryA, 8
IMPORT RasDeleteEntryW, 8
IMPORT RasDeleteSubEntryA, 12
IMPORT RasDeleteSubEntryW, 12
IMPORT RasDialA, 24
IMPORT RasDialW, 24
IMPORT RasDialWow, 20
IMPORT RasEditPhonebookEntryA, 12
IMPORT RasEditPhonebookEntryW, 12
IMPORT RasEnumAutodialAddressesA, 12
IMPORT RasEnumAutodialAddressesW, 12
IMPORT RasEnumConnectionsA, 12
IMPORT RasEnumConnectionsW, 12
IMPORT RasEnumConnectionsWow, 12
IMPORT RasEnumDevicesA, 12
IMPORT RasEnumDevicesW, 12
IMPORT RasEnumEntriesA, 20
IMPORT RasEnumEntriesW, 20
IMPORT RasEnumEntriesWow, 20
IMPORT RasFreeEapUserIdentityA, 4
IMPORT RasFreeEapUserIdentityW, 4
IMPORT RasGetAutodialAddressA, 20
IMPORT RasGetAutodialAddressW, 20
IMPORT RasGetAutodialEnableA, 8
IMPORT RasGetAutodialEnableW, 8
IMPORT RasGetAutodialParamA, 12
IMPORT RasGetAutodialParamW, 12
IMPORT RasGetConnectResponse, 8
IMPORT RasGetConnectStatusA, 8
IMPORT RasGetConnectStatusW, 8
IMPORT RasGetConnectStatusWow, 8
IMPORT RasGetConnectionStatistics, 8
IMPORT RasGetCountryInfoA, 8
IMPORT RasGetCountryInfoW, 8
IMPORT RasGetCredentialsA, 12
IMPORT RasGetCredentialsW, 12
IMPORT RasGetCustomAuthDataA, 16
IMPORT RasGetCustomAuthDataW, 16
IMPORT RasGetEapUserDataA, 20
IMPORT RasGetEapUserDataW, 20
IMPORT RasGetEapUserIdentityA, 20
IMPORT RasGetEapUserIdentityW, 20
IMPORT RasGetEntryDialParamsA, 12
IMPORT RasGetEntryDialParamsW, 12
IMPORT RasGetEntryHrasconnA, 12
IMPORT RasGetEntryHrasconnW, 12
IMPORT RasGetEntryPropertiesA, 24
IMPORT RasGetEntryPropertiesW, 24
IMPORT RasGetErrorStringA, 12
IMPORT RasGetErrorStringW, 12
IMPORT RasGetErrorStringWow, 12
IMPORT RasGetHport, 4
IMPORT RasGetLinkStatistics, 12
IMPORT RasGetProjectionInfoA, 16
IMPORT RasGetProjectionInfoW, 16
IMPORT RasGetSubEntryHandleA, 12
IMPORT RasGetSubEntryHandleW, 12
IMPORT RasGetSubEntryPropertiesA, 28
IMPORT RasGetSubEntryPropertiesW, 28
IMPORT RasHangUpA, 4
IMPORT RasHangUpW, 4
IMPORT RasHangUpWow, 4
IMPORT RasInvokeEapUI, 16
IMPORT RasIsRouterConnection, 4
IMPORT RasIsSharedConnection, 8
IMPORT RasQueryRedialOnLinkFailure, 12
IMPORT RasQuerySharedAutoDial, 4
IMPORT RasQuerySharedConnection, 4
IMPORT RasRenameEntryA, 12
IMPORT RasRenameEntryW, 12
IMPORT RasScriptExecute, 20
IMPORT RasScriptGetEventCode, 4
IMPORT RasScriptGetIpAddress, 8
IMPORT RasScriptInit, 28
IMPORT RasScriptReceive, 12
IMPORT RasScriptSend, 12
IMPORT RasScriptTerm, 4
IMPORT RasSetAutodialAddressA, 20
IMPORT RasSetAutodialAddressW, 20
IMPORT RasSetAutodialEnableA, 8
IMPORT RasSetAutodialEnableW, 8
IMPORT RasSetAutodialParamA, 12
IMPORT RasSetAutodialParamW, 12
IMPORT RasSetCredentialsA, 16
IMPORT RasSetCredentialsW, 16
IMPORT RasSetCustomAuthDataA, 16
IMPORT RasSetCustomAuthDataW, 16
IMPORT RasSetEapUserDataA, 20
IMPORT RasSetEapUserDataW, 20
IMPORT RasSetEntryDialParamsA, 12
IMPORT RasSetEntryDialParamsW, 12
IMPORT RasSetEntryPropertiesA, 24
IMPORT RasSetEntryPropertiesW, 24
IMPORT RasSetOldPassword, 8
IMPORT RasSetSharedAutoDial, 4
IMPORT RasSetSubEntryPropertiesA, 28
IMPORT RasSetSubEntryPropertiesW, 28
IMPORT RasValidateEntryNameA, 8
IMPORT RasValidateEntryNameW, 8
IMPORT RasfileClose, 4
IMPORT RasfileDeleteLine, 4
IMPORT RasfileFindFirstLine, 12
IMPORT RasfileFindLastLine, 12
IMPORT RasfileFindMarkedLine, 8
IMPORT RasfileFindNextKeyLine, 12
IMPORT RasfileFindNextLine, 12
IMPORT RasfileFindPrevLine, 12
IMPORT RasfileFindSectionLine, 12
IMPORT RasfileGetKeyValueFields, 12
IMPORT RasfileGetLine, 4
IMPORT RasfileGetLineMark, 4
IMPORT RasfileGetLineText, 8
IMPORT RasfileGetLineType, 4
IMPORT RasfileGetSectionName, 8
IMPORT RasfileInsertLine, 12
IMPORT RasfileLoad, 16
IMPORT RasfileLoadEx, 20
IMPORT RasfileLoadInfo, 8
IMPORT RasfilePutKeyValueFields, 12
IMPORT RasfilePutLineMark, 8
IMPORT RasfilePutLineText, 8
IMPORT RasfilePutSectionName, 8
IMPORT RasfileWrite, 8
IMPORT SharedAccessResponseListToString, 8
IMPORT SharedAccessResponseStringToList, 12
IMPORT UnInitializeRAS, 0

%ifdef UNICODE

%define RasConnectionNotification RasConnectionNotificationW
%define RasCreatePhonebookEntry RasCreatePhonebookEntryW
%define RasDeleteEntry RasDeleteEntryW
%define RasDeleteSubEntry RasDeleteSubEntryW
%define RasDial RasDialW
%define RasEditPhonebookEntry RasEditPhonebookEntryW
%define RasEnumAutodialAddresses RasEnumAutodialAddressesW
%define RasEnumConnections RasEnumConnectionsW
%define RasEnumDevices RasEnumDevicesW
%define RasEnumEntries RasEnumEntriesW
%define RasFreeEapUserIdentity RasFreeEapUserIdentityW
%define RasGetAutodialAddress RasGetAutodialAddressW
%define RasGetAutodialEnable RasGetAutodialEnableW
%define RasGetAutodialParam RasGetAutodialParamW
%define RasGetConnectStatus RasGetConnectStatusW
%define RasGetCountryInfo RasGetCountryInfoW
%define RasGetCredentials RasGetCredentialsW
%define RasGetCustomAuthData RasGetCustomAuthDataW
%define RasGetEapUserData RasGetEapUserDataW
%define RasGetEapUserIdentity RasGetEapUserIdentityW
%define RasGetEntryDialParams RasGetEntryDialParamsW
%define RasGetEntryHrasconn RasGetEntryHrasconnW
%define RasGetEntryProperties RasGetEntryPropertiesW
%define RasGetErrorString RasGetErrorStringW
%define RasGetProjectionInfo RasGetProjectionInfoW
%define RasGetSubEntryHandle RasGetSubEntryHandleW
%define RasGetSubEntryProperties RasGetSubEntryPropertiesW
%define RasHangUp RasHangUpW
%define RasRenameEntry RasRenameEntryW
%define RasSetAutodialAddress RasSetAutodialAddressW
%define RasSetAutodialEnable RasSetAutodialEnableW
%define RasSetAutodialParam RasSetAutodialParamW
%define RasSetCredentials RasSetCredentialsW
%define RasSetCustomAuthData RasSetCustomAuthDataW
%define RasSetEapUserData RasSetEapUserDataW
%define RasSetEntryDialParams RasSetEntryDialParamsW
%define RasSetEntryProperties RasSetEntryPropertiesW
%define RasSetSubEntryProperties RasSetSubEntryPropertiesW
%define RasValidateEntryName RasValidateEntryNameW

%else  ;// ANSI

%define RasConnectionNotification RasConnectionNotificationA
%define RasCreatePhonebookEntry RasCreatePhonebookEntryA
%define RasDeleteEntry RasDeleteEntryA
%define RasDeleteSubEntry RasDeleteSubEntryA
%define RasDial RasDialA
%define RasEditPhonebookEntry RasEditPhonebookEntryA
%define RasEnumAutodialAddresses RasEnumAutodialAddressesA
%define RasEnumConnections RasEnumConnectionsA
%define RasEnumDevices RasEnumDevicesA
%define RasEnumEntries RasEnumEntriesA
%define RasFreeEapUserIdentity RasFreeEapUserIdentityA
%define RasGetAutodialAddress RasGetAutodialAddressA
%define RasGetAutodialEnable RasGetAutodialEnableA
%define RasGetAutodialParam RasGetAutodialParamA
%define RasGetConnectStatus RasGetConnectStatusA
%define RasGetCountryInfo RasGetCountryInfoA
%define RasGetCredentials RasGetCredentialsA
%define RasGetCustomAuthData RasGetCustomAuthDataA
%define RasGetEapUserData RasGetEapUserDataA
%define RasGetEapUserIdentity RasGetEapUserIdentityA
%define RasGetEntryDialParams RasGetEntryDialParamsA
%define RasGetEntryHrasconn RasGetEntryHrasconnA
%define RasGetEntryProperties RasGetEntryPropertiesA
%define RasGetErrorString RasGetErrorStringA
%define RasGetProjectionInfo RasGetProjectionInfoA
%define RasGetSubEntryHandle RasGetSubEntryHandleA
%define RasGetSubEntryProperties RasGetSubEntryPropertiesA
%define RasHangUp RasHangUpA
%define RasRenameEntry RasRenameEntryA
%define RasSetAutodialAddress RasSetAutodialAddressA
%define RasSetAutodialEnable RasSetAutodialEnableA
%define RasSetAutodialParam RasSetAutodialParamA
%define RasSetCredentials RasSetCredentialsA
%define RasSetCustomAuthData RasSetCustomAuthDataA
%define RasSetEapUserData RasSetEapUserDataA
%define RasSetEntryDialParams RasSetEntryDialParamsA
%define RasSetEntryProperties RasSetEntryPropertiesA
%define RasSetSubEntryProperties RasSetSubEntryPropertiesA
%define RasValidateEntryName RasValidateEntryNameA

%endif  ;// UNICODE

%endif  ;// __NASMX_RASAPI32_INC__
