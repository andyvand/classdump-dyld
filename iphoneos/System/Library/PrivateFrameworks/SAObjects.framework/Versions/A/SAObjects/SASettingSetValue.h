/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingCommand.h>

@interface SASettingSetValue : SASettingCommand

@property (assign,nonatomic) char dryRun; 
+(id)setValue;
+(id)setValueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(char)dryRun;
-(void)setDryRun:(char)arg1 ;
-(id)groupIdentifier;
@end

