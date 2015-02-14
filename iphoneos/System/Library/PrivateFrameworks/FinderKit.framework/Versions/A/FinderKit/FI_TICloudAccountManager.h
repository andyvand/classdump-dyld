/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FinderKit/FinderKit-Structs.h>
@interface FI_TICloudAccountManager : NSObject {

	TriStateBool fUserSharingDocuments;
	TriStateBool fUserHasDeclinedUpgrade;
	TriStateBool fFirstSyncComplete;
	TriStateBool fAppSynchingDocuments;
	TNotificationCenterObserver* _identityDidChangeObserver;

}
+(BOOL)userHasDeclinedUpgrade;
+(BOOL)userIsSynchingDocuments;
+(id)singleton;
+(BOOL)showICloudDriveContent;
+(BOOL)firstSyncCompleted;
+(void)postStatusChange;
+(BOOL)appSyncingDocuments;
-(BOOL)computeLoginState;
-(BOOL)isSynchingDocuments;
-(BOOL)hasDeclinedUpgrade;
-(BOOL)firstSyncHasCompleted;
-(BOOL)appIsSyncingDocuments;
-(id)init;
-(void)dealloc;
-(id)_init;
@end

