/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface QTResolvedDecompressionOptions : NSObject {

	NSMutableDictionary* _decompressionAttributes;
	char _useDefaultPixelBufferAttributes;

}
-(id)pixelBufferAttributes;
-(id)vtDecompressionProperties;
-(char)allowUpscaling;
-(void)resolveDecompressionAttributes:(id)arg1 ;
-(void)resolveDecompressionAttributesAndUseDefaultPixelBufferAttributes:(id)arg1 ;
-(double)minimumVideoFrameInterval;
-(id)init;
-(void)dealloc;
-(id)description;
@end

