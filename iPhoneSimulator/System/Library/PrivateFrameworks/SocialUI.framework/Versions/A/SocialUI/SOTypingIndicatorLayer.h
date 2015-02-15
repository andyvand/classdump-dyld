/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:18 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSColor, CALayer, CAReplicatorLayer;

@interface SOTypingIndicatorLayer : CALayer {

	char _supportsTypingIndicatorAnimation;
	NSColor* _bubbleColor;
	NSColor* _thinkingDotColor;
	CALayer* _bubblesContainer;
	CALayer* _smallBubble;
	CALayer* _mediumBubble;
	CALayer* _largeBubble;
	CALayer* _thinkingDotContainer;
	CALayer* _thinkingDot;
	CAReplicatorLayer* _thinkingDots;
	CGPoint _smallBubbleOffset;
	CGPoint _mediumBubbleOffset;
	CGPoint _largeBubbleOffset;

}

@property (assign,nonatomic) char supportsTypingIndicatorAnimation;              //@synthesize supportsTypingIndicatorAnimation=_supportsTypingIndicatorAnimation - In the implementation block
@property (nonatomic,retain) NSColor * bubbleColor;                              //@synthesize bubbleColor=_bubbleColor - In the implementation block
@property (nonatomic,retain) NSColor * thinkingDotColor;                         //@synthesize thinkingDotColor=_thinkingDotColor - In the implementation block
@property (assign,nonatomic) double bubbleOpacity; 
@property (retain) CALayer * bubblesContainer;                                   //@synthesize bubblesContainer=_bubblesContainer - In the implementation block
@property (nonatomic,retain) CALayer * smallBubble;                              //@synthesize smallBubble=_smallBubble - In the implementation block
@property (assign,nonatomic) CGPoint smallBubbleOffset;                          //@synthesize smallBubbleOffset=_smallBubbleOffset - In the implementation block
@property (nonatomic,retain) CALayer * mediumBubble;                             //@synthesize mediumBubble=_mediumBubble - In the implementation block
@property (assign,nonatomic) CGPoint mediumBubbleOffset;                         //@synthesize mediumBubbleOffset=_mediumBubbleOffset - In the implementation block
@property (nonatomic,retain) CALayer * largeBubble;                              //@synthesize largeBubble=_largeBubble - In the implementation block
@property (assign,nonatomic) CGPoint largeBubbleOffset;                          //@synthesize largeBubbleOffset=_largeBubbleOffset - In the implementation block
@property (nonatomic,retain) CALayer * thinkingDotContainer;                     //@synthesize thinkingDotContainer=_thinkingDotContainer - In the implementation block
@property (nonatomic,retain) CALayer * thinkingDot;                              //@synthesize thinkingDot=_thinkingDot - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * thinkingDots;                   //@synthesize thinkingDots=_thinkingDots - In the implementation block
+(CGSize)defaultSize;
+(id)defaultThinkingDotColor;
-(void)startGrowAnimation;
-(void)startPulseAnimation;
-(void)stopPulseAnimation;
-(void)startShrinkAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setBubbleColor:(NSColor *)arg1 ;
-(void)setBubbleOpacity:(double)arg1 ;
-(void)setThinkingDotColor:(NSColor *)arg1 ;
-(void)setBubblesContainer:(CALayer *)arg1 ;
-(void)_buildThinkingDots;
-(CALayer *)bubblesContainer;
-(double)bubbleOpacity;
-(CALayer *)thinkingDot;
-(NSColor *)thinkingDotColor;
-(id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(char)supportsTypingIndicatorAnimation;
-(void)setSupportsTypingIndicatorAnimation:(char)arg1 ;
-(NSColor *)bubbleColor;
-(CALayer *)smallBubble;
-(void)setSmallBubble:(CALayer *)arg1 ;
-(CGPoint)smallBubbleOffset;
-(void)setSmallBubbleOffset:(CGPoint)arg1 ;
-(CALayer *)mediumBubble;
-(void)setMediumBubble:(CALayer *)arg1 ;
-(CGPoint)mediumBubbleOffset;
-(void)setMediumBubbleOffset:(CGPoint)arg1 ;
-(CALayer *)largeBubble;
-(void)setLargeBubble:(CALayer *)arg1 ;
-(CGPoint)largeBubbleOffset;
-(void)setLargeBubbleOffset:(CGPoint)arg1 ;
-(CALayer *)thinkingDotContainer;
-(void)setThinkingDotContainer:(CALayer *)arg1 ;
-(void)setThinkingDot:(CALayer *)arg1 ;
-(CAReplicatorLayer *)thinkingDots;
-(void)setThinkingDots:(CAReplicatorLayer *)arg1 ;
-(id)init;
-(void)stopAnimation;
-(void)_setup;
@end

