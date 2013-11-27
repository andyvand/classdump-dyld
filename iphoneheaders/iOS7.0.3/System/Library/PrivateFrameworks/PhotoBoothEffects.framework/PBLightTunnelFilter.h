/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoBoothEffects/PhotoBoothEffects-Structs.h>
#import <PhotoBoothEffects/PBFilter.h>

@interface PBLightTunnelFilter : PBFilter {

	bool firstTime;
	float _inputAmount;
	float lastInputX;
	float lastInputY;
	float lastInputRadius;
	float lastInputRotation;
	float inputRotation;
	CGPoint inputPoint;

}

@property (assign) CGPoint inputPoint; 
@property (@dynamic) float inputAmount; 
@property (assign) float inputRotation; 
-(void)setDefaults;
-(void)setInputAmount:(float)arg1 ;
-(float)inputAmount;
-(CGPoint)inputPoint;
-(void)setInputRotation:(float)arg1 ;
-(float)inputRotation;
-(void)setInputPoint:(CGPoint)arg1 ;
-(id)ciFilterName;
-(BOOL)needsWrapMirror;
-(void)applyParametersToCIFilter:(BOOL)arg1 extent:(CGRect)arg2 ;
@end
