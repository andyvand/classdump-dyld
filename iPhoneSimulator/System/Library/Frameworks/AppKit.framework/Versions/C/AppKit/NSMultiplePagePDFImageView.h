/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:28 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSPDFImageRep;

@interface NSMultiplePagePDFImageView : NSView {

	NSPDFImageRep* _imageRep;

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(char)isFlipped;
-(char)isOpaque;
-(void)mouseDown:(id)arg1 ;
-(long long)numberOfPages;
-(id)imageRep;
-(void)setImageRep:(id)arg1 ;
@end

