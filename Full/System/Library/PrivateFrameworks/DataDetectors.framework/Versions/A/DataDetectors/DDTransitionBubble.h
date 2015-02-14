/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectors/DataDetectors-Structs.h>
#import <QuickLookUI/QLBubble.h>
#import <DataDetectors/QLBubbleDelegate.h>

@class NSString;

@interface DDTransitionBubble : QLBubble <QLBubbleDelegate> {

	CGSize _targetSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dd_discardBubble;
-(id)initWithSize:(CGSize)arg1 preferedEdge:(unsigned long long)arg2 ;
-(void)_beginPredeepAnimationAgainstPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_doPredeepAnimationWithProgress:(double)arg1 ;
-(void)_cancelPredeepAnimation;
-(void)_completeDeepAnimation;
@end

