/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IDSIDQueryControllerDelegate.h>

@class NSString;

@interface IMPreferredServiceManager : NSObject <IDSIDQueryControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)smsEnabled;
+(char)mmsEnabled;
+(char)hasActiveiMessageAccount;
+(char)isiMessageAvailable;
+(id)sharedPreferredServiceManager;
-(void)_handleConnectionChanged:(id)arg1 ;
-(void)_handleLoginStatusChange:(id)arg1 ;
-(void)_handleOperationalAccountsChanged:(id)arg1 ;
-(unsigned long long)__optionsForChat:(id)arg1 ;
-(unsigned long long)_optionsForRecipients:(id)arg1 inChat:(id)arg2 ;
-(id)_preferredServiceForHandles:(id)arg1 options:(unsigned long long)arg2 error:(char*)arg3 serverCheckCompletionBlock:(/*^block*/id)arg4 ;
-(unsigned long long)__preferredServiceTypeForRecipientCount:(long long)arg1 options:(unsigned long long)arg2 error:(char*)arg3 ;
-(unsigned long long)__preferrediMessageFallbackServiceForRecipientCount:(long long)arg1 iMessageAvailable:(char)arg2 options:(unsigned long long)arg3 error:(char*)arg4 ;
-(id)_preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(char)arg3 error:(char*)arg4 serverCheckCompletionBlock:(/*^block*/id)arg5 ;
-(id)preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(char)arg3 error:(char*)arg4 serverCheckCompletionBlock:(/*^block*/id)arg5 ;
-(void)notifyOfServiceAvailabilityChange;
-(id)preferredServiceForHandles:(id)arg1 newComposition:(char)arg2 error:(char*)arg3 serverCheckCompletionBlock:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
@end

