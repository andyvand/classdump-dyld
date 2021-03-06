/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVCaptureFileOutputDelegate;
#import <AVFoundation/AVFoundation-Structs.h>
@interface AVCaptureFileOutputInternal : NSObject {

	CFDictionaryRef outputSettings;
	SCD_Struct_CM5 maxRecordedDuration;
	int maxRecordedDurationLock;
	long long maxRecordedFileSize;
	int maxRecordedFileSizeLock;
	long long minFreeDiskSpaceLimit;
	int minFreeDiskSpaceLimitLock;
	id<AVCaptureFileOutputDelegate> delegate;
	char delegateRequiresFrameAccurateStart;
	int compressorNodesMode;

}
@end

