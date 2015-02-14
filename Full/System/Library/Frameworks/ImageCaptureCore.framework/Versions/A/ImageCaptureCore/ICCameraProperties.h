/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSString, NSMutableArray, NSNumber, NSDictionary, NSArray;

@interface ICCameraProperties : NSObject {

	NSString* _mountPoint;
	unsigned long long _contentCatalogPercentCompleted;
	char _batteryLevelAvailable;
	unsigned long long _batteryLevel;
	char _hasTemporaryStore;
	char _isLocked;
	NSMutableArray* _contents;
	NSMutableArray* _mediaFiles;
	int _mediaFilesLock;
	double _timeOffset;
	unsigned long long _estimatedCountOfMediafiles;
	char _contentReceived;
	int _notificationQueueLock;
	char _notificationQueueSuspended;
	dispatch_queue_sRef _notificationQueue;
	dispatch_group_sRef _notificationGroup;
	dispatch_group_sRef _getThumbnailGroup;
	dispatch_group_sRef _getMetadataGroup;
	dispatch_group_sRef _getImageGroup;
	dispatch_group_sRef _deleteImageGroup;
	dispatch_queue_sRef _getThumbnailQueue;
	int _getThumbnailQueueLock;
	char _getThumbnailQueueSuspended;
	dispatch_queue_sRef _getMetadataQueue;
	int _getMetadataQueueLock;
	char _getMetadataQueueSuspended;
	dispatch_queue_sRef _getImageQueue;
	int _getImageQueueLock;
	char _getImageQueueSuspended;
	dispatch_queue_sRef _deleteImageQueue;
	int _deleteImageQueueLock;
	char _deleteImageQueueSuspended;
	char _isAccessRestrictedAppleDevice;
	NSNumber* _largestIndexedObjectID;
	char _largestIndexedObjectExceeded;
	char _tetheredCaptureEnabled;
	int _deallocPhaseLock;
	char _deallocPhase;
	NSDictionary* _mobdevProperties;
	char _foundSidecarFilesToCompare;
	NSArray* _supportedSidecarFiles;

}

@property (retain) NSString * mountPoint;                                          //@synthesize mountPoint=_mountPoint - In the implementation block
@property (assign) unsigned long long contentCatalogPercentCompleted;              //@synthesize contentCatalogPercentCompleted=_contentCatalogPercentCompleted - In the implementation block
@property (assign) char batteryLevelAvailable;                                     //@synthesize batteryLevelAvailable=_batteryLevelAvailable - In the implementation block
@property (assign) unsigned long long batteryLevel;                                //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (assign) char hasTemporaryStore;                                         //@synthesize hasTemporaryStore=_hasTemporaryStore - In the implementation block
@property (assign) char isLocked;                                                  //@synthesize isLocked=_isLocked - In the implementation block
@property (retain) NSMutableArray * contents;                                      //@synthesize contents=_contents - In the implementation block
@property (retain) NSMutableArray * mediaFiles;                                    //@synthesize mediaFiles=_mediaFiles - In the implementation block
@property (assign) int mediaFilesLock;                                             //@synthesize mediaFilesLock=_mediaFilesLock - In the implementation block
@property (assign) double timeOffset;                                              //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign) unsigned long long estimatedCountOfMediafiles;                  //@synthesize estimatedCountOfMediafiles=_estimatedCountOfMediafiles - In the implementation block
@property (assign) char contentReceived;                                           //@synthesize contentReceived=_contentReceived - In the implementation block
@property (assign) int notificationQueueLock;                                      //@synthesize notificationQueueLock=_notificationQueueLock - In the implementation block
@property (assign) char notificationQueueSuspended;                                //@synthesize notificationQueueSuspended=_notificationQueueSuspended - In the implementation block
@property (assign) dispatch_queue_sRef notificationQueue;                          //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (assign) dispatch_group_sRef notificationGroup;                          //@synthesize notificationGroup=_notificationGroup - In the implementation block
@property (assign) dispatch_group_sRef getThumbnailGroup;                          //@synthesize getThumbnailGroup=_getThumbnailGroup - In the implementation block
@property (assign) dispatch_group_sRef getMetadataGroup;                           //@synthesize getMetadataGroup=_getMetadataGroup - In the implementation block
@property (assign) dispatch_group_sRef getImageGroup;                              //@synthesize getImageGroup=_getImageGroup - In the implementation block
@property (assign) dispatch_group_sRef deleteImageGroup;                           //@synthesize deleteImageGroup=_deleteImageGroup - In the implementation block
@property (assign) dispatch_queue_sRef getThumbnailQueue;                          //@synthesize getThumbnailQueue=_getThumbnailQueue - In the implementation block
@property (assign) int getThumbnailQueueLock;                                      //@synthesize getThumbnailQueueLock=_getThumbnailQueueLock - In the implementation block
@property (assign) char getThumbnailQueueSuspended;                                //@synthesize getThumbnailQueueSuspended=_getThumbnailQueueSuspended - In the implementation block
@property (assign) dispatch_queue_sRef getMetadataQueue;                           //@synthesize getMetadataQueue=_getMetadataQueue - In the implementation block
@property (assign) int getMetadataQueueLock;                                       //@synthesize getMetadataQueueLock=_getMetadataQueueLock - In the implementation block
@property (assign) char getMetadataQueueSuspended;                                 //@synthesize getMetadataQueueSuspended=_getMetadataQueueSuspended - In the implementation block
@property (assign) dispatch_queue_sRef getImageQueue;                              //@synthesize getImageQueue=_getImageQueue - In the implementation block
@property (assign) int getImageQueueLock;                                          //@synthesize getImageQueueLock=_getImageQueueLock - In the implementation block
@property (assign) char getImageQueueSuspended;                                    //@synthesize getImageQueueSuspended=_getImageQueueSuspended - In the implementation block
@property (assign) dispatch_queue_sRef deleteImageQueue;                           //@synthesize deleteImageQueue=_deleteImageQueue - In the implementation block
@property (assign) int deleteImageQueueLock;                                       //@synthesize deleteImageQueueLock=_deleteImageQueueLock - In the implementation block
@property (assign) char deleteImageQueueSuspended;                                 //@synthesize deleteImageQueueSuspended=_deleteImageQueueSuspended - In the implementation block
@property (assign) char isAccessRestrictedAppleDevice;                             //@synthesize isAccessRestrictedAppleDevice=_isAccessRestrictedAppleDevice - In the implementation block
@property (retain) NSNumber * largestIndexedObjectID;                              //@synthesize largestIndexedObjectID=_largestIndexedObjectID - In the implementation block
@property (assign) char largestIndexedObjectExceeded;                              //@synthesize largestIndexedObjectExceeded=_largestIndexedObjectExceeded - In the implementation block
@property (assign) char tetheredCaptureEnabled;                                    //@synthesize tetheredCaptureEnabled=_tetheredCaptureEnabled - In the implementation block
@property (retain) NSDictionary * mobdevProperties;                                //@synthesize mobdevProperties=_mobdevProperties - In the implementation block
@property (assign) char foundSidecarFilesToCompare;                                //@synthesize foundSidecarFilesToCompare=_foundSidecarFilesToCompare - In the implementation block
@property (retain) NSArray * supportedSidecarFiles;                                //@synthesize supportedSidecarFiles=_supportedSidecarFiles - In the implementation block
-(void)lockNotificationQueue;
-(char)notificationQueueSuspended;
-(void)unlockNotificationQueue;
-(void)lockThumbnailQueue;
-(char)getThumbnailQueueSuspended;
-(void)unlockThumbnailQueue;
-(void)lockImageQueue;
-(char)getImageQueueSuspended;
-(void)unlockImageQueue;
-(void)lockDeleteImageQueue;
-(char)deleteImageQueueSuspended;
-(void)unlockDeleteImageQueue;
-(void)lockMetadataQueue;
-(char)getMetadataQueueSuspended;
-(void)unlockMetadataQueue;
-(void)setMountPoint:(NSString *)arg1 ;
-(void)setMediaFiles:(NSMutableArray *)arg1 ;
-(void)setMobdevProperties:(NSDictionary *)arg1 ;
-(char)deallocPhase;
-(void)setDeallocPhase:(char)arg1 ;
-(void)lockMediaFiles;
-(void)unlockMediaFiles;
-(void)setContentCatalogPercentCompleted:(unsigned long long)arg1 ;
-(char)batteryLevelAvailable;
-(void)setBatteryLevelAvailable:(char)arg1 ;
-(char)hasTemporaryStore;
-(void)setHasTemporaryStore:(char)arg1 ;
-(int)mediaFilesLock;
-(void)setMediaFilesLock:(int)arg1 ;
-(unsigned long long)estimatedCountOfMediafiles;
-(void)setEstimatedCountOfMediafiles:(unsigned long long)arg1 ;
-(char)contentReceived;
-(void)setContentReceived:(char)arg1 ;
-(int)notificationQueueLock;
-(void)setNotificationQueueLock:(int)arg1 ;
-(void)setNotificationQueueSuspended:(char)arg1 ;
-(dispatch_queue_sRef)notificationQueue;
-(void)setNotificationQueue:(dispatch_queue_sRef)arg1 ;
-(dispatch_group_sRef)notificationGroup;
-(void)setNotificationGroup:(dispatch_group_sRef)arg1 ;
-(dispatch_group_sRef)getThumbnailGroup;
-(void)setGetThumbnailGroup:(dispatch_group_sRef)arg1 ;
-(dispatch_group_sRef)getMetadataGroup;
-(void)setGetMetadataGroup:(dispatch_group_sRef)arg1 ;
-(dispatch_group_sRef)getImageGroup;
-(void)setGetImageGroup:(dispatch_group_sRef)arg1 ;
-(dispatch_group_sRef)deleteImageGroup;
-(void)setDeleteImageGroup:(dispatch_group_sRef)arg1 ;
-(dispatch_queue_sRef)getThumbnailQueue;
-(void)setGetThumbnailQueue:(dispatch_queue_sRef)arg1 ;
-(int)getThumbnailQueueLock;
-(void)setGetThumbnailQueueLock:(int)arg1 ;
-(void)setGetThumbnailQueueSuspended:(char)arg1 ;
-(dispatch_queue_sRef)getMetadataQueue;
-(void)setGetMetadataQueue:(dispatch_queue_sRef)arg1 ;
-(int)getMetadataQueueLock;
-(void)setGetMetadataQueueLock:(int)arg1 ;
-(void)setGetMetadataQueueSuspended:(char)arg1 ;
-(dispatch_queue_sRef)getImageQueue;
-(void)setGetImageQueue:(dispatch_queue_sRef)arg1 ;
-(int)getImageQueueLock;
-(void)setGetImageQueueLock:(int)arg1 ;
-(void)setGetImageQueueSuspended:(char)arg1 ;
-(dispatch_queue_sRef)deleteImageQueue;
-(void)setDeleteImageQueue:(dispatch_queue_sRef)arg1 ;
-(int)deleteImageQueueLock;
-(void)setDeleteImageQueueLock:(int)arg1 ;
-(void)setDeleteImageQueueSuspended:(char)arg1 ;
-(void)setIsAccessRestrictedAppleDevice:(char)arg1 ;
-(NSNumber *)largestIndexedObjectID;
-(void)setLargestIndexedObjectID:(NSNumber *)arg1 ;
-(char)largestIndexedObjectExceeded;
-(void)setLargestIndexedObjectExceeded:(char)arg1 ;
-(char)tetheredCaptureEnabled;
-(void)setTetheredCaptureEnabled:(char)arg1 ;
-(NSDictionary *)mobdevProperties;
-(char)foundSidecarFilesToCompare;
-(void)setFoundSidecarFilesToCompare:(char)arg1 ;
-(NSArray *)supportedSidecarFiles;
-(void)setSupportedSidecarFiles:(NSArray *)arg1 ;
-(NSString *)mountPoint;
-(unsigned long long)batteryLevel;
-(void)setBatteryLevel:(unsigned long long)arg1 ;
-(void)setIsLocked:(char)arg1 ;
-(unsigned long long)contentCatalogPercentCompleted;
-(char)isAccessRestrictedAppleDevice;
-(NSMutableArray *)mediaFiles;
-(id)init;
-(void)setContents:(NSMutableArray *)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setTimeOffset:(double)arg1 ;
-(NSMutableArray *)contents;
-(double)timeOffset;
-(char)isLocked;
@end

