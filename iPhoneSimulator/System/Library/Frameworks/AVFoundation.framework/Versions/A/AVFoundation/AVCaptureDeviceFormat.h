/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureDeviceFormatInternal, NSString, NSArray;

@interface AVCaptureDeviceFormat : NSObject {

	AVCaptureDeviceFormatInternal* _internal;

}

@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (nonatomic,readonly) NSArray * videoSupportedFrameRateRanges; 
+(id)deviceFormatWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
+(id)_stringForFormatDescription:(opaqueCMFormatDescriptionRef)arg1 frameRateRanges:(id)arg2 ;
-(NSString *)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(id)initWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)_setVideoSupportedFrameRateRanges:(id)arg1 ;
-(NSArray *)videoSupportedFrameRateRanges;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
@end

