/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSFileAccessNode;

@interface NSFileReactorProxy : NSObject {

	xpc_connection_sRef _client;
	id _reactorID;
	/*^block*/id _messageSender;
	NSFileAccessNode* _itemLocation;

}
-(id)reactorID;
-(id)descriptionWithIndenting:(id)arg1 ;
-(id)itemLocation;
-(void)setItemLocation:(id)arg1 ;
-(/*^block*/id)messageSender;
-(id)initWithClient:(xpc_connection_sRef)arg1 reactorID:(id)arg2 messageSender:(/*^block*/id)arg3 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(xpc_connection_sRef)client;
@end

