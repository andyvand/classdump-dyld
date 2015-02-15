/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSPort, NSMutableArray, NSArray;

@interface NSPortMessage : NSObject {

	NSPort* localPort;
	NSPort* remotePort;
	NSMutableArray* components;
	unsigned msgid;
	void* reserved2;
	void* reserved;

}

@property (copy,readonly) NSArray * components; 
@property (retain,readonly) NSPort * receivePort; 
@property (retain,readonly) NSPort * sendPort; 
@property (assign) unsigned msgid; 
-(void)safeSendBeforeDate:(id)arg1 ;
-(void)safeSendNow;
-(NSPort *)receivePort;
-(NSPort *)sendPort;
-(id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3 ;
-(id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3 ;
-(void)setMsgid:(unsigned)arg1 ;
-(id)initWithMachMessage:(void*)arg1 ;
-(unsigned)msgid;
-(char)sendBeforeDate:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)components;
@end
