/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSImage;

@interface ILMediaBrowserTableThumbnailCell : NSTextFieldCell {

	NSImage* mImage;

}

@property (retain) NSImage * image; 
-(CGRect)drawImageCenteredInRect:(CGRect)arg1 ;
-(void)drawOverlaysInFrame:(CGRect)arg1 ;
-(CGRect)imageFrameForCellFrame:(CGRect)arg1 ;
-(void)dealloc;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)drawingRectForBounds:(CGRect)arg1 ;
-(char)wraps;
-(void)editWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5 ;
-(void)selectWithFrame:(CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6 ;
@end

