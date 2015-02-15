/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSDictionary, NSString, AVVideoComposition;

@interface AVVideoCompositionRenderContextInternal : NSObject {

	NSDictionary* _basisProperties;
	CGSize _size;
	CGAffineTransform _renderTransform;
	float _renderScale;
	SCD_Struct_AV75 _pixelAspectRatio;
	SCD_Struct_AV76 _edgeWidths;
	char _highQualityRendering;
	NSDictionary* _clientRequiredPixelBufferAttributes;
	NSDictionary* _destinationDesiredPixelBufferAttributes;
	NSString* _destinationDesiredPixelBufferYCbCrMatrix;
	NSString* _destinationDesiredPixelBufferColorPrimaries;
	NSString* _destinationDesiredPixelBufferTransferFunction;
	int pixelFormatFamily;
	CFDictionaryRef _pixelAspectRatioDict;
	CFDictionaryRef _cleanApertureDict;
	SCD_Struct_AV61 _destinationPixelBufferDimensions;
	dispatch_queue_sRef _pixelBufferPoolQ;
	CVPixelBufferPoolRef _pixelBufferPool;
	AVVideoComposition* _videoComposition;

}
-(void)_willDeallocOrFinalize;
-(void)finalize;
-(void)dealloc;
@end
