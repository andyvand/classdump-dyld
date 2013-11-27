/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLParticleSystem.h>

@interface KNBuildFlameSystem : TSDGLParticleSystem {

	CGSize _actualSize;
	CGPoint* _bottomRow;
	BOOL shouldDraw;

}
+(BOOL)willOverrideStartingPoints;
+(BOOL)useVisibilities;
-(void)p_setupParticleDataWithTexture:(id)arg1 ;
-(BOOL)shouldDraw;
-(float)speedMax;
-(float)rotationMax;
-(CGPoint)startingPointAtIndexPoint:(CGPoint)arg1 ;
-(SCD_Struct_TS480)speedAtIndexPoint:(CGPoint)arg1 ;
-(SCD_Struct_TS480)rotationAtIndexPoint:(CGPoint)arg1 ;
-(CGSize)lifeSpanAtIndexPoint:(CGPoint)arg1 ;
-(void)setShouldDraw:(BOOL)arg1 ;
-(void)dealloc;
@end
