/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/InstantMessage.framework/Versions/A/InstantMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InstantMessage/InstantMessage-Structs.h>
#import <InstantMessage/IMAVManager.h>

@interface IMAVManagerImpl : IMAVManager
+(id)sharedAVManager;
-(unsigned)_pixelFormat;
-(unsigned long long)_filteredOptimizationOptions;
-(long long)numberOfAudioChannels;
-(id)controlBar;
-(void)_suspendVideo:(char)arg1 ;
-(void)_provideAudioOnDeviceUID:(id)arg1 channels:(id)arg2 ;
-(void)setVideoDataSource:(id)arg1 ;
-(id)videoDataSource;
-(void)_IMVideoDataSourceNeedsUpdate;
-(void)setNumberOfAudioChannels:(long long)arg1 ;
-(id)audioDeviceUID;
-(id)audioDeviceChannels;
-(void)_setAudioDeviceUID:(id)arg1 channels:(id)arg2 ;
-(void)setVideoOptimizationOptions:(unsigned long long)arg1 ;
-(unsigned long long)videoOptimizationOptions;
-(void)_updateControlBarFromDictionaryRepresentation:(id)arg1 ;
-(void)_startListeningForIMDaemonListenerNotifications;
-(void)_daemonDidConnect:(id)arg1 ;
-(unsigned long long)_effectiveState;
-(void)_changeStateIfAppropriate;
-(void)_setAVManagerRequested:(char)arg1 URLToShare:(id)arg2 ;
-(id)_iPhotoAlbumIDToShare;
-(void)_videoProviderChangedState:(id)arg1 ;
-(id)URLToShare;
-(id)_buildProviderForReceiver:(id)arg1 ;
-(char)_fillBuffer:(CVBufferRef)arg1 ;
-(void)stop;
-(void)start;
-(unsigned long long)state;
-(void)setNilValueForKey:(id)arg1 ;
@end

