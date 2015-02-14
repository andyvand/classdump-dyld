/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/OldSpotlightDataWriter.h>

@class NSString;

@interface SpotlightBookmarksWriter : NSObject <OldSpotlightDataWriter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeCacheFileForBookmark:(id)arg1 inDirectory:(id)arg2 ;
-(void)_writeCacheFileForBookmark:(id)arg1 inDirectory:(id)arg2 ;
-(void)deleteSpotlightCacheFilesForItems:(id)arg1 ofDataType:(id)arg2 inDirectory:(id)arg3 ;
-(void)addSpotlightCacheFilesForItems:(id)arg1 ofDataType:(id)arg2 inDirectory:(id)arg3 ;
-(id)fileExtensionForDataType:(id)arg1 ;
-(id)URLToVisitFromSpotlightCacheFile:(id)arg1 ofDataType:(id)arg2 ;
@end

