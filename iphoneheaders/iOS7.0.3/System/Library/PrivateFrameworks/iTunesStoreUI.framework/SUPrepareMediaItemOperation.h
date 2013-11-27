/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation {

	SUMediaPlayerItem* _mediaItem;

}

@property (nonatomic,readonly) SUMediaPlayerItem * mediaPlayerItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
-(void)dealloc;
-(id)init;
-(void)run;
-(id)initWithMediaPlayerItem:(id)arg1 ;
-(id)mediaPlayerItem;
-(BOOL)_runHEADRequest:(id*)arg1 ;
@end
