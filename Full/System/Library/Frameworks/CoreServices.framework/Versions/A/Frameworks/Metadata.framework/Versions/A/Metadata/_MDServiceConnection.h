/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/Metadata.framework/Versions/A/Metadata
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Metadata/Metadata-Structs.h>
@interface _MDServiceConnection : NSObject {

	CFStringRef _name;
	xpc_connection_sRef _connection;
	dispatch_queue_sRef _queue;
	CFDictionaryRef _bindings;
	CFDictionaryRef _msgLists;
	CFDictionaryRef _recvLists;
	char _didSendGreeting;
	unsigned long long _timeConnect;
	unsigned long long _timeDown;
	unsigned long long _timeUp;
	void* _unconnectError;
	_sFILE* _logFile;

}
-(void)unconnect:(void*)arg1 ;
-(void)appendProfilesToTuningMsgs:(void*)arg1 ;
-(void)appendStartChannelUUID:(CFUUIDRef)arg1 withProfiles:(CFArrayRef)arg2 toTuningMsgs:(void*)arg3 ;
-(void)send:(void*)arg1 ;
-(void)sendGreeting;
-(void)unpackEnv:(void*)arg1 ;
-(void)connect;
-(unsigned long long)_cfTypeID;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)isConnected;
-(id)initWithName:(CFStringRef)arg1 ;
@end

