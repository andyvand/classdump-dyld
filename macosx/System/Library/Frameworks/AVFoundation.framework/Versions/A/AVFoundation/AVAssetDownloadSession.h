/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetDownloadSessionInternal, NSError, NSURL;

@interface AVAssetDownloadSession : NSObject {

	AVAssetDownloadSessionInternal* _internal;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSURL * destinationURL; 
@property (nonatomic,readonly) long long priority; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,readonly) unsigned long long availableFileSize; 
@property (nonatomic,readonly) unsigned long long downloadToken; 
+(id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
+(id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1 ;
-(OpaqueFigAssetRef)_figAsset;
-(id)_weakReference;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)_errorForFigNotificationPayload:(CFDictionaryRef)arg1 key:(CFStringRef)arg2 ;
-(unsigned long long)downloadToken;
-(char)_setFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)_removeFigAssetListeners;
-(void)_removeFigPlaybackItemListeners;
-(id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)initWithDownloadToken:(unsigned long long)arg1 ;
-(int)_primeCache;
-(int)_readyForInspection;
-(void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2 ;
-(unsigned long long)availableFileSize;
-(void)_addFigAssetListeners;
-(void)_addFigPlaybackItemListeners;
-(id)_figAssetNotificationNames;
-(id)_figPlaybackItemNotificationNames;
-(void)_primeCacheOnDispatchQueue;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)stop;
-(void)start;
-(NSURL *)URL;
-(long long)status;
-(long long)priority;
-(NSError *)error;
-(void)pause;
-(unsigned long long)fileSize;
-(NSURL *)destinationURL;
@end

