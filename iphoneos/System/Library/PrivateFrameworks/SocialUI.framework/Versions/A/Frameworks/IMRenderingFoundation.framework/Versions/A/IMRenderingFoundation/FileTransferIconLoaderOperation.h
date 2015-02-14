/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMRenderingFoundation/IMRenderingFoundation-Structs.h>
#import <Foundation/NSOperation.h>

@protocol FileTransferIconLoaderDelegate;
@class NSDictionary, NSURL, NSData;

@interface FileTransferIconLoaderOperation : NSOperation {

	NSDictionary* _options;
	NSURL* _url;
	NSData* _bookmark;
	id<FileTransferIconLoaderDelegate> _delegate;
	CGSize _thumbnailSize;

}

@property (nonatomic,copy) NSURL * url;                                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * bookmark;                                               //@synthesize bookmark=_bookmark - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                            //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign,nonatomic,__weak) id<FileTransferIconLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSData *)bookmark;
-(void)setBookmark:(NSData *)arg1 ;
-(void)_notifyDelegate:(id)arg1 ;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(id)init;
-(void)setDelegate:(id<FileTransferIconLoaderDelegate>)arg1 ;
-(NSURL *)url;
-(id<FileTransferIconLoaderDelegate>)delegate;
-(void)setUrl:(NSURL *)arg1 ;
-(void)main;
@end

