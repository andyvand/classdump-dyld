/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class NSMutableArray, NSDictionary;

@interface QTCaptureDecompressedVideoOutputInternal : NSObject {

	NSMutableArray* connections;
	CFDictionaryRef videoDecompressorUnits;
	CFDictionaryRef videoFrameRateGovernorUnits;
	CFDictionaryRef videoToProcsUnits;
	CFDictionaryRef callbackData;
	NSDictionary* pixelBufferAttributes;
	double minimumVideoFrameInterval;
	char automaticallyDropsLateVideoFrames;
	char deinterlacesVideo;

}
-(id)init;
-(void)dealloc;
@end

