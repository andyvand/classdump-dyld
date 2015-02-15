/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject;

@interface FileTransferResourceLoader : NSObject {

	NSMutableDictionary* _imageGUIDToScaledDownPath;
	NSMutableSet* _imageGUIDsWritingToDisk;
	NSMutableSet* _imageGUIDsNotWorthScaling;
	NSObject*<OS_dispatch_queue> _scalingQueue;
	NSObject*<OS_dispatch_queue> _diskWritingQueue;
	NSMutableDictionary* _passURLToPKPassMap;
	NSMutableDictionary* _passGUIDToURLMap;
	NSObject*<OS_dispatch_queue> _mapLoadingQueue;
	NSObject*<OS_dispatch_queue> _mapVariableQueue;
	NSMutableDictionary* _loadingMapFileURLToSemaphore;
	NSMutableDictionary* _fileURLToMapURLMap;
	NSMutableDictionary* _mapURLtoRenderedImageMap;
	NSMutableDictionary* _mapGUIDtoMapFileURLMap;

}

@property (nonatomic,retain) NSMutableDictionary * imageGUIDToScaledDownPath;                 //@synthesize imageGUIDToScaledDownPath=_imageGUIDToScaledDownPath - In the implementation block
@property (nonatomic,retain) NSMutableSet * imageGUIDsWritingToDisk;                          //@synthesize imageGUIDsWritingToDisk=_imageGUIDsWritingToDisk - In the implementation block
@property (nonatomic,retain) NSMutableSet * imageGUIDsNotWorthScaling;                        //@synthesize imageGUIDsNotWorthScaling=_imageGUIDsNotWorthScaling - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> scalingQueue;                       //@synthesize scalingQueue=_scalingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> diskWritingQueue;                   //@synthesize diskWritingQueue=_diskWritingQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passURLToPKPassMap;                        //@synthesize passURLToPKPassMap=_passURLToPKPassMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * passGUIDToURLMap;                          //@synthesize passGUIDToURLMap=_passGUIDToURLMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mapLoadingQueue;                    //@synthesize mapLoadingQueue=_mapLoadingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mapVariableQueue;                   //@synthesize mapVariableQueue=_mapVariableQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * loadingMapFileURLToSemaphore;              //@synthesize loadingMapFileURLToSemaphore=_loadingMapFileURLToSemaphore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fileURLToMapURLMap;                        //@synthesize fileURLToMapURLMap=_fileURLToMapURLMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mapURLtoRenderedImageMap;                  //@synthesize mapURLtoRenderedImageMap=_mapURLtoRenderedImageMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mapGUIDtoMapFileURLMap;                    //@synthesize mapGUIDtoMapFileURLMap=_mapGUIDtoMapFileURLMap - In the implementation block
+(id)sharedInstance;
-(id)loadPassAtURL:(id)arg1 ;
-(char)mapsGeneratedForMapFileURL:(id)arg1 ;
-(id)renderedMapImageForMapFileURL:(id)arg1 ;
-(id)loadPassForGUID:(id)arg1 atURL:(id)arg2 ;
-(void)assignFileTransferGUID:(id)arg1 toFileURL:(id)arg2 ;
-(id)passForGUID:(id)arg1 ;
-(char)mapsGeneratedForGUID:(id)arg1 ;
-(id)scaledImagePathForFileTransfer:(id)arg1 blocking:(char)arg2 ;
-(void)_scaleImageFileTransfer:(id)arg1 toMaxSize:(double)arg2 saveToLocation:(id)arg3 blocking:(char)arg4 ;
-(NSMutableDictionary *)passURLToPKPassMap;
-(id)_mapFromFileURL:(id)arg1 ;
-(void)postMapLoadComplete:(id)arg1 ;
-(id)scaledImagePathForFileTransfer:(id)arg1 ;
-(id)renderedMapImageForGUID:(id)arg1 ;
-(NSMutableDictionary *)imageGUIDToScaledDownPath;
-(void)setImageGUIDToScaledDownPath:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)imageGUIDsWritingToDisk;
-(void)setImageGUIDsWritingToDisk:(NSMutableSet *)arg1 ;
-(NSMutableSet *)imageGUIDsNotWorthScaling;
-(void)setImageGUIDsNotWorthScaling:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)scalingQueue;
-(void)setScalingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)diskWritingQueue;
-(void)setDiskWritingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPassURLToPKPassMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)passGUIDToURLMap;
-(void)setPassGUIDToURLMap:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)mapLoadingQueue;
-(void)setMapLoadingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)mapVariableQueue;
-(void)setMapVariableQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)loadingMapFileURLToSemaphore;
-(void)setLoadingMapFileURLToSemaphore:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)fileURLToMapURLMap;
-(void)setFileURLToMapURLMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mapURLtoRenderedImageMap;
-(void)setMapURLtoRenderedImageMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mapGUIDtoMapFileURLMap;
-(void)setMapGUIDtoMapFileURLMap:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

