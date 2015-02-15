/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:40 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@interface ACDTCCUtilities : NSObject
+(int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(char)TCCSupportedForAccountTypeID:(id)arg1 ;
+(char)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(char)arg3 ;
+(char)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(id)allTCCStatesForAccountTypeID:(id)arg1 ;
+(char)clearAllTCCStatesForAccountTypeID:(id)arg1 ;
+(CFStringRef)_TCCServiceForAccountTypeID:(id)arg1 ;
@end

