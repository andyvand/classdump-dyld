/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetCacheInternal, NSURL;

@interface AVAssetCache : NSObject {

	AVAssetCacheInternal* _priv;

}

@property (assign,nonatomic) long long maxSize; 
@property (assign,nonatomic) long long maxEntrySize; 
@property (nonatomic,readonly) long long currentSize; 
@property (nonatomic,copy,readonly) NSURL * URL; 
+(id)assetCacheWithURL:(id)arg1 ;
-(long long)maxEntrySize;
-(void)setMaxEntrySize:(long long)arg1 ;
-(void)removeEntryForKey:(id)arg1 ;
-(long long)sizeOfEntryForKey:(id)arg1 ;
-(id)lastModifiedDateOfEntryForKey:(id)arg1 ;
-(long long)currentSize;
-(void)finalize;
-(void)dealloc;
-(NSURL *)URL;
-(id)allKeys;
-(long long)maxSize;
-(void)setMaxSize:(long long)arg1 ;
-(id)initWithURL:(id)arg1 ;
@end

