/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/MacOS/System Image Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System Image Utility/System Image Utility-Structs.h>
#import <AppKit/NSImageView.h>

@class NSString, NSImage;

@interface UPPImageView : NSImageView {

	NSString* _imagePath;
	NSImage* _dropDownImage;
	char _mouseInside;

}

@property (nonatomic,retain) NSString * imagePath;                 //@synthesize imagePath=_imagePath - In the implementation block
@property (nonatomic,retain) NSImage * dropDownImage;              //@synthesize dropDownImage=_dropDownImage - In the implementation block
-(void)setDropDownImage:(NSImage *)arg1 ;
-(NSImage *)dropDownImage;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)setImagePath:(NSString *)arg1 ;
-(NSString *)imagePath;
@end

