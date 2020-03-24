%ifndef __NASMX_PDH_INC__
%define __NASMX_PDH_INC__

IMPORT PdhAddCounterA, 16
IMPORT PdhAddCounterW, 16
IMPORT PdhBindInputDataSourceA, 8
IMPORT PdhBindInputDataSourceW, 8
IMPORT PdhBrowseCountersA, 4
IMPORT PdhBrowseCountersHA, 4
IMPORT PdhBrowseCountersHW, 4
IMPORT PdhBrowseCountersW, 4
IMPORT PdhCalculateCounterFromRawValue, 20
IMPORT PdhCloseLog, 8
IMPORT PdhCloseQuery, 4
IMPORT PdhCollectQueryData, 4
IMPORT PdhCollectQueryDataEx, 12
IMPORT PdhComputeCounterStatistics, 24
IMPORT PdhConnectMachineA, 4
IMPORT PdhConnectMachineW, 4
IMPORT PdhCreateSQLTablesA, 4
IMPORT PdhCreateSQLTablesW, 4
IMPORT PdhEnumLogSetNamesA, 12
IMPORT PdhEnumLogSetNamesW, 12
IMPORT PdhEnumMachinesA, 12
IMPORT PdhEnumMachinesHA, 12
IMPORT PdhEnumMachinesHW, 12
IMPORT PdhEnumMachinesW, 12
IMPORT PdhEnumObjectItemsA, 36
IMPORT PdhEnumObjectItemsHA, 36
IMPORT PdhEnumObjectItemsHW, 36
IMPORT PdhEnumObjectItemsW, 36
IMPORT PdhEnumObjectsA, 24
IMPORT PdhEnumObjectsHA, 24
IMPORT PdhEnumObjectsHW, 24
IMPORT PdhEnumObjectsW, 24
IMPORT PdhExpandCounterPathA, 12
IMPORT PdhExpandCounterPathW, 12
IMPORT PdhExpandWildCardPathA, 20
IMPORT PdhExpandWildCardPathHA, 20
IMPORT PdhExpandWildCardPathHW, 20
IMPORT PdhExpandWildCardPathW, 20
IMPORT PdhFormatFromRawValue, 24
IMPORT PdhGetCounterInfoA, 16
IMPORT PdhGetCounterInfoW, 16
IMPORT PdhGetCounterTimeBase, 8
IMPORT PdhGetDataSourceTimeRangeA, 16
IMPORT PdhGetDataSourceTimeRangeH, 16
IMPORT PdhGetDataSourceTimeRangeW, 16
IMPORT PdhGetDefaultPerfCounterA, 20
IMPORT PdhGetDefaultPerfCounterHA, 20
IMPORT PdhGetDefaultPerfCounterHW, 20
IMPORT PdhGetDefaultPerfCounterW, 20
IMPORT PdhGetDefaultPerfObjectA, 16
IMPORT PdhGetDefaultPerfObjectHA, 16
IMPORT PdhGetDefaultPerfObjectHW, 16
IMPORT PdhGetDefaultPerfObjectW, 16
IMPORT PdhGetDllVersion, 4
IMPORT PdhGetFormattedCounterArrayA, 20
IMPORT PdhGetFormattedCounterArrayW, 20
IMPORT PdhGetFormattedCounterValue, 16
IMPORT PdhGetLogFileSize, 8
IMPORT PdhGetLogSetGUID, 12
IMPORT PdhGetRawCounterArrayA, 16
IMPORT PdhGetRawCounterArrayW, 16
IMPORT PdhGetRawCounterValue, 12
IMPORT PdhIsRealTimeQuery, 4
IMPORT PdhLookupPerfIndexByNameA, 12
IMPORT PdhLookupPerfIndexByNameW, 12
IMPORT PdhLookupPerfNameByIndexA, 16
IMPORT PdhLookupPerfNameByIndexW, 16
IMPORT PdhMakeCounterPathA, 16
IMPORT PdhMakeCounterPathW, 16
IMPORT PdhOpenLogA, 28
IMPORT PdhOpenLogW, 28
IMPORT PdhOpenQueryA, 12
IMPORT PdhOpenQueryH, 12
IMPORT PdhOpenQueryW, 12
IMPORT PdhParseCounterPathA, 16
IMPORT PdhParseCounterPathW, 16
IMPORT PdhParseInstanceNameA, 24
IMPORT PdhParseInstanceNameW, 24
IMPORT PdhReadRawLogRecord, 20
IMPORT PdhRemoveCounter, 4
IMPORT PdhSelectDataSourceA, 16
IMPORT PdhSelectDataSourceW, 16
IMPORT PdhSetCounterScaleFactor, 8
IMPORT PdhSetDefaultRealTimeDataSource, 4
IMPORT PdhSetLogSetRunID, 8
IMPORT PdhSetQueryTimeRange, 8
IMPORT PdhUpdateLogA, 8
IMPORT PdhUpdateLogFileCatalog, 4
IMPORT PdhUpdateLogW, 8
IMPORT PdhValidatePathA, 4
IMPORT PdhValidatePathW, 4
IMPORT PdhVbAddCounter, 12
IMPORT PdhVbCreateCounterPathList, 8
IMPORT PdhVbGetCounterPathElements, 28
IMPORT PdhVbGetCounterPathFromList, 12
IMPORT PdhVbGetDoubleCounterValue, 8
IMPORT PdhVbGetLogFileSize, 8
IMPORT PdhVbGetOneCounterPath, 16
IMPORT PdhVbIsGoodStatus, 4
IMPORT PdhVbOpenLog, 28
IMPORT PdhVbOpenQuery, 4
IMPORT PdhVbUpdateLog, 8
IMPORT PdhVerifySQLDBA, 4
IMPORT PdhVerifySQLDBW, 4

%ifdef UNICODE

%define PdhAddCounter PdhAddCounterW
%define PdhBindInputDataSource PdhBindInputDataSourceW
%define PdhBrowseCounters PdhBrowseCountersW
%define PdhBrowseCountersH PdhBrowseCountersHW
%define PdhConnectMachine PdhConnectMachineW
%define PdhCreateSQLTables PdhCreateSQLTablesW
%define PdhEnumLogSetNames PdhEnumLogSetNamesW
%define PdhEnumMachines PdhEnumMachinesW
%define PdhEnumMachinesH PdhEnumMachinesHW
%define PdhEnumObjectItems PdhEnumObjectItemsW
%define PdhEnumObjectItemsH PdhEnumObjectItemsHW
%define PdhEnumObjects PdhEnumObjectsW
%define PdhEnumObjectsH PdhEnumObjectsHW
%define PdhExpandCounterPath PdhExpandCounterPathW
%define PdhExpandWildCardPath PdhExpandWildCardPathW
%define PdhExpandWildCardPathH PdhExpandWildCardPathHW
%define PdhGetCounterInfo PdhGetCounterInfoW
%define PdhGetDataSourceTimeRange PdhGetDataSourceTimeRangeW
%define PdhGetDefaultPerfCounter PdhGetDefaultPerfCounterW
%define PdhGetDefaultPerfCounterH PdhGetDefaultPerfCounterHW
%define PdhGetDefaultPerfObject PdhGetDefaultPerfObjectW
%define PdhGetDefaultPerfObjectH PdhGetDefaultPerfObjectHW
%define PdhGetFormattedCounterArray PdhGetFormattedCounterArrayW
%define PdhGetRawCounterArray PdhGetRawCounterArrayW
%define PdhLookupPerfIndexByName PdhLookupPerfIndexByNameW
%define PdhLookupPerfNameByIndex PdhLookupPerfNameByIndexW
%define PdhMakeCounterPath PdhMakeCounterPathW
%define PdhOpenLog PdhOpenLogW
%define PdhOpenQuery PdhOpenQueryW
%define PdhParseCounterPath PdhParseCounterPathW
%define PdhParseInstanceName PdhParseInstanceNameW
%define PdhSelectDataSource PdhSelectDataSourceW
%define PdhUpdateLog PdhUpdateLogW
%define PdhValidatePath PdhValidatePathW
%define PdhVerifySQLDB PdhVerifySQLDBW

%else  ;// ANSI

%define PdhAddCounter PdhAddCounterA
%define PdhBindInputDataSource PdhBindInputDataSourceA
%define PdhBrowseCounters PdhBrowseCountersA
%define PdhBrowseCountersH PdhBrowseCountersHA
%define PdhConnectMachine PdhConnectMachineA
%define PdhCreateSQLTables PdhCreateSQLTablesA
%define PdhEnumLogSetNames PdhEnumLogSetNamesA
%define PdhEnumMachines PdhEnumMachinesA
%define PdhEnumMachinesH PdhEnumMachinesHA
%define PdhEnumObjectItems PdhEnumObjectItemsA
%define PdhEnumObjectItemsH PdhEnumObjectItemsHA
%define PdhEnumObjects PdhEnumObjectsA
%define PdhEnumObjectsH PdhEnumObjectsHA
%define PdhExpandCounterPath PdhExpandCounterPathA
%define PdhExpandWildCardPath PdhExpandWildCardPathA
%define PdhExpandWildCardPathH PdhExpandWildCardPathHA
%define PdhGetCounterInfo PdhGetCounterInfoA
%define PdhGetDataSourceTimeRange PdhGetDataSourceTimeRangeA
%define PdhGetDefaultPerfCounter PdhGetDefaultPerfCounterA
%define PdhGetDefaultPerfCounterH PdhGetDefaultPerfCounterHA
%define PdhGetDefaultPerfObject PdhGetDefaultPerfObjectA
%define PdhGetDefaultPerfObjectH PdhGetDefaultPerfObjectHA
%define PdhGetFormattedCounterArray PdhGetFormattedCounterArrayA
%define PdhGetRawCounterArray PdhGetRawCounterArrayA
%define PdhLookupPerfIndexByName PdhLookupPerfIndexByNameA
%define PdhLookupPerfNameByIndex PdhLookupPerfNameByIndexA
%define PdhMakeCounterPath PdhMakeCounterPathA
%define PdhOpenLog PdhOpenLogA
%define PdhOpenQuery PdhOpenQueryA
%define PdhParseCounterPath PdhParseCounterPathA
%define PdhParseInstanceName PdhParseInstanceNameA
%define PdhSelectDataSource PdhSelectDataSourceA
%define PdhUpdateLog PdhUpdateLogA
%define PdhValidatePath PdhValidatePathA
%define PdhVerifySQLDB PdhVerifySQLDBA

%endif  ;// UNICODE

%endif  ;// __NASMX_PDH_INC__