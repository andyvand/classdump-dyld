/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ILMBPMRRunLoopDelegate;
#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
@interface ILMBPMRRunLoopReporter : NSObject {

	CFRunLoopObserverRef mObserver;
	id<ILMBPMRRunLoopDelegate> mDelegate;

}
-(void)callback:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
@end

