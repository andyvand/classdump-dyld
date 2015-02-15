/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PAStackshotThread, PASample64bitKernelFrame, PASample32bitKernelFrame, PASample64bitUserFrame, PASample32bitUserFrame;

@interface PASampleFrameIterator : NSObject {

	PAStackshotThread* _stackshotThread;
	PASample64bitKernelFrame* _kernel64;
	PASample32bitKernelFrame* _kernel32;
	PASample64bitUserFrame* _user64;
	PASample32bitUserFrame* _user32;

}

@property (assign) PAStackshotThread * stackshotThread;              //@synthesize stackshotThread=_stackshotThread - In the implementation block
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(PAStackshotThread *)stackshotThread;
-(void)setStackshotThread:(PAStackshotThread *)arg1 ;
-(void)dealloc;
@end

