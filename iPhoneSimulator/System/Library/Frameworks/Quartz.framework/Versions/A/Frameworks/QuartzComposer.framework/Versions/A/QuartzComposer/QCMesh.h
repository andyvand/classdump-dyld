/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:16 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCObject.h>
#import <QuartzComposer/NSCoding.h>

@class QCImage;

@interface QCMesh : QCObject <NSCoding> {

	QCMeshInternal* _meshComponents;
	QCImage* _texture[16];
	C3DGeometryRef _c3DSourceGeometry;
	QCC3DMesh* _c3DMesh;
	int _mode;
	QCMeshBoundingBox* _boundingBox;
	double* _transformation;
	unsigned long long _flags;
	unsigned long long _componentDirtyFlag;
	unsigned long long _componentUpdatedFlag;
	void** _unused5[4];

}

@property (readonly) int mode;                                     //@synthesize mode=_mode - In the implementation block
@property (readonly) float pointSize; 
@property (readonly) unsigned long long volumeWidth; 
@property (readonly) unsigned long long volumeHeight; 
@property (readonly) unsigned long long volumeDepth; 
@property (readonly) QCMeshBoundingBox* boundingBox; 
@property (assign) double* transformation; 
@property (assign) char flipCulling; 
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)pointSize;
-(int)mode;
-(QCMeshBoundingBox*)boundingBox;
-(id)initWithMode:(int)arg1 ;
-(double*)transformation;
-(id)imageAtIndex:(unsigned long long)arg1 forManager:(id)arg2 ;
-(id)streamOfType:(int)arg1 forManager:(id)arg2 ;
-(char)flipCulling;
-(QCC3DMesh*)createC3DMeshForContext:(id)arg1 options:(id)arg2 ;
-(id)initWithMesh:(id)arg1 byReplacingStreamsAndTypes:(id)arg2 ;
-(unsigned long long)volumeWidth;
-(unsigned long long)volumeHeight;
-(unsigned long long)volumeDepth;
-(id)initWithMode:(int)arg1 streamsAndTypes:(id)arg2 ;
-(void)finalize_QCMesh;
-(id)initWithMesh:(id)arg1 ;
-(id)initWithC3DGeometry:(C3DGeometryRef)arg1 ;
-(void)setTransformation:(double*)arg1 ;
-(void)setFlipCulling:(char)arg1 ;
@end

