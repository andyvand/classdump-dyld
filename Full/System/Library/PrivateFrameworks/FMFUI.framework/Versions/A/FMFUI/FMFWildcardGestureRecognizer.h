/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/Versions/A/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSGestureRecognizer.h>

@interface FMFWildcardGestureRecognizer : NSGestureRecognizer {

	/*^block*/id _touchesBeganCallback;
	/*^block*/id _touchesEndedCallback;

}

@property (nonatomic,copy) id touchesBeganCallback;              //@synthesize touchesBeganCallback=_touchesBeganCallback - In the implementation block
@property (nonatomic,copy) id touchesEndedCallback;              //@synthesize touchesEndedCallback=_touchesEndedCallback - In the implementation block
-(id)touchesBeganCallback;
-(void)setTouchesBeganCallback:(id)arg1 ;
-(id)touchesEndedCallback;
-(void)setTouchesEndedCallback:(id)arg1 ;
-(id)init;
-(void)mouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
@end

