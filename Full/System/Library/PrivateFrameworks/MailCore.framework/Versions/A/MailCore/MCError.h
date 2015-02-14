/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MailCore-Structs.h>
#import <Foundation/NSError.h>
#import <MailCore/NSAlertDelegate.h>

@class NSMutableDictionary, NSString;

@interface MCError : NSError <NSAlertDelegate> {

	NSMutableDictionary* _moreUserInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 helpTag:(id)arg5 userInfo:(id)arg6 ;
+(id)errorWithException:(id)arg1 ;
+(id)messageTraceableStringForError:(id)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(id)moreInfo;
-(void)setHelpTag:(id)arg1 ;
-(id)shortDescription;
-(void)setShortDescription:(id)arg1 ;
-(void)useGenericDescription:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(void)setMoreInfo:(id)arg1 ;
-(void)setLocalizedDescription:(id)arg1 ;
-(id)userInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescription;
-(id)helpAnchor;
-(char)alertShowHelp:(id)arg1 ;
@end

