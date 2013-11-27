/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/vmd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface VMDaemonConnection : NSObject {

	BOOL _clientIsEntitled;
	long _clientIsEntitledOnceToken;
	NSObject<OS_xpc_object>* _connection;

}

@property (readonly) NSObject<OS_xpc_object> * connection;              //@synthesize connection=_connection - In the implementation block
@property (@dynamic,readonly) BOOL clientIsEntitled; 
-(BOOL)clientIsEntitled;
-(id)description;
-(id)connection;
-(id)initWithXPCConnection:(id)arg1 ;
-(void).cxx_destruct;
@end
