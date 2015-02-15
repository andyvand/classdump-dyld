/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _SafariCAAnimationDelegate : NSObject {

	/*^block*/id _animationDidStartBlock;
	/*^block*/id _animationDidStopBlock;

}

@property (nonatomic,copy) id animationDidStartBlock;              //@synthesize animationDidStartBlock=_animationDidStartBlock - In the implementation block
@property (nonatomic,copy) id animationDidStopBlock;               //@synthesize animationDidStopBlock=_animationDidStopBlock - In the implementation block
-(void)setAnimationDidStartBlock:(id)arg1 ;
-(id)animationDidStartBlock;
-(void)setAnimationDidStopBlock:(id)arg1 ;
-(id)animationDidStopBlock;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
@end

