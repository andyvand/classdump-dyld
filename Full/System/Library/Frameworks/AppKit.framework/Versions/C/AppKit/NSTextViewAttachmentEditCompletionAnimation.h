/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSAnimationDelegate.h>

@class NSViewAnimation, NSString;

@interface NSTextViewAttachmentEditCompletionAnimation : NSObject <NSAnimationDelegate> {

	NSViewAnimation* _animation;
	/*^block*/id _completionHandler;

}

@property (copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)startAnimation;
-(void)animationDidStop:(id)arg1 ;
-(void)animationDidEnd:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)finishWithSuccess:(char)arg1 ;
-(id)initWithImage:(id)arg1 startRect:(CGRect)arg2 endRect:(CGRect)arg3 ;
@end

