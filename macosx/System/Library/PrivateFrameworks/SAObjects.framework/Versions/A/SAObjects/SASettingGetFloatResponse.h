/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingGetNumberResponse.h>

@class SASettingEntity;

@interface SASettingGetFloatResponse : SASettingGetNumberResponse

@property (nonatomic,retain) SASettingEntity * setting; 
+(id)getFloatResponse;
+(id)getFloatResponseWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getFloatResponseWithSetting:(id)arg1 ;
-(id)encodedClassName;
-(id)initWithSetting:(id)arg1 ;
-(void)setSetting:(SASettingEntity *)arg1 ;
-(SASettingEntity *)setting;
-(id)groupIdentifier;
@end

