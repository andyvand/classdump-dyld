/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CNFAudioDeviceControllerProtocol;
@class , AVController, NSDictionary, NSArray, NSString;

@interface CNFAudioDeviceController : NSObject {

	<CNFAudioDeviceControllerProtocol>* _delegate;
	AVController* _avController;
	NSDictionary* _pickedRoute;
	NSArray* _pickableRoutes;
	NSString* _currentAudioRoute;

}

@property (nonatomic,retain) NSString * currentAudioRoute;              //@synthesize currentAudioRoute=_currentAudioRoute - In the implementation block
-(void)setAVController:(id)arg1 ;
-(void)clearCachedRoutes;
-(BOOL)routeOtherThanHandsetIsAvailable;
-(BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;
-(id)_pickedRoute;
-(BOOL)_routeIsSpeaker:(id)arg1 ;
-(BOOL)_routeIsHandset:(id)arg1 ;
-(id)_pickableRoutes;
-(id)routeNameAtIndex:(unsigned)arg1 isPicked:(BOOL*)arg2 ;
-(BOOL)_routeIsReceiver:(id)arg1 ;
-(int)numberOfAudioRoutes;
-(BOOL)pickHandsetRoute;
-(void)pickRouteAtIndex:(unsigned)arg1 ;
-(BOOL)pickSpeakerRoute;
-(BOOL)receiverRouteIsPicked;
-(void)restorePickedRoute;
-(BOOL)speakerRouteIsPicked;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)auxiliaryAudioRoutesAvailable;
-(void)_registerForAVControllerNotifications;
-(BOOL)_pickRoute:(id)arg1 ;
-(BOOL)audioCategoryIsTTY;
-(id)currentAudioRoute;
-(BOOL)_routeIsAirTunes:(id)arg1 ;
-(void)setCurrentAudioRoute:(id)arg1 ;
-(void)invalidateAVController;
-(void)_pickableRoutesChanged;
-(void)_mediaServerDied;
-(BOOL)pickRouteWithUID:(id)arg1 ;
-(BOOL)isAirPlayMirroring;
-(BOOL)isUsingBlueToothLEA;
@end
