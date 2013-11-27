/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPImageCacheRequest.h>

@class NSURL;

@interface MPURLImageCacheRequest : MPImageCacheRequest {

	NSURL* _url;
	BOOL _usePlaceholderAsFallback;

}

@property (assign,nonatomic) BOOL usePlaceholderAsFallback;              //@synthesize usePlaceholderAsFallback=_usePlaceholderAsFallback - In the implementation block
-(void)setUsePlaceholderAsFallback:(BOOL)arg1 ;
-(id)placeholderImage;
-(id)uniqueKey;
-(id)copyRawImageReturningError:(id*)arg1 ;
-(BOOL)usePlaceholderAsFallback;
-(id)initWithURL:(id)arg1 ;
-(void).cxx_destruct;
@end
