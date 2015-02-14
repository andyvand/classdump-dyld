/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTRunLoopSchedulingSet, NSLock, QTImageBufferQueue, QTImageBufferConformer;

@interface QTCGContextRendererInternal : NSObject {

	QTRunLoopSchedulingSet* runLoopSchedulingSet;
	NSLock* runLoopSchedulingSetLock;
	QTImageBufferQueue* imageBufferQueue;
	int imageBufferQueueLock;
	unsigned long long targetWidth;
	unsigned long long targetHeight;
	int targetDimensionsLock;
	QTImageBufferConformer* imageBufferConformer;
	CGImageRef currentImage;
	CVBufferRef currentImageBuffer;
	CGContextRef lastContext;
	int currentImageLock;

}
@end

