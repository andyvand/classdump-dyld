/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/Versions/A/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDDebug;

@interface CDDServerResponder : NSObject {

	CDDebug* _debug;

}

@property (readonly) CDDebug * debug;              //@synthesize debug=_debug - In the implementation block
-(id)messageWithError:(id*)arg1 ;
-(id)makeStashWithId:(unsigned long long)arg1 ;
-(char)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 error:(id*)arg7 ;
-(char)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 error:(id*)arg5 ;
-(char)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 valueKey:(id)arg5 value:(unsigned long long)arg6 error:(id*)arg7 ;
-(char)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 dictionaryKey:(id)arg5 dictionary:(id)arg6 error:(id*)arg7 ;
-(char)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 valueKey:(id)arg7 value:(long long)arg8 error:(id*)arg9 ;
-(char)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 dictionaryKey:(id)arg7 dictionary:(id)arg8 error:(id*)arg9 ;
-(char)respondIndicatingProtocolErrorOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 protocolErrorNumber:(long long)arg4 error:(id*)arg5 ;
-(char)respondToDebugBitmapOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToVersionOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToForecastAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToRegisterPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 initialValue:(long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6 ;
-(char)respondToRegisterChildPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 initialValue:(long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6 ;
-(char)respondToIdForPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5 ;
-(char)respondToDeletePoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToReadPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 readValue:(long long)arg4 error:(id*)arg5 ;
-(char)respondToCompareAndSwapPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 finalValue:(long long)arg4 error:(id*)arg5 ;
-(char)respondToIncrementPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 incrementedValue:(long long)arg4 error:(id*)arg5 ;
-(char)respondToDecrementPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 decrementedValue:(long long)arg4 error:(id*)arg5 ;
-(char)respondToTrendingAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToLiveAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToRegisterTrendableAppOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToDeregisterTrendableAppOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToBundleIdEntriesOlderThanDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(char)arg4 error:(id*)arg5 ;
-(char)respondToDeleteBundleIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToDeleteAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToDeleteAllDatabaseEntriesOlderThanDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToAppsLaunchedButNotPrewarmedSinceDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToRegisterAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 registeredAttributeId:(unsigned long long)arg4 error:(id*)arg5 ;
-(char)respondToIdForAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 attributeId:(unsigned long long)arg4 error:(id*)arg5 ;
-(char)respondToAttributeOccurredOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToAttributeNamesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToPoolNamesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToDeleteDataForClientIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToAdmissionCheckOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 admissionGranted:(char)arg4 grantValiditySeconds:(unsigned long long)arg5 admissionCondition:(unsigned long long)arg6 error:(id*)arg7 ;
-(char)respondToAssociateToBudgetOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToSetCategoryOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToSetCtlOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToGetCtlOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 mitigationDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToAttributeStatisticOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 statisticsDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToAttributeRepeatedStatisticOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 statisticsArray:(id)arg4 error:(id*)arg5 ;
-(char)respondToMeteringForAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 meterToken:(unsigned long long)arg4 error:(id*)arg5 ;
-(char)respondToRegisterForSignoff:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToSignoffConditionsChangedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToHistoryQueryOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToBudgetsForAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToRemoteFocalAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToGetDevicesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToGetDeviceFromDescriptionOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToReadSystemDataFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToBroadcastSystemDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToAttributeReset:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToSetAdmissionMask:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToResetAdmissionMask:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToRequestSystemDataFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToRequestDeviceForecastDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToRequestDeviceStatisticDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToReadRemoteRequestResultOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseKey:(const char*)arg4 responseDictionary:(id)arg5 error:(id*)arg6 ;
-(char)respondToSetManualType:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToTriggerSystemDataExchange:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4 ;
-(char)respondToGetRemoteSystemDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(char)respondToAdmissionCheckAndStartedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 admissionGranted:(char)arg4 grantValiditySeconds:(unsigned long long)arg5 admissionCondition:(unsigned long long)arg6 error:(id*)arg7 ;
-(char)respondToBundleIdChangeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5 ;
-(CDDebug *)debug;
-(id)init;
@end

