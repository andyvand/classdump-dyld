/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface AVCaptureOutputSettings : NSObject {

	char _settingsArePassthru;

}

@property (assign,nonatomic) char settingsArePassthru;                               //@synthesize settingsArePassthru=_settingsArePassthru - In the implementation block
@property (nonatomic,readonly) NSDictionary * outputSettingsDictionary; 
-(NSDictionary *)outputSettingsDictionary;
-(char)settingsArePassthru;
-(void)setSettingsArePassthru:(char)arg1 ;
-(char)isEqual:(id)arg1 ;
@end

