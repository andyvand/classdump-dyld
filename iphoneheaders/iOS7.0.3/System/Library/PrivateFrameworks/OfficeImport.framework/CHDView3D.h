/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface CHDView3D : NSObject {

	int mRotationX;
	int mRotationY;
	int mDepthPercent;
	int mGapDepthPercent;
	int mHeightPercent;
	int mPerspective;
	bool mRightAngleAxes;
	bool mCluster;
	bool mAutoscale;

}
-(id)init;
-(void)setRotationX:(int)arg1 ;
-(void)setRotationY:(int)arg1 ;
-(void)setPerspective:(int)arg1 ;
-(void)setRightAngleAxes:(bool)arg1 ;
-(void)setDepthPercent:(int)arg1 ;
-(void)setGapDepthPercent:(int)arg1 ;
-(void)setHeightPercent:(int)arg1 ;
-(void)setAutoscale:(bool)arg1 ;
-(int)depthPercent;
-(int)gapDepthPercent;
-(int)perspective;
-(int)rotationX;
-(int)heightPercent;
-(bool)isAutoscale;
-(int)rotationY;
-(bool)isRightAngleAxes;
-(bool)isCluster;
-(void)setCluster:(bool)arg1 ;
@end
