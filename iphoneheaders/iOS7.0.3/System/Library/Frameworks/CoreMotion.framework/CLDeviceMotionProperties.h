/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface CLDeviceMotionProperties : NSObject {

	int fMode;
	bool fWantsPowerConservativeDeviceMotion;

}

@property (assign,nonatomic) int mode; 
@property (nonatomic,readonly) bool wantsPowerConservativeDeviceMotion; 
-(id)initWithMode:(int)arg1 andPowerConservation:(bool)arg2 ;
-(bool)wantsPowerConservativeDeviceMotion;
-(id)description;
-(void)setMode:(int)arg1 ;
-(int)mode;
@end
