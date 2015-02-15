/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTCompressionOptions.h>

@class NSDictionary, NSString;

@interface QTVideoCompressionOptions : QTCompressionOptions {

	unsigned _codecType;
	NSDictionary* _vtCompressionProperties;
	long long _sizeMode;
	long long _width;
	long long _height;
	NSString* _localizedCompressionOptionsSummary;
	NSDictionary* _preferredInputPixelBufferAttributes;

}
+(id)compressionOptionsWithDescription:(id)arg1 ;
-(id)mediaType;
-(id)localizedCompressionOptionsSummary;
-(char)isEqualToCompressionOptions:(id)arg1 ;
-(char)isRecommendedOnCurrentHardware;
-(id)initWithCodecType:(unsigned)arg1 sizeMode:(long long)arg2 width:(long long)arg3 height:(long long)arg4 vtCompressionProperties:(id)arg5 ;
-(unsigned)codecType;
-(id)vtCompressionProperties;
-(CGSize)compressedSizeForOriginalSize:(CGSize)arg1 ;
-(id)_preferredInputPixelBufferAttributes;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(long long)sizeMode;
-(long long)width;
-(long long)height;
@end

