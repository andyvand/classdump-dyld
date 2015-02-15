/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/SiteMetadataRequest.h>

@class WebBookmark;

@interface TouchIconRequest : SiteMetadataRequest

@property (nonatomic,readonly) WebBookmark * bookmark; 
@property (nonatomic,readonly) CGSize minimumIconSize; 
@property (nonatomic,readonly) CGSize maximumIconSize; 
+(id)requestWithBookmark:(id)arg1 minimumIconSize:(CGSize)arg2 maximumIconSize:(CGSize)arg3 ;
+(id)requestWithURL:(id)arg1 minimumIconSize:(CGSize)arg2 maximumIconSize:(CGSize)arg3 ;
-(WebBookmark *)bookmark;
-(id)folderUUID;
-(CGSize)maximumIconSize;
-(CGSize)minimumIconSize;
-(id)initWithURL:(id)arg1 minimumIconSize:(CGSize)arg2 maximumIconSize:(CGSize)arg3 ;
-(id)_initWithBookmark:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
-(id)initWithBookmark:(id)arg1 minimumIconSize:(CGSize)arg2 maximumIconSize:(CGSize)arg3 ;
@end
