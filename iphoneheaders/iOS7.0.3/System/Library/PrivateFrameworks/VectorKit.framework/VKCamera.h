/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol VKCameraDelegate;
#import <VectorKit/VectorKit-Structs.h>
@class , VKViewVolume, VKFootprint;

@interface VKCamera : NSObject {

	<VKCameraDelegate>* _delegate;
	VKPoint _position;
	SCD_Struct_VK42 _orientation;
	float _aspectRatio;
	float _verticalFieldOfView;
	SCD_Struct_VK43 _frustum;
	SCD_Struct_VK43 _previousFrustum;
	double _minHeight;
	double _maxHeight;
	double _maxPitch;
	double _terrainHeight;
	double _maxFarClipDistance;
	BOOL _needsUpdate;
	BOOL _updating;
	int _updateNumber;
	SCD_Struct_VK42 _viewProjectionMatrix;
	SCD_Struct_VK42 _projectionMatrix;
	SCD_Struct_VK42 _viewMatrix;
	SCD_Struct_VK42 _viewMatrixUnscaled;
	SCD_Struct_VK42 _projectionMatrixUnscaled;
	SCD_Struct_VK42 _viewProjectionMatrixUnscaled;
	SCD_Struct_VK42 _worldMatrix;
	VKViewVolume* _viewVolume;
	VKFootprint* _footprint;
	double _tanHalfHorizFOV;
	double _tanHalfVerticalFOV;
	Vec3Imp<double> _forward;
	Vec3Imp<double> _right;
	Vec3Imp<double> _up;
	double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
	double _distanceToGroundAndFarClipPlaneIntersection;
	double _screenHeightOfGroundAndFarClipPlaneIntersection;
	BOOL _allowDatelineWraparound;
	double _canonicalPitch;

}

@property (nonatomic,readonly) SCD_Struct_VK43 frustum;                                             //@synthesize frustum=_frustum - In the implementation block
@property (assign,nonatomic) VKPoint position;                                                      //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) const SCD_Struct_VK42* orientation; 
@property (assign,nonatomic) float aspectRatio;                                                     //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) float horizontalFieldOfView; 
@property (assign,nonatomic) float verticalFieldOfView; 
@property (nonatomic,readonly) double farClipDistance; 
@property (nonatomic,readonly) double nearClipDistance; 
@property (assign,nonatomic) VKCameraState cameraState; 
@property (nonatomic,readonly) int updateNumber;                                                    //@synthesize updateNumber=_updateNumber - In the implementation block
@property (assign,nonatomic) double minHeight;                                                      //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) double maxHeight;                                                      //@synthesize maxHeight=_maxHeight - In the implementation block
@property (assign,nonatomic) double maxPitch;                                                       //@synthesize maxPitch=_maxPitch - In the implementation block
@property (assign,nonatomic) double terrainHeight;                                                  //@synthesize terrainHeight=_terrainHeight - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_VK42* viewProjectionMatrix; 
@property (nonatomic,readonly) const SCD_Struct_VK42* projectionMatrix; 
@property (nonatomic,readonly) const SCD_Struct_VK42* viewMatrix; 
@property (nonatomic,readonly) const SCD_Struct_VK42* viewProjectionMatrixUnscaled; 
@property (nonatomic,readonly) const SCD_Struct_VK42* projectionMatrixUnscaled; 
@property (nonatomic,readonly) const SCD_Struct_VK42* viewMatrixUnscaled; 
@property (nonatomic,readonly) const SCD_Struct_VK42* worldMatrix; 
@property (nonatomic,readonly) VKViewVolume * viewVolume; 
@property (nonatomic,readonly) VKFootprint * footprint; 
@property (nonatomic,readonly) Vec3Imp<double> upVector; 
@property (nonatomic,readonly) Vec3Imp<double> rightVector; 
@property (nonatomic,readonly) Vec3Imp<double> forwardVector; 
@property (nonatomic,readonly) VKPoint groundPoint; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) double tanHalfHorizFOV; 
@property (nonatomic,readonly) double tanHalfVerticalFOV; 
@property (nonatomic,readonly) double distanceToGroundAndFarClipPlaneIntersection;                  //@synthesize distanceToGroundAndFarClipPlaneIntersection=_distanceToGroundAndFarClipPlaneIntersection - In the implementation block
@property (nonatomic,readonly) double screenHeightOfGroundAndFarClipPlaneIntersection;              //@synthesize screenHeightOfGroundAndFarClipPlaneIntersection=_screenHeightOfGroundAndFarClipPlaneIntersection - In the implementation block
@property (assign,nonatomic) <VKCameraDelegate> * delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;              //@synthesize fractionOfScreenAboveFarClipPlaneAtCanonicalPitch=_fractionOfScreenAboveFarClipPlaneAtCanonicalPitch - In the implementation block
@property (assign,nonatomic) BOOL allowDatelineWraparound;                                          //@synthesize allowDatelineWraparound=_allowDatelineWraparound - In the implementation block
@property (assign,nonatomic) double canonicalPitch;                                                 //@synthesize canonicalPitch=_canonicalPitch - In the implementation block
-(void)setNeedsUpdate;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(const SCD_Struct_VK42*)orientation;
-(void)setPosition:(VKPoint)arg1 ;
-(VKPoint)position;
-(void)setOrientation:(const SCD_Struct_VK42*)arg1 ;
-(id).cxx_construct;
-(id)footprint;
-(void)updateIfNeeded;
-(VKCameraState)cameraState;
-(double)widthOfViewAtDepth:(double)arg1 ;
-(BOOL)isWorldSpaceRectVisible:(const SCD_Struct_VK45*)arg1 ;
-(void)adjustClipPlanes;
-(float)verticalFieldOfView;
-(double)farClipDistance;
-(Vec3Imp<double>)forwardVector;
-(Vec3Imp<double>)rightVector;
-(VKPoint)groundPointFromScreenPoint:(CGPoint)arg1 atGroundLevel:(double)arg2 ;
-(double)tanHalfHorizFOV;
-(void)logCameraState;
-(void)_setPosition:(VKPoint)arg1 ;
-(void)setAspectRatio:(float)arg1 ;
-(void)setVerticalFieldOfView:(float)arg1 ;
-(float)horizontalFieldOfView;
-(double)nearClipDistance;
-(double)tanHalfVerticalFOV;
-(const SCD_Struct_VK42*)viewProjectionMatrix;
-(const SCD_Struct_VK42*)projectionMatrix;
-(const SCD_Struct_VK42*)viewMatrix;
-(const SCD_Struct_VK42*)viewMatrixUnscaled;
-(const SCD_Struct_VK42*)viewProjectionMatrixUnscaled;
-(const SCD_Struct_VK42*)projectionMatrixUnscaled;
-(const SCD_Struct_VK42*)worldMatrix;
-(id)viewVolume;
-(Vec3Imp<double>)upVector;
-(VKPoint)groundPoint;
-(void)setCameraState:(VKCameraState)arg1 ;
-(BOOL)hasChangedState:(VKCameraState*)arg1 ;
-(float)maximumStyleZForRect:(const SCD_Struct_VK45*)arg1 ;
-(BOOL)isOuterWorldBoundsVisible;
-(VKPoint)groundPointFromScreenPoint:(CGPoint)arg1 ;
-(double)depthForViewWidth:(double)arg1 ;
-(SCD_Struct_VK43)frustum;
-(float)aspectRatio;
-(double)maxPitch;
-(void)setMaxPitch:(double)arg1 ;
-(double)terrainHeight;
-(void)setTerrainHeight:(double)arg1 ;
-(int)updateNumber;
-(double)fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
-(void)setFractionOfScreenAboveFarClipPlaneAtCanonicalPitch:(double)arg1 ;
-(double)distanceToGroundAndFarClipPlaneIntersection;
-(double)screenHeightOfGroundAndFarClipPlaneIntersection;
-(BOOL)allowDatelineWraparound;
-(void)setAllowDatelineWraparound:(BOOL)arg1 ;
-(double)canonicalPitch;
-(void)setCanonicalPitch:(double)arg1 ;
-(double)maxHeight;
-(void)setMaxHeight:(double)arg1 ;
-(double)minHeight;
-(void)setMinHeight:(double)arg1 ;
-(double)pitch;
-(double)yaw;
@end
