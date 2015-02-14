/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/Versions/A/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDDebug, CDDXPCConnection;

@interface CDDPluginConnection : NSObject {

	CDDebug* _debug;
	unsigned long long _clientId;
	CDDXPCConnection* _connection;

}

@property (readonly) CDDebug * debug;                            //@synthesize debug=_debug - In the implementation block
@property (readonly) unsigned long long clientId;                //@synthesize clientId=_clientId - In the implementation block
@property (readonly) CDDXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)messageWithError:(id*)arg1 ;
-(id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)sendMessageWithType:(long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)sendMessageWithType:(long long)arg1 error:(id*)arg2 dictionaryKey:(id)arg3 dictionary:(id)arg4 replyHandler:(/*^block*/id)arg5 ;
-(char)registerForSignoffWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)admissionSignoffConditionsChanged:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)setTriggerConditions:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)setMitigation:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)currentMitigationSettingsWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(char)triggerSystemDataExchange:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(char)requestSystemDataWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(CDDXPCConnection *)connection;
-(CDDebug *)debug;
-(id)init;
-(unsigned long long)clientId;
@end

