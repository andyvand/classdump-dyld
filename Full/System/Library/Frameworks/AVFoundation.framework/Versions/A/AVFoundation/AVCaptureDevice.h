/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureDeviceInternal, NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceInputSource;

@interface AVCaptureDevice : NSObject {

	AVCaptureDeviceInternal* _internal;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,readonly) int transportType; 
@property (getter=isConnected,nonatomic,readonly) char connected; 
@property (getter=isInUseByAnotherApplication,nonatomic,readonly) char inUseByAnotherApplication; 
@property (getter=isSuspended,nonatomic,readonly) char suspended; 
@property (nonatomic,readonly) NSArray * linkedDevices; 
@property (nonatomic,readonly) NSArray * formats; 
@property (nonatomic,retain) AVCaptureDeviceFormat * activeFormat; 
@property (assign,nonatomic) SCD_Struct_CM5 activeVideoMinFrameDuration; 
@property (assign,nonatomic) SCD_Struct_CM5 activeVideoMaxFrameDuration; 
@property (nonatomic,readonly) NSArray * inputSources; 
@property (nonatomic,retain) AVCaptureDeviceInputSource * activeInputSource; 
+(id)devicesWithMediaType:(id)arg1 ;
+(id)deviceWithUniqueID:(id)arg1 ;
+(id)defaultDeviceWithMediaType:(id)arg1 ;
+(id)_registeredDeviceClassNames;
+(id)_linkedDevicesLock;
+(id)CMIOBundleIdentifier;
+(id)devices;
-(int)transportType;
-(void)deviceConnectionWillChange;
-(void)deviceConnectionDidChange;
-(char)isLockedForConfiguration;
-(NSArray *)formats;
-(id)frameRateRangeForDuration:(SCD_Struct_CM5)arg1 ;
-(AVCaptureDeviceFormat *)activeFormat;
-(NSArray *)inputSources;
-(void)setLinkedDevices:(NSArray *)arg1 ;
-(AVCaptureDeviceInputSource *)activeInputSource;
-(NSString *)modelID;
-(char)hasMediaType:(id)arg1 ;
-(opaqueCMSampleBufferRef)copyStillImageSampleBufferWithFormat:(id)arg1 error:(id*)arg2 ;
-(long long)deviceSystem;
-(unsigned)connectionUnitComponentSubType;
-(void)setActiveFormat:(AVCaptureDeviceFormat *)arg1 ;
-(SCD_Struct_CM5)activeVideoMinFrameDuration;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)activeVideoMaxFrameDuration;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_CM5)arg1 ;
-(char)supportsAVCaptureSessionPreset:(id)arg1 ;
-(void)setActiveInputSource:(AVCaptureDeviceInputSource *)arg1 ;
-(char)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(char)becomeDeviceMaster:(id*)arg1 ;
-(void)relinquishDeviceMaster;
-(char)transportControlsSupported;
-(long long)transportControlsPlaybackMode;
-(float)transportControlsSpeed;
-(void)setAutomaticallyAdjustsFeatureControls:(char)arg1 ;
-(char)automaticallyAdjustsFeatureControls;
-(char)isHighResolutionCamera;
-(id)availableStillImageFormats;
-(char)isAdjustingFocus;
-(char)isAdjustingExposure;
-(char)isAdjustingWhiteBalance;
-(char)isFocusModeSupported:(long long)arg1 ;
-(void)setFocusMode:(long long)arg1 ;
-(char)isExposureModeSupported:(long long)arg1 ;
-(long long)exposureMode;
-(void)setExposureMode:(long long)arg1 ;
-(char)isWhiteBalanceModeSupported:(long long)arg1 ;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(void)setTransportControlsPlaybackMode:(long long)arg1 speed:(float)arg2 ;
-(NSArray *)linkedDevices;
-(void)_removeAllLinkedDevices;
-(void)removeLinkedDeviceWithoutReentering:(id)arg1 ;
-(void)addLinkedDeviceWithoutReentering:(id)arg1 ;
-(char)isFlashModeSupported:(long long)arg1 ;
-(char)isTorchModeSupported:(long long)arg1 ;
-(char)isFocusPointOfInterestSupported;
-(char)isExposurePointOfInterestSupported;
-(char)_startUsingDevice:(id*)arg1 ;
-(void)_stopUsingDevice;
-(void)_forceClosed;
-(char)hasFlash;
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(char)hasTorch;
-(long long)torchMode;
-(void)setTorchMode:(long long)arg1 ;
-(long long)focusMode;
-(CGPoint)focusPointOfInterest;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(CGPoint)exposurePointOfInterest;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(long long)whiteBalanceMode;
-(OpaqueCMIOUnitRef)connectionUnit;
-(char)lockForConfiguration:(id*)arg1 ;
-(void)unlockForConfiguration;
-(char)isSuspended;
-(NSString *)manufacturer;
-(char)isInUseByAnotherApplication;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(long long)position;
-(char)isConnected;
-(void)close;
-(NSString *)localizedName;
-(char)open:(id*)arg1 ;
-(char)isOpen;
-(unsigned)deviceID;
-(NSString *)uniqueID;
-(unsigned)connectionID;
@end

