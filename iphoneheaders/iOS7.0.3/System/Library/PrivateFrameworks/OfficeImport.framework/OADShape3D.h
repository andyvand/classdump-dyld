/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class OADBevel, OADColor;

@interface OADShape3D : NSObject <NSCopying> {

	OADBevel* mTopBevel;
	OADBevel* mBottomBevel;
	OADColor* mExtrusionColor;
	float mExtrusionHeight;
	OADColor* mContourColor;
	float mContourWidth;
	float mShapeDepth;
	int mMaterial;

}
+(id)nullShape3D;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setMaterial:(int)arg1 ;
-(id)topBevel;
-(id)bottomBevel;
-(id)extrusionColor;
-(id)contourColor;
-(float)extrusionHeight;
-(float)contourWidth;
-(float)shapeDepth;
-(int)material;
-(void)setTopBevel:(id)arg1 ;
-(void)setBottomBevel:(id)arg1 ;
-(void)setExtrusionColor:(id)arg1 ;
-(void)setExtrusionHeight:(float)arg1 ;
-(void)setContourColor:(id)arg1 ;
-(void)setContourWidth:(float)arg1 ;
-(void)setShapeDepth:(float)arg1 ;
@end
