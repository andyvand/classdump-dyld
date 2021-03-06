/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PrintingPrivate.framework/Versions/A/PrintingPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PMXPCSupportDelegate;
#import <PrintingPrivate/PrintingPrivate-Structs.h>
@interface PMXPCSupport : NSObject {

	id<PMXPCSupportDelegate> delegate;
	xpc_connection_sRef connection;

}

@property (assign) id<PMXPCSupportDelegate> delegate; 
@property (assign) xpc_connection_sRef connection; 
+(id)xpcSupportFor:(id)arg1 delegate:(id)arg2 ;
-(int)sendCommandSync:(int)arg1 args:(id)arg2 reply:(const void*)arg3 ;
-(id)initXPCSupportFor:(id)arg1 delegate:(id)arg2 ;
-(void)handleXPCEvent:(void*)arg1 ;
-(int)setAuthDataForCommand:(int)arg1 message:(void*)arg2 ;
-(void)setConnection:(xpc_connection_sRef)arg1 ;
-(xpc_connection_sRef)connection;
-(void)setDelegate:(id<PMXPCSupportDelegate>)arg1 ;
-(void)dealloc;
-(void)cancel;
-(id<PMXPCSupportDelegate>)delegate;
@end

