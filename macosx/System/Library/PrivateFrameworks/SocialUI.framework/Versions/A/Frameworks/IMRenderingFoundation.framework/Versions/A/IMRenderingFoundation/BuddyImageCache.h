/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BuddyImageCache : NSObject {

	NSMutableDictionary* _abPersonIDToImageData;
	NSMutableDictionary* _abPersonIDToConsumeTag;

}

@property (nonatomic,readonly) NSMutableDictionary * abPersonIDToImageData;               //@synthesize abPersonIDToImageData=_abPersonIDToImageData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * abPersonIDToConsumeTag;              //@synthesize abPersonIDToConsumeTag=_abPersonIDToConsumeTag - In the implementation block
+(id)sharedInstance;
-(id)imageDataForPerson:(id)arg1 ;
-(id)imageDataWithoutLoadingForPerson:(id)arg1 ;
-(id)blockingImageDataForPerson:(id)arg1 ;
-(void)_abChanged:(id)arg1 ;
-(void)_setImageData:(id)arg1 forPerson:(id)arg2 ;
-(id)_imageDataForPerson:(id)arg1 linkedPerson:(id)arg2 ;
-(void)_setImageData:(id)arg1 person:(id)arg2 linkedPerson:(id)arg3 ;
-(void)clearCacheForPerson:(id)arg1 ;
-(NSMutableDictionary *)abPersonIDToImageData;
-(NSMutableDictionary *)abPersonIDToConsumeTag;
-(id)init;
-(void)dealloc;
@end

