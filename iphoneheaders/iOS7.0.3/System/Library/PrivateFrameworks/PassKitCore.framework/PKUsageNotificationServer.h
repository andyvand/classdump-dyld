/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection;

@interface PKUsageNotificationServer : NSObject {

	NSXPCConnection* _connection;

}
-(void)dealloc;
-(id)init;
-(void)notifyPassUsed:(id)arg1 fromSource:(int)arg2 ;
@end
