/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzCore/CALayer.h>

@interface QCCompositionPickerGridLayer : CALayer {

	id _controller;

}
-(void)finalize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(void)wakeup;
-(void)sleep;
-(void)selectCompositionIfNeeded;
-(long long)indexOfComposition:(id)arg1 ;
-(void)layoutStateDidChange;
-(id)initWithFrame:(CGRect)arg1 compositions:(id)arg2 controller:(id)arg3 ;
-(id)compositionAtIndex:(long long)arg1 ;
-(id)cellForComposition:(id)arg1 ;
-(long long)compositionCount;
@end

