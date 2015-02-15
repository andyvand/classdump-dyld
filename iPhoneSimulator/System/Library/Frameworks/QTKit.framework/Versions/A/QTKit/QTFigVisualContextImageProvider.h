/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class QTFigVisualContextImageProviderInternal;

@interface QTFigVisualContextImageProvider : NSObject {

	QTFigVisualContextImageProviderInternal* _internal;

}
-(id)imageConsumer;
-(id)initWithVisualContext:(OpaqueFigVisualContextRef)arg1 ;
-(void)setImageConsumer:(id)arg1 ;
-(OpaqueFigVisualContextRef)visualContext;
-(void)_updateLatencyFromAttributes:(id)arg1 ;
-(void)_markNeedToFlushOnNextFrameNoLock;
-(char)_testAndResetNeedToFlushOnNextFrame;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)delegate;
-(OpaqueCMTimebaseRef)timebase;
-(void)setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(id)_data;
@end

