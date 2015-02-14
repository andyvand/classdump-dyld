/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@interface MKLayer : CALayer {

	CGRect _hitBounds;
	CGPoint _hitOffset;
	CGPoint _hitOutset;

}

@property (assign,nonatomic) CGPoint hitOffset;               //@synthesize hitOffset=_hitOffset - In the implementation block
@property (assign,nonatomic) CGPoint hitOutset;               //@synthesize hitOutset=_hitOutset - In the implementation block
@property (nonatomic,readonly) CGRect hitBounds;              //@synthesize hitBounds=_hitBounds - In the implementation block
-(CGRect)hitBounds;
-(void)setHitOutset:(CGPoint)arg1 ;
-(void)setHitOffset:(CGPoint)arg1 ;
-(CGPoint)hitOffset;
-(CGPoint)hitOutset;
-(void)setBounds:(CGRect)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
@end

