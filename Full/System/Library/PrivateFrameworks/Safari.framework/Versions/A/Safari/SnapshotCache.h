/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/SiteMetadataImageCache.h>

@interface SnapshotCache : SiteMetadataImageCache
+(id)sharedCache;
+(const char*)_diskAccessQueueName;
+(id)_imageDirectoryURL;
-(void)saveSnapshotToDisk:(id)arg1 forURLString:(id)arg2 ;
-(void)_notifyImageWasLoaded:(id)arg1 forKeyString:(id)arg2 quality:(int)arg3 ;
-(char)isMissingSnapshotForURLString:(id)arg1 ;
-(id)snapshotForURLString:(id)arg1 ;
-(id)_lowFidelitySnapshotFromHighFidelitySnapshot:(id)arg1 ;
-(void)retainSnapshotForURLString:(id)arg1 ;
-(void)releaseSnapshotForURLString:(id)arg1 ;
-(id)_scaleSnapshot:(id)arg1 scaleFactor:(double)arg2 ;
-(void)retainSnapshotsForURLStrings:(id)arg1 ;
-(void)releaseSnapshotsForURLStrings:(id)arg1 ;
@end

