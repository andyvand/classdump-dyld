/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface PTXMotionWindow : NSObject {

	float _radius;
	float _maxIncrease;
	int _direction;
	float _effectiveRadius;
	float _center;
	float _upperLimit;
	float _lowerLimit;

}
-(void)reset;
-(float)mappedOffset:(float)arg1 ;
-(void)setIncreaseFactor:(float)arg1 fixingOffset:(float)arg2 ;
-(id)initWithRadius:(float)arg1 maxIncrease:(float)arg2 direction:(int)arg3 ;
@end
