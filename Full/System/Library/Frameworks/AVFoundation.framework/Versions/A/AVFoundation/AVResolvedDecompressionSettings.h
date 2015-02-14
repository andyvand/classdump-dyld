/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface AVResolvedDecompressionSettings : NSObject {

	NSMutableDictionary* _decompressionAttributes;
	char _useDefaultPixelBufferAttributes;
	NSMutableArray* _outputCodecTypes;

}
-(SCD_Struct_CM5)minFrameDuration;
-(id)pixelBufferAttributes;
-(long long)videoOrientation;
-(char)isVideoMirrored;
-(SCD_Struct_CM5)maxFrameDuration;
-(id)outputCodecTypes;
-(id)vtDecompressionProperties;
-(char)allowUpscaling;
-(void)resolveDecompressionAttributes:(id)arg1 ;
-(void)resolveDecompressionAttributesAndUseDefaultPixelBufferAttributes:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

