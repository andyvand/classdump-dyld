/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@interface QTSampleBufferInternal : NSObject {

	opaqueCMSampleBufferRef figSampleBuffer;
	OpaqueCMBlockBufferRef contiguousFigBlockBufferCache;
	SCD_Struct_QT4* audioBufferListWith16ByteAlignmentStorage;
	SCD_Struct_QT4* audioBufferListWithout16ByteAlignmentStorage;
	CVBufferRef cvPixelBufferCache;
	long long sampleUseCount;
	int figSampleBufferLock;

}
@end

