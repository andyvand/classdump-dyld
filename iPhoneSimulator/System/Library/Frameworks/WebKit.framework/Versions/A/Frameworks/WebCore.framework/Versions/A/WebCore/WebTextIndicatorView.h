/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:08 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <AppKit/NSView.h>

@interface WebTextIndicatorView : NSView {

	RefPtr<WebCore::TextIndicator>* _textIndicator;
	RetainPtr<NSArray>* _bounceLayers;
	CGSize _margin;
	BOOL _hasCompletedAnimation;

}
-(BOOL)_textIndicatorWantsContentCrossfade;
-(BOOL)_textIndicatorWantsBounce;
-(BOOL)_textIndicatorWantsFadeIn;
-(id)initWithFrame:(CGRect)arg1 textIndicator:(PassRefPtr<WebCore::TextIndicator>*)arg2 margin:(CGSize)arg3 ;
-(void)present;
-(void)hideWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAnimationProgress:(float)arg1 ;
-(char)isFlipped;
-(double)_animationDuration;
@end

