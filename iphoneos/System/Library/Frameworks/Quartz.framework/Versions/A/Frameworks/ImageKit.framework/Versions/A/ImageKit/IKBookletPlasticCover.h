/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKBookletPlasticCover : NSObject {

	long long _meshResolution;
	SCD_Struct_IK27* _points;
	SCD_Struct_IK27* _faceNormals;
	SCD_Struct_IK27* _vertexNormals;
	SCD_Struct_IK27* _invertedVertexNormals;
	double _materialSpecular;
	double _materialShininess;
	double _materialOpacity;
	float _plasticRed;
	float _plasticGreen;
	float _plasticBlue;
	double _curveFactor;
	double _currentCurveFactor;

}

@property (assign) double curveFactor;              //@synthesize curveFactor=_curveFactor - In the implementation block
-(void)setCurveFactor:(double)arg1 ;
-(void)drawInRect:(CGRect)arg1 delegate:(id)arg2 offset:(CGPoint)arg3 ;
-(void)updateWithCurveFactor:(double)arg1 ;
-(double)curveFactor;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

