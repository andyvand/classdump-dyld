/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdate.framework/Versions/A/SoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection;

@interface SUSetupAssistantActions : NSObject {

	NSXPCConnection* _connection;

}
+(double)estimatedRunningTime;
-(char)_connectToService;
-(void)_disconnectFromService;
-(void)runActionsWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

