/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDDataclassOwnersManagerProtocol;
@class NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject {

	id<ACDDataclassOwnersManagerProtocol> _remoteDOM;
	NSXPCConnection* _connection;

}
-(char)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 ;
-(id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 ;
-(id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 ;
-(char)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(void)_connectToRemoteDataclassOwnersManager;
-(id)_remoteDOM;
-(id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 ;
@end

