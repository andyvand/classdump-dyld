/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@interface QTCaptureFileOutputInternal : NSObject {

	CFDictionaryRef compressionOptions;
	CGSize maximumVideoSize;
	double minimumVideoFrameInterval;
	SCD_Struct_QT12 maximumRecordedDuration;
	int maximumRecordedDurationLock;
	unsigned long long maximumRecordedFileSize;
	int maximumRecordedFileSizeLock;
	int delegateLock;

}
@end

