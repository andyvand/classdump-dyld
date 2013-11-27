/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class UIImage;

@interface MPMediaItemArtwork : NSObject {

	UIImage* _image;

}

@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect imageCropRect; 
-(id)imageWithSize:(CGSize)arg1 atPlaybackTime:(double)arg2 ;
-(id)imageDataWithSize:(CGSize)arg1 atPlaybackTime:(double)arg2 ;
-(BOOL)hasArtworkAvailable;
-(id)imageWithSize:(CGSize)arg1 ;
-(id)albumImageWithSize:(CGSize)arg1 ;
-(id)albumImageDataWithSize:(CGSize)arg1 ;
-(CGRect)imageCropRect;
-(CGRect)bounds;
-(id)initWithImage:(id)arg1 ;
-(void).cxx_destruct;
@end
