/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputSettingsAssistantInternal, NSDictionary, NSString;

@interface AVOutputSettingsAssistant : NSObject {

	AVOutputSettingsAssistantInternal* _internal;

}

@property (nonatomic,readonly) NSDictionary * audioSettings; 
@property (nonatomic,readonly) NSDictionary * videoSettings; 
@property (nonatomic,readonly) NSString * outputFileType; 
+(id)_allOutputSettingsPresets;
+(id)baseSettingsProviderForPreset:(id)arg1 ;
+(id)videoSettingsAdjusterForPreset:(id)arg1 ;
+(id)videoEncoderCapabilities;
+(char)validatesSourceVideoMinFrameDuration;
+(id)availableOutputSettingsPresets;
+(id)outputSettingsAssistantWithPreset:(id)arg1 ;
-(NSDictionary *)audioSettings;
-(NSDictionary *)videoSettings;
-(NSString *)outputFileType;
-(opaqueCMFormatDescriptionRef)sourceVideoFormat;
-(opaqueCMFormatDescriptionRef)sourceAudioFormat;
-(SCD_Struct_CM5)sourceVideoAverageFrameDuration;
-(SCD_Struct_CM5)sourceVideoMinFrameDuration;
-(id)initWithPreset:(id)arg1 ;
-(void)setSourceAudioFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceVideoFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)setSourceVideoAverageFrameDuration:(SCD_Struct_CM5)arg1 ;
-(void)setSourceVideoMinFrameDuration:(SCD_Struct_CM5)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

