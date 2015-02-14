/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSButton.h>

@class NSImage;

@interface IKPTSquareButton : NSButton {

	NSImage* _initialImage;

}

@property (assign) long long style; 
@property (assign) char displaysState; 
+(Class)cellClass;
-(void)commonInit;
-(void)_updateStyle;
-(void)setDisplaysState:(char)arg1 ;
-(char)displaysState;
-(char)_imageButton;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setStyle:(long long)arg1 ;
@end

