/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@interface QTMovieVideoProviderQuartzComposerOnly : NSObject {

	QTMovieVideoProviderQuartzComposerOnlyInternal* _internal;

}
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)_currentImageBufferDidChange:(id)arg1 ;
-(CVBufferRef)copyCurrentPixelBuffer;
-(id)movie;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setMovie:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
@end

