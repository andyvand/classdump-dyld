/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, AVPlayer, AVPlayerItem, ILMediaObject;

@interface ILMediaBrowserAudioPlayer : NSObject {

	NSMutableArray* fileList;
	AVPlayer* avPlayer;
	AVPlayerItem* mCurrentAudioPlayerItem;
	ILMediaObject* mCurrentAudioMediaObject;
	char _isPlaying;

}
+(id)sharedAudioPlayer;
+(id)_notificationsToObserve;
-(void)addAudioFile:(id)arg1 ;
-(void)removeAllFiles;
-(void)setCurrentMediaObject:(id)arg1 ;
-(void)_observeAtEndNotifications:(id)arg1 add:(char)arg2 ;
-(void)setIsPlaying:(char)arg1 ;
-(char)_isItemAuthorized:(id)arg1 ;
-(void)addAudioFiles:(id)arg1 ;
-(void)removeAudioFileAtIndex:(long long)arg1 ;
-(id)currentAudioFile;
-(id)audioOutputDeviceUniqueID;
-(void)setAudioOutputDeviceUniqueID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop:(id)arg1 ;
-(char)isPlaying;
-(void)play:(id)arg1 ;
@end

