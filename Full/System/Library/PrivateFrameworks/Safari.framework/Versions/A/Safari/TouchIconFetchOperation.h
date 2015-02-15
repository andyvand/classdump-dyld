/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/SiteMetadataFetchOperation.h>
#import <Safari/SiteMetadataFetcherClient.h>

@class NSString;

@interface TouchIconFetchOperation : SiteMetadataFetchOperation <SiteMetadataFetcherClient> {

	RefPtr<Safari::SiteMetadataFetcher>* _fetcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveSiteMetadataResponse:(id)arg1 toRequest:(id)arg2 ;
-(void)_startOffscreenTouchIconRequest;
-(void)_saveFaviconData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 requestURL:(id)arg4 ;
-(CGSize)_touchIconSizeScalingProportionallyToFit:(CGSize)arg1 maximumTouchIconWidthOrHeight:(double)arg2 ;
-(id)_resizeTouchIcon:(id)arg1 newSize:(CGSize)arg2 ;
-(void)start;
@end

