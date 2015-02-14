/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
@class NSDate, NSData, NSMutableDictionary, NSMutableArray, NSString;

@interface ICCameraFileProperties : NSObject {

	long long _width;
	long long _height;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	long long _fileSize;
	char _hasThumbnail;
	char _fetchedLargeThumbnail;
	char _hasMetadata;
	char _raw;
	int _fetchingThumbnailLock;
	char _fetchingThumbnail;
	int _fetchingMetadataLock;
	char _fetchingMetadata;
	NSData* _smallThumbnailData;
	NSData* _largeThumbnailData;
	CGImageRef _thumbnail;
	NSMutableDictionary* _metadata;
	unsigned long long _orientation;
	char _orientationOverridden;
	id _downloadDelegate;
	double _duration;
	NSMutableArray* _sidecarFiles;
	NSString* _burstUUID;
	char _burstFavorite;
	char _burstPicked;
	char _highFramerate;
	char _timeLapse;
	unsigned long long _cmpIdx;

}

@property (assign) long long width;                             //@synthesize width=_width - In the implementation block
@property (assign) long long height;                            //@synthesize height=_height - In the implementation block
@property (retain) NSDate * creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSDate * modificationDate;                   //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign) long long fileSize;                          //@synthesize fileSize=_fileSize - In the implementation block
@property (assign) char hasThumbnail;                           //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (assign) char hasMetadata;                            //@synthesize hasMetadata=_hasMetadata - In the implementation block
@property (getter=isRaw) char raw;                              //@synthesize raw=_raw - In the implementation block
@property (assign) char fetchingThumbnail; 
@property (assign) char fetchingMetadata; 
@property (assign) char fetchedLargeThumbnail;                  //@synthesize fetchedLargeThumbnail=_fetchedLargeThumbnail - In the implementation block
@property (retain) NSData * smallThumbnailData;                 //@synthesize smallThumbnailData=_smallThumbnailData - In the implementation block
@property (retain) NSData * largeThumbnailData;                 //@synthesize largeThumbnailData=_largeThumbnailData - In the implementation block
@property (assign) CGImageRef thumbnail; 
@property (retain) NSMutableDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (assign) unsigned long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (assign) char orientationOverridden;                  //@synthesize orientationOverridden=_orientationOverridden - In the implementation block
@property (retain) id downloadDelegate;                         //@synthesize downloadDelegate=_downloadDelegate - In the implementation block
@property (assign) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (retain) NSMutableArray * sidecarFiles;               //@synthesize sidecarFiles=_sidecarFiles - In the implementation block
@property (retain) NSString * burstUUID;                        //@synthesize burstUUID=_burstUUID - In the implementation block
@property (assign) char burstFavorite;                          //@synthesize burstFavorite=_burstFavorite - In the implementation block
@property (assign) char burstPicked;                            //@synthesize burstPicked=_burstPicked - In the implementation block
@property (assign) char highFramerate;                          //@synthesize highFramerate=_highFramerate - In the implementation block
@property (assign) char timeLapse;                              //@synthesize timeLapse=_timeLapse - In the implementation block
@property (assign) unsigned long long cmpIdx;                   //@synthesize cmpIdx=_cmpIdx - In the implementation block
-(void)setDownloadDelegate:(id)arg1 ;
-(NSMutableDictionary *)metadata;
-(unsigned long long)cmpIdx;
-(char)orientationOverridden;
-(NSMutableArray *)sidecarFiles;
-(void)setFetchingThumbnail:(char)arg1 ;
-(void)setFetchingMetadata:(char)arg1 ;
-(void)setHasMetadata:(char)arg1 ;
-(void)setSmallThumbnailData:(NSData *)arg1 ;
-(void)setLargeThumbnailData:(NSData *)arg1 ;
-(void)setSidecarFiles:(NSMutableArray *)arg1 ;
-(void)setBurstUUID:(NSString *)arg1 ;
-(char)fetchingThumbnail;
-(char)fetchingMetadata;
-(void)setCmpIdx:(unsigned long long)arg1 ;
-(char)hasMetadata;
-(void)setRaw:(char)arg1 ;
-(char)fetchedLargeThumbnail;
-(void)setFetchedLargeThumbnail:(char)arg1 ;
-(NSData *)smallThumbnailData;
-(NSData *)largeThumbnailData;
-(void)setOrientationOverridden:(char)arg1 ;
-(id)downloadDelegate;
-(NSString *)burstUUID;
-(char)burstPicked;
-(void)setBurstPicked:(char)arg1 ;
-(char)burstFavorite;
-(void)setBurstFavorite:(char)arg1 ;
-(char)highFramerate;
-(void)setHighFramerate:(char)arg1 ;
-(char)timeLapse;
-(void)setTimeLapse:(char)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(void)setHasThumbnail:(char)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(char)hasThumbnail;
-(char)isRaw;
-(void)finalize;
-(void)dealloc;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(void)setWidth:(long long)arg1 ;
-(NSDate *)modificationDate;
-(unsigned long long)orientation;
-(void)setOrientation:(unsigned long long)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(long long)width;
-(long long)fileSize;
-(void)setThumbnail:(CGImageRef)arg1 ;
-(CGImageRef)thumbnail;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(long long)height;
-(void)setModificationDate:(NSDate *)arg1 ;
@end

