/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@interface PAStackshotFrameIterator : NSObject {

	const void* curFrame;
	const void* topFrame;
	thread_snapshot* snap;
	unsigned curIndex;
	char currentFrameIsKernel;

}
-(char)is64bit;
-(const void*)firstValidUserFrame;
-(id)initWithThreadSnapshot:(thread_snapshot*)arg1 frameStart:(const void*)arg2 ;
-(void)getCurrentFrame:(pa_stack_frame*)arg1 ;
-(char)moveToNextFrame;
@end

