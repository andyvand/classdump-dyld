/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/Versions/A/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@class NSObject;

@interface FCRFaceDetector : NSObject {

	void* api;
	NSObject* lock;

}
+(int)findProfileInParameters:(id)arg1 ;
+(id)faceDetector;
+(id)fastFaceDetector;
+(id)preciseFaceDetector;
+(id)standardTrackingDetector;
+(id)keypointTrackingDetector;
+(id)faceDetectorWithOptions:(id)arg1 ;
-(id)initWithProfile:(int)arg1 parameters:(id)arg2 ;
-(void)createFaceCoreLightApiWithProfile:(int)arg1 parameters:(id)arg2 ;
-(id)detectFacesInImage:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setParam:(id)arg1 toValue:(id)arg2 withDefaultValue:(id)arg3 usingApi:(FaceCoreAPI*)arg4 ;
-(id)parseRegionOfInterestParam:(id)arg1 ;
-(id)convertRectsToString:(id)arg1 ;
-(void)updateDetectionParamsValues:(id)arg1 image:(id)arg2 ;
-(id)createFCRFace:(face*)arg1 image:(id)arg2 ;
-(id)createFCRImage:(CGImageRef)arg1 ;
-(id)extractDetailsForFaces:(id)arg1 inImage:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)updateExtractionParamsValues:(id)arg1 ;
-(image)createImage:(id)arg1 ;
-(face*)createFace:(id)arg1 image:(id)arg2 ;
-(void)updateFCRFace:(id)arg1 from:(face*)arg2 image:(id)arg3 ;
-(coord)makeYFlippedCoordFromPoint:(CGPoint)arg1 image:(id)arg2 ;
-(float)interpretAsFloat:(id)arg1 withDefault:(float)arg2 ;
-(CGPoint)makeYFlippedPointFromCoord:(coord*)arg1 image:(id)arg2 ;
-(CGRect)makeYFlippedRectFromRect:(CGRect)arg1 image:(id)arg2 ;
-(void)addLandmarkOfType:(id)arg1 fromMesh:(vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> >*)arg2 indexes:(id)arg3 to:(id)arg4 image:(id)arg5 ;
-(id)parseOption:(id)arg1 value:(id)arg2 ;
-(id)parseNumericOrBoolValue:(id)arg1 ;
-(id)transformROIs:(id)arg1 image:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)detectFacesInCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)extractDetailsForFaces:(id)arg1 inCGImage:(CGImageRef)arg2 options:(id)arg3 error:(id*)arg4 ;
-(float)compareFace:(id)arg1 toFace:(id)arg2 error:(id*)arg3 ;
-(id)detectFacesInData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)extractDetailsForFaces:(id)arg1 inData:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 options:(id)arg6 error:(id*)arg7 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(id)version;
@end

