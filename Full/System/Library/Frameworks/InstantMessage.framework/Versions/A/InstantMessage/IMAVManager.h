/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/InstantMessage.framework/Versions/A/InstantMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <InstantMessage/InstantMessage-Structs.h>
@interface IMAVManager : NSObject
+(id)sharedAVManager;
+(void)_setAVManagerRequested:(char)arg1 URLToShare:(id)arg2 ;
+(id)sharedAVManagerReference;
-(long long)numberOfAudioChannels;
-(id)controlBar;
-(void)_provideAudioOnDeviceUID:(id)arg1 channels:(id)arg2 ;
-(void)setVideoDataSource:(id)arg1 ;
-(id)videoDataSource;
-(void)_IMVideoDataSourceNeedsUpdate;
-(void)setNumberOfAudioChannels:(long long)arg1 ;
-(id)audioDeviceUID;
-(id)audioDeviceChannels;
-(void)setVideoOptimizationOptions:(unsigned long long)arg1 ;
-(unsigned long long)videoOptimizationOptions;
-(void)_updateControlBarFromDictionaryRepresentation:(id)arg1 ;
-(void)_startListeningForIMDaemonListenerNotifications;
-(void)_setAVManagerRequested:(char)arg1 URLToShare:(id)arg2 ;
-(id)_iPhotoAlbumIDToShare;
-(id)URLToShare;
-(char)_fillBuffer:(CVBufferRef)arg1 ;
-(void)stop;
-(void)start;
-(unsigned long long)state;
@end

