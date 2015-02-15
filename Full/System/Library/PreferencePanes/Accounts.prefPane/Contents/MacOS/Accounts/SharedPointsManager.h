/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Accounts.prefPane/Contents/MacOS/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Accounts/Accounts-Structs.h>
@interface SharedPointsManager : NSObject {

	OpaqueLSSharedFileListRefRef mSharePointsListRef;

}
+(id)sharedManager;
-(void)removePublicSharePointForUser:(id)arg1 ;
-(void)authorizeWith:(AuthorizationOpaqueRefRef)arg1 ;
-(char)isAFPGuestAccessEnabled;
-(void)updatePublicSharePointNameForUser:(id)arg1 ;
-(void)addPublicSharePointForUser:(id)arg1 ;
-(void)setAFPGuestAccessEnabled:(char)arg1 ;
-(id)init;
-(void)dealloc;
@end
